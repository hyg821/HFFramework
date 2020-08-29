using UnityEngine;
using System.Collections;
using UnityEditor;
using System.IO;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using System.Collections.Generic;

namespace HFFramework.Editor
{
    public class FindReferences
    {
        [MenuItem("Assets/Find All References")]
        private static void Find()
        {
            string __strPath = AssetDatabase.GetAssetPath(Selection.activeObject);
            if (!string.IsNullOrEmpty(__strPath))
            {
                string __guid = AssetDatabase.AssetPathToGUID(__strPath);
                List<string> withoutExtensions = new List<string>() { ".prefab", ".unity", ".mat", ".asset" };
                string[] __files = Directory.GetFiles("Assets", "*.*", SearchOption.AllDirectories)
                    .Where(s => withoutExtensions.Contains(Path.GetExtension(s).ToLower())).ToArray();

                int __nStartIndex = 0;
                EditorApplication.update = delegate ()
                {
                    string __strFile = __files[__nStartIndex].Replace("\\", "/");

                    bool __bCancel = EditorUtility.DisplayCancelableProgressBar("匹配资源中", __strFile, (float)__nStartIndex / (float)__files.Length);

                    string[] __strAssetPath = AssetDatabase.GetDependencies(__strFile);
                    for (int i = 0; i < __strAssetPath.Length; ++i)
                    {
                        string __strGuid = AssetDatabase.AssetPathToGUID(__strAssetPath[i]);
                        if (__strGuid == __guid)
                            Debug.Log("Find References Object " + __strFile);
                    }

                    __nStartIndex++;
                    if (__bCancel || __nStartIndex >= __files.Length)
                    {
                        EditorUtility.ClearProgressBar();
                        EditorApplication.update = null;
                        __nStartIndex = 0;
                        Debug.Log("匹配结束");
                    }

                };
            }
        }

        static private string GetRelativeAssetsPath(string path)
        {
            return "Assets" + Path.GetFullPath(path).Replace(Path.GetFullPath(Application.dataPath), "").Replace('\\', '/');
        }
    }
}
