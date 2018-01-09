using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using DG.Tweening;

namespace HotFix
{
    public class ElementBase
    {
        /// <summary>
        ///  全局控制 标记
        /// </summary>
        static int GlobalIdControl = 0;

        /// <summary>
        ///  标记每一个元素 的 id  通过GlobalIdControl 每次创建都+1
        /// </summary>
        public int elementID;

        /// <summary>
        ///  element 对应的 游戏物体
        /// </summary>
        public GameObject gameObject;

        public GameObject prefab;

        /// <summary>
        ///  管理子物体的字典
        /// </summary>
        private Dictionary<int, ElementBase> subElementDic;
        public Dictionary<int, ElementBase> SubElementDic
        {
            set
            {
                subElementDic = value;
            }
            get
            {
                if (subElementDic == null)
                {
                    subElementDic = new Dictionary<int, ElementBase>();
                }
                return subElementDic;
            }
        }

        /// <summary>
        ///  注册的消息 字典   destory会自动销毁
        /// </summary>
        public Dictionary<int, object> messageTypeDic = new Dictionary<int, object>();
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


        public List<IEnumerator> coroutineList = new List<IEnumerator>();

        /// <summary>
        ///  父element
        /// </summary>
        public ElementBase parent;



        private bool isShow;
        public virtual bool IsShow
        {
            set
            {
                isShow = value;
                if (gameObject != null && gameObject.activeSelf != value)
                {
                    gameObject.SetActive(isShow);
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
                return isShow;
            }
        }



        public static Vector3 showVector = new Vector3(1, 1, 1);
        public static Vector3 hideVector = Vector3.zero;
        public static float FadeTime = 0.25f;


        public ElementBase()
        {

        }

        public static T CreateElementWithPath<T>(string path) where T : ElementBase, new()
        {
            GlobalIdControl++;
            T t1 = new T();
            t1.elementID = GlobalIdControl;
            t1.Awake();
            return t1;
        }


        public static T CreatElementWithGameObject<T>(GameObject g = null) where T : ElementBase, new()
        {
            GlobalIdControl++;
            T t1 = new T();
            t1.elementID = GlobalIdControl;
            t1.gameObject = g;
            t1.Awake();
            return t1;
        }


        public static T CreatElementWithGameObjectAndParent<T>(GameObject g = null, ElementBase parent = null) where T : ElementBase, new()
        {
            GlobalIdControl++;
            T t1 = new T();
            t1.elementID = GlobalIdControl;
            t1.parent = parent;
            t1.gameObject = g;
            t1.Awake();
            return t1;
        }



        public static T CreatElement<T>() where T : ElementBase, new()
        {
            GlobalIdControl++;
            T t1 = new T();
            t1.elementID = GlobalIdControl;
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



        public GameObject Instantiate(GameObject p)
        {
            if (p != null)
            {
                prefab = p;
                gameObject = GameObject.Instantiate(prefab);
                gameObject.name = prefab.name;
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
            return gameObject.transform.Find(path).gameObject;
        }



        public GameObject FindChild(GameObject g, string path)
        {
            return g.transform.Find(path).gameObject;
        }


        /// <summary>
        ///  寻找子物体组件方法
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="path"></param>
        /// <returns></returns>
        public T FindChild<T>(string path)
        {
            return gameObject.transform.Find(path).GetComponent<T>();
        }



        public T FindChild<T>(GameObject g, string path)
        {
            return g.transform.Find(path).GetComponent<T>();
        }


        public void BringSelfToFront()
        {
            if (gameObject != null)
            {
                gameObject.transform.SetAsLastSibling();
            }
        }

        public void BringSelfToBack()
        {
            if (gameObject != null)
            {
                gameObject.transform.SetAsFirstSibling();

            }
        }

        /// <summary>
        ///  设置物体在父元素内的位置
        /// </summary>
        /// <param name="i"></param>
        public void SetSiblingIndex(int i)
        {
            if (gameObject!=null)
            {
                gameObject.transform.SetSiblingIndex(i);
            }
        }

        /// <summary>
        ///  添加子元素 方法
        /// </summary>
        /// <param name="ele"></param>
        public void AddSubElement(ElementBase ele)
        {
            if (!SubElementDic.ContainsKey(ele.elementID))
            {
                SubElementDic.Add(ele.elementID, ele);
            }
        }

        /// <summary>
        ///  设置父物体
        /// </summary>
        /// <param name="e"></param>
        /// <param name="g"></param>
        public void SetParent(ElementBase e, GameObject g)
        {
            e.gameObject.transform.SetParent(g.transform, false);
        }




        public void SetParent(GameObject g)
        {
            gameObject.transform.SetParent(g.transform, false);
        }


        /// <summary>
        ///  显示一个 element  并且把他 作为自己的子物体
        /// </summary>
        /// <param name="e"></param>
        public void ShowSubView(ElementBase e)
        {
            AddSubElement(e);
            e.gameObject.SetActive(true);
            e.gameObject.transform.SetParent(gameObject.transform, false);
        }

        public void ShowViewInView(ElementBase e, GameObject g)
        {
            if (e != this)
            {
                AddSubElement(e);
            }
            e.gameObject.SetActive(true);
            e.gameObject.transform.SetParent(g.transform, false);
        }


        /// <summary>
        ///  开启协程
        /// </summary>
        /// <param name="coroutine"></param>
        public Coroutine StartCoroutine(IEnumerator coroutine)
        {
            coroutineList.Add(coroutine);
            return null;
            //return MainUpdate.self.StartCoroutine(coroutine);
        }

        /// <summary>
        ///  关闭协程
        /// </summary>
        /// <param name="coroutine"></param>
        public void StopCoroutine(IEnumerator coroutine)
        {
            if (coroutine != null)
            {
                coroutineList.Remove(coroutine);
                //MainUpdate.self.StopCoroutine(coroutine);
            }
        }

        public void StopCoroutine(Coroutine c)
        {
            if (c != null)
            {
                //MainUpdate.self.StopCoroutine(c);
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
                    if (value == true)
                    {
                        //MainUpdate.self.updateAction += Update;
                    }
                    else
                    {
                        //MainUpdate.self.updateAction -= Update;
                    }
                }
            }
            get
            {
                return isNeedUpdate;
            }
        }

        public void Update()
        {
            M_Update();
        }


        bool isNeedFixedUpdate = false;
        public bool IsNeedFixedUpdate
        {
            set
            {
                if (value != isNeedFixedUpdate)
                {
                    isNeedFixedUpdate = value;
                    if (value == true)
                    {
                        //MainUpdate.self.fixedUpdateAction += FixedUpdate;
                    }
                    else
                    {
                        //MainUpdate.self.fixedUpdateAction -= FixedUpdate;
                    }
                }
            }
            get
            {
                return isNeedFixedUpdate;
            }
        }



        public void FixedUpdate()
        {
            M_FixedUpdate();
        }


        bool isNeedLateUpdate = false;
        public bool IsNeedLateUpdate
        {
            set
            {
                if (value != isNeedLateUpdate)
                {
                    isNeedLateUpdate = value;
                    if (value == true)
                    {
                        //MainUpdate.self.lateUpdateAction += LateUpdate;
                    }
                    else
                    {
                        //MainUpdate.self.lateUpdateAction -= LateUpdate;
                    }
                }
            }
            get
            {
                return isNeedLateUpdate;
            }
        }

        public void LateUpdate()
        {
            M_LateUpdate();
        }

        public virtual void M_Start()
        {

        }


        /// <summary>
        ///  如果需要 开启update 方法 只需要设置 IsNeedLateUpdate=true 并且重载M_Update 方法
        /// </summary>
        public virtual void M_Update()
        {

        }

        /// <summary>
        ///  同理 update 
        /// </summary>
        public virtual void M_FixedUpdate()
        {

        }

        /// <summary>
        /// 同理 update
        /// </summary>
        public virtual void M_LateUpdate()
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
        ///  显示一个view  
        /// </summary>
        /// <param name="maskView">灰色蒙版</param>
        /// <param name="view">真正的负责显示的元素</param>
        /// <param name="animation">是否要动画</param>
        /// <param name="finishCallback">执行完的回调</param>
        public void Show(GameObject maskView, GameObject view, bool animation, Action finishCallback = null)
        {
            IsShow = true;
            if (animation == false)
            {
                maskView.SetActive(IsShow);
                view.SetActive(IsShow);
                if (finishCallback != null)
                {
                    finishCallback();
                }
            }
            else
            {
                maskView.SetActive(IsShow);
                view.SetActive(true);
                view.transform.localScale = new Vector3(0, 0, 1);
                view.transform.DOScale(Vector3.one, FadeTime).SetEase(Ease.OutBack).OnComplete(delegate ()
                {
                    if (finishCallback != null)
                    {
                        finishCallback();
                    }
                });
            }
        }

        public void Hide(GameObject maskView, GameObject view, bool animation, Action finishCallback = null)
        {
            if (animation == false)
            {
                maskView.SetActive(false);
                view.SetActive(false);
                if (finishCallback != null)
                {
                    finishCallback();
                }
                IsShow = false;
            }
            else
            {
        
                view.transform.localScale = new Vector3(1, 1, 1);
                view.transform.DOScale(new Vector3(0, 0, 1), FadeTime).SetEase(Ease.InBack).OnComplete(delegate ()
                {
                    if (finishCallback != null)
                    {
                        finishCallback();

                    }
                    view.SetActive(false);
                    maskView.SetActive(false);
                    IsShow = false;
                });
            }
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
        ///  发送通知
        /// </summary>
        public void SendNotificationMessage(int messageType, object obj)
        {
            NotificationCenter.self.PostNotification(new NotificationMessage(messageType, null, obj));
        }


        public void PlayMusic(string assetBundlePackageName, string musicName)
        {
            AudioPlayer player = AudioManager.self.GetFreeAudioPlayer();
            player.SetAudioClipAndPlay(assetBundlePackageName, musicName);
        }


        /// <summary>
        ///  接收 通知中心 信息   对应发送消息 和 发送通知
        /// </summary>
        /// <param name="receiver">this</param>
        /// <param name="messageType"> 消息类型 int  </param>
        /// <param name="callback"> 信息回调 </param>
        public void ReceiveNotificationMessage(object receiver, int messageType, Action<NotificationMessage> callback)
        {
            if (!MessageTypeDic.ContainsKey(messageType))
            {
                MessageTypeDic.Add(messageType, null);
                NotificationCenter.self.AddObserver(receiver, messageType, callback);
            }
        }

        public void ShowToast(string text)
        {
            
        }

        /// <summary>
        ///  销毁elementBase 重载方法
        /// </summary>
        public virtual void Destory()
        {
            if (coroutineList!=null)
            {
                for (int i = 0; i < coroutineList.Count; i++)
                {
                    StopCoroutine(coroutineList[i]);
                }
                coroutineList.Clear();
                coroutineList = null;
            }

            if (SubElementDic!=null)
            {
                if (SubElementDic.Values.Count != 0)
                {
                    foreach (ElementBase val in SubElementDic.Values)
                    {
                        val.Destory();
                    }
                }
                SubElementDic.Clear();
                SubElementDic = null;
            }

            if (MessageTypeDic!=null)
            {
                if (MessageTypeDic.Keys.Count != 0)
                {
                    foreach (var item in MessageTypeDic.Keys)
                    {
                        NotificationCenter.self.RemoveObserver(this, item);
                    }
                }
                MessageTypeDic.Clear();
                MessageTypeDic = null;
            }

            parent = null;
            gameObject = null;
            prefab = null;


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
        }
    }
}



