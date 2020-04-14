using System;
using System.IO;
using System.Timers;
using System.Net;
using System.Net.Sockets;
using System.Threading;
using System.Runtime.InteropServices;

namespace HFFramework
{
    /// <summary>
    /// 连接状态
    /// </summary>
    public enum ConnectState
    {
        UnKnow,
        /// <summary>
        ///  成功
        /// </summary>
        Success,
        /// <summary>
        ///  错误
        /// </summary>
        Fail,
        /// <summary>
        ///  关闭
        /// </summary>
        Close
    }

    public class StreamPackage
    {
        /// <summary>
        ///  是否读取消息头
        /// </summary>
        public bool isReadHeader = false;

        /// <summary>
        ///  消息体长度
        /// </summary>
        public int bodyLength = int.MinValue;

        /// <summary>
        ///  消息类型
        /// </summary>
        public int msgType = int.MinValue;

        /// <summary>
        ///  操作符
        /// </summary>
        public int rpcID = int.MinValue;

        /// <summary>
        /// 数据体
        /// </summary>
        public byte[] msgBytes;

        public void Clear()
        {
            isReadHeader = false;
            bodyLength = int.MinValue;
            msgType = int.MinValue;
            rpcID = int.MinValue;
            msgBytes = null;
        }
    }

    /// <summary>
    ///  测试使用
    ///  说明  和后端的通讯 发送逻辑 和 解析逻辑
    ///   一个完整的数据  =  数据头  （12字节 4+4+4)   +  数据体 （proto包字节）  
    ///  数据头 =  包体总长度4字节 + 数据体类型字段长度4字节  +  rpcID 操作码 确定前后端 请求 应答的 唯一对应关系4字节
    ///  数据体 =  proto包字节
    ///   
    ///  因为c# 是小端编码 服务器一般使用大端编码 所以 用到了 BitConver 和  ( BinaryReader  BinaryWriter )的地方需要 Array.Reverse(temp) 来转换到大端
    ///  有两处 服务器冗余代码 正式使用的时候需要删掉  如果加上仅适用于公司后台编码逻辑
    /// </summary>
    public class TcpSocket
    {
        /// <summary>
        ///  锁
        /// </summary>
        private static object lockObj = new object();

        private byte[] checkBytes = new byte[1];

        /// <summary>
        ///  线程休眠时间
        /// </summary>
        private const int THREAD_SLEEP_TIME = 20;

        /// <summary>
        ///  最大数据缓冲长度  如果这个缓冲区小于 服务器发送的一个包的长度 比如 2048 那么会出现无法接收的情况 
        /// </summary>
        private const int MAX_BUFFER_LEN = 1024*10;

        /// <summary>
        ///  连接间隔 5秒
        /// </summary>
        private float CONNECT_TIMEOUT = 5000;

        /// <summary>
        ///  定时器检测间隔
        /// </summary>
        private float CONNECT_CHECK_INTERVAL= 500;

        /// <summary>
        ///  数据包长度 的 标识位 字段长度   
        /// </summary>
        private const int MSG_ALL_IDE_LEN = 4;

        /// <summary>
        ///  消息号 的 标识位 字段长度
        /// </summary>
        private const int MSG_TYPE_LEN = 4;

        /// <summary>
        ///  操作符长度
        /// </summary>
        private const int MSG_RPCID_LEN = 4;

        /// <summary>
        ///  数据头长度
        /// </summary>
        private const int MSG_HEAD_LEN = MSG_ALL_IDE_LEN + MSG_TYPE_LEN+ MSG_RPCID_LEN;

        /// <summary>
        ///  socket
        /// </summary>
        private Socket socket;

        /// <summary>
        ///  ip 
        /// </summary>
        public string ip;

        /// <summary>
        ///  端口
        /// </summary>
        public int port;

        private ConnectState state;
        /// <summary>
        ///  连接状态
        /// </summary>
        public ConnectState State
        {
            get
            {
                return state;
            }
        }

        /// <summary>
        ///  socket 接收到第一层byte[]数据缓冲   MAX_BUFFER_LEN如果这个值 小于你要接收的数据长度 那么异步方法不会返回 同步方法会阻塞 接收不到
        /// </summary>
        private byte[] dataBuffer = new byte[MAX_BUFFER_LEN];

        /// <summary>
        ///  通过第一层缓冲生成的 第二层readStream缓冲
        /// </summary>
        private MemoryStream readStream;
        private BinaryReader binaryReader;

        /// <summary>
        ///  发送消息的数据缓冲
        /// </summary>
        private MemoryStream writeStream;
        private BinaryWriter binaryWriter;

        private StreamPackage currentPackage = new StreamPackage();

        /// <summary>
        ///  检查第一次是否连接上 定时器
        /// </summary>
        private System.Timers.Timer checkConnectedTimer;

        /// <summary>
        ///  轮询检测 连接状态 定时器
        /// </summary>
        private System.Timers.Timer checkConnectingTimer;

        /// <summary>
        ///  接收数据线程
        /// </summary>
        private Thread receiveThread;

        /// <summary>
        ///  连接成功回调
        /// </summary>
        private Action connectCallback;

        /// <summary>
        ///  接收数据回调
        /// </summary>
        private Action<Package> receiveCallback;

        /// <summary>
        ///  关闭回调
        /// </summary>
        private Action closeCallback;

        /// <summary>
        ///  错误回调
        /// </summary>
        private Action errorCallback;

        /// <summary>
        ///  是否成功连接
        /// </summary>
        public bool Connected
        {
            get
            {
                if (socket != null)
                {
                    try
                    {
                        return !(socket.Poll(1, SelectMode.SelectRead) && socket.Available == 0);
                    }
                    catch (Exception)
                    {
                        return false;
                    }
                }
                return false;
            }
        }

        public void Init(string ip, int port, Action connect, Action<Package> receive, Action close, Action error)
        {
            this.ip = ip;
            this.port = port;
            this.connectCallback = connect;
            this.receiveCallback = receive;
            this.closeCallback = close;
            this.errorCallback = error;
            AddressFamily ipv = CheckAddressFamily();
            SetState(ConnectState.UnKnow);
            socket = new Socket(ipv, SocketType.Stream, ProtocolType.Tcp);

            //这段代码 il2cpp 直接崩溃 所以不能用在移动端
            #if(UNITY_STANDALONE_WIN || StandaloneOSXIntel || UNITY_EDITOR)
            //设置 keepAlive
            uint dummy = 0;
            int uintSize = Marshal.SizeOf(dummy);
            byte[] inOptionValues = new byte[uintSize * 3];
            BitConverter.GetBytes((uint)1).CopyTo(inOptionValues, 0);//是否启用Keep-Alive
            BitConverter.GetBytes((uint)4000).CopyTo(inOptionValues, uintSize);//多长时间开始第一次探测
            BitConverter.GetBytes((uint)100).CopyTo(inOptionValues, uintSize * 2);//探测时间间隔
            socket.IOControl(IOControlCode.KeepAliveValues, inOptionValues, null);
            #endif

            readStream = new MemoryStream();
            binaryReader = new BinaryReader(readStream);

            writeStream = new MemoryStream();
            binaryWriter = new BinaryWriter(writeStream);
        }

        /// <summary>
        /// 判断 ipv4 || ipv6
        /// </summary>
        /// <returns></returns>
        private AddressFamily CheckAddressFamily()
        {
            AddressFamily ipv;
            IPAddress[] address = Dns.GetHostAddresses(ip);
            if (address[0].AddressFamily == AddressFamily.InterNetworkV6)
            {
                ipv = AddressFamily.InterNetworkV6;
            }
            else
            {
                ipv = AddressFamily.InterNetwork;
            }
            return ipv;
        }

        public void StartConnect()
        {
            try
            {
                socket.BeginConnect(ip, port, ConnectCallback, null);
                CheckConnected();
            }
            catch (Exception)
            {
                SetState(ConnectState.Fail);
            }
        }

        private void CheckConnected()
        {
            CloseCheckConnectedTimer();
            float allTime = 0;
            checkConnectedTimer = new System.Timers.Timer(CONNECT_CHECK_INTERVAL);
            checkConnectedTimer.Elapsed += delegate (object sender, ElapsedEventArgs e)
            {
                if (allTime< CONNECT_TIMEOUT&& socket.Connected)
                {
                    //如果在规定时间内 连接上了 那么直接 停止定时器
                    CloseCheckConnectedTimer();
                }
                // 如果在规定时间内没有连接上 直接停止定时器 并且报错
                else if(socket.Connected == false)
                {
                    CloseCheckConnectedTimer();
                    SetState(ConnectState.Fail);
                }
                allTime += CONNECT_CHECK_INTERVAL;
            };
            checkConnectedTimer.Start();
        }

        private void CloseCheckConnectedTimer()
        {
            if (checkConnectedTimer != null)
            {
                checkConnectedTimer.Stop();
                checkConnectedTimer.Close();
                checkConnectedTimer = null;
            }
        }

        public void CheckConnecting()
        {
            CloseCheckConnectingTimer();
            checkConnectingTimer = new System.Timers.Timer(CONNECT_CHECK_INTERVAL);
            checkConnectingTimer.Elapsed += delegate (object sender, ElapsedEventArgs e)
            {
                //检测 网络 连接
                bool isConnect = CheckSocketConnect();
                if (isConnect == false)
                {
                    CloseCheckConnectingTimer();
                    SetState(ConnectState.Fail);
                }
            };
            checkConnectingTimer.Start();
        }

        private void CloseCheckConnectingTimer()
        {
            if (checkConnectingTimer != null)
            {
                checkConnectingTimer.Stop();
                checkConnectingTimer.Close();
                checkConnectingTimer = null;
            }
        }

        public bool CheckSocketConnect()
        {
            bool end0 = true;
            bool end1 = Connected;

            bool blockingState = socket.Blocking;
            try
            {
                socket.Blocking = false;
                socket.Send(checkBytes, 0, 0);
                end0 = true;
            }
            catch (SocketException e)
            {
                if (!e.NativeErrorCode.Equals(10035))
                {
                    end0 = false;
                }
            }
            finally
            {
                socket.Blocking = blockingState;
            }

            return end1 == false ? end1 : end0;
        }

        public void ReceiveMessage()
        {
            while (state == ConnectState.Success)
            {
                //如果 可以读取的数据为 0  那么直接休眠THREAD_SLEEP_TIME 毫秒 然后继续去读
                if (socket.Available == 0)
                {
                    Thread.Sleep(THREAD_SLEEP_TIME);
                    continue;
                }

                //如果没有读取消息头 并且 可以读取的数据大于 头的长度
                if (currentPackage.isReadHeader == false && socket.Available >= MSG_HEAD_LEN)
                {
                    //socket 接收到缓冲区 并且接收的长度是数据头长度
                    socket.Receive(dataBuffer, MSG_HEAD_LEN, 0);

                    //把数据头字节 写入 memoryStream 
                    readStream.Write(dataBuffer, 0, MSG_HEAD_LEN);

                    //重置memoryStream 索引为0
                    readStream.Position = 0;

                    //binaryReader 读取 MSG_ALL_IDE_LEN长度的字节
                    byte[] temp = binaryReader.ReadBytes(MSG_ALL_IDE_LEN);
                    //通过获得的字节 转换成 数据包的总长度
                    int messageLength = ExtensionMethod.BitConverterToInt32(temp, 0);

                    //binaryReader 读取 MSG_TYPE_LEN 长度的字节
                    temp = binaryReader.ReadBytes(MSG_TYPE_LEN);
                    //通过获得的字节 转换成 消息类型
                    currentPackage.msgType = ExtensionMethod.BitConverterToInt32(temp, 0);

                    //binaryReader 读取 MSG_TYPE_LEN 长度的字节
                    temp = binaryReader.ReadBytes(MSG_RPCID_LEN);
                    //通过获得的字节 转换成 消息类型
                    currentPackage.rpcID = ExtensionMethod.BitConverterToInt32(temp, 0);

                    //重置memoryStream 索引为0
                    readStream.Position = 0;

                    //再减去数据头的长度得到 数据体的长度
                    currentPackage.bodyLength = messageLength - MSG_HEAD_LEN;

                    //设置已经读取 消息头标记
                    currentPackage.isReadHeader = true;
                }

                //如果读取过了消息头 并且可读取的数据大于整个数据体的长度
                if (currentPackage.isReadHeader == true && socket.Available >= currentPackage.bodyLength)
                {
                    //从socket 内部缓冲区 读取 已经获取过消息体长度的 数据到自己的缓冲区 dataBuffer 
                    //需要判断消息体是否为0 因为服务器传过来的proto如果没有属性反序列化之后长度是0 
                    //但是socket.Receive 如果接收0的话 就会无限阻塞等待新消息过来 
                    //这样就会导致空消息是等到非空消息发送过来之后才能接收到 时效出现了问题
                    //dataBuffer 的数据长度 必须要大于 我要接受的长度 否则会出现无限阻塞没办法接受的情况
                    if (currentPackage.bodyLength!=0)
                    {
                        socket.Receive(dataBuffer, currentPackage.bodyLength, 0);
                    }
       
                    //把自己的缓冲写入 memoryStream
                    readStream.Write(dataBuffer, 0, currentPackage.bodyLength);
                    //重置memoryStream 索引为0
                    readStream.Position = 0;

                    //从 memoryStream 读取 数据体长度的 数据
                    currentPackage.msgBytes = binaryReader.ReadBytes(currentPackage.bodyLength);
                    //重置memoryStream 索引为0
                    binaryReader.BaseStream.Position = 0;

                    //如果读取了数据体  消息类型
                    if (currentPackage.bodyLength != int.MinValue && currentPackage.msgType != int.MinValue)
                    {
                        //分发消息
                        CreateMessage(currentPackage);
                    }
                }
            }
        }

        private void CreateMessage(StreamPackage package)
        {
            receiveCallback(new Package(package.msgType, package.rpcID, package.msgBytes));
            package.Clear();
        }

        public void Send(int msgType,int rpcID, byte[] msg)
        {
            if (socket.Connected)
            {
                //写入 消息总长度 = 消息体长度+ 定义的消息头长度
                byte[] temp = ExtensionMethod.BitConverterGetBytes(msg.Length + MSG_HEAD_LEN);
                binaryWriter.Write(temp);

                //写入消息号 定义的长度 一个int 4字节
                temp = ExtensionMethod.BitConverterGetBytes(msgType);
                binaryWriter.Write(temp);

                //写入opcode 定义的长度 一个int 4字节
                temp = ExtensionMethod.BitConverterGetBytes(rpcID);
                binaryWriter.Write(temp);

                //写入消息体
                binaryWriter.Write(msg);

                binaryWriter.Flush();

                try
                {
                    socket.Send(writeStream.ToArray());
                }
                catch (Exception)
                {
                    SetState(ConnectState.Fail);
                }
                finally
                {
                    writeStream.Position = 0;
                    writeStream.SetLength(0);
                }
            }
            else
            {
                SetState(ConnectState.Fail);
            }
        }

        private void SetState(ConnectState s)
        {
            lock (lockObj)
            {
                if (state != s)
                {
                    state = s;
                    switch (state)
                    {
                        case ConnectState.UnKnow:
                            break;
                        case ConnectState.Success:
                            if (connectCallback!=null)
                            {
                                connectCallback();
                            }
                            break;
                        case ConnectState.Close:
                            if (closeCallback!=null)
                            {
                                closeCallback();
                            }
                            break;
                        case ConnectState.Fail:
                            if (errorCallback!=null)
                            {
                                errorCallback();
                            }
                            break;
                        default:
                            break;
                    }
                }
            }
        }

        private void ConnectCallback(IAsyncResult ar)
        {
            socket.EndConnect(ar);
            if (socket.Connected)
            {
                SetState(ConnectState.Success);
                CheckConnecting();
                receiveThread = new Thread(ReceiveMessage);
                receiveThread.IsBackground = true;
                receiveThread.Start();
            }
            else
            {
                SetState(ConnectState.Fail);
            }
        }

        public void Close(bool isCallback = true)
        {
            if (socket!=null)
            {
                socket.Close();
            }

            if (currentPackage!=null)
            {
                currentPackage.Clear();
            }

            if (readStream!=null)
            {
                readStream.Close();
            }

            if (binaryReader!=null)
            {
                binaryReader.Close();
            }

            if (writeStream!=null)
            {
                writeStream.Close();
            }

            if (binaryWriter!=null)
            {
                binaryWriter.Close();
            }

            currentPackage = null;
            receiveThread = null;
            socket = null;

            CloseCheckConnectingTimer();
            CloseCheckConnectedTimer();

            if (isCallback)
            {
                SetState(ConnectState.Close);
            }
        }
    }
}

