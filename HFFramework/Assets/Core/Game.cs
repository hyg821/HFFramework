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
        public void Dispose()
        {
            PathManager.Instance.Dispose();
            ResourceManager.Instance.Dispose();
            GameEnvironment.Instance.Dispose();
            SocketManager.Instance.Dispose();
            AudioManager.Instance.Dispose();
            UIManager.Instance.Dispose();
            WebImageManager.Instance.Dispose();
            InputManager.Instance.Dispose();
            DownLoadManager.Instance.Dispose();
            ObjectPoolManager.Instance.Dispose();
            HotFixManager.Instance.Dispose();
            GameSceneManager.Instance.Dispose();
            TimerManager.Instance.Dispose();
            GameStateChecker.Instance.Dispose();
            GameUtils.Instance.Dispose();
            NotificationCenter.Instance.Dispose();
            GameLooper.Instance.Dispose();
            GameFactory.Instance.Dispose();
            HTTPManager.OnQuit();
            MemoryClear();
            Destroy(gameObject);
            Instance = null;
        }

        private void OnApplicationQuit()
        {
            Dispose();
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
