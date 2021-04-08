using System;
using Cysharp.Threading.Tasks;
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
        public int opcode;

        /// <summary>
        ///  操作符
        /// </summary>
        public int rpcID;

        /// <summary>
        /// 数据体
        /// </summary>
        public byte[] bytes;

        public Package(int opcode, int rpcID, byte[] bytes)
        {
            this.opcode = opcode;
            this.rpcID = rpcID;
            this.bytes = bytes;
        }
    }

    public class HFSocket : MonoBehaviour
    {
        /// <summary>
        ///  socket的名字
        /// </summary>
        public new string name;

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

        /// <summary>
        /// ping
        /// </summary>
        private HFPing ping;

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
                    messageQueue.Clear();
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
        private Queue<Package> messageQueue = new Queue<Package> ();

        /// <summary>
        /// task cache
        /// </summary>
        private Dictionary<int, UniTaskCompletionSource<byte[]>> completionCache = new Dictionary<int, UniTaskCompletionSource<byte[]>>();

        /// <summary>
        /// 消息派发委托
        /// </summary>
        private Action<Package> dispatchHandler;

        /// <summary>
        ///  成功连接委托
        /// </summary>
        private Action connectedHandler;

        /// <summary>
        ///  失败委托
        /// </summary>
        private Action errorHandler;

        /// <summary>
        ///  断开委托
        /// </summary>
        private Action closeHandler;

        public void Awake()
        {
            IsDispatch = false;
        }

        public void SetName(string name)
        {
            this.name = name;
        }

        public void Init(string ip, int port, Action connect, Action<Package> receive, Action close, Action error)
        {
            serverIP = ip;
            serverPort = port;
            IsDispatch = true;
            connectedHandler = connect;
            dispatchHandler = receive;
            closeHandler = close;
            errorHandler = error;
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
            if (ping != null)
            {
                ping.Dispose();
            }
            ping = new HFPing(serverIP, 5);
            GameLooper.BackToMainThread(connectedHandler);
        }

        private void m_receive(Package package)
        {
            lock (messageQueue)
            {
                messageQueue.Enqueue(package);
            }
        }

        private void m_close()
        {
            GameLooper.BackToMainThread(closeHandler);
        }

        private void m_error()
        {
            GameLooper.BackToMainThread(errorHandler);
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
        public void SendMessage(int opcode, byte[] msg)
        {
            socket.Send(opcode, IDGenerator.GetRpcId(), msg);
        }

        /// <summary>
        ///  rpc 调用 没有经过测试 为什么不用async修饰 因为加或者不加都可以 
        ///  如果方法中需要await 等待的那么必须用async修饰 否则只需要在调用的那个方法里加 
        ///  说明 await 和 async 是成对出现的
        /// </summary>
        /// <param name="messageType"></param>
        /// <param name="msg"></param>
        /// <returns></returns>
        public UniTask<byte[]> Call(int opcode, byte[] msg)
        {
            try
            {
                UniTaskCompletionSource<byte[]> taskCompletion = null;
                int rpcID = IDGenerator.GetRpcId();
                if (!completionCache.TryGetValue(rpcID, out taskCompletion))
                {
                    taskCompletion = new UniTaskCompletionSource<byte[]>();
                    completionCache.Add(rpcID, taskCompletion);
                }
                socket.Send(opcode, rpcID, msg);
                return taskCompletion.Task;
            }
            catch (Exception e)
            {
                Debug.LogError(e);
                throw;
            }
        }

        private void Update()
        {
            lock (messageQueue)
            {
                while (messageQueue.Count > 0)
                {
                    Package package = messageQueue.Dequeue();

                    //优先使用同步方式返回
                    UniTaskCompletionSource<byte[]> taskCompletion;
                    if (completionCache.TryGetValue(package.rpcID, out taskCompletion))
                    {
                        completionCache.Remove(package.rpcID);
                        taskCompletion.TrySetResult(package.bytes);                       
                    }
                    //如果没有通过同步方式发送 通过消息派发 返回
                    else
                    {
                        //callback 方式派发消息
                        dispatchHandler(package);
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
                messageQueue.Clear();
                IsDispatch = false;
            }

            if (ping!=null)
            {
                ping.Dispose();
            }
        }
    }
}



