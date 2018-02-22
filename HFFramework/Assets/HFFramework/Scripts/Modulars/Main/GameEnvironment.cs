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

    public class GameEnvironment : MonoBehaviour
    {
        public static GameEnvironment self;

        /// <summary>
        ///  运行环境
        /// </summary>
        public GameEnvironmentEnum runtimeEnvironment;

        /// <summary>
        ///  运行环境的平台
        /// </summary>
        public GamePlatform runtimePlatform;

        /// <summary>
        ///  是否开启Log
        /// </summary>
        public bool log;

        public void Awake()
        {
            self = this;
            AddPathManager();
            SetRuntimeEnvironment(GameEnvironmentEnum.Develop);
            SwitchPlatform();
            OpenLog(true);
        }

        public void AddPathManager()
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

        /// <summary>
        ///  设置debug的开启和关闭
        /// </summary>
        /// <param name="b"></param>
        /// <returns></returns>
        public bool OpenLog(bool b)
        {
            log = b;
            return log;
        }

    }
}
