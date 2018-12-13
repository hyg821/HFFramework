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
    public class TcpSocket
    {
        public class SteamPackage
        {
            public int bodyLength = int.MaxValue;
            public int msgType = int.MaxValue;
            public byte[] msgBytes;

            public void Clear()
            {
                bodyLength = int.MaxValue;
                msgType = int.MaxValue;
                msgBytes = null;
            }
        }

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
        private const int MAX_BUFFER_LEN = 512;

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
        ///  数据缓冲
        /// </summary>
        private byte[] dataBuffer = new byte[MAX_BUFFER_LEN];

        private SteamPackage currentPackage = new SteamPackage();

        /// <summary>
        ///  是否读取消息头
        /// </summary>
        private bool isReadHeader = false;

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
        private bool Connected
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
            float allTime = 0;
            System.Timers.Timer timer = new System.Timers.Timer(CONNECT_CHECK_INTERVAL);
            timer.Elapsed += delegate (object sender, ElapsedEventArgs e)
            {
                if (allTime< CONNECT_TIMEOUT)
                {
                    //如果在规定时间内 连接上了 那么直接 停止定时器
                    if (socket.Connected)
                    {
                        timer.Stop();
                        timer = null;
                    }
                }
                // 如果在规定时间内没有连接上 直接停止定时器 并且报错
                else
                {
                    if (socket.Connected==false)
                    {
                        timer.Stop();
                        timer = null;
                        SetState(ConnectState.Fail);
                    }
                }
                allTime += CONNECT_CHECK_INTERVAL;
            };
            timer.Start();
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

                //如果 可以读取的数据为 0  那么直接休眠0.01秒 然后继续去读
                if (socket.Available == 0)
                {
                    Thread.Sleep(THREAD_SLEEP_TIME);
                    continue;
                }

                //如果没有读取消息头 并且 可以读取的数据大于 头的长度
                if (isReadHeader == false && socket.Available >= MSG_HEAD_LEN)
                {
                    socket.Receive(dataBuffer, MSG_HEAD_LEN, 0);
                    using (MemoryStream stream = new MemoryStream(dataBuffer))
                    {
                        using (BinaryReader reader = new BinaryReader(stream))
                        {
                            byte[] temp = reader.ReadBytes(MSG_ALL_IDE_LEN);
                            //先读取整个数据的长度
                            int messageLength = BitConverter.ToInt32(temp, 0);
                            //再-数据头的长度得到 数据体的长度
                            currentPackage.bodyLength = messageLength - MSG_HEAD_LEN;

                            //然后在读取消息号
                            temp = reader.ReadBytes(MSG_TYPE_LEN);
                            currentPackage.msgType = BitConverter.ToInt32(temp, 0);

                            isReadHeader = true;
                        }
                    }
                }

                //如果读取过了消息头 并且可读取的数据大于整个数据体的长度
                if (isReadHeader == true && socket.Available >= currentPackage.bodyLength)
                {
                    socket.Receive(dataBuffer, currentPackage.bodyLength, 0);
                    using (MemoryStream stream = new MemoryStream(dataBuffer))
                    {
                        using (BinaryReader reader = new BinaryReader(stream))
                        {
                            currentPackage.msgBytes = reader.ReadBytes(currentPackage.bodyLength);
                            if (currentPackage.bodyLength != int.MaxValue && currentPackage.msgType != int.MaxValue)
                            {
                                CreateMessage(currentPackage);
                            }
                        }
                    }
                }
            }

            //如果跳出循环说明报错
            SetState(ConnectState.Fail);
        }

        private void CreateMessage(SteamPackage package)
        {
            receiveCallback(package.msgType, package.msgBytes);
            package.Clear();
        }

        public void Send(int msgType, byte[] msg)
        {
            if (socket.Connected)
            {
                using (MemoryStream stream = new MemoryStream(dataBuffer))
                {
                    using (BinaryWriter writer = new BinaryWriter(stream))
                    {
                        //写入 消息总长度 4字节
                        byte[] temp = BitConverter.GetBytes(msg.Length + MSG_HEAD_LEN);
                        writer.Write(temp);

                        //写入消息号 4字节
                        temp = BitConverter.GetBytes(msgType);
                        writer.Write(temp);

                        //写入包体内容 
                        writer.Write(msg);

                        writer.Flush();

                        try
                        {
                            socket.Send(stream.GetBuffer());
                        }
                        catch (Exception)
                        {
                            SetState(ConnectState.Fail);
                        }
                    }
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
                            connectCallback();
                            break;
                        case ConnectState.Close:
                            closeCallback();
                            break;
                        case ConnectState.Fail:
                            errorCallback();
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

        public void Close()
        {
            socket.Close();
            SetState(ConnectState.Close);
            isReadHeader = false;
            receiveThread = null;
            socket = null;
        }
    }
}

