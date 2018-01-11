using System.Collections.Generic;
using UnityEngine;
using System;

namespace HFFramework
{
    public class NotificationMessage
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
        public Action<NotificationMessage> callBack;

        public ObserverDelegate(object receiver, long msgID, Action<NotificationMessage> call)
        {
            this.receiver = receiver;
            this.msgID = msgID;
            callBack += call;
        }
    }

    public class NotificationCenter : MonoBehaviour
    {
        public static NotificationCenter self;

        private Dictionary<long, List<ObserverDelegate>> dic = new Dictionary<long, List<ObserverDelegate>>();

        public void Awake()
        {
            self = this;
            self.dic = new Dictionary<long, List<ObserverDelegate>>();
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
            if (dic.TryGetValue(msgID, out list))
            {
                if (list != null)
                {
                    list.Add(o);
                }
            }
            else
            {
                List<ObserverDelegate> l = new List<ObserverDelegate>();
                l.Add(o);
                dic.Add(msgID, l);
            }
        }

        /// <summary>
        ///  发消息
        /// </summary>
        /// <param name="msg"></param>
        public void PostNotification(NotificationMessage msg)
        {
            List<ObserverDelegate> l;
            if (dic.TryGetValue(msg.msgID, out l))
            {
                for (int i = 0; i < l.Count; i++)
                {
                    ObserverDelegate o = l[i];
                    if (o.receiver != null || o.callBack != null)
                    {
                        o.callBack(msg);
                    }
                    else
                    {
                        l.Remove(o);
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
            List<ObserverDelegate> l;
            if (dic.TryGetValue(msgID, out l))
            {
                if (l != null)
                {
                    int i = 0;
                    while (true)
                    {
                        if (i < l.Count)
                        {
                            ObserverDelegate o = l[i];
                            if (o.receiver == receiver)
                            {
                                o.receiver = null;
                                o.callBack = null;
                                o.msgID = 0;
                                l.Remove(o);
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

        void OnDestroy()
        {
            self = null;
            dic.Clear();
        }
    }
}



