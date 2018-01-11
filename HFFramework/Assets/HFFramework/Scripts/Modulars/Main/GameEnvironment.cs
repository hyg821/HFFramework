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
        Editor,
        Windows,
        Mac
    } 

    public class GameEnvironment : MonoBehaviour
    {
        public static GameEnvironment self;

        /// <summary>
        ///  运行环境
        /// </summary>
        public  GameEnvironmentEnum runtimeEnvironment;

        /// <summary>
        ///  运行环境的平台
        /// </summary>
        public  GamePlatform runtimePlatform;

        public void Awake()
        {
            self = this;
            runtimeEnvironment = GameEnvironmentEnum.Develop;
            SwitchPlatform();
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
    }
}
