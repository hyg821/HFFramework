using System;
using System.IO;
using System.Net.Sockets;
using UnityEngine;
using System.Collections.Generic;
using System.Collections;
using System.Net;
using Google.Protobuf;

namespace HFFramework
{
    public class HFSocket : MonoBehaviour
    {
        /// <summary>
        ///  socket的名字
        /// </summary>
        public string socketName;

        /// <summary>
        ///  连接的ip
        /// </summary>
        public string serverIP;

        /// <summary>
        ///  连接的端口
        /// </summary>
        public int serverPort;

        /// <summary>
        ///  连接状态
        /// </summary>
        public ConnectState ConnectState
        {
            get
            {
                if (socket!=null)
                {
                    return socket.State;
                }
                else
                {
                    return ConnectState.UnKnow;
                }
            }
        }

        /// <summary>
        /// 真正的socket 
        /// </summary>
        private TcpSocket socket;

        private bool isDispatch = false;
        /// <summary>
        ///  是否开启 update 来dispatch消息
        /// </summary>
        public bool IsDispatch
        {
            set
            {
                if (isDispatch != value)
                {
                    isDispatch = value;
                    enabled = isDispatch;
                    eventQueue.Clear();
                }
            }
            get
            {
                return enabled;
            }
        }

        /// <summary>
        ///  是否连接
        /// </summary>
        public bool IsConnect
        {
            get
            {
                if (socket != null)
                {
                    return socket.Connected;
                }
                else
                {
                    return false;
                }
            }
        }

        /// <summary>
        /// 线程同步
        /// </summary>
        private Queue<KeyValuePair<int, byte[]>> eventQueue = new Queue<KeyValuePair<int, byte[]>>();

        /// <summary>
        /// 消息派发委托
        /// </summary>
        private Action<int, byte[]> DispatchCallback;

        /// <summary>
        ///  成功连接委托
        /// </summary>
        private Action ConnectedCallback;

        /// <summary>
        ///  失败委托
        /// </summary>
        private Action ErrorCallback;

        /// <summary>
        ///  断开委托
        /// </summary>
        private Action CloseCallback;

        public void Awake()
        {
            IsDispatch = false;
        }

        public void SetName(string tag)
        {
            this.socketName = tag;
        }

        public void Init(string ip, int port, Action connect, Action<int, byte[]> receive, Action close, Action error)
        {
            serverIP = ip;
            serverPort = port;
            IsDispatch = true;
            ConnectedCallback = connect;
            DispatchCallback = receive;
            CloseCallback = close;
            ErrorCallback = error;
            Init();
        }

        private void Init()
        {
            if (socket != null)
            {
                socket.Close();
                socket = null;
            }
            socket = new TcpSocket();
            socket.Init(serverIP, serverPort, m_connect, m_receive, m_close, m_error);
        }

        public void ReConnect()
        {
            Init();
            StartConnect();
        }

        public void StartConnect()
        {
            socket.StartConnect();
        }

        private void m_connect()
        {
            GameLooper.BackToMainThread(delegate ()
            {
                ConnectedCallback();
            });
        }

        private void m_receive(int msgType, byte[] msg)
        {
            eventQueue.Enqueue(new KeyValuePair<int, byte[]>(msgType, msg));
        }

        private void m_close()
        {
            GameLooper.BackToMainThread(delegate ()
            {
                CloseCallback();
            });
        }

        private void m_error()
        {
            GameLooper.BackToMainThread(delegate ()
            {
                ErrorCallback();
            });
        }

        public void SendMessage(int messageType, IMessage msg)
        {
            socket.Send(messageType, msg.ToByteArray());
        }

        public void Update()
        {
            while (eventQueue.Count > 0)
            {
                KeyValuePair<int, byte[]> e = eventQueue.Dequeue();
                DispatchCallback(e.Key, e.Value);
            }
        }

        public void Close()
        {
            if (socket != null)
            {
                socket.Close();
                socket = null;
            }
        }
    }
}



