using System;
using System.IO;
using System.Net.Sockets;
using System.Threading;

namespace HFFramework
{
    // 说明  和后端的通讯 发送逻辑 和 解析逻辑
    //  一个完整的数据  =  数据头  （12字节 4+4+4)   +  数据体 （proto包字节+8冗余字节）
    // 数据头 =  数据体字段长度4字节（数组反转） + 数据体类型字段长度4字节（数组反转） + 数据头冗余字段长度4字节（数组反转）
    // 数据体 =  （proto包字节 + 数据体冗余字段长度8字节 ）（数组反转）

    /// <summary>
    /// socket前端
    /// </summary>
    public class ClientSocket : Socket
    {
        /// <summary>
        ///  数据体字段长度
        /// </summary>
        private const int MSG_BODY_LEN = 4;

        /// <summary>
        ///  数据体类型字段长度
        /// </summary>
        private const int MSG_BODY_TYPE = 4;

        /// <summary>
        /// 数据头冗余字段长度
        /// </summary>
        private const int MSG_EX = 4;

        /// <summary>
        ///  数据体冗余字段长度
        /// </summary>
        private const int MSG_BODY_EX = 8;

        /// <summary>
        ///  数据头长度
        /// </summary>
        private const int MSG_HEAD_LEN = MSG_BODY_LEN + MSG_BODY_TYPE + MSG_EX;

        /// <summary>
        ///  最大缓冲长度
        /// </summary>
        private const int MAX_BUFFER_LEN = 2048;

        /// <summary>
        /// 错误号
        /// </summary>
        private const int ERROR_PORT = -999999;

        /// <summary>
        ///  超时
        /// </summary>
        public TimeSpan outTimeSpan = new TimeSpan(0, 0, 5);

        /// <summary>
        ///  服务器 ip
        /// </summary>
        public string ServerIP { get; set; }

        /// <summary>
        ///  服务器端口
        /// </summary>
        public int ServerPort { get; set; }

        /// <summary>
        ///  缓冲数据容器
        /// </summary>
        private byte[] dataBuffer = new byte[MAX_BUFFER_LEN];

        /// <summary>
        ///  接收数据线程
        /// </summary>
        private Thread receiveThread;

        /// <summary>
        ///  开始连接
        /// </summary>
        public Action<bool> beginConnectedCallback;

        /// <summary>
        ///  连接错误
        /// </summary>
        public Action connectErrorCallback;

        /// <summary>
        /// 数据委托
        /// </summary>
        public Action<int, MemoryStream> messageDispatchReceiveDelegate;

        /// <summary>
        ///  是否读取过数据头
        /// </summary>
        private bool isReadHead = false;

        /// <summary>
        ///  数据体的长度
        /// </summary>
        private int dataLength = 0;

        /// <summary>
        ///  消息类型
        /// </summary>
        private int msgType;

        /// <summary>
        ///  构造方法
        /// </summary>
        /// <param name="addressFamily"></param>
        /// <param name="socketType"></param>
        /// <param name="protocolType"></param>
        public ClientSocket(AddressFamily addressFamily, SocketType socketType, ProtocolType protocolType) : base(addressFamily, socketType, protocolType)
        {

        }

        /// <summary>
        ///  开始连接
        /// </summary>
        /// <param name="ip"></param>
        /// <param name="port"></param>
        public void Connecting(string ip, int port)
        {
            if (Connected == true && beginConnectedCallback != null)
            {
                beginConnectedCallback(true);
                return;
            }
            else
            {
                ServerIP = ip;
                ServerPort = port;
                HFLog.E("ClientSocket开始连接： ip： " + ip + "  port:  " + port);
                //这是一个异步的建立连接，当连接建立成功时调用connectCallback方法
                IAsyncResult result = BeginConnect(ServerIP, ServerPort, new AsyncCallback(ConnectSuccess), null);
                //这里做一个超时的监测，当连接超过5秒还没成功表示超时
                bool success = result.AsyncWaitHandle.WaitOne(outTimeSpan, true);
                if (success == false)
                {
                    //超时
                    CloseSocket();
                    HFLog.E("连接超时");
                }
                else
                {
                    //与socket建立连接成功，开启线程接受服务端数据。
                    receiveThread = new Thread(new ThreadStart(ReceiveMessage));
                    receiveThread.IsBackground = true;
                    receiveThread.Start();
                }
            }
        }

        /// <summary>
        ///  表示socket 连接成功 可以发消息了
        /// </summary>
        /// <param name="ar"></param>
        public void ConnectSuccess(IAsyncResult ar)
        {
            if (beginConnectedCallback != null)
            {
                HFLog.E("ClientSocket 连接" + Connected);
                beginConnectedCallback(Connected);
            }
        }

        /// <summary>
        /// 最终开始读取消息
        /// </summary>
        /// <param name="data">消息数据</param>
        /// <param name="messageType">消息号</param>
        void readResponse(byte[] data, int messageType)
        {
            MemoryStream stream = new MemoryStream();
            stream.Write(data, 0, data.Length);
            stream.Position = 0;

            if (messageDispatchReceiveDelegate != null)
            {
                messageDispatchReceiveDelegate(messageType, stream);
            }
        }

        /// <summary>
        /// 发送消息接口
        /// </summary>
        /// <param name="msgType">消息号</param>
        /// <param name="msg">消息对象</param>
        public void SendMessage(int msgType, MemoryStream msg)
        {
            SendMessage(msgType, msg.ToArray());
        }

        /// <summary>
        /// 发送消息接口
        /// </summary>
        /// <param name="msgType">消息号</param>
        /// <param name="msg">消息对象,二进制</param>
        public void SendMessage(int msgType, byte[] msg)
        {
            if (this.Connected)
            {
                MemoryStream stream = new MemoryStream();
                BinaryWriter writer = new BinaryWriter(stream);

                //消息长度
                byte[] temp = BitConverter.GetBytes(msg.Length + MSG_BODY_EX);
                Array.Reverse(temp);
                writer.Write(temp);

                //消息号
                temp = BitConverter.GetBytes(msgType);
                Array.Reverse(temp);
                writer.Write(temp);

                //消息编号
                temp = BitConverter.GetBytes(msgType);
                Array.Reverse(temp);
                writer.Write(temp);

                //消息体
                writer.Write(msg);
                writer.Flush();

                Send(stream.ToArray());

                stream.Dispose();
                writer.Close();
            }
        }

        /// <summary>
        /// 接受server的数据
        /// </summary>
        void ReceiveMessage()
        {
            while (true)
            {
                if (Connected)
                {
                    if (!isReadHead && Available >= MSG_HEAD_LEN)
                    {
                        Receive(dataBuffer, MSG_HEAD_LEN, 0);

                        MemoryStream stream = new MemoryStream(dataBuffer);
                        BinaryReader reader = new BinaryReader(stream);

                        byte[] temp = reader.ReadBytes(MSG_BODY_LEN);
                        Array.Reverse(temp);
                        dataLength = BitConverter.ToInt32(temp, 0) - MSG_BODY_EX;

                        temp = reader.ReadBytes(MSG_BODY_TYPE);
                        Array.Reverse(temp);
                        msgType = BitConverter.ToInt32(temp, 0);

                        //DebugTools.Log("-----读取头部----- 数据长度： " + dataLength +  "   消息号:   " + msgType + "   可用长度：  " + Available);
                        isReadHead = true;
                    }

                    //如果已经读取过头部并且当前消息大于等于包长度
                    if (isReadHead && Available >= dataLength)
                    {
                        //DebugTools.Log("-----读取消息-----  " + Available + "  len:  " + _dataLen);
                        if (dataLength > 0)
                        {
                            byte[] msgBufferBytes = new byte[dataLength];
                            Receive(msgBufferBytes, dataLength, 0);
                            //DebugTools.Log("-----读取消息-----  " + Available + "  len:  " + lenData);
                            readResponse(msgBufferBytes, msgType);
                        }
                        else
                        {
                            readResponse(new byte[0], msgType);
                        }
                        isReadHead = false;
                    }

                    // 休眠2毫秒
                    Thread.Sleep(2);
                }
                else
                {
                    break;
                }
            }
        }

        public void CloseSocket()
        {
            HFLog.E("Socket关闭");
            Close();
        }
    }
}