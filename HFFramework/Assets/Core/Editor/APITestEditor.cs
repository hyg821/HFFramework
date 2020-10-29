using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using System;
using System.IO;

namespace HFFramework.Editor
{
    public class APITestEditor
    {
        [MenuItem("API测试/测试0")]
        public static void Test0()
        {
            string path = Application.dataPath + "/../../Archive/";
            path = path.Replace(@"/", @"\");
            EditorHelper.OpenDirectory(path);
        }
    }
}

