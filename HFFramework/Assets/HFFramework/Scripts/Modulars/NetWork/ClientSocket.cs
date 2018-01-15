
using System;
using System.IO;
using System.Net.Sockets;
using System.Threading;

namespace HFFramework
{
    public class ClientSocket : Socket
    {
        public const int ErrorPort = -9999;
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
        public Action<int, MemoryStream> MessageDispatchReceiveDelegate;

        private Thread thread;
        private const int MAX_READ = 8192;
        private byte[] dataBuffer = new byte[MAX_READ];//这个是一个数据容器

        private const int MSG_HEAD_LEN = 12;
        private bool _isReadHead = false;
        private int _dataLen = 0;
        private int _msgType;

        public string serverIp { get; set; }
        public int serverPort { get; set; }


        public ClientSocket(AddressFamily addressFamily, SocketType socketType, ProtocolType protocolType) : base(addressFamily, socketType, protocolType)
        {

        }

        public ClientSocket(SocketInformation socketInformation) : base(socketInformation)
        {

        }

        public void Connecting(string ip, int port)
        {
            if (Connected == true && beginConnectedCallback != null)
            {
                beginConnectedCallback(true);
                return;
            }
            else
            {
                serverIp = ip;
                serverPort = port;
                //这是一个异步的建立连接，当连接建立成功时调用connectCallback方法
                IAsyncResult result = BeginConnect(serverIp, serverPort, new AsyncCallback(ConnectSuccess), null);
                //这里做一个超时的监测，当连接超过5秒还没成功表示超时
                bool success = result.AsyncWaitHandle.WaitOne(10000, true);
                if (success == false)
                {
                    //超时
                    CloseSocket();
                }
                else
                {
                    //与socket建立连接成功，开启线程接受服务端数据。
                    thread = new Thread(new ThreadStart(ReceiveMessage));
                    thread.IsBackground = true;
                    thread.Start();
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
            try
            {
                MemoryStream stream = new MemoryStream();
                stream.Write(data, 0, data.Length);
                stream.Position = 0;

                if (MessageDispatchReceiveDelegate != null)
                {
                    MessageDispatchReceiveDelegate(messageType, stream);
                }
            }
            catch (Exception e)
            {
                throw;
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
                byte[] temp = BitConverter.GetBytes(msg.Length + 4 + 4);
                Array.Reverse(temp);
                writer.Write(BitConverter.ToInt32(temp, 0));

                //消息号
                temp = BitConverter.GetBytes(msgType);
                Array.Reverse(temp);
                writer.Write(BitConverter.ToInt32(temp, 0));

                //消息编号
                temp = BitConverter.GetBytes(msgType);
                Array.Reverse(temp);
                writer.Write(BitConverter.ToInt32(temp, 0));

                //消息体
                writer.Write(msg);
                writer.Flush();

                try
                {
                    Send(stream.ToArray());
                }
                catch (Exception e)
                {
                }
            }
        }

        /// <summary>
        /// 接受server的数据
        /// </summary>
        void ReceiveMessage()
        {
            while (true)
            {
                if (Connected == false)
                {
                    break;
                }
                //如果没读取过头部并且可读取
                Thread.Sleep(1);
                if (!_isReadHead && Available >= MSG_HEAD_LEN)
                {
                    int len = Receive(dataBuffer, MSG_HEAD_LEN, 0);

                    MemoryStream stream = new MemoryStream(dataBuffer);
                    BinaryReader reader = new BinaryReader(stream);

                    byte[] temp = BitConverter.GetBytes(reader.ReadInt32());
                    Array.Reverse(temp);
                    _dataLen = BitConverter.ToInt32(temp, 0) - 8;

                    temp = BitConverter.GetBytes(reader.ReadInt32());
                    Array.Reverse(temp);
                    _msgType = BitConverter.ToInt32(temp, 0);

                    temp = BitConverter.GetBytes(reader.ReadInt32());
                    Array.Reverse(temp);
                    int bId = BitConverter.ToInt32(temp, 0);
                    //DebugTools.Log("-----读取头部----- 数据长度： " + _dataLen + "  编号:  " + bId + "   消息号:   " + _msgType + "   可用长度：  " + Available);
                    _isReadHead = true;
                }

                //如果已经读取过头部并且当前消息大于等于包长度
                if (_isReadHead && Available >= _dataLen)
                {
                    //DebugTools.Log("-----读取消息-----  " + Available + "  len:  " + _dataLen);
                    if (_dataLen > 0)
                    {
                        byte[] msgBufferBytes = new byte[_dataLen];
                        int lenData = Receive(msgBufferBytes, _dataLen, 0);

                        //DebugTools.Log("-----读取消息-----  " + Available + "  len:  " + lenData);
                        readResponse(msgBufferBytes, _msgType);
                    }
                    else
                    {
                        readResponse(new byte[0], _msgType);
                    }
                    _isReadHead = false;


                    //继续下一次循环接收
                    /* 
                    //如果socket中仍然有数据可以处理
                    if (Connected && Available >= MSG_HEAD_LEN)
                    {
                        ReceiveMessage();
                        break;
                    }
                    */
                }
            }
        }

        public void CloseSocket()
        {
            Close();//关闭连接
        }
    }
}