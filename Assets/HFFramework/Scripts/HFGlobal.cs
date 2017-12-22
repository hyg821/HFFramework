using UnityEngine;

[DisallowMultipleComponent]
[DefaultExecutionOrder(0)]
public class HFGlobal : MonoBehaviour {

	public static HFGlobal self;

    /// <summary>
    ///  声音管理器
    /// </summary>
	public GameObject audioManager;

    /// <summary>
    ///  网络管理器
    /// </summary>
	public GameObject socketManager;

    /// <summary>
    ///  下载图片管理器
    /// </summary>
	public GameObject downLoadManager;

    /// <summary>
    ///  AeestBundle管理器
    /// </summary>
	public GameObject resourcesManager;

    /// <summary>
    ///  输入管理器
    /// </summary>
    public GameObject inputManager;

    /// <summary>
    /// UI管理器
    /// </summary>
    public GameObject uiManager;

    /// <summary>
    ///  通知中心
    /// </summary>
    public GameObject notificationCenter;

    void Awake()
    {
        if (self==null)
        {
            self = this;
            gameObject.name = "HFGlobal";
            DontDestroyOnLoad(gameObject);

            //创建 各种管理对象

            //1  UI 
            uiManager = new GameObject("UIManager");
            uiManager.AddComponent<UIManager>();
            DontDestroyOnLoad(uiManager);

            //2  声音
            audioManager = new GameObject("AudioManager");
            audioManager.AddComponent<AudioManager>();
            DontDestroyOnLoad(audioManager);

            //4  网络
            socketManager = new GameObject("SocketManager");
            socketManager.AddComponent<HASocketManager>();
            DontDestroyOnLoad(socketManager);

            //5  下载
            downLoadManager = new GameObject("DownLoadManager");
            downLoadManager.AddComponent<DownLoadManager>();
            DontDestroyOnLoad(downLoadManager);

            //8   资源加载   
            resourcesManager = new GameObject("ResourcesManager");
            resourcesManager.AddComponent<HAResourceManager>();
            DontDestroyOnLoad(resourcesManager);

            //6   游戏设置控制器
            inputManager = new GameObject("InputManager");
            inputManager.AddComponent<InputManager>();
            DontDestroyOnLoad(inputManager);

            //6   通知中心
            notificationCenter = new GameObject("NotificationCenter");
            notificationCenter.AddComponent<InputManager>();
            DontDestroyOnLoad(notificationCenter);
            

            //
        }
    }

	void GameDestory()
    {
		uiManager=null;
		Destroy (uiManager);

		audioManager=null;
		Destroy (audioManager);

        socketManager = null;
		Destroy (socketManager);

		downLoadManager=null;
		Destroy (downLoadManager);

		resourcesManager=null;
		Destroy (resourcesManager);

        inputManager = null;
		Destroy (inputManager);
	} 
}
