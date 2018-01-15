using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    public class BaseMonoBehaviour : MonoBehaviour
    {

        /// <summary>
        ///  缓存的transform
        /// </summary>
        public Transform myTransform;

        /// <summary>
        ///  注册的消息 字典   destory会自动销毁
        /// </summary>
        public Dictionary<int, object> messageTypeDic;
        public Dictionary<int, object> MessageTypeDic
        {
            set
            {
                messageTypeDic = value;
            }
            get
            {
                if (messageTypeDic == null)
                {
                    messageTypeDic = new Dictionary<int, object>();
                }
                return messageTypeDic;
            }
        }



        public void Awake()
        {
            myTransform = gameObject.transform;
        }

        /// <summary>
        ///  发送消息
        /// </summary>
        public void SendNotificationMessage(int messageType, object obj)
        {
            NotificationCenter.self.PostNotification(new NotificationMessage(messageType, null, obj));
        }

        /// <summary>
        ///  发送网络请求 
        /// </summary>
        /// <param name="messageType"></param>
        /// <param name="msg"></param>
        public virtual void SendNetworkRequest(int messageType, object msg)
        {

        }

        /// <summary>
        ///  寻找子物体组件方法
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="path"></param>
        /// <returns></returns>
        public T FindChild<T>(string path)
        {
            return myTransform.Find(path).GetComponent<T>();
        }

        /// <summary>
        ///  寻找 子游戏物体 
        /// </summary>
        /// <param name="path">路径</param>
        /// <returns></returns>
        public GameObject FindChild(string path)
        {
            return myTransform.Find(path).gameObject;
        }

        bool isNeedUpdate = false;
        /// <summary>
        ///  是否需要开启Update
        /// </summary>
        public bool IsNeedUpdate
        {
            set
            {
                if (isNeedUpdate != value)
                {
                    isNeedUpdate = value;
                    if (value == true)
                    {
                        GameLooper.AddUpdate(MyUpdate, gameObject);
                    }
                    else
                    {
                        GameLooper.SubUpdate(MyUpdate,gameObject);
                    }
                }
            }
            get
            {
                return isNeedUpdate;
            }
        }

        bool isNeedFixedUpdate = false;
        /// <summary>
        ///  是否需要开启FixedUpdate
        /// </summary>
        public bool IsNeedFixedUpdate
        {
            set
            {
                if (value != isNeedFixedUpdate)
                {
                    isNeedFixedUpdate = value;
                    if (value == true)
                    {
                        GameLooper.AddFixedUpdate(MyFixedUpdate, gameObject);
                    }
                    else
                    {
                        GameLooper.SubFixedUpdate(MyFixedUpdate, gameObject);
                    }
                }
            }
            get
            {
                return isNeedFixedUpdate;
            }
        }

        bool isNeedLateUpdate = false;
        /// <summary>
        ///  是否需要 开启 LateUpdate
        /// </summary>
        public bool IsNeedLateUpdate
        {
            set
            {
                if (value != isNeedLateUpdate)
                {
                    isNeedLateUpdate = value;
                    if (value == true)
                    {
                        GameLooper.AddLateUpdate(MyLateUpdate, gameObject);
                    }
                    else
                    {
                        GameLooper.SubLateUpdate(MyLateUpdate, gameObject);
                    }
                }
            }
            get
            {
                return isNeedLateUpdate;
            }
        }

        public void ReceiveNotificationMessage(object receiver, int messageType, Action<NotificationMessage> callback)
        {
            if (!MessageTypeDic.ContainsKey(messageType))
            {
                MessageTypeDic.Add(messageType, null);
                NotificationCenter.self.AddObserver(receiver, messageType, callback);
            }
        }

        public virtual void MyUpdate()
        {

        }

        public virtual void MyFixedUpdate()
        {

        }

        public virtual void MyLateUpdate()
        {

        }

        public void OnDestroy()
        {
            //关闭对应的update
            IsNeedUpdate = false;
            IsNeedLateUpdate = false;
            IsNeedFixedUpdate = false;

            //销毁所有的对应通知
            if (MessageTypeDic != null)
            {
                if (NotificationCenter.self!=null)
                {
                    foreach (var item in MessageTypeDic)
                    {
                        NotificationCenter.self.RemoveObserver(this, item.Key);
                    }
                }
                MessageTypeDic.Clear();
                MessageTypeDic = null;
            }
        }
    }
}
