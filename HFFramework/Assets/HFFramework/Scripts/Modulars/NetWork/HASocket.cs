using System;
using System.IO;
using System.Net.Sockets;
using UnityEngine;
using ProtoBuf;
using System.Collections.Generic;
using System.Collections;
using System.Net;

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

    public class HASocket : MonoBehaviour
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
        ///  连接的状态
        /// </summary>
        public HASocketState state = HASocketState.UnKnow;

        /// <summary>
        /// 真正的socket 
        /// </summary>
        private ClientSocket socketClient;

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
                    sEvents.Clear();
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
                if (socketClient != null)
                {
                    return socketClient.Connected;
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
        private Queue<KeyValuePair<int, MemoryStream>> sEvents = new Queue<KeyValuePair<int, MemoryStream>>();

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
            }
            else
            {
                ipv = AddressFamily.InterNetwork;
            }

            this.beginConnectedCallback = BeginConnected;
            this.relayBeginConnectedCallback = relayBeginConnectedCallback;
            this.connectErrorCallback = connectErrorCallback;
            this.messageDispatchProtoActionDelegate = dispatchAction;
            Init(ipv);
        }

        public void Init(AddressFamily ipv)
        {
            if (socketClient == null)
            {
                socketClient = new ClientSocket(ipv, SocketType.Stream, ProtocolType.Tcp);
                socketClient.beginConnectedCallback = beginConnectedCallback;
                socketClient.connectErrorCallback = connectErrorCallback;
                socketClient.MessageDispatchReceiveDelegate += DispatchProto;
                IsDispatch = true;

                if (checkNetCoroutine == null)
                {
                    checkNetCoroutine = StartCoroutine(CheckNet());
                }
            }
            //发送链接请求
            socketClient.Connecting(serverIP, serverPort);
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
        /// 发送SOCKET消息
        /// </summary>
        public void SendMessage(int messageType, MemoryStream obj)
        {
            socketClient.SendMessage(messageType, obj);
            //DebugTools.Log("发送消息：  " + "消息号： " + messageType);
            //DebugTools.Log("发送消息：  " + "消息号： " + messageType + "  消息体：  " + JsonMapper.ToJson(obj));
        }

        /// <summary>
        /// 发消息
        /// </summary>
        /// <param name="messageType">消息号</param>
        /// <param name="msg">消息体</param>
        public void SendMessage(int messageType, object msg)
        {
            MemoryStream ms = new MemoryStream();
            Serializer.Serialize(ms, msg);
            SendMessage(messageType, ms);
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
            sEvents.Enqueue(new KeyValuePair<int, MemoryStream>(messageType, msg));
        }

        /// <summary>
        /// 交给Command，这里不想关心发给谁。
        /// </summary>
        public void Update()
        {
            while (sEvents.Count > 0)
            {
                KeyValuePair<int, MemoryStream> _event = sEvents.Dequeue();
                messageDispatchProtoActionDelegate(_event.Key, _event.Value);
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
            if (socketClient == null)
            {
                state = HASocketState.Error;
            }
            else if (socketClient.Connected == false)
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
            if (socketClient != null)
            {
                socketClient.CloseSocket();
                socketClient = null;
                IsDispatch = false;

                if (isCloseCkeckNet == true)
                {
                    StopCoroutine(checkNetCoroutine);
                    checkNetCoroutine = null;
                }
            };
        }

        /// <summary>
        /// 消息反序列化
        /// </summary>
        /// <param name="type"></param>
        /// <param name="stream"></param>
        /// <returns></returns>
        public static object GetMessageObjectByType(Type type, MemoryStream stream)
        {
            object msg = null;
            try
            {
                msg = Serializer.Deserialize(type, stream);
            }
            catch (Exception e)
            {
                throw;
            }
            return msg;
        }
    }
}



