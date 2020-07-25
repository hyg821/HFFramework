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
    public class Game : MonoBehaviour, IManager
    {
        public static Game Instance;

        void Awake()
        {
            if (Instance == null)
            {
                Instance = this;

                MemoryClear();

                DontDestroyOnLoad(gameObject);

                GameFactory.Create<GameLooper>(true);

                GameFactory.Create<GameFactory>(true);

                GameFactory.Create<PathManager>(true);

                GameFactory.Create<HFResourceManager>(true);

                GameFactory.Create<GameEnvironment>(true);

                GameFactory.Create<NotificationCenter>(true);

                GameFactory.Create<HFSocketManager>(true);

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
            }
            else
            {
                Destroy(gameObject);
            }
        }

        public void MemoryClear()
        {
            Resources.UnloadUnusedAssets();
            for (int i = 0; i < 6; i++)
            {
                GC.Collect();
            }
        }

        public void Shutdown()
        {
            GameFactory.Instance.Shutdown();
            PathManager.Instance.Shutdown();
            HFResourceManager.Instance.Shutdown();
            GameEnvironment.Instance.Shutdown();
            HFSocketManager.Instance.Shutdown();
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
            MemoryClear();
        }

        public void OnApplicationQuit()
        {
            Shutdown();
            Debug.Log("应用退出");
        }
    }
}
