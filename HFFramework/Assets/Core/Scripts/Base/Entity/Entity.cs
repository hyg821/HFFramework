﻿using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniRx.Async;

namespace HFFramework
{
    /// <summary>
    ///  对象基类 替代 MonoBehaviour  
    ///  整体思路 Entity控制层 gameObject 视图层 
    ///  Entity 也可以挂载 Entity（component）
    /// </summary>
    public class Entity
    {
        /// <summary>
        ///  标记每一个元素 的 id
        /// </summary>
        public long instanceID;

        /// <summary>
        /// 是否异步创建
        /// </summary>
        public bool isAsync = false;

        /// <summary>
        /// 是否是组件
        /// </summary>
        public bool isComponent = false;

        /// <summary>
        ///  element 对应的 游戏物体
        /// </summary>
        public GameObject gameObject;

        /// <summary>
        ///  gameObject 的 transform
        /// </summary>
        public Transform transform;

        /// <summary>
        ///  父element
        /// </summary>
        public Entity parent;

        private List<Entity> compomentList;
        /// <summary>
        /// 组件数组
        /// </summary>
        public List<Entity> CompomentList
        {
            get
            {
                if (compomentList == null)
                {
                    compomentList = new List<Entity>();
                }
                return compomentList;
            }
        }

        private Dictionary<ulong, object> messageTypeDic;
        /// <summary>
        ///  注册的消息 字典   destory会自动销毁
        /// </summary>
        public Dictionary<ulong, object> MessageTypeDic
        {
            get
            {
                if (messageTypeDic == null)
                {
                    messageTypeDic = new Dictionary<ulong, object>();
                }
                return messageTypeDic;
            }
        }

        private bool isActive;
        public virtual bool IsActive
        {
            set
            {
                if (gameObject != null && gameObject.activeSelf != value)
                {
                    isActive = value;
                    gameObject.SetActive(isActive);
                    if (isActive)
                    {
                        OnEnable();
                    }
                    else
                    {
                        OnDisable();
                    }
                }
            }
            get
            {
                return isActive;
            }
        }

        /// <summary>
        ///  是否销毁
        /// </summary>
        public bool IsDisposed
        {
            get
            {
                return instanceID == 0;
            }
        }

        public Entity()
        {
            instanceID = IDGenerator.GetID();
            isAsync = false;
        }

        /// <summary>
        ///  脚本被生成重载方法
        /// </summary>
        public virtual void Awake()
        {
            if (!isAsync)
            {
                LoadResources();
            }     
            FindElement();
            ElementInit();
            ReceiveMessage();
        }

        /// <summary>
        /// 寻找子物体 重载方法
        /// </summary>
        public virtual void FindElement()
        {

        }

        /// <summary>
        ///  成员变量初始化对应重载方法
        /// </summary>
        public virtual void ElementInit()
        {

        }

        /// <summary>
        ///  对应接收消息的 重载方法
        /// </summary>
        public virtual void ReceiveMessage()
        {

        }

        /// <summary>
        ///  加载资源 重载方法
        /// </summary>
        public virtual void LoadResources()
        {

        }

        public async UniTask LoadResourcesAsync(string packageName, string assetName)
        {
            GameObject prefab = await HFResourceManager.Instance.GetPrefabAsync(packageName, assetName);
            GameObject temp = Instantiate(prefab);
            SetGameObject(temp);
        }

        public GameObject Instantiate(GameObject prefab)
        {
            if (prefab != null)
            {
                GameObject temp = GameObject.Instantiate(prefab);
                temp.name = prefab.name;
                SetGameObject(temp);
            }
            return gameObject;
        }

        public void SetGameObject(GameObject value)
        {
            gameObject = value;
            transform = gameObject.transform;
        }

        /// <summary>
        ///  寻找 子游戏物体 
        /// </summary>
        /// <param name="path">路径</param>
        /// <returns></returns>
        public GameObject FindChild(string path)
        {
            return transform.Find(path).gameObject;
        }

        /// <summary>
        ///  寻找子物体组件方法
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="path"></param>
        /// <returns></returns>
        public T FindChild<T>(string path)
        {
            return transform.Find(path).GetComponent<T>();
        }

        public T AutoFind<T>(string path)
        {
            if (String.IsNullOrEmpty(path))
            {
                return gameObject.GetComponent<T>();
            }
            else
            {
                return transform.Find(path).GetComponent<T>();
            }
        }

        public T AddCompoment<T>() where T : Entity, new()
        {
            T t =GameFactory.CreateEntity<T>(gameObject);
            t.parent = this;
            t.isComponent = true;
            CompomentList.Add(t);
            return t;
        }

        public T GetCompoment<T>() where T : Entity
        {
            for (int i = 0; i < CompomentList.Count; i++)
            {
                Entity e = CompomentList[i];
                if (typeof(T) == e.GetType())
                {
                    return e as T;
                }
            }
            return null;
        }

        public void RemoveCompoment(Entity t1)
        {
            int index = -1;
            for (int i = 0; i < CompomentList.Count; i++)
            {
                Entity e1 = CompomentList[i];
                if (e1.instanceID == t1.instanceID)
                {
                    index = i;
                    break;
                }
            }
            if (index != -1)
            {
                CompomentList[index].Destroy();
                CompomentList.RemoveAt(index);
            }
        }

        public void BringSelfToFront()
        {
            if (gameObject != null)
            {
                transform.SetAsLastSibling();
            }
        }

        public void BringSelfToBack()
        {
            if (gameObject != null)
            {
                transform.SetAsFirstSibling();
            }
        }

        /// <summary>
        ///  设置物体在父元素内的位置
        /// </summary>
        /// <param name="i"></param>
        public void SetSiblingIndex(int i)
        {
            if (gameObject != null)
            {
                transform.SetSiblingIndex(i);
            }
        }

        public void SetParent(GameObject obj, bool worldPositionStays = false)
        {
            transform.SetParent(obj.transform, worldPositionStays);
        }

        public void SetParent(Entity entity, bool worldPositionStays = false)
        {
            parent = entity;
            if (entity.gameObject!=null)
            {
                SetParent(entity.gameObject, worldPositionStays);
            }
        }

        /// <summary>
        ///  显示一个 element  并且把他 作为自己的子物体
        /// </summary>
        /// <param name="e"></param>
        public void SetChild(Entity child)
        {
            child.SetParent(this);
        }

        /// <summary>
        ///  显示一个 element  并且把他 作为自己的子物体
        /// </summary>
        /// <param name="e"></param>
        public void SetChild(GameObject child)
        {
            child.transform.SetParent(transform, false);
        }

        /// <summary>
        ///  开启协程
        /// </summary>
        /// <param name="coroutine"></param>
        public Coroutine StartCoroutine(IEnumerator c)
        {
            return GameLooper.Instance.StartCoroutine(c);
        }

        public void StopCoroutine(Coroutine c)
        {
            if (c != null)
            {
                GameLooper.Instance.StopCoroutine(c);
            }
        }

        bool isNeedUpdate = false;
        public bool IsNeedUpdate
        {
            set
            {
                if (value != isNeedUpdate)
                {
                    isNeedUpdate = value;
                    GameLooper.PrepareForUpdate(this);
                }
            }
            get
            {
                return isNeedUpdate;
            }
        }

        bool isNeedFixedUpdate = false;
        public bool IsNeedFixedUpdate
        {
            set
            {
                if (value != isNeedFixedUpdate)
                {
                    isNeedFixedUpdate = value;
                    GameLooper.PrepareForFixedUpdate(this);
                }
            }
            get
            {
                return isNeedFixedUpdate;
            }
        }

        bool isNeedLateUpdate = false;
        public bool IsNeedLateUpdate
        {
            set
            {
                if (value != isNeedLateUpdate)
                {
                    isNeedLateUpdate = value;
                    GameLooper.PrepareForFixedUpdate(this);
                }
            }
            get
            {
                return isNeedLateUpdate;
            }
        }

        /// <summary>
        ///  如果需要 开启update 方法 只需要设置 IsNeedLateUpdate=true 并且重载OnUpdate 方法
        /// </summary>
        public virtual void OnUpdate(float deltaTime)
        {

        }

        /// <summary>
        ///  同理 update 
        /// </summary>
        public virtual void OnFixedUpdate(float deltaTime)
        {

        }

        /// <summary>
        /// 同理 update
        /// </summary>
        public virtual void OnLateUpdate(float deltaTime)
        {

        }

        /// <summary>
        ///  元素被显示出来
        /// </summary>
        public virtual void OnEnable()
        {

        }

        /// <summary>
        ///  元素被隐藏
        /// </summary>
        public virtual void OnDisable()
        {

        }

        /// <summary>
        ///  发送网络请求 
        /// </summary>
        /// <param name="messageType"></param>
        /// <param name="msg"></param>
        public void SendNetworkRequest(int messageType, object msg)
        {

        }

        /// <summary>
        ///  发送消息
        /// </summary>
        public void SendNotificationMessage(ushort moduleID, int msgID, object obj)
        {
            NotificationCenter.PostNotification(new NotificationMessage(moduleID, msgID, this, obj));
        }

        /// <summary>
        ///  接收 通知中心 信息   对应发送消息 和 发送通知
        /// </summary>
        /// <param name="receiver">this</param>
        /// <param name="messageType"> 消息类型 int  </param>
        /// <param name="callback"> 信息回调 </param>
        public void ReceiveNotificationMessage(object receiver, ushort moduleID, int msgID, Action<NotificationMessage> callback)
        {
            object temp;
            ulong key = NotificationCenter.ConvertToKey(moduleID, msgID);
            if (!MessageTypeDic.TryGetValue(key, out temp))
            {
                MessageTypeDic.Add(key, null);
                NotificationCenter.Instance.AddObserver(receiver, moduleID, msgID, callback);
            }
        }

        public void PlayMusic(string assetPackage, string musicName)
        {
            AudioPlayer player = AudioManager.Instance.GetFreeAudioPlayer();
            player.SetAudioClipAndPlay(assetPackage, musicName);
        }

        public void ShowToast(string text)
        {

        }

        /// <summary>
        ///  销毁游戏物体
        /// </summary>
        public void DestoryGameObject()
        {
            if (gameObject != null)
            {
                GameObject.Destroy(gameObject);
                gameObject = null;
                transform = null;
            }
        }

        /// <summary>
        ///  销毁BaseElement 重载方法
        /// </summary>
        public virtual void Destroy()
        {
            if (!IsDisposed)
            {
                ApiHelper.Clear(ref compomentList);

                if (messageTypeDic != null)
                {
                    foreach (var item in messageTypeDic)
                    {
                        NotificationCenter.Instance.RemoveObserver(this, item.Key);
                    }
                    messageTypeDic.Clear();
                    messageTypeDic = null;
                }

                IsNeedUpdate = false;
                IsNeedFixedUpdate = false;
                IsNeedLateUpdate = false;

                if (!isComponent)
                {
                    DestoryGameObject();
                }
   
                parent = null;
                instanceID = 0;
            }
        }
    }
}



