using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    public class GameConst : MonoBehaviour
    {
        public const string HotFixDLLName = "HotFix";

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