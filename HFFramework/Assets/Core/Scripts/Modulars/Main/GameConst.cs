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
        public const ushort MSG_UI= 1;

        /// <summary>
        ///  网络消息
        /// </summary>
        public const ushort MSG_NET = 2;

        /// <summary>
        ///  状态消息
        /// </summary>
        public const ushort MSG_STATE = 3;
    }
}