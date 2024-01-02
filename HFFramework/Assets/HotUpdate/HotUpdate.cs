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
                GameFactory.CreateSingleton<GameFactory>();
                GameFactory.CreateSingleton<DownLoadManager>();
                GameFactory.CreateSingleton<GameEnvironment>();
                GameFactory.CreateSingleton<PathManager>();
                GameFactory.CreateSingleton<AssetManager>();
                GameFactory.CreateSingleton<GameUtils>();
                GameFactory.CreateSingleton<TimerManager>();
                GameFactory.CreateSingleton<ObjectPoolManager>();
                GameFactory.CreateSingleton<GameLooper>();
                GameFactory.CreateSingleton<NotificationCenter>();
                GameFactory.CreateSingleton<SocketManager>();
                GameFactory.CreateSingleton<WebImageManager>();
                GameFactory.CreateSingleton<AudioManager>();
                GameFactory.CreateSingleton<UIManager>();
                GameFactory.CreateSingleton<InputManager>();
                GameFactory.CreateSingleton<GameStateChecker>();
                GameFactory.CreateSingleton<GameSceneManager>();
                GameSceneManager.Instance.ChangeScene<StartScene>();
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

