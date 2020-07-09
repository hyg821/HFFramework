using UnityEngine;
using System;
using System.Text;

namespace HFFramework
{
    public class HFLog
    {
        public static bool IsOpenLog = true;

        public static GamePlatform Platform = GamePlatform.Editor;

        /// <summary>
        ///  颜色
        /// </summary>
        public const string constColor = "FFFFFF";

        /// <summary>
        ///  最普通的打印
        /// </summary>
        /// <param name="str"></param>
        [System.Diagnostics.Conditional(GameConst.DebugDefineSymbol)]
        public static void L(object obj)
        {
            if (IsOpenLog)
            {
                Debug.Log(obj);
            }
        }

        /// <summary>
        ///  一个默认带颜色的打印
        /// </summary>
        [System.Diagnostics.Conditional(GameConst.DebugDefineSymbol)]
        public static void C(object obj)
        {
            if (IsOpenLog)
            {
                if (Platform == GamePlatform.Editor)
                {
                    Debug.Log(Time.frameCount + " : " + GameUtils.SetColor(obj, constColor));
                }
                else
                {
                    Debug.Log(Time.frameCount + " : " + obj);
                }
            }
        }

        /// <summary>
        ///  一个无法关闭的打印
        /// </summary>
        /// <param name="str"></param>
        public static void X(object obj)
        {
            Debug.Log(obj);
        }

        /// <summary>
        ///  报错打印
        /// </summary>
        /// <param name="str"></param>
        [System.Diagnostics.Conditional(GameConst.DebugDefineSymbol)]
        public static void E(object obj)
        {
            if (IsOpenLog == true)
            {
                Debug.LogError(obj);
            }
        }
    }
}
