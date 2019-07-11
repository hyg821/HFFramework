using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using HFFramework;

namespace HotFix
{
    public class BaseElement
    {
        /// <summary>
        ///  全局控制 标记
        /// </summary>
        protected static long GlobalID = 0;

        /// <summary>
        ///  标记每一个元素 的 id  通过GlobalIdControl 每次创建都+1
        /// </summary>
        public long elementID;

        /// <summary>
        ///  element 对应的 游戏物体
        /// </summary>
        public GameObject gameObject;
        public void SetGameObject(GameObject value)
        {
            gameObject = value;
            transform = gameObject.transform;
        }

        /// <summary>
        ///  gameObject 的 transform
        /// </summary>
        public Transform transform;

        /// <summary>
        ///  父element
        /// </summary>
        public BaseElement parent;

        /// <summary>
        ///  获取唯一标识
        /// </summary>
        /// <returns></returns>
        private static long GetGlobalID()
        {
            return GlobalID++;
        }

        private List<BaseElement> compomentList;
        /// <summary>
        /// 组件数组
        /// </summary>
        public List<BaseElement> CompomentList
        {
            get
            {
                if (compomentList == null)
                {
                    compomentList = new List<BaseElement>();
                }
                return compomentList;
            }
        }

        /// <summary>
        ///  管理子物体的字典
        /// </summary>
        private Dictionary<long, BaseElement> subElementDic;
        public Dictionary<long, BaseElement> SubElementDic
        {
            set
            {
                subElementDic = value;
            }
            get
            {
                if (subElementDic == null)
                {
                    subElementDic = new Dictionary<long, BaseElement>();
                }
                return subElementDic;
            }
        }

        /// <summary>
        ///  注册的消息 字典   destory会自动销毁
        /// </summary>
        public Dictionary<ulong, object> messageTypeDic;
        public Dictionary<ulong, object> MessageTypeDic
        {
            set
            {
                messageTypeDic = value;
            }
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
                }
                if (value == true)
                {
                    ElementDidAppear();
                }
                else
                {
                    ElementDidDisAppear();
                }
            }
            get
            {
                return isActive;
            }
        }

        private List<Coroutine> coroutineList = new List<Coroutine>();

        public BaseElement()
        {

        }

        public static T CreateElement<T>() where T : BaseElement, new()
        {
            T t1 = new T();
            t1.elementID = GetGlobalID();
            t1.Awake();
            return t1;
        }

        public static T CreateElement<T>(GameObject gameObject = null) where T : BaseElement, new()
        {
            T t1 = new T();
            t1.elementID = GetGlobalID();
            t1.SetGameObject(gameObject);
            t1.Awake();
            return t1;
        }

        public static T CreateElement<T>(GameObject gameObject = null, BaseElement parent = null) where T : BaseElement, new()
        {
            T t1 = new T();
            t1.elementID = GetGlobalID();
            t1.parent = parent;
            t1.SetGameObject(gameObject);
            t1.Awake();
            return t1;
        }

        /// <summary>
        ///  脚本被生成重载方法
        /// </summary>
        public virtual void Awake()
        {

        }

        /// <summary>
        ///  对应接收消息的 重载方法
        /// </summary>
        public virtual void ReceiveMessage()
        {

        }

        /// <summary>
        ///  成员变量初始化对应重载方法
        /// </summary>
        public virtual void ElementInit()
        {

        }

        /// <summary>
        ///  加载资源 重载方法
        /// </summary>
        public virtual void LoadResources()
        {

        }

        /// <summary>
        /// 寻找子物体 重载方法
        /// </summary>
        public virtual void FindElement()
        {

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

        public T AddCompoment<T>() where T : BaseElement ,new()
        {
            T t1 = BaseElement.CreateElement<T>(gameObject);
            t1.parent = this;
            CompomentList.Add(t1);
            return t1;
        }

        public T GetCompoment<T>() where T : BaseElement
        {
            for (int i = 0; i < CompomentList.Count; i++)
            {
                BaseElement e = CompomentList[i];
                if (typeof(T)==e.GetType())
                {
                    return e as T;
                }
            }
            return null;
        }

        public void RemoveCompoment(BaseElement t1)
        {
            int index = -1;
            for (int i = 0; i < CompomentList.Count; i++)
            {
                BaseElement e1 = CompomentList[i];
                if (e1.elementID == t1.elementID)
                {
                    index = i;
                    break;
                }
            }
            if (index!=-1)
            {
                CompomentList[index].Destory();
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

        /// <summary>
        ///  添加子元素 方法
        /// </summary>
        /// <param name="ele"></param>
        public void AddSubElement(BaseElement ele)
        {
            if (!SubElementDic.TryGetValue(ele.elementID,out ele))
            {
                ele.parent = this;
                SubElementDic.Add(ele.elementID, ele);
            }
        }

        public void SetParent(GameObject g)
        {
            transform.SetParent(g.transform, false);
        }

        public void SetParent(BaseElement g)
        {
            parent = g;
            transform.SetParent(g.transform, false);
        }

        /// <summary>
        ///  显示一个 element  并且把他 作为自己的子物体
        /// </summary>
        /// <param name="e"></param>
        public void SetChild(BaseElement child)
        {
            child.transform.SetParent(transform, false);
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
                    GameUpdate.PrepareForUpdate(this);
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
                    GameUpdate.PrepareForFixedUpdate(this);
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
                    GameUpdate.PrepareForFixedUpdate(this);
                }
            }
            get
            {
                return isNeedLateUpdate;
            }
        }

        /// <summary>
        ///  如果需要 开启update 方法 只需要设置 IsNeedLateUpdate=true 并且重载M_Update 方法
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
        public virtual void ElementDidAppear()
        {

        }

        /// <summary>
        ///  元素被隐藏
        /// </summary>
        public virtual void ElementDidDisAppear()
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

        public void PlayMusic(string assetBundlePackageName, string musicName)
        {
            AudioPlayer player = AudioManager.Instance.GetFreeAudioPlayer();
            player.SetAudioClipAndPlay(assetBundlePackageName, musicName);
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

        public void ShowToast(string text)
        {

        }

        /// <summary>
        ///  销毁BaseElement 重载方法
        /// </summary>
        public virtual void Destory()
        {
            if (compomentList != null)
            {
                for (int i = 0; i < compomentList.Count; i++)
                {
                    compomentList[i].Destory();
                }
                compomentList.Clear();
                compomentList = null;
            }

            if (coroutineList != null)
            {
                for (int i = 0; i < coroutineList.Count; i++)
                {
                    StopCoroutine(coroutineList[i]);
                }
                coroutineList.Clear();
                coroutineList = null;
            }

            if (subElementDic != null)
            {
                foreach (var item in subElementDic)
                {
                    item.Value.Destory();
                }
                subElementDic.Clear();
                subElementDic = null;
            }

            if (messageTypeDic != null)
            {
                foreach (var item in messageTypeDic)
                {
                    NotificationCenter.Instance.RemoveObserver(this, item.Key);
                }
                messageTypeDic.Clear();
                messageTypeDic = null;
            }

            parent = null;
            gameObject = null;

            if (IsNeedUpdate == true)
            {
                IsNeedUpdate = false;
            }

            if (IsNeedFixedUpdate == true)
            {
                IsNeedFixedUpdate = false;
            }

            if (IsNeedLateUpdate == true)
            {
                IsNeedLateUpdate = false;
            }
        }

        /// <summary>
        ///  销毁游戏物体
        /// </summary>
        public void DestoryGameObject()
        {
            GameObject.Destroy(gameObject);
            gameObject = null;
            transform = null;
        }
    }
}



