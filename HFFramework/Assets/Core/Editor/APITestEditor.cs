using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

namespace HFFramework.Editor
{
    public class APITestEditor
    {
        [MenuItem("API测试/测试0")]
        public static void Test0()
        {
            string path = @"D:\HFFramework\HFFramework\Assets\..\..\Archive\Android";
            EditorHelper.OpenDirectory(path);
        }
    }
}

