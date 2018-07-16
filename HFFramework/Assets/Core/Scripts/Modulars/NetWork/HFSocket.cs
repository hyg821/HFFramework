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
    public enum HASocketState
    {
        /// <summary>
        ///  未知
        /// </summary>
        UnKnow = -1,

        /// <summary>
        ///  正确
        /// </summary>
        OK = 0,

        /// <summary>
        ///  错误
        /// </summary>
        Error = -999
    }

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
        ///  当前网络是ipv4 还是 ipv6
        /// </summary>
        public AddressFamily ipvType;

        /// <summary>
        ///  连接的状态
        /// </summary>
        public HASocketState state = HASocketState.UnKnow;

        /// <summary>
        /// 真正的socket 
        /// </summary>
        private ClientSocket socket;

        /// <summary>
        ///  监测网络状态的间隔时间
        /// </summary>
        public WaitForSeconds wait = new WaitForSeconds(6);

        /// <summary>
        /// 检测网络状态的协程 
        /// </summary>
        private Coroutine checkNetCoroutine;

        private bool isDispatch;
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
        private Queue<KeyValuePair<int, MemoryStream>> eventQueue = new Queue<KeyValuePair<int, MemoryStream>>();

        /// <summary>
        /// 消息派发委托
        /// </summary>
        private Action<int, MemoryStream> messageDispatchProtoActionDelegate;

        /// <summary>
        ///  成功连接委托
        /// </summary>
        private Action<bool> beginConnectedCallback;
        private Action<bool> relayBeginConnectedCallback;

        /// <summary>
        ///  失败委托
        /// </summary>
        private Action connectErrorCallback;


        public void Awake()
        {
            IsDispatch = false;
        }

        public void SetName(string tag)
        {
            this.socketName = tag;
        }

        public void Init(string ip, int port, Action<bool> relayBeginConnectedCallback, Action<int, MemoryStream> dispatchAction, Action connectErrorCallback)
        {
            serverIP = ip;
            serverPort = port;

            // 判断 ipv4 || ipv6
            AddressFamily ipv;
            IPAddress[] address = Dns.GetHostAddresses(serverIP);
            if (address[0].AddressFamily == AddressFamily.InterNetworkV6)
            {
                ipv = AddressFamily.InterNetworkV6;
                ipvType = AddressFamily.InterNetworkV6;
            }
            else
            {
                ipv = AddressFamily.InterNetwork;
                ipvType = AddressFamily.InterNetwork;
            }

            this.beginConnectedCallback = BeginConnected;
            this.relayBeginConnectedCallback = relayBeginConnectedCallback;
            this.connectErrorCallback = connectErrorCallback;
            this.messageDispatchProtoActionDelegate = dispatchAction;
            Init(ipv);
        }

        public void Init(AddressFamily ipv)
        {
            if (socket == null)
            {
                socket = new ClientSocket(ipv, SocketType.Stream, ProtocolType.Tcp);
                socket.beginConnectedCallback = beginConnectedCallback;
                socket.connectErrorCallback = connectErrorCallback;
                socket.messageDispatchReceiveDelegate = DispatchProto;
                IsDispatch = true;

                if (checkNetCoroutine == null)
                {
                    checkNetCoroutine = StartCoroutine(CheckNet());
                }
            }
            //发送链接请求
            socket.Connecting(serverIP, serverPort);
        }

        public void BeginConnected(bool b)
        {
            if (b == true)
            {
                state = HASocketState.OK;
            }
            else
            {
                state = HASocketState.Error;
            }

            if (relayBeginConnectedCallback != null)
            {
                relayBeginConnectedCallback(b);
            }
        }

        /// <summary>
        /// 发消息
        /// </summary>
        /// <param name="messageType">消息号</param>
        /// <param name="msg">消息体</param>
        public void SendMessage(int messageType, IMessage msg)
        {
            socket.SendMessage(messageType, msg.ToByteArray());
        }


        /// <summary>
        /// 接收消息
        /// </summary>
        /// <param name="protoId"></param>
        /// <param name="buff"></param>
        public void DispatchProto(int messageType, MemoryStream msg)
        {
            //string json = JsonMapper.ToJson(msg);
            //DebugTools.TestLog("-----读取消息-----  消息号：  " + messageType + " DispatchProto len: " + msg.Length);
            eventQueue.Enqueue(new KeyValuePair<int, MemoryStream>(messageType, msg));
        }

        /// <summary>
        /// 交给Command，这里不想关心发给谁。
        /// </summary>
        public void Update()
        {
            while (eventQueue.Count > 0)
            {
                KeyValuePair<int, MemoryStream> e = eventQueue.Dequeue();
                messageDispatchProtoActionDelegate(e.Key, e.Value);
            }
        }

        public IEnumerator CheckNet()
        {
            while (true)
            {
                yield return wait;
                CheckError();
            }
        }

        public void CheckError()
        {
            if (socket == null)
            {
                state = HASocketState.Error;
            }
            else if (socket.Connected == false)
            {
                state = HASocketState.Error;
            }
            else
            {
                state = HASocketState.OK;
            }
            if (state != HASocketState.OK)
            {
                if (connectErrorCallback != null)
                {
                    CloseSocket(false);
                    connectErrorCallback();
                }
            }
        }

        /// <summary>
        /// 关闭socket
        /// </summary>
        public void CloseSocket(bool isCloseCkeckNet)
        {
            if (socket != null)
            {
                socket.CloseSocket();
                socket = null;
                IsDispatch = false;

                if (isCloseCkeckNet == true)
                {
                    StopCoroutine(checkNetCoroutine);
                    checkNetCoroutine = null;
                }
            };
        }
    }
}



