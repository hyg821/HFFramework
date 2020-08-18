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
            }

            Instance = this;
            DontDestroyOnLoad(gameObject);

            MemoryClear();

            GameFactory.Create<GameLooper>(true);

            GameFactory.Create<GameFactory>(true);

            GameFactory.Create<PathManager>(true);

            GameFactory.Create<ResourceManager>(true);

            GameFactory.Create<GameEnvironment>(true);

            GameFactory.Create<NotificationCenter>(true);

            GameFactory.Create<SocketManager>(true);

            GameFactory.Create<AudioManager>(true);

            GameFactory.Create<UIManager>(true);

            GameFactory.Create<WebImageManager>(true);

            GameFactory.Create<DownLoadManager>(true);

            GameFactory.Create<InputManager>(true);

            GameFactory.Create<ObjectPoolManager>(true);

            GameFactory.Create<AppDomainManager>(true);

            GameFactory.Create<TimerManager>(true);

            GameFactory.Create<GameStateChecker>(true);

            GameFactory.Create<GameUtils>(true);

            GameFactory.Create<GameSceneManager>(true);

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
            GameFactory.Instance.Shutdown();
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
            AppDomainManager.Instance.Shutdown();
            GameSceneManager.Instance.Shutdown();
            TimerManager.Instance.Shutdown();
            GameStateChecker.Instance.Shutdown();
            GameUtils.Instance.Shutdown();
            NotificationCenter.Instance.Shutdown();
            GameLooper.Instance.Shutdown();
            HTTPManager.OnQuit();
            MemoryClear();
        }

        /// <summary>
        /// 退出app
        /// </summary>
        public void Quit()
        {
            if (GameEnvironment.Instance.Platform == GamePlatform.Android)
            {
                Application.Quit();
            }
            else if (GameEnvironment.Instance.Platform == GamePlatform.iOS)
            {
                NativeBridge.Exit();
            }
        }

        public void OnApplicationQuit()
        {
            Shutdown();
            Debug.Log("应用退出");
        }
    }
}
