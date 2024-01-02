using System;
using System.Collections;
using System.Collections.Generic;
using BestHTTP;
using UnityEngine;

namespace HFFramework
{
    public class HotUpdate
    {
        public static void Main()
        {
            try
            {
                Debug.LogError(1);
                GameFactory.CreateSingleton<GameFactory>();
                Debug.LogError(2);
                GameFactory.CreateSingleton<DownLoadManager>();
                Debug.LogError(3);
                GameFactory.CreateSingleton<GameEnvironment>();
                Debug.LogError(4);
                GameFactory.CreateSingleton<PathManager>();
                Debug.LogError(5);
                GameFactory.CreateSingleton<AssetManager>();
                Debug.LogError(6);
                GameFactory.CreateSingleton<GameUtils>();
                Debug.LogError(7);
                GameFactory.CreateSingleton<TimerManager>();
                Debug.LogError(8);
                GameFactory.CreateSingleton<ObjectPoolManager>();
                Debug.LogError(9);
                GameFactory.CreateSingleton<GameLooper>();
                Debug.LogError(10);
                GameFactory.CreateSingleton<NotificationCenter>();
                Debug.LogError(11);
                GameFactory.CreateSingleton<SocketManager>();
                Debug.LogError(12);
                GameFactory.CreateSingleton<WebImageManager>();
                Debug.LogError(13);
                GameFactory.CreateSingleton<AudioManager>();
                Debug.LogError(14);
                GameFactory.CreateSingleton<UIManager>();
                Debug.LogError(15);
                GameFactory.CreateSingleton<InputManager>();
                Debug.LogError(16);
                GameFactory.CreateSingleton<GameStateChecker>();
                Debug.LogError(17);
                GameFactory.CreateSingleton<GameSceneManager>();
                Debug.LogError(18);
                GameSceneManager.Instance.ChangeScene<StartScene>();
                Debug.LogError(19);
            }
            catch (Exception e)
            {
                Debug.LogError(e);
            }
        }

        public static void Dispose()
        {
            try
            {
                PathManager.Instance.Dispose();
                AssetManager.Instance.Dispose();
                GameEnvironment.Instance.Dispose();
                SocketManager.Instance.Dispose();
                AudioManager.Instance.Dispose();
                UIManager.Instance.Dispose();
                WebImageManager.Instance.Dispose();
                InputManager.Instance.Dispose();
                DownLoadManager.Instance.Dispose();
                ObjectPoolManager.Instance.Dispose();
                GameSceneManager.Instance.Dispose();
                TimerManager.Instance.Dispose();
                GameStateChecker.Instance.Dispose();
                GameUtils.Instance.Dispose();
                NotificationCenter.Instance.Dispose();
                GameLooper.Instance.Dispose();
                GameFactory.Instance.Dispose();
                HTTPManager.OnQuit();
            }
            catch (Exception e)
            {
                Debug.LogError(e);
            }
        }
    }
}

