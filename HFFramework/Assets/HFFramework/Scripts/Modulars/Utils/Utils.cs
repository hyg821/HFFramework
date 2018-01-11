using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Text;

namespace HFFramework
{
    public class Utils
    {
        public static string SetColor(string str, string color)
        {
            StringBuilder sb = new StringBuilder();
            sb.AppendFormat("<color=#{0}>{1}</color>", color, str);
            return sb.ToString();
        }
    }
}
