using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MainStateChecker : MonoBehaviour {

    //客户端内部通信 基础消息号
    public const int GAME_MESSAGE_BASE = -100000;
    public const int GAME_MESSAGE_HALL_BASE = -200000;
    public const int GAME_MESSAGE_FISHGAME_BASE = -300000;
    public const int GAME_MESSAGE_JIEJI_BASE = -400000;
    public const int GAME_MESSAGE_POKER = -500000;

    /// <summary>
    ///  网络无法连接
    /// </summary>
    public const int MESSAGE_NETWORK_UNUSE = GAME_MESSAGE_BASE + 1;

    /// <summary>
    ///  跳转回登录页面
    /// </summary>
    public const int MESSAGE_POPTOLOGIN = GAME_MESSAGE_BASE + 2;

    /// <summary>
    ///  显示吐司
    /// </summary>
    public const int MESSAGE_SHOWTOAST = GAME_MESSAGE_BASE + 3;

    /// <summary>
    ///  程序暂停
    /// </summary>
    public const int MESSAGE_APPPAUSE = GAME_MESSAGE_BASE + 4;

    /// <summary>
    ///  SDK 支付回调
    /// </summary>
    public const int MESSAGE_HOOLAI_SDK_CALLBACK = GAME_MESSAGE_BASE + 5;

    public static MainStateChecker self;

    public bool networkCanUsed = false;

    private bool isPaused = false;
    public bool IsPaused
    {
        set
        {
            isPaused = value;
            NotificationCenter.DefaultCenter().PostNotification(new NotificationMessage(MESSAGE_APPPAUSE , this, isPaused));
        }
        get
        {
            return isPaused;
        }
    }

    void Awake()
    {
        self = this;
        CheckNetWork();
    }

	
	// Update is called once per frame
	void Update () {
        CheckNetWork(6);
    }

    public void CheckNetWork()
    {
        if (Application.internetReachability == NetworkReachability.NotReachable)
        {
            networkCanUsed = false;
            NotificationCenter.DefaultCenter().PostNotification(new NotificationMessage(MESSAGE_NETWORK_UNUSE, this, null));
        }
        else
        {
            networkCanUsed = true;
        }
    }

    void CheckNetWork(int sec)
    {
        //每10秒检测一次 网络是否能连接（物理层面）
        if (Time.frameCount % sec*100 == 0)
        {
            CheckNetWork();
        }
    }

    void OnApplicationFocus(bool hasFocus)
    {
#if UNITY_EDITOR
#else
        IsPaused = !hasFocus;
#endif
    }

    void OnApplicationPause(bool pauseStatus)
    {
#if UNITY_EDITOR
#else
       IsPaused = pauseStatus;
#endif
    }
}
