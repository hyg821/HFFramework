using UnityEngine;
using System;
using System.Collections;
using Config;

namespace HFFramework
{
    /// <summary>
    ///  HFFramework 框架唯一入口 只能初始化一次
    /// </summary>
    [DefaultExecutionOrder(0)]
    [DisallowMultipleComponent]
    public class HFGlobal : MonoBehaviour, IManager
    {

        public static HFGlobal Instance;

        /// <summary>
        ///  AeestBundle管理器
        /// </summary>
        public HFResourceManager resourcesManager;

        /// <summary>
        ///  通知中心
        /// </summary>
        public NotificationCenter notificationCenter;

        /// <summary>
        ///  网络管理器
        /// </summary>
        public HFSocketManager socketManager;

        /// <summary>
        ///  声音管理器
        /// </summary>
        public AudioManager audioManager;

        /// <summary>
        /// UI管理器
        /// </summary>
        public UIManager uiManager;

        /// <summary>
        ///  下载图片管理器
        /// </summary>
        public WebImageManager webImageManager;

        /// <summary>
        ///  输入管理器
        /// </summary>
        public InputManager inputManager;

        /// <summary>
        ///  对象池管理器
        /// </summary>
        public ObjectPoolManager poolManager;

        /// <summary>
        ///  热更新管理器
        /// </summary>
        public AppDomainManager appDomainManager;

        void Awake()
        {
            if (Instance == null)
            {
                Instance = this;

                MemoryClear();

                gameObject.name = "HFGlobal";
                DontDestroyOnLoad(gameObject);

                //添加游戏工厂
                gameObject.AddComponent<GameFactory>();

                //负责提供路径
                gameObject.AddComponent<PathManager>();

                //资源加载
                resourcesManager = GameFactory.Create<HFResourceManager>("ResourcesManager", true);
                resourcesManager.InitWithRootPath(PathManager.Instance.PersistentDataAssetBundlesPath, PathManager.Instance.StreamingAssetsAssetBundlesPath , "AssetBundles");

                //添加游戏运行环境 + 配置文件
                gameObject.AddComponent<GameEnvironment>();

                //2通知中心
                notificationCenter = GameFactory.Create<NotificationCenter>("NotificationCenter", true);

                //3网络
                socketManager = GameFactory.Create<HFSocketManager>("SocketManager", true);

                //4声音
                audioManager = GameFactory.Create<AudioManager>("AudioManager", true);

                //5UI 
                uiManager = GameFactory.Create<UIManager>("UIManager", true);

                //6图片下载
                webImageManager = GameFactory.Create<WebImageManager>("WebImageManager", true);

                //7游戏设置控制器
                inputManager = GameFactory.Create<InputManager>("InputManager", true);

                //8对象池
                poolManager = GameFactory.Create<ObjectPoolManager>("ObjectPoolManager", true);
                
                //9热更新入口
                appDomainManager = GameFactory.Create<AppDomainManager>("AppDomainManager", true);

                //添加游戏循环者
                gameObject.AddComponent<GameLooper>();

                //添加定时器
                gameObject.AddComponent<TimerManager>();

                //添加状态检查者
                gameObject.AddComponent<GameStateChecker>();

                //工具箱
                gameObject.AddComponent<GameUtils>();

                //添加游戏状态机
                gameObject.AddComponent<GameStateManager>();     
            }
            else
            {
                Destroy(gameObject);
            }
        }

        public void MemoryClear()
        {
            Resources.UnloadUnusedAssets();
            GC.Collect();
        }

        public void DestroyManager()
        {
            GameFactory.Instance.DestroyManager();
            HFResourceManager.Instance.DestroyManager();
            NotificationCenter.Instance.DestroyManager();
            HFSocketManager.Instance.DestroyManager();
            AudioManager.Instance.DestroyManager();
            UIManager.Instance.DestroyManager();
            WebImageManager.Instance.DestroyManager();
            InputManager.Instance.DestroyManager();
            ObjectPoolManager.Instance.DestroyManager();
            AppDomainManager.Instance.DestroyManager();
            GameLooper.Instance.DestroyManager();
            GameStateChecker.Instance.DestroyManager();
            GameUtils.Instance.DestroyManager();
            GameStateManager.Instance.DestroyManager();
            TimerManager.Instance.DestroyManager();
            GameEnvironment.Instance.DestroyManager();
            MemoryClear();
        }

        public void OnApplicationQuit()
        {
            DestroyManager();
            Debug.Log("应用退出");
        }
    }
}
