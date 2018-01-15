using UnityEngine;
using System.Collections;

namespace HFFramework
{
    /// <summary>
    ///  HLFramework 框架唯一入口 只能初始化一次
    /// </summary>
    [DefaultExecutionOrder(0)]
    [DisallowMultipleComponent]
    public class HFGlobal : MonoBehaviour
    {

        public static HFGlobal self;

        /// <summary>
        ///  AeestBundle管理器
        /// </summary>
        public HAResourceManager resourcesManager;

        /// <summary>
        ///  通知中心
        /// </summary>
        public NotificationCenter notificationCenter;

        /// <summary>
        ///  网络管理器
        /// </summary>
        public HASocketManager socketManager;

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
        public DownLoadManager downLoadManager;

        /// <summary>
        ///  输入管理器
        /// </summary>
        public InputManager inputManager;

        /// <summary>
        ///  热更新管理器
        /// </summary>
        public AppDomainManager appDomainManager;

        void Awake()
        {
            if (self == null)
            {
                self = this;
                gameObject.name = "HFGlobal";
                DontDestroyOnLoad(gameObject);

                //添加游戏运行环境
                gameObject.AddComponent<GameEnvironment>();

                //1资源加载   
                GameObject resourcesManagerObj = new GameObject("ResourcesManager");
                resourcesManager = resourcesManagerObj.AddComponent<HAResourceManager>();
                resourcesManager.InitWithRootPath(PathManager.self.PersistentDataPath + "AssetBundles", PathManager.self.StreamingAssetsPath + "AssetBundles", "AssetBundles");
                DontDestroyOnLoad(resourcesManagerObj);

                //2通知中心
                GameObject notificationCenterObj = new GameObject("NotificationCenter");
                notificationCenter = notificationCenterObj.AddComponent<NotificationCenter>();
                DontDestroyOnLoad(notificationCenterObj);

                //3网络
                GameObject socketManagerObj = new GameObject("SocketManager");
                socketManager = socketManagerObj.AddComponent<HASocketManager>();
                DontDestroyOnLoad(socketManagerObj);

                //4声音
                GameObject audioManagerObj = new GameObject("AudioManager");
                audioManager = audioManagerObj.AddComponent<AudioManager>();
                DontDestroyOnLoad(audioManagerObj);

                //5UI 
                GameObject uiManagerObj = new GameObject("UIManager");
                uiManager = uiManagerObj.AddComponent<UIManager>();
                DontDestroyOnLoad(uiManagerObj);

                //6下载
                GameObject downLoadManagerObj = new GameObject("DownLoadManager");
                downLoadManager = downLoadManagerObj.AddComponent<DownLoadManager>();
                DontDestroyOnLoad(downLoadManagerObj);

                //7游戏设置控制器
                GameObject inputManagerObj = new GameObject("InputManager");
                inputManager = inputManagerObj.AddComponent<InputManager>();
                DontDestroyOnLoad(inputManagerObj);

                //8热更新入口
                GameObject appDomainManagerObj = new GameObject("AppDomainManager");
                appDomainManager = appDomainManagerObj.AddComponent<AppDomainManager>();
                DontDestroyOnLoad(appDomainManagerObj);

                //添加游戏循环者
                gameObject.AddComponent<GameLooper>();

                //添加设置游戏者
                gameObject.AddComponent<GameSetter>();

                //添加状态检查者
                gameObject.AddComponent<GameStateChecker>();
            }
            else
            {
                Destroy(gameObject);
            }
        }

        public void OnApplicationQuit()
        {
            GameEnvironment.self = null;
            HAResourceManager.self.DestroyManager();
            NotificationCenter.self.DestroyManager();
            HASocketManager.self.DestroyManager();
            AudioManager.self.DestroyManager();
            UIManager.self.DestroyManager();
            DownLoadManager.self.DestroyManager();
            InputManager.self.DestroyManager();
            AppDomainManager.self.DestroyManager();
            GameLooper.self.DestroyManager();
            GameStateChecker.self.DestroyManager();
            Debug.Log("应用退出");
        }
    }
}
