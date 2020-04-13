using System;
using UniRx.Async;
using UnityEngine;
using System.Collections.Generic;
using Google.Protobuf;

namespace HFFramework
{
    public struct Package
    {
        /// <summary>
        ///  消息类型
        /// </summary>
        public int msgType;

        /// <summary>
        ///  操作符
        /// </summary>
        public int opCode;

        /// <summary>
        /// 数据体
        /// </summary>
        public byte[] msgBytes;

        public Package(int msgType, int opCode, byte[] msgBytes)
        {
            this.msgType = msgType;
            this.opCode = opCode;
            this.msgBytes = msgBytes;
        }
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
        ///  连接状态
        /// </summary>
        public ConnectState ConnectState
        {
            get
            {
                if (socket != null)
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
        private Queue<Package> eventQueue = new Queue<Package> ();

        /// <summary>
        /// task cache
        /// </summary>
        private Dictionary<int, UniTaskCompletionSource<byte[]>> completionCache = new Dictionary<int, UniTaskCompletionSource<byte[]>>();

        /// <summary>
        /// 消息派发委托
        /// </summary>
        private Action<Package> DispatchCallback;

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

        public void Init(string ip, int port, Action connect, Action<Package> receive, Action close, Action error)
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
                socket.Close(false);
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
            GameLooper.BackToMainThread(ConnectedCallback);
        }

        private void m_receive(Package package)
        {
            lock (eventQueue)
            {
                eventQueue.Enqueue(package);
            }
        }

        private void m_close()
        {
            GameLooper.BackToMainThread(CloseCallback);
        }

        private void m_error()
        {
            GameLooper.BackToMainThread(ErrorCallback);
        }

        /// <summary>
        ///  同步发送消息
        /// </summary>
        /// <param name="messageType"></param>
        /// <param name="msg"></param>
        public void SendMessage(int messageType, IMessage msg)
        {
            SendMessage(messageType, msg.ToByteArray());
        }

        /// <summary>
        /// 同步发送消息
        /// </summary>
        /// <param name="messageType"></param>
        /// <param name="msg"></param>
        public void SendMessage(int messageType, byte[] msg)
        {
            socket.Send(messageType, IDGenerator.GetOpCode(), msg);
        }

        /// <summary>
        ///  rpc 调用 没有经过测试
        /// </summary>
        /// <param name="messageType"></param>
        /// <param name="msg"></param>
        /// <returns></returns>
        public async UniTask<byte[]> Call(int messageType, byte[] msg)
        {
            UniTaskCompletionSource<byte[]> taskCompletion;
            int opCode = IDGenerator.GetOpCode();
            if (!completionCache.TryGetValue(opCode, out taskCompletion))
            {
                taskCompletion = new UniTaskCompletionSource<byte[]>();
                completionCache.Add(messageType, taskCompletion);
            }
            socket.Send(messageType, opCode, msg);
            return await taskCompletion.Task;
        }

        private void Update()
        {
            lock (eventQueue)
            {
                while (eventQueue.Count > 0)
                {
                    Package package = eventQueue.Dequeue();

                    //优先使用同步方式返回
                    UniTaskCompletionSource<byte[]> taskCompletion;
                    if (completionCache.TryGetValue(package.opCode, out taskCompletion))
                    {
                        //移除 TaskCompletionSource 没法服用两次
                        completionCache.Remove(package.opCode);
                        taskCompletion.TrySetResult(package.msgBytes);                       
                    }
                    //如果没有通过同步方式发送 通过消息派发 返回
                    else
                    {
                        //callback 方式派发消息
                        DispatchCallback(package);
                    }
                }
            }
        }

        public void Close()
        {
            if (socket != null)
            {
                socket.Close(true);
                socket = null;

                completionCache.Clear();
                eventQueue.Clear();
                IsDispatch = false;
            }
        }
    }
}



