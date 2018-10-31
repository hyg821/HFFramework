using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace  HFFramework
{
    public enum GameEnvironmentEnum
    {
        Develop,
        Debug,
        Release
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

    public class GameEnvironment : MonoBehaviour,IManager
    {
        public static GameEnvironment Instance;

        /// <summary>
        ///  运行环境
        /// </summary>
        public GameEnvironmentEnum runtimeEnvironment;

        /// <summary>
        ///  运行环境的平台
        /// </summary>
        public GamePlatform runtimePlatform;

        /// <summary>
        ///  app版本
        /// </summary>
        public string AppVersion;

        /// <summary>
        ///  资源版本
        /// </summary>
        public string ResourceVersion;

        /// <summary>
        ///  是否开启Log
        /// </summary>
        public bool isOpenLog;

        /// <summary>
        ///  是否开启本地log 
        /// </summary>
        public bool isOpenLoaclLog;

        public void Awake()
        {
            Instance = this;
            AddHelpManager();
            SetRuntimeEnvironment(GameEnvironmentEnum.Develop);
            SetAppVersion();
            SetResourceVersion("0.0.0");
            SwitchPlatform();
            OpenLog(true);
            OpenLocalLog(true);
        }

        public void AddHelpManager()
        {
            gameObject.AddComponent<PathManager>();
        }

        public void SetRuntimeEnvironment(GameEnvironmentEnum e)
        {
            runtimeEnvironment = e;
        }

        /// <summary>
        ///  选择运行时平台
        /// </summary>
        public void SwitchPlatform()
        {
            switch (Application.platform)
            {
                case RuntimePlatform.WebGLPlayer:
                    runtimePlatform = GamePlatform.Web;
                    break;
                case RuntimePlatform.OSXEditor:
                    runtimePlatform = GamePlatform.Editor;
                    break;
                case RuntimePlatform.WindowsEditor:
                    runtimePlatform = GamePlatform.Editor;
                    break;
                case RuntimePlatform.WindowsPlayer:
                    runtimePlatform = GamePlatform.Windows;
                    break;
                case RuntimePlatform.OSXPlayer:
                    runtimePlatform = GamePlatform.Mac;
                    break;
                case RuntimePlatform.IPhonePlayer:
                    runtimePlatform = GamePlatform.iOS;
                    break;
                case RuntimePlatform.Android:
                    runtimePlatform = GamePlatform.Android;
                    break;
                default:
                    break;
            }
        }

        public void SetAppVersion()
        {
            AppVersion = Application.version;
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
            isOpenLog = b;
        }

        public void OpenLocalLog(bool b)
        {
            isOpenLoaclLog = b;
            GameLocalLogger log = gameObject.GetComponent<GameLocalLogger>();
            if (isOpenLoaclLog == true && log == null)
            {
                log = gameObject.AddComponent<GameLocalLogger>();
            }
            else if (log != null && isOpenLoaclLog == false)
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
