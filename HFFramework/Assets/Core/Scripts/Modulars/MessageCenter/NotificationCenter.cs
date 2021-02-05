using System.Collections.Generic;
using UnityEngine;
using System;

namespace HFFramework
{
    /// <summary>
    /// 消息中心
    /// </summary>
    public class NotificationCenter : MonoBehaviour, IManager
    {
        public static NotificationCenter Instance;

        public static ulong ConvertToKey(ushort moduleId, int msgId)
        {
            ulong key = 0x0;
            key = key | (uint)msgId;
            uint temp= (uint)(moduleId << 35);
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
        public void AddObserver(object receiver, ushort moduleId, int msgId, Action<NotificationMessage> callback)
        {
            if (receiver==null)
            {
                HFLog.E(" moduleID = " + moduleId + " msgID = " + msgId + " receiver 不能为空");
                return;
            }

            if (callback==null)
            {
                HFLog.E(" moduleID = " + moduleId + " msgID = " + msgId + " callback 不能为空");
                return;
            }

            ObserverDelegate o = new ObserverDelegate(receiver, moduleId, msgId, callback);
            List<ObserverDelegate> list;
            if (!messagePool.TryGetValue(o.Key, out list))
            {
                list = new List<ObserverDelegate>();
                messagePool.Add(o.Key, list);
            }
            list.Add(o);
        }

        public void Send(ushort moduleId, int msgId, object sender, object content)
        {
            Send(new NotificationMessage(moduleId, msgId, sender, content));
        }

        public void Send(NotificationMessage msg)
        {
            try
            {
                List<ObserverDelegate> list;
                if (messagePool.TryGetValue(msg.Key, out list))
                {
                    for (int i = 0; i < list.Count; i++)
                    {
                        ObserverDelegate o = list[i];
                        if (o.receiver != null && o.handler != null)
                        {
                            o.handler(msg);
                        }
                    }
                }
            }
            catch (Exception e)
            {
                HFLog.E(e);
                throw;
            }
        }

        public void RemoveObserver(object receiver, ushort moduleId, int msgId)
        {
            RemoveObserver(receiver, ConvertToKey(moduleId, msgId));
        }

        /// <summary>
        ///  移除观察者
        /// </summary>
        /// <param name="receiver"></param>
        /// <param name="msgId"></param>
        public void RemoveObserver(object receiver, ulong key)
        {
            List<ObserverDelegate> list;
            if (messagePool.TryGetValue(key, out list))
            {
                int i = 0;
                while (i < list.Count)
                {
                    ObserverDelegate o = list[i];
                    if (o.receiver == receiver)
                    {
                        list.RemoveAt(i);
                        o.Destroy();
                        break;
                    }
                    i++;
                }
            }
        }

        public void Clear()
        {
            messagePool.Clear();
        }          

        public void Dispose()
        {
            Clear();
            Instance = null;
        }
    }
}



