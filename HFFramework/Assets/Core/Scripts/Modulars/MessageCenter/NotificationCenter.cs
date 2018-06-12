using System.Collections.Generic;
using UnityEngine;
using System;

namespace HFFramework
{
    public struct NotificationMessage
    {
        /// <summary>
        ///  消息id
        /// </summary>
        public long msgID;

        /// <summary>
        ///  发送者
        /// </summary>
        public object sender;

        /// <summary>
        ///  消息的内容 需要as 转换成对应的类
        /// </summary>
        public object obj;

        public NotificationMessage(long msgID, object sender, object obj)
        {
            this.msgID = msgID;
            this.sender = sender;
            this.obj = obj;
        }
    }

    public class ObserverDelegate
    {
        /// <summary>
        ///  接收者
        /// </summary>
        public object receiver;

        /// <summary>
        ///  消息号
        /// </summary>
        public long msgID;

        /// <summary>
        ///  消息回调
        /// </summary>
        public Action<NotificationMessage> callback;

        public ObserverDelegate(object receiver, long msgID, Action<NotificationMessage> callback)
        {
            this.receiver = receiver;
            this.msgID = msgID;
            this.callback = callback;
        }

        public void Destroy()
        {
            receiver = null;
            callback = null;
            msgID = 0;
        }
    }

    public class NotificationCenter : MonoBehaviour
    {
        public static NotificationCenter self;

        private Dictionary<long, List<ObserverDelegate>> messagePool = new Dictionary<long, List<ObserverDelegate>>();

        public void Awake()
        {
            self = this;
            self.messagePool = new Dictionary<long, List<ObserverDelegate>>();
        }

        /// <summary>
        ///  添加一个观察者
        /// </summary>
        /// <param name="receiver"></param>
        /// <param name="msgID"></param>
        /// <param name="callback"></param>
        public void AddObserver(object receiver, int msgID, Action<NotificationMessage> callback)
        {
            ObserverDelegate o = new ObserverDelegate(receiver, msgID, callback);
            List<ObserverDelegate> list;
            if (messagePool.TryGetValue(msgID, out list))
            {
                if (list != null)
                {
                    list.Add(o);
                }
            }
            else
            {
                list = new List<ObserverDelegate>();
                list.Add(o);
                messagePool.Add(msgID, list);
            }
        }

        /// <summary>
        ///  发消息
        /// </summary>
        /// <param name="msg"></param>
        public void PostNotification(NotificationMessage msg)
        {
            List<ObserverDelegate> list;
            if (messagePool.TryGetValue(msg.msgID, out list))
            {
                for (int i = 0; i < list.Count; i++)
                {
                    ObserverDelegate o = list[i];
                    if (o.receiver != null || o.callback != null)
                    {
                        o.callback(msg);
                    }
                    else
                    {
                        list.Remove(o);
                    }
                }
            }
        }

        /// <summary>
        ///  移除观察者
        /// </summary>
        /// <param name="receiver"></param>
        /// <param name="msgID"></param>
        public void RemoveObserver(object receiver, int msgID)
        {
            List<ObserverDelegate> list;
            if (messagePool.TryGetValue(msgID, out list))
            {
                if (list != null)
                {
                    int i = 0;
                    while (true)
                    {
                        if (i < list.Count)
                        {
                            ObserverDelegate o = list[i];
                            if (o.receiver == receiver)
                            {
                                o.Destroy();
                                list.Remove(o);
                                break;
                            }
                            i++;
                        }
                        else
                        {
                            break;
                        }
                    }
                }
            }
        }

        public void DestroyManager()
        {
            messagePool.Clear();
            self = null;
        }
    }
}



