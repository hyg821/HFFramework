using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniRx.Async;
using HFFramework;
using Google.Protobuf;

namespace HotFix
{
    /// <summary>
    /// Entity 理解 
    /// Entity 当作为数据层的时候 gameObject 就不需要被创建 
    /// Entity 当作为控制层+表现层的时候 需要创建对应的 gameObject 
    /// 
    /// Entity
    ///     |
    ///     |—— component
    ///     |
    ///     |—— component
    ///     |
    ///     |—— component
    ///     |
    ///     GameObject (视图层)
    ///                             | 
    ///                             | _____  Monobehivor
    ///                             | 
    ///                             | _____  Monobehivor
    /// </summary>
    public class Entity
    {
        /// <summary>
        ///  标记每一个元素 的 id
        /// </summary>
        public long instanceID;

        /// <summary>
        /// 名字
        /// </summary>
        public string name;

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

        /// <summary>
        /// 自定义数据
        /// </summary>
        public object userData;

        private bool isActive;

        private List<Entity> m_compoments;

        private List<Entity> m_childs;

        private Dictionary<ulong, object> m_messageTypeDic;

        /// <summary>
        ///  本体entity的帮助类
        /// </summary>
        public List<Entity> compoments
        {
            get
            {
                if (m_compoments == null)
                {
                    m_compoments = new List<Entity>();
                }
                return m_compoments;
            }
        }

        /// <summary>
        /// 子实体 通常是 有从属关系并且有显示意义的子实体存在的地方
        /// </summary>
        public List<Entity> childs
        {
            get
            {
                if (m_childs == null)
                {
                    m_childs = new List<Entity>();
                }
                return m_childs;
            }
        }

        /// <summary>
        ///  注册的消息 字典   destory会自动销毁
        /// </summary>
        public Dictionary<ulong, object> messageTypeDic
        {
            get
            {
                if (m_messageTypeDic == null)
                {
                    m_messageTypeDic = new Dictionary<ulong, object>();
                }
                return m_messageTypeDic;
            }
        }

        public virtual bool IsActive
        {
            set
            {
                isActive = value;
                if (gameObject != null && gameObject.activeSelf != isActive)
                {
                    gameObject.SetActive(isActive);
                }
                if (isActive)
                {
                    OnEnable();
                }
                else
                {
                    OnDisable();
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
            instanceID = IDGenerator.GetEntityID();
            isAsync = false;
        }

        /// <summary>
        ///  初始化
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

        /// <summary>
        /// 外部方法调用
        /// </summary>
        public virtual void Start()
        {
            for (int i = 0; i < compoments.Count; i++)
            {
                compoments[i].Start();
            }
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
            T t = GameFactory.CreateEntity<T>(gameObject);
            t.parent = this;
            t.isComponent = true;
            compoments.Add(t);
            return t;
        }

        public T GetCompoment<T>() where T : Entity
        {
            for (int i = 0; i < compoments.Count; i++)
            {
                Entity e = compoments[i];
                if (typeof(T) == e.GetType())
                {
                    return e as T;
                }
            }
            return null;
        }

        public void RemoveCompoment(Entity compoment, bool destroy)
        {
            if (compoment != null)
            {
                compoments.Remove(compoment);
                if (destroy)
                {
                    compoment.Destroy();
                }
            }
        }

        public void SetParent(Entity parent, bool isSetTransform = false, bool worldPositionStays = false)
        {
            this.parent = parent;
            if (!parent.childs.Contains(this))
            {
                parent.childs.Add(this);
                if (isSetTransform && parent.transform != null && this.transform != null)
                {
                    transform.SetParent(parent.transform, worldPositionStays);
                }
            }
        }

        public void AddChild(Entity child, bool isSetTransform = false, bool worldPositionStays = false)
        {
            child.SetParent(this, isSetTransform);
        }

        public T GetChild<T>() where T : Entity
        {
            for (int i = 0; i < childs.Count; i++)
            {
                Entity e = childs[i];
                if (typeof(T) == e.GetType())
                {
                    return e as T;
                }
            }
            return null;
        }

        public void RemoveChild(Entity child, bool destroy)
        {
            if (child != null)
            {
                childs.Remove(child);
                if (destroy)
                {
                    child.Destroy();
                }
            }
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
            for (int i = 0; i < compoments.Count; i++)
            {
                compoments[i].OnEnable();
            }
        }

        /// <summary>
        ///  元素被隐藏
        /// </summary>
        public virtual void OnDisable()
        {
            for (int i = 0; i < compoments.Count; i++)
            {
                compoments[i].OnDisable();
            }
        }

        /// <summary>
        ///  发送网络请求 
        /// </summary>
        /// <param name="messageType"></param>
        /// <param name="msg"></param>
        public void SendNetworkRequest(int opcode, IMessage msg)
        {

        }

        /// <summary>
        ///  发送网络请求 
        /// </summary>
        /// <param name="messageType"></param>
        /// <param name="msg"></param>
        public async UniTask<T> SendRpc<T>(int opcode, IMessage msg) where T : IMessage, new()
        {
            HFSocket socket = null;
            byte[] bytes = await socket.Call(opcode, msg.ToByteArray());
            T t = new T();
            t.MergeFrom(bytes);
            return t;
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
            if (!messageTypeDic.TryGetValue(key, out temp))
            {
                messageTypeDic.Add(key, null);
                NotificationCenter.Instance.AddObserver(receiver, moduleID, msgID, callback);
            }
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
                if (m_compoments != null)
                {
                    for (int i = m_compoments.Count - 1; i >= 0; i--)
                    {
                        Entity compoment = m_compoments[i];
                        m_compoments.RemoveAt(i);
                        compoment.Destroy();
                    }
                }

                if (m_childs != null)
                {
                    for (int i = m_childs.Count - 1; i >= 0; i--)
                    {
                        Entity child = m_childs[i];
                        m_childs.RemoveAt(i);
                        child.Destroy();
                    }
                }

                parent = null;

                if (m_messageTypeDic != null)
                {
                    foreach (var item in m_messageTypeDic)
                    {
                        NotificationCenter.Instance.RemoveObserver(this, item.Key);
                    }
                    m_messageTypeDic.Clear();
                    m_messageTypeDic = null;
                }

                IsNeedUpdate = false;
                IsNeedFixedUpdate = false;
                IsNeedLateUpdate = false;

                if (!isComponent)
                {
                    DestoryGameObject();
                }

                instanceID = 0;
            }
        }

        /// <summary>
        ///  添加 Monobehivor -> HotFix.Entity 的 linker
        /// </summary>
        /// <typeparam name="T"></typeparam>
        public void AddLinker<T>() where T : HotFixLinker
        {
            T t = gameObject.GetComponent<T>();
            if (t == null)
            {
                t = gameObject.AddComponent<T>();
                t.Injector(instanceID,GetType().Name, this, InversionCall, LinkerDestroy);
            }
        }

        /// <summary>
        /// 通过gameObjcet.linker 调用 此方法
        /// </summary>
        /// <param name="method"></param>
        /// <param name="param"></param>
        public virtual object InversionCall(string method, object param)
        {
            object result = null;
            return result;
        }

        public virtual void LinkerDestroy()
        {
        }
    }
}



