using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    /// <summary>
    ///  有一些单例 需要写很长的代码才能获取  这个类添加了快捷方法
    /// </summary>
    public class InstanceHelper
    {
        public static HFGlobal Global
        {
            get
            {
                return HFGlobal.Instance;
            }
        }
        /// <summary>
        ///  AeestBundle管理器
        /// </summary>
        public static HAResourceManager ResourcesManager
        {
            get
            {
                return HAResourceManager.Instance;
            }
        }

        /// <summary>
        ///  通知中心
        /// </summary>
        public static NotificationCenter NotificationCenter
        {
            get
            {
                return NotificationCenter.Instance;
            }
        }

        /// <summary>
        ///  网络管理器
        /// </summary>
        public static HFSocketManager SocketManager
        {
            get
            {
                return HFSocketManager.Instance;
            }
        }

        /// <summary>
        ///  声音管理器
        /// </summary>
        public static AudioManager AudioManager
        {
            get
            {
                return AudioManager.Instance;
            }
        }

        /// <summary>
        /// UI管理器
        /// </summary>
        public static UIManager UIManager
        {
            get
            {
                return UIManager.Instance;
            }
        }

        /// <summary>
        ///  下载图片管理器
        /// </summary>
        public static WebImageManager WebImageManager
        {
            get
            {
                return WebImageManager.Instance;
            }
        }

        /// <summary>
        ///  输入管理器
        /// </summary>
        public static InputManager InputManager
        {
            get
            {
                return InputManager.Instance;
            }
        }

        /// <summary>
        ///  热更新管理器
        /// </summary>
        public static AppDomainManager AppDomainManager
        {
            get
            {
                return AppDomainManager.Instance;
            }
        }

    }
}
