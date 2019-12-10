using UnityEngine;
using System;
using System.Text;

namespace HFFramework
{
    public class HFLog
    {
        /// <summary>
        ///  颜色
        /// </summary>
        public const string constColor = "8be8f2";

        /// <summary>
        ///  最普通的打印
        /// </summary>
        /// <param name="str"></param>
        public static void L(object obj)
        {
            if (GameEnvironment.Instance.IsOpenLog == true)
            {
                Debug.Log(obj);
            }
        }

        /// <summary>
        ///  一个默认带颜色的打印
        /// </summary>
        public static void C(object obj)
        {
            if (GameEnvironment.Instance.IsOpenLog == true)
            {
                if (GameEnvironment.Instance.Platform == GamePlatform.Editor)
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
        public static void E(object obj)
        {
            if (GameEnvironment.Instance.IsOpenLog == true)
            {
                Debug.LogError(obj);
            }
        }
    }
}
