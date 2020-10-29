using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

namespace HFFramework.Editor
{
    public class EditorHelper : MonoBehaviour
    {
        public static void OpenDirectory(string path)
        {
            if (!string.IsNullOrEmpty(path))
            {
                HFLog.C(path);
                System.Diagnostics.Process.Start("explorer.exe", path);
            }
        }
    }
}


