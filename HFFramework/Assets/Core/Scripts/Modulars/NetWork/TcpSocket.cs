using System.Net;
using System.Net.Sockets;
using System;
using System.Threading;
using System.Timers;
using System.IO;
using System.Runtime.InteropServices;

namespace HFFramework
{
    /// <summary>
    ///  测试使用
    ///  说明  和后端的通讯 发送逻辑 和 解析逻辑
    ///   一个完整的数据  =  数据头  （8字节 4+4)   +  数据体 （proto包字节）
    ///  数据头 =  包体总长度4字节 + 数据体类型字段长度4字节
    ///  数据体 =  proto包字节
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

    public class TcpSocket
    {
        public class StreamPackage
        {
            /// <summary>
            ///  是否读取消息头
            /// </summary>
            public bool isReadHeader = false;
            public int bodyLength = int.MinValue;
            public int msgType = int.MinValue;
            public byte[] msgBytes;

            public void Clear()
            {
                isReadHeader = false;
                bodyLength = int.MinValue;
                msgType = int.MinValue;
                msgBytes = null;
            }
        }

        private static byte[] checkBytes = new byte[1];

        /// <summary>
        ///  锁
        /// </summary>
        private static object lockObj = new object();

        /// <summary>
        ///  线程休眠时间
        /// </summary>
        private const int THREAD_SLEEP_TIME = 20;

        /// <summary>
        ///  检测网络连接时间
        /// </summary>
        private const int CHECK_CONNECT_TIME = 200;

        /// <summary>
        ///  检测网络连接 累加时间
        /// </summary>
        private int checkConnectAllTime = 0;

        /// <summary>
        ///  最大数据缓冲长度
        /// </summary>
        private const int MAX_BUFFER_LEN = 1024;

        /// <summary>
        ///  连接间隔 5秒
        /// </summary>
        private float CONNECT_TIMEOUT = 5000;

        /// <summary>
        ///  检测 间隔 100 毫秒
        /// </summary>
        private float CONNECT_CHECK_INTERVAL= 100;

        /// <summary>
        ///  数据包长度 的 标识位 字段长度   
        /// </summary>
        private const int MSG_ALL_IDE_LEN = 4;

        /// <summary>
        ///  消息号 的 标识位 字段长度
        /// </summary>
        private const int MSG_TYPE_LEN = 4;

        /// <summary>
        ///  数据头长度
        /// </summary>
        private const int MSG_HEAD_LEN = MSG_ALL_IDE_LEN + MSG_TYPE_LEN;

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
        ///  socket 接收到第一层byte[]数据缓冲
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

        private System.Timers.Timer  checkConnectedTimer;

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
        private Action<int, byte[]> receiveCallback;

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
                    return !(socket.Poll(1, SelectMode.SelectRead) && socket.Available == 0);
                }
                return false;
            }
        }

        public void Init(string ip, int port, Action connect, Action<int, byte[]> receive, Action close, Action error)
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

            //设置 keepAlive
            uint dummy = 0;
            int uintSize = Marshal.SizeOf(dummy);
            byte[] inOptionValues = new byte[uintSize * 3];
            BitConverter.GetBytes((uint)1).CopyTo(inOptionValues, 0);//是否启用Keep-Alive
            BitConverter.GetBytes((uint)4000).CopyTo(inOptionValues, uintSize);//多长时间开始第一次探测
            BitConverter.GetBytes((uint)100).CopyTo(inOptionValues, uintSize * 2);//探测时间间隔
            socket.IOControl(IOControlCode.KeepAliveValues, inOptionValues, null);

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
            socket.BeginConnect(ip, port, ConnectCallback, null);
            CheckConnect();
        }

        public void CheckConnect()
        {
            CloseTimer();
            float allTime = 0;
            checkConnectedTimer = new System.Timers.Timer(CONNECT_CHECK_INTERVAL);
            checkConnectedTimer.Elapsed += delegate (object sender, ElapsedEventArgs e)
            {
                if (allTime< CONNECT_TIMEOUT)
                {
                    //如果在规定时间内 连接上了 那么直接 停止定时器
                    if (socket.Connected)
                    {
                        CloseTimer();
                    }
                }
                // 如果在规定时间内没有连接上 直接停止定时器 并且报错
                else
                {
                    if (socket.Connected==false)
                    {
                        CloseTimer();
                        SetState(ConnectState.Fail);
                    }
                }
                allTime += CONNECT_CHECK_INTERVAL;
            };
            checkConnectedTimer.Start();
        }

        private void CloseTimer()
        {
            if (checkConnectedTimer != null)
            {
                checkConnectedTimer.Close();
                checkConnectedTimer = null;
            }
        }

        public bool  CheckSocketConnect()
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
                //检测 网络 连接
                checkConnectAllTime += THREAD_SLEEP_TIME;
                if (checkConnectAllTime>=CHECK_CONNECT_TIME)
                {
                    checkConnectAllTime = 0;
                    bool isConnect = CheckSocketConnect();
                    if (isConnect==false)
                    {
                        break;
                    }
                }

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
                    int messageLength = BitConverter.ToInt32(temp, 0);

                    //binaryReader 读取 MSG_TYPE_LEN 长度的字节
                    temp = binaryReader.ReadBytes(MSG_TYPE_LEN);
                    //通过获得的字节 转换成 消息类型
                    currentPackage.msgType = BitConverter.ToInt32(temp, 0);

                    //重置memoryStream 索引为0
                    binaryReader.BaseStream.Position = 0;

                    //再减去数据头的长度得到 数据体的长度
                    currentPackage.bodyLength = messageLength - MSG_HEAD_LEN;

                    //设置已经读取 消息头标记
                    currentPackage.isReadHeader = true;
                }

                //如果读取过了消息头 并且可读取的数据大于整个数据体的长度
                if (currentPackage.isReadHeader == true && socket.Available >= currentPackage.bodyLength)
                {
                    //从socket 内部缓冲区 读取 已经获取过消息体长度的 数据到自己的缓冲区 
                    socket.Receive(dataBuffer, currentPackage.bodyLength, 0);

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

            //如果跳出循环说明报错
            SetState(ConnectState.Fail);
        }

        private void CreateMessage(StreamPackage package)
        {
            receiveCallback(package.msgType, package.msgBytes);
            package.Clear();
        }

        public void Send(int msgType, byte[] msg)
        {
            if (socket.Connected)
            {
                //写入 消息总长度 = 消息体长度+ 定义的消息头长度
                byte[] temp = BitConverter.GetBytes(msg.Length + MSG_HEAD_LEN);
                binaryWriter.Write(temp);

                //写入消息号 定义的长度 一个int 4字节
                temp = BitConverter.GetBytes(msgType);
                binaryWriter.Write(temp);

                //写入消息体
                binaryWriter.Write(msg);

                binaryWriter.Flush();

                try
                {
                    socket.Send(writeStream.GetBuffer());
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
                receiveThread = new Thread(new ThreadStart(ReceiveMessage));
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

            if (isCallback)
            {
                SetState(ConnectState.Close);
            }

            if (currentPackage!=null)
            {
                currentPackage.Clear();
            }

            if (readStream!=null)
            {
                readStream.Dispose();
            }

            if (binaryReader!=null)
            {
                binaryReader.Dispose();
            }

            if (writeStream!=null)
            {
                writeStream.Dispose();
            }

            if (binaryWriter!=null)
            {
                binaryWriter.Dispose();
            }

            currentPackage = null;
            receiveThread = null;
            socket = null;
        }
    }
}

