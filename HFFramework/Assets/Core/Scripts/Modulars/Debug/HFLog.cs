using UnityEngine;
using System;
using System.Text;

namespace HFFramework
{
    public enum LogColor
    {
        Red,
        White,
        Green,
        Blue,
    }

    public class HFLog
    {
        public static bool IsOpenLog = true;

        public static GamePlatform Platform = GamePlatform.Editor;

        /// <summary>
        ///  颜色
        /// </summary>
        private const string color0 = "FFFFFF";

        private static string GetColor(LogColor color)
        {
            string str = color0;
            switch (color)
            {
                case LogColor.Red:
                    break;
                case LogColor.White:
                    str = color0;
                    break;
                case LogColor.Green:
                    break;
                case LogColor.Blue:
                    break;
                default:
                    break;
            }
            return str;
        }

        /// <summary>
        ///  最普通的打印
        /// </summary>
        /// <param name="str"></param>
        //[System.Diagnostics.Conditional(GameConst.DebugDefineSymbol)]
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
        //[System.Diagnostics.Conditional(GameConst.DebugDefineSymbol)]
        public static void C(object obj, LogColor color = LogColor.White)
        {
            if (IsOpenLog)
            {
                if (Platform == GamePlatform.Editor)
                {
                    Debug.Log(Time.frameCount + " : " + GameUtils.SetColor(obj,GetColor(color)));
                }
                else
                {
                    Debug.Log(Time.frameCount + " : " + obj);
                }
            }
        }

        public static void A(object obj, object obj1,LogColor color = LogColor.White)
        {
            if (IsOpenLog)
            {
                if (Platform == GamePlatform.Editor)
                {
                    Debug.Log(Time.frameCount + " : " + GameUtils.SetColor(obj, GetColor(color)) + "\n" + obj1);
                }
                else
                {
                    Debug.Log(Time.frameCount + " : " + obj+"\n"+obj1);
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
        //[System.Diagnostics.Conditional(GameConst.DebugDefineSymbol)]
        public static void E(object obj)
        {
            if (IsOpenLog == true)
            {
                Debug.LogError(obj);
            }
        }
    }
}
