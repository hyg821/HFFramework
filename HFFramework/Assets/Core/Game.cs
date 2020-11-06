using UnityEngine;
using System;
using System.Collections;
using Config;
using BestHTTP;

namespace HFFramework
{
    /// <summary>
    ///  HFFramework 框架唯一入口 只能初始化一次
    /// </summary>
    [DefaultExecutionOrder(0)]
    [DisallowMultipleComponent]
    public class Game : MonoBehaviour, IManager
    {
        public static Game Instance;

        void Awake()
        {
            if (Instance!=null)
            {
                Debug.LogError("框架重复加载 Game预设体放在起始场景 起始场景不要重复加载");
                Destroy(gameObject);
                return;
            }

            Instance = this;

            DontDestroyOnLoad(gameObject);

            MemoryClear();

            GameFactory.CreateSingleton<GameEnvironment>();

            GameFactory.CreateSingleton<GameLooper>();

            GameFactory.CreateSingleton<GameFactory>();

            GameFactory.CreateSingleton<PathManager>();

            GameFactory.CreateSingleton<ResourceManager>();

            GameFactory.CreateSingleton<NotificationCenter>();

            GameFactory.CreateSingleton<SocketManager>();

            GameFactory.CreateSingleton<AudioManager>();

            GameFactory.CreateSingleton<UIManager>();

            GameFactory.CreateSingleton<WebImageManager>();

            GameFactory.CreateSingleton<DownLoadManager>();

            GameFactory.CreateSingleton<InputManager>();

            GameFactory.CreateSingleton<ObjectPoolManager>();

            GameFactory.CreateSingleton<HotFixManager>();

            GameFactory.CreateSingleton<TimerManager>();

            GameFactory.CreateSingleton<GameStateChecker>();

            GameFactory.CreateSingleton<GameUtils>();

            GameFactory.CreateSingleton<GameSceneManager>();

            LogicStart();
        }

        /// <summary>
        /// 业务逻辑开始
        /// </summary>
        public void LogicStart()
        {
            GameSceneManager.Instance.ChangeScene<StartScene>();
        }

        /// <summary>
        /// 内存清理
        /// </summary>
        public void MemoryClear()
        {
            Resources.UnloadUnusedAssets();
            for (int i = 0; i < 6; i++)
            {
                GC.Collect();
            }
        }

        /// <summary>
        /// 清理关闭控制器
        /// </summary>
        public void Shutdown()
        {
            PathManager.Instance.Shutdown();
            ResourceManager.Instance.Shutdown();
            GameEnvironment.Instance.Shutdown();
            SocketManager.Instance.Shutdown();
            AudioManager.Instance.Shutdown();
            UIManager.Instance.Shutdown();
            WebImageManager.Instance.Shutdown();
            InputManager.Instance.Shutdown();
            DownLoadManager.Instance.Shutdown();
            ObjectPoolManager.Instance.Shutdown();
            HotFixManager.Instance.Shutdown();
            GameSceneManager.Instance.Shutdown();
            TimerManager.Instance.Shutdown();
            GameStateChecker.Instance.Shutdown();
            GameUtils.Instance.Shutdown();
            NotificationCenter.Instance.Shutdown();
            GameLooper.Instance.Shutdown();
            GameFactory.Instance.Shutdown();
            HTTPManager.OnQuit();
            MemoryClear();
            Destroy(gameObject);
            Instance = null;
        }

        private void OnApplicationQuit()
        {
            Shutdown();
            Debug.Log("应用退出");
        }

        /// <summary>
        /// 退出app
        /// </summary>
        public void Quit()
        {
#if UNITY_ANDROID
            Application.Quit();
#elif UNITY_IOS
            NativeBridge.Exit();
#endif
        }
    }
}
