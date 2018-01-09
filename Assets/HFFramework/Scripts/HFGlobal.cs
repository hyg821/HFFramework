using UnityEngine;

/// <summary>
///  HLFramework 框架唯一入口 只能初始化一次
/// </summary>
[DefaultExecutionOrder(0)]
[DisallowMultipleComponent]
public class HFGlobal : MonoBehaviour {

	public static HFGlobal self;

    /// <summary>
    ///  AeestBundle管理器
    /// </summary>
    public HAResourceManager resourcesManager;

    /// <summary>
    ///  通知中心
    /// </summary>
    public NotificationCenter NotificationCenter;

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
            gameObject.AddComponent<GameLooper>();
            gameObject.name = "HFGlobal";
            DontDestroyOnLoad(gameObject);

            //1资源加载   
            GameObject resourcesManagerObj = new GameObject("ResourcesManager");
            resourcesManager = resourcesManagerObj.AddComponent<HAResourceManager>();
            resourcesManager.InitWithRootPath(Application.persistentDataPath + "/AssetBundles", Application.streamingAssetsPath + "/AssetBundles", "AssetBundles");
            DontDestroyOnLoad(resourcesManagerObj);

            //2通知中心
            GameObject notificationCenterObj = new GameObject("NotificationCenter");
            NotificationCenter = notificationCenterObj.AddComponent<NotificationCenter>();
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
        }
    }
}
