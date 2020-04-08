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

                //添加游戏工厂
                GameFactory.Create<GameFactory>(true);

                //负责提供路径
                GameFactory.Create<PathManager>(true);

                //资源加载
                GameFactory.Create<HFResourceManager>(true);

                //添加游戏运行环境
                GameFactory.Create<GameEnvironment>(true);

                //2通知中心
                GameFactory.Create<NotificationCenter>(true);

                //3网络
                GameFactory.Create<HFSocketManager>(true);

                //4声音
                GameFactory.Create<AudioManager>(true);

                //5UI 
                GameFactory.Create<UIManager>(true);

                //6图片下载
                GameFactory.Create<WebImageManager>(true);

                //7游戏设置控制器
                GameFactory.Create<InputManager>(true);

                //8对象池
                GameFactory.Create<ObjectPoolManager>(true);

                //9热更新入口
                GameFactory.Create<AppDomainManager>(true);

                //添加定时器
                GameFactory.Create<TimerManager>(true);

                //添加状态检查者
                GameFactory.Create<GameStateChecker>(true);

                //工具箱
                GameFactory.Create<GameUtils>(true);

                //10添加游戏状态机
                GameFactory.Create<GameProcedureManager>(true);
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
            GameProcedureManager.Instance.DestroyManager();
            TimerManager.Instance.DestroyManager();
            GameStateChecker.Instance.DestroyManager();
            GameUtils.Instance.DestroyManager();
            NotificationCenter.Instance.DestroyManager();
            MemoryClear();
        }

        public void OnApplicationQuit()
        {
            DestroyManager();
            Debug.Log("应用退出");
        }
    }
}
