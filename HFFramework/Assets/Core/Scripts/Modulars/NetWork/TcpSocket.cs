using System.Collections;
using System.Collections.Generic;
using System.Net;
using System.Net.Sockets;
using System;
using System.Threading;
using System.Timers;
using System.IO;
using UnityEngine;

namespace HFFramework
{
    /// <summary>
    ///  测试使用
    ///  说明  和后端的通讯 发送逻辑 和 解析逻辑
    ///   一个完整的数据  =  数据头  （8字节 4+4)   +  数据体 （proto包字节）
    ///  数据头 =  数据体字段长度4字节 + 数据体类型字段长度4字节
    ///  数据体 =  proto包字节
    /// </summary>
    public class TcpSocket
    {
        public enum ConnectState
        {
            UnKnow,
            Success,
            Close,
            Fail
        }

        /// <summary>
        ///  最大数据缓冲长度
        /// </summary>
        public const int MAX_BUFFER_LEN = 512;

        /// <summary>
        ///  连接间隔 5秒
        /// </summary>
        public float CONNECT_TIMEOUT = 5000;

        /// <summary>
        ///  检测 间隔 100 毫秒
        /// </summary>
        public float CONNECT_CHECK_INTERVAL= 100;

        /// <summary>
        ///  消息号 的 标识位 字段长度
        /// </summary>
        private const int MSG_TYPE_LEN = 4;

        /// <summary>
        ///  数据包长度 的 标识位 字段长度   
        /// </summary>
        private const int MSG_ALL_IDE_LEN = 4;

        /// <summary>
        ///  数据头长度
        /// </summary>
        private const int MSG_HEAD_LEN = MSG_ALL_IDE_LEN + MSG_TYPE_LEN;

        private Socket socket;

        public string ip;

        public int port;

        public ConnectState state = ConnectState.UnKnow;

        /// <summary>
        ///  数据缓冲
        /// </summary>
        public byte[] dataBuffer = new byte[MAX_BUFFER_LEN];

        private bool isReadHeader = false;

        /// <summary>
        ///  接收数据线程
        /// </summary>
        private Thread receiveThread;

        public Action connectCallback;

        public Action<int, byte[]> receiveCallback;

        public Action closeCallback;

        public Action errorCallback;

        public void Init(string ip, int port, Action connect, Action<int, byte[]> receive, Action close, Action error)
        {
            this.ip = ip;
            this.port = port;
            this.connectCallback = connect;
            this.receiveCallback = receive;
            this.closeCallback = close;
            this.errorCallback = error;
            AddressFamily ipv = CheckAddressFamily();
            socket = new Socket(ipv, SocketType.Stream, ProtocolType.Tcp);
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
            IAsyncResult ir = socket.BeginConnect(ip, port, ConnectSuccess, null);
            receiveThread = new Thread(new ThreadStart(ReceiveMessage));
            receiveThread.IsBackground = true;
            receiveThread.Start();
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
                        ConnectFail();
                    }
                }
                allTime += CONNECT_TIMEOUT;
            };
            timer.Start();
        }

        public void ReceiveMessage()
        {
            while (true)
            {
                //如果 可以读取的数据为 0  那么直接休眠0.01秒 然后继续去读
                if (socket.Available == 0)
                {
                    Thread.Sleep(10);
                    continue;
                }

                if (socket.Connected==false)
                {
                    break;
                }

                int bodyLength = -1;
                int messageType = -1;
                byte[] msgBytes;

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
                            bodyLength = messageLength - MSG_HEAD_LEN;

                            //然后在读取消息号
                            temp = reader.ReadBytes(MSG_TYPE_LEN);
                            messageType = BitConverter.ToInt32(temp, 0);

                            isReadHeader = true;
                        }
                    }
                }

                //如果读取过了消息头 并且可读取的数据大于整个数据体的长度
                if (isReadHeader == true && socket.Available >= bodyLength)
                {
                    socket.Receive(dataBuffer, bodyLength, 0);
                    using (MemoryStream stream = new MemoryStream(dataBuffer))
                    {
                        using (BinaryReader reader = new BinaryReader(stream))
                        {
                            msgBytes = reader.ReadBytes(bodyLength);
                            if (bodyLength != -1 && messageType != -1)
                            {
                                CreateMessage(messageType, msgBytes);
                            }
                        }
                    }
                }
            }

            //如果跳出循环说明报错
            ConnectFail();
        }

        private void CreateMessage(int messageType, byte[] data)
        {
            receiveCallback(messageType, data);
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

                        //发送
                        socket.Send(stream.GetBuffer());
                    }
                }
            }
            else
            {
                ConnectFail();
            }
        }

        private void ConnectSuccess(IAsyncResult ar)
        {
            if (state != ConnectState.Success)
            {
                state = ConnectState.Success;
                connectCallback();
            }
        }

        public void ConnectFail()
        {
            if (state != ConnectState.Fail)
            {
                state = ConnectState.Fail;
                errorCallback();
            }
        }

        public void Close()
        {
            if (state != ConnectState.Close)
            {
                state = ConnectState.Close;
                socket.Close();
                closeCallback();
                isReadHeader = false;
                receiveThread = null;
            }
        }
    }
}

