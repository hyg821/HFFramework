using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cysharp.Threading.Tasks;
using Google.Protobuf;

namespace HFFramework
{
    /// <summary>
    /// Entity 理解 
    /// Entity 当作为数据层的时候 gameObject 就不需要被创建 
    /// Entity 当作为控制层+表现层的时候 需要创建对应的 gameObject 
    /// 
    /// 函数执行顺序 同步 Awake - LoadResources - FindElement - ElementInit - ReceiveMessage - Start - Component.Start
    /// 函数执行顺序 异步 LoadResourcesAsync - Awake - FindElement - ElementInit - ReceiveMessage - Start - Component.Start
    /// 
    /// Entity
    ///     |
    ///     |—— component
    ///     |
    ///     |—— component
    ///     |
    ///     GameObject (视图层)
    ///                | 
    ///                | _____  Monobehivor
    ///                | 
    ///                | _____  Monobehivor
    /// </summary>
    [Serializable]
    public class Entity
    {
        /// <summary>
        /// 类型名字
        /// </summary>
        public string typeName;

        /// <summary>
        ///  标记每一个元素 的 id
        /// </summary>
        public long instanceId;

        /// <summary>
        /// 名字
        /// </summary>
        public string name;

        /// <summary>
        /// 是否异步创建
        /// </summary>
        public bool isAsync = false;

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

        /// <summary>
        ///  本体entity的帮助类
        /// </summary>
        public List<Component> components = new List<Component>();

        /// <summary>
        /// 子实体 通常是 有从属关系并且有显示意义的子实体存在的地方
        /// </summary>
        public List<Entity> childs = new List<Entity>();

        /// <summary>
        ///  注册的消息 字典   destory会自动销毁
        /// </summary>
        public HashSet<ulong> messageTypeSet = new HashSet<ulong>();

        /// <summary>
        /// 是否激活
        /// </summary>
        public virtual bool IsActive
        {
            set
            {
                if (gameObject != null && gameObject.activeSelf != value)
                {
                    gameObject.SetActive(value);
                }
                if (value)
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
                return gameObject.activeSelf;
            }
        }

        /// <summary>
        ///  是否销毁
        /// </summary>
        public bool IsDisposed
        {
            get
            {
                return instanceId == 0;
            }
        }

        public Entity()
        {
            instanceId = IDGenerator.GetEntityId();
            isAsync = false;
            typeName = GetType().Name;
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
        /// 如果是entity 那么awake之后调用 
        /// 如果是组件 那么由所在的entity 的awake调用
        /// </summary>
        public virtual void Start()
        {
            for (int i = 0; i < components.Count; i++)
            {
                components[i].Start();
            }
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
            GameObject prefab = await ResourceManager.Instance.GetPrefabAsync(packageName, assetName);
            GameObject go = await GameFactory.InstantiateAsync(prefab);
            SetGameObject(go);
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

        public T AddCompoment<T>() where T : Component, new()
        {
            T t = GameFactory.CreateComponent<T>(this);
            components.Add(t);
            return t;
        }

        public T GetCompoment<T>() where T : Component
        {
            for (int i = 0; i < components.Count; i++)
            {
                Component e = components[i];
                if (typeof(T) == e.GetType())
                {
                    return e as T;
                }
            }
            return null;
        }

        public void RemoveCompoment(Component component)
        {
            if (component != null)
            {
                components.Remove(component);
                component.OnDestroy();
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
            for (int i = 0; i < components.Count; i++)
            {
                components[i].OnUpdate(deltaTime);
            }
        }

        /// <summary>
        ///  同理 update 
        /// </summary>
        public virtual void OnFixedUpdate(float deltaTime)
        {
            for (int i = 0; i < components.Count; i++)
            {
                components[i].OnFixedUpdate(deltaTime);
            }
        }

        /// <summary>
        /// 同理 update
        /// </summary>
        public virtual void OnLateUpdate(float deltaTime)
        {
            for (int i = 0; i < components.Count; i++)
            {
                components[i].OnLateUpdate(deltaTime);
            }
        }

        /// <summary>
        ///  元素被显示出来
        /// </summary>
        public virtual void OnEnable()
        {
            for (int i = 0; i < components.Count; i++)
            {
                components[i].OnEnable();
            }
        }

        /// <summary>
        ///  元素被隐藏
        /// </summary>
        public virtual void OnDisable()
        {
            for (int i = 0; i < components.Count; i++)
            {
                components[i].OnDisable();
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
        public async UniTask<T> RpcCall<T>(int opcode, IMessage msg) where T : IMessage, new()
        {
            HFSocket socket = null;
            byte[] bytes = await socket.Call(opcode, msg.ToByteArray());
            if (!IsDisposed)
            {
                T t = new T();
                t.MergeFrom(bytes);
                return t;
            }
            else
            {
                return await UniTask.FromException<T>(new Exception($"Entity {this.instanceId} {this.GetType()} 已经被dispose"));
            }
        }

        /// <summary>
        ///  发送消息
        /// </summary>
        public void SendNotificationMessage(ushort moduleId, int msgId, object obj)
        {
            NotificationCenter.Instance.Send(moduleId, msgId, this, obj);
        }

        /// <summary>
        ///  接收 通知中心 信息   对应发送消息 和 发送通知
        /// </summary>
        /// <param name="receiver">this</param>
        /// <param name="messageType"> 消息类型 int  </param>
        /// <param name="callback"> 信息回调 </param>
        public void ReceiveNotificationMessage(object receiver, ushort moduleId, int msgId, Action<NotificationMessage> callback)
        {
            ulong key = NotificationCenter.ConvertToKey(moduleId, msgId);
            if (!messageTypeSet.Contains(key))
            {
                messageTypeSet.Add(key);
                NotificationCenter.Instance.AddObserver(receiver, moduleId, msgId, callback);
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
            if (IsDisposed)
            {
                HFLog.E("Entity 重复销毁 Id " + instanceId);
                return;
            }

            for (int i = components.Count - 1; i >= 0; i--)
            {
                Component compoment = components[i];
                components.RemoveAt(i);
                compoment.OnDestroy();
            }

            for (int i = childs.Count - 1; i >= 0; i--)
            {
                Entity child = childs[i];
                childs.RemoveAt(i);
                child.Destroy();
            }

            parent = null;

            foreach (var item in messageTypeSet)
            {
                NotificationCenter.Instance.RemoveObserver(this, item);
            }
            messageTypeSet.Clear();

            IsNeedUpdate = false;
            IsNeedFixedUpdate = false;
            IsNeedLateUpdate = false;

            DestoryGameObject();

            GameFactory.RemoveEntity(this);

            instanceId = 0;
        }


        public override string ToString()
        {
            return "类型 : " + GetType()+ " 实例id : "+instanceId;
        }

        /// <summary>
        ///  entity  持有---> gameObject  挂载----> HotFixLinker -- 回调
        ///       |__________________________________________________________|
        /// </summary>
        public void AddLinker<T>() where T : HotFixLinker
        {
            T t = gameObject.GetComponent<T>();
            if (t == null)
            {
                t = gameObject.AddComponent<T>();
                t.Injector(instanceId, GetType().Name, this, InversionCall, LinkerDestroy);
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



