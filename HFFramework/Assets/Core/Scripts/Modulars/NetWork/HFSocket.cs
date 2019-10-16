using System;
using System.Threading.Tasks;
using UnityEngine;
using System.Collections.Generic;
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
        /// task cache
        /// </summary>
        private Dictionary<int, TaskCompletionSource<byte[]>> taskCache = new Dictionary<int, TaskCompletionSource<byte[]>>();

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
            GameLooper.BackToMainThread(delegate ()
            {
                ConnectedCallback();
            });
        }

        private void m_receive(int msgType, byte[] msg)
        {
            lock (eventQueue)
            {
                eventQueue.Enqueue(new KeyValuePair<int, byte[]>(msgType, msg));
            }
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
            socket.Send(messageType, msg);
        }

        /// <summary>
        ///  rpc 调用 没有经过测试
        /// </summary>
        /// <param name="messageType"></param>
        /// <param name="msg"></param>
        /// <returns></returns>
        public async Task<byte[]> Call(int messageType, byte[] msg)
        {
            socket.Send(messageType, msg);
            TaskCompletionSource<byte[]> taskCompletion;
            if (!taskCache.TryGetValue(messageType, out taskCompletion))
            {
                taskCompletion = new TaskCompletionSource<byte[]>();
                taskCache.Add(messageType, taskCompletion);
            }
            return await taskCompletion.Task;
        }

        private void Update()
        {
            lock (eventQueue)
            {
                while (eventQueue.Count > 0)
                {
                    KeyValuePair<int, byte[]> e = eventQueue.Dequeue();

                    //callback 方式派发消息
                    DispatchCallback(e.Key, e.Value);

                    //task 用同步写法 返回异步消息
                    TaskCompletionSource<byte[]> taskCompletion;
                    if (taskCache.TryGetValue(e.Key, out taskCompletion))
                    {
                        taskCompletion.SetResult(e.Value);
                        //然后移除 因为一个TaskCompletionSource 没法服用两次
                        taskCache.Remove(e.Key);
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

                taskCache.Clear();
                eventQueue.Clear();
                IsDispatch = false;
            }
        }
    }
}



