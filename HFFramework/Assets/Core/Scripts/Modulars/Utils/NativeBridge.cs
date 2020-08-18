using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine;

namespace HFFramework
{
    /// <summary>
    /// 原生桥接
    /// </summary>
    public class NativeBridge
    {
        /// <summary>
        /// 调用ios退出
        /// </summary>
        [DllImport("__Internal")]
        public static extern void Exit();
    }
}
