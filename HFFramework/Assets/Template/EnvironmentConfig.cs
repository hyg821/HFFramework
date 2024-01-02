using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
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

    public enum GameRuntime
    {
        Mono,
        ILRuntime,
        Lua
    }

    public enum GameLanguage
    {
        Chinese,
        English
    }

    
    /// <summary>
    /// 项目配置 （内部编辑器设置 +外部jenkins设置）
    /// </summary>
    public class EnvironmentConfig : ScriptableObject
    {
        /// <summary>
        /// 自动选择运行平台
        /// </summary>
        public bool AutoSetting = true;

        /// <summary>
        ///  运行平台
        /// </summary>
        public GamePlatform Platform = GamePlatform.Windows;

        /// <summary>
        /// 运行时
        /// </summary>
        public GameRuntime Runtime = GameRuntime.Mono;

        /// <summary>
        ///  加载资源模式 是从editor 读取 还是bundle读取
        /// </summary>
        public LoadAssetPathType LoadAssetPathType = LoadAssetPathType.Editor;

        /// <summary>
        ///  运行环境
        /// </summary>
        public GameEnvironmentType RuntimeEnvironment = GameEnvironmentType.Debug;

        /// <summary>
        ///  运行语言
        /// </summary>
        public GameLanguage Language = GameLanguage.Chinese;

        /// <summary>
        ///  app版本
        /// </summary>
        public string AppVersion = "1.0.0";

        /// <summary>
        ///  资源版本
        /// </summary>
        public string ResourceVersion = "1.0.0";

        /// <summary>
        ///  是否开启热更新检测
        /// </summary>
        public bool IsCheckHotFix = false;

        /// <summary>
        ///  是否开启Log
        /// </summary>
        public bool IsOpenLog = true;

        /// <summary>
        ///  是否开启本地log 
        /// </summary>
        public bool IsOpenLoaclLog = false;

        /// <summary>
        ///  设计尺寸 和服务器对应起来
        /// </summary>
        public Vector2 SceneSize = new Vector2(1920,1080);

        /// <summary>
        ///  默认帧数
        /// </summary>
        public int TargetFrame = 60;

        /// <summary>
        ///  FixedUpdate 调用 一秒 帧数 
        /// </summary>
        public int FixedUpdateFrame = 5;

        /// <summary>
        /// 是否全屏 （安全区域是否绘制）
        /// </summary>
        public bool FullScreen = true;

        public void Refresh()
        {

        }
    }
}

