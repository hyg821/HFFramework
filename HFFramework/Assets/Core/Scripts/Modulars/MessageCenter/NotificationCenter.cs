using System.Collections.Generic;
using UnityEngine;
using System;

namespace HFFramework
{
    public struct NotificationMessage
    {
        /// <summary>
        ///  模块id
        /// </summary>
        public ushort moduleID;

        /// <summary>
        ///  消息id
        /// </summary>
        public int msgID;

        /// <summary>
        ///  发送者
        /// </summary>
        public object sender;

        /// <summary>
        ///  消息的内容 需要as 转换成对应的类
        /// </summary>
        public object obj;

        private ulong key;
        public ulong Key
        {
            get
            {
                return key;
            }
        }

        public NotificationMessage(ushort moduleID, int msgID, object sender, object obj)
        {
            this.moduleID = moduleID;
            this.msgID = msgID;
            this.sender = sender;
            this.obj = obj;
            this.key = NotificationCenter.ConvertToKey(moduleID, msgID);
        }
    }

    public class ObserverDelegate
    {
        /// <summary>
        ///  接收者
        /// </summary>
        public object receiver;

        /// <summary>
        ///  模块id
        /// </summary>
        public ushort moduleID;

        /// <summary>
        ///  消息id
        /// </summary>
        public int msgID;

        /// <summary>
        ///  消息回调
        /// </summary>
        public Action<NotificationMessage> callback;

        private ulong key;
        public ulong Key
        {
            get
            {
                return key;
            }
        }

        public ObserverDelegate(object receiver, ushort moduleID, int msgID, Action<NotificationMessage> callback)
        {
            this.receiver = receiver;
            this.moduleID = moduleID;
            this.msgID = msgID;
            this.callback = callback;
            this.key = NotificationCenter.ConvertToKey(moduleID, msgID);
        }

        public void Destroy()
        {
            receiver = null;
            callback = null;
            msgID = 0;
        }
    }

    public class NotificationCenter : MonoBehaviour, IManager
    {
        public static NotificationCenter Instance;

        public static ulong ConvertToKey(ushort moduleID, int msgID)
        {
            ulong key = 0x0;
            key = key | (uint)msgID;
            uint temp= (uint)(moduleID << 35);
            key = key | temp;
            return key;
        }

        private Dictionary<ulong, List<ObserverDelegate>> messagePool = new Dictionary<ulong, List<ObserverDelegate>>();

        private void Awake()
        {
            Instance = this;
        }

        /// <summary>
        ///  添加一个观察者
        /// </summary>
        /// <param name="receiver"></param>
        /// <param name="msgID"></param>
        /// <param name="callback"></param>
        public void AddObserver(object receiver, ushort moduleID, int msgID, Action<NotificationMessage> callback)
        {
            ObserverDelegate o = new ObserverDelegate(receiver, moduleID, msgID, callback);
            List<ObserverDelegate> list;
            if (messagePool.TryGetValue(o.Key, out list))
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
                messagePool.Add(o.Key, list);
            }
        }

        /// <summary>
        ///  发消息
        /// </summary>
        /// <param name="msg"></param>
        public static void PostNotification(NotificationMessage msg)
        {
            if (Instance!=null)
            {
                Instance.SendNotification(msg);
            }       
        }

        public void SendNotification(NotificationMessage msg)
        {
            List<ObserverDelegate> list;
            if (messagePool.TryGetValue(msg.Key, out list))
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

        public void RemoveObserver(object receiver, ushort moduleID, int msgID)
        {
            RemoveObserver(receiver, ConvertToKey(moduleID, msgID));
        }

        /// <summary>
        ///  移除观察者
        /// </summary>
        /// <param name="receiver"></param>
        /// <param name="msgID"></param>
        public void RemoveObserver(object receiver, ulong key)
        {
            List<ObserverDelegate> list;
            if (messagePool.TryGetValue(key, out list))
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
            Instance = null;
        }
    }
}



