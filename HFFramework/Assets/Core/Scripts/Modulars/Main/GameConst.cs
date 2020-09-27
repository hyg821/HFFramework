using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    public class GameConst
    {
        public const string DebugDefineSymbol = "HF_DEBUG";
        public const string ReleaseDefineSymbol = "HF_RELEASE";
        public const string ILRuntimeDefineSymbol = "DISABLE_ILRUNTIME_DEBUG";
        
        /// <summary>
        /// 热更新dll名称
        /// </summary>
        public const string HotFixDLLName = "HotFix";

        public const string CLRBindingGeneratedPath = "Assets/OtherPlugins/ILRuntime/Generated";

        //--------------------------------------自定义文件夹过滤标签--------------------------------------//
        public const string AssetFolderIde = "[A]";
        public const string SpriteFolderIde = "[S]";
        
        //--------------------------------------配置文件--------------------------------------//
        /// <summary>
        /// 配置文件读取路径
        /// </summary>
        public const string ConfigInputPath = "GameResources/Demo/Config"+AssetFolderIde;
        /// <summary>
        /// 配置文件生成路径
        /// </summary>
        public const string ConfigOutputPath = "GameResources/Demo/Script/Config";
        /// <summary>
        /// 配置文件 Assetbundle 名字
        /// </summary>
        public const string ConfigAssetbundleName = "Config";
            
        //--------------------------------------自定义ide打开路径--------------------------------------//
        /// <summary>
        ///  shader ide 路径
        /// </summary>
        public const string EmacsPath = "E://VSCode/Code";
        /// <summary>
        ///  使用自定义ide 打开的扩展名
        /// </summary>
        public const string FileExtensions = ".txt, .js, .javascript, .json, .html, .shader, .template";
           
        /// <summary>
        /// demo路径
        /// </summary>
        public const string StartScenePath = "Assets/GameResources/Demo/Demo.unity";

        //--------------------------------------游戏内部消息模块id--------------------------------------//
        /// <summary>
        ///  UI 消息
        /// </summary>
        public const ushort UI= 1;

        /// <summary>
        ///  网络消息
        /// </summary>
        public const ushort NET = 2;

        /// <summary>
        ///  状态消息
        /// </summary>
        public const ushort STATE = 3;
    }
}