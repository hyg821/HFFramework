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
                path = path.Replace('\\', '/');
                path = path.Replace("../", "..\\");
                Debug.Log("Path " + path);
                System.Diagnostics.Process.Start("explorer.exe", path);
            }
        }
    }
}


