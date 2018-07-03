﻿using UnityEngine;
using System;
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

        public static HFGlobal Instance;

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
                gameObject.name = "HFGlobal";
                DontDestroyOnLoad(gameObject);

                Clean();

                //添加游戏工厂
                gameObject.AddComponent<GameFactory>();

                //添加游戏运行环境
                gameObject.AddComponent<GameEnvironment>();

                //资源加载
                resourcesManager = GameFactory.Create<HAResourceManager>("ResourcesManager", true);
                resourcesManager.InitWithRootPath(PathManager.self.PersistentDataPath + "AssetBundles", PathManager.self.StreamingAssetsPath + "AssetBundles", "AssetBundles");

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

                //添加时间控制者
                gameObject.AddComponent<GameTimer>();

                //添加游戏设置者
                gameObject.AddComponent<GameSetter>();

                //添加状态检查者
                gameObject.AddComponent<GameStateChecker>();

                //工具箱
                gameObject.AddComponent<UtilsManager>();

                //添加状态检查者
                gameObject.AddComponent<GameFlowController>();
            }
            else
            {
                Destroy(gameObject);
            }
        }

        public void Clean()
        {
            Resources.UnloadUnusedAssets();
            GC.Collect();
        }

        public void OnApplicationQuit()
        {
            GameEnvironment.Instance = null;
            HAResourceManager.Instance.DestroyManager();
            NotificationCenter.self.DestroyManager();
            HFSocketManager.Instance.DestroyManager();
            AudioManager.Instance.DestroyManager();
            UIManager.Instance.DestroyManager();
            WebImageManager.Instance.DestroyManager();
            InputManager.Instance.DestroyManager();
            ObjectPoolManager.Instance.DestroyManager();
            AppDomainManager.Instance.DestroyManager();
            GameLooper.Instance.DestroyManager();
            GameStateChecker.Instance.DestroyManager();
            Debug.Log("应用退出");
        }
    }
}