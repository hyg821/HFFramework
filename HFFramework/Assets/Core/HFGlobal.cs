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

        void Awake()
        {
            if (Instance == null)
            {
                Instance = this;

                MemoryClear();

                gameObject.name = "HFGlobal";
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

        public void DestroyManager()
        {
            GameFactory.Instance.DestroyManager();
            PathManager.Instance.DestroyManager();
            HFResourceManager.Instance.DestroyManager();
            GameEnvironment.Instance.DestroyManager();
            HFSocketManager.Instance.DestroyManager();
            AudioManager.Instance.DestroyManager();
            UIManager.Instance.DestroyManager();
            WebImageManager.Instance.DestroyManager();
            InputManager.Instance.DestroyManager();
            ObjectPoolManager.Instance.DestroyManager();
            AppDomainManager.Instance.DestroyManager();
            GameSceneManager.Instance.DestroyManager();
            TimerManager.Instance.DestroyManager();
            GameStateChecker.Instance.DestroyManager();
            GameUtils.Instance.DestroyManager();
            NotificationCenter.Instance.DestroyManager();
            GameLooper.Instance.DestroyManager();
            MemoryClear();
        }

        public void OnApplicationQuit()
        {
            DestroyManager();
            Debug.Log("应用退出");
        }
    }
}
