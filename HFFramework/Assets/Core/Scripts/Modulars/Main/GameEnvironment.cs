using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Config;
using System;

namespace  HFFramework
{
    public enum GameEnvironmentType
    {
        Debug,
        Release
    }

    public enum LoadAssetPathType
    {
        /// <summary>
        ///  编辑器 读取
        /// </summary>
        Editor,
        /// <summary>
        ///  资源包读取
        /// </summary>
        AssetBundle,
        /// <summary>
        /// 网络
        /// </summary>
        Web
    }

    public enum GamePlatform
    {
        Android,
        iOS,
        Web,
        Windows,
        Mac,
        Editor
    }

    public enum GameLanguage
    {
        Chinese,
        English
    }

    /// <summary>
    /// 游戏运行环境 负责设置各种参数
    /// </summary>
    public class GameEnvironment : MonoBehaviour, IManager
    {
        public static GameEnvironment Instance;

        public EnvironmentConfig config;

        public void Awake()
        {
            Instance = this;
            Init();
        }

        private void Init()
        {
            config = Resources.Load<EnvironmentConfig>("EnvironmentConfig");
            if (config.AutoSwitchPlatform)
            {
                SwitchPlatform();
            }
            Application.targetFrameRate = config.TargetFrame;
            Time.fixedDeltaTime = 1.0f / config.FixedUpdateFrame;
            Application.runInBackground = true;
            Screen.sleepTimeout = SleepTimeout.NeverSleep;
            OpenLocalLog(config.IsOpenLoaclLog);
            SetFullScreen(config.FullScreen);
            AppDomain.CurrentDomain.UnhandledException += CatchException;
        }

        /// <summary>
        ///  选择运行时平台
        /// </summary>
        public void SwitchPlatform()
        {
            switch (Application.platform)
            {
                case RuntimePlatform.OSXEditor:
                    config.Platform = GamePlatform.Editor;
                    config.LoadAssetPathType = LoadAssetPathType.Editor;
                    break;
                case RuntimePlatform.WindowsEditor:
                    config.Platform = GamePlatform.Editor;
                    config.LoadAssetPathType = LoadAssetPathType.Editor;
                    break;
                case RuntimePlatform.WindowsPlayer:
                    config.Platform = GamePlatform.Windows;
                    config.LoadAssetPathType = LoadAssetPathType.AssetBundle;
                    break;
                case RuntimePlatform.OSXPlayer:
                    config.Platform = GamePlatform.Mac;
                    config.LoadAssetPathType = LoadAssetPathType.AssetBundle;
                    break;
                case RuntimePlatform.IPhonePlayer:
                    config.Platform = GamePlatform.iOS;
                    config.LoadAssetPathType = LoadAssetPathType.AssetBundle;
                    break;
                case RuntimePlatform.Android:
                    config.Platform = GamePlatform.Android;
                    config.LoadAssetPathType = LoadAssetPathType.AssetBundle;
                    break;
                case RuntimePlatform.WebGLPlayer:
                    config.Platform = GamePlatform.Web;
                    config.LoadAssetPathType = LoadAssetPathType.AssetBundle;
                    break;
                default:
                    break;
            }
            HFLog.Platform = config.Platform;
        }

        public void OpenLocalLog(bool b)
        {
            LogCat log = gameObject.GetComponent<LogCat>();
            if (log == null)
            {
                log = gameObject.AddComponent<LogCat>();
            }
            else
            {
                Destroy(log);
                log = null;
            }
        }

        public void SetFullScreen(bool full)
        {
            Screen.fullScreen = full;
        }

        private void CatchException(object sender, UnhandledExceptionEventArgs e)
        {
            HFLog.E("未捕获异常 "+e.ExceptionObject);
        }

        public void Shutdown()
        {
            AppDomain.CurrentDomain.UnhandledException -= CatchException;
            Instance = null;
        }
    }
}
