﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Config;

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

    public class GameEnvironment : MonoBehaviour, IManager
    {
        public static GameEnvironment Instance;

        /// <summary>
        ///  运行环境的平台
        /// </summary>
        public GamePlatform Platform;

        /// <summary>
        ///  运行环境
        /// </summary>
        public GameEnvironmentType RuntimeEnvironment;

        /// <summary>
        ///  运行语言
        /// </summary>
        public GameLanguage Language;

        /// <summary>
        ///  加载资源模式 是从editor 读取 还是bundle读取
        /// </summary>
        public LoadAssetPathType LoadAssetPathType;

        /// <summary>
        ///  app版本
        /// </summary>
        public string AppVersion;

        /// <summary>
        ///  资源版本
        /// </summary>
        public string ResourceVersion;

        /// <summary>
        ///  是否开启热更新检测
        /// </summary>
        public bool IsCheckHotFix;

        /// <summary>
        ///  是否开启Log
        /// </summary>
        public bool IsOpenLog;

        /// <summary>
        ///  是否开启本地log 
        /// </summary>
        public bool IsOpenLoaclLog;

        /// <summary>
        ///  模拟设备宽度
        /// </summary>
        public float ServerSceneWidth;

        /// <summary>
        ///  模拟设备高度
        /// </summary>
        public float ServerSceneHeight;

        /// <summary>
        ///  默认帧数
        /// </summary>
        public int TargetFrame;

        /// <summary>
        ///  FixedUpdate 调用 一秒 帧数 
        /// </summary>
        public int FixedUpdateFrame;

        public void Awake()
        {
            Instance = this;
            Init();
        }

        private void Init()
        {
            SwitchPlatform();
            RuntimeEnvironment = GameEnvironmentType.Debug;
            Language = GameLanguage.Chinese;
            SetAppVersion("1.0.0");
            SetResourceVersion("1.0.0");
            OpenLog(true);
            OpenLocalLog(false);
            TargetFrame = 60;
            FixedUpdateFrame = 10;
            ServerSceneWidth = 1920;
            ServerSceneHeight = 1080;
            Application.runInBackground = true;
            Screen.sleepTimeout = SleepTimeout.NeverSleep;
            Application.targetFrameRate = TargetFrame;
            Time.fixedDeltaTime = 1.0f / FixedUpdateFrame;
        }

        /// <summary>
        ///  选择运行时平台
        /// </summary>
        public void SwitchPlatform()
        {
            switch (Application.platform)
            {
                case RuntimePlatform.OSXEditor:
                    Platform = GamePlatform.Editor;
                    LoadAssetPathType = LoadAssetPathType.Editor;
                    break;
                case RuntimePlatform.WindowsEditor:
                    Platform = GamePlatform.Editor;
                    LoadAssetPathType = LoadAssetPathType.Editor;
                    break;
                case RuntimePlatform.WindowsPlayer:
                    Platform = GamePlatform.Windows;
                    LoadAssetPathType = LoadAssetPathType.AssetBundle;
                    break;
                case RuntimePlatform.OSXPlayer:
                    Platform = GamePlatform.Mac;
                    LoadAssetPathType = LoadAssetPathType.AssetBundle;
                    break;
                case RuntimePlatform.IPhonePlayer:
                    Platform = GamePlatform.iOS;
                    LoadAssetPathType = LoadAssetPathType.AssetBundle;
                    break;
                case RuntimePlatform.Android:
                    Platform = GamePlatform.Android;
                    LoadAssetPathType = LoadAssetPathType.AssetBundle;
                    break;
                case RuntimePlatform.WebGLPlayer:
                    Platform = GamePlatform.Web;
                    LoadAssetPathType = LoadAssetPathType.AssetBundle;
                    break;
                default:
                    break;
            }
            HFLog.Platform = Platform;
        }

        public void SetAppVersion(string version)
        {
            AppVersion = version;
        }

        public void SetResourceVersion(string s)
        {
            ResourceVersion = s;
        }

        /// <summary>
        ///  设置debug的开启和关闭
        /// </summary>
        /// <param name="b"></param>
        /// <returns></returns>
        public void OpenLog(bool b)
        {
            IsOpenLog = b;
            HFLog.IsOpenLog = IsOpenLog;
        }

        public void OpenLocalLog(bool b)
        {
            IsOpenLoaclLog = b;
            LogCat log = gameObject.GetComponent<LogCat>();
            if (IsOpenLoaclLog == true && log == null)
            {
                log = gameObject.AddComponent<LogCat>();
            }
            else if (IsOpenLoaclLog == false && log != null)
            {
                GameObject.Destroy(log);
                log = null;
            }
        }

        public void DestroyManager()
        {
            Instance = null;
        }
    }
}
