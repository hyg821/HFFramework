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
        public static void L(string str)
        {
            if (GameEnvironment.Instance.log == true)
            {
                Debug.Log(str);
            }
        }

        /// <summary>
        ///  一个默认带颜色的打印
        /// </summary>
        public static void C(string str)
        {
            if (GameEnvironment.Instance.log == true)
            {
                Debug.Log(Time.realtimeSinceStartup+" : "+ UtilsManager.SetColor(str, constColor));
            }
        }

        /// <summary>
        ///  一个无法关闭的打印
        /// </summary>
        /// <param name="str"></param>
        public static void X(string str)
        {
            Debug.Log(str);
        }

        /// <summary>
        ///  报错打印
        /// </summary>
        /// <param name="str"></param>
        public static void E(string str)
        {
            if (GameEnvironment.Instance.log == true)
            {
                Debug.LogError(str);
            }
        }
    }
}
