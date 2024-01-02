using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEditor;
using UnityEditor.ProjectWindowCallback;
using UnityEngine;

namespace HFFramework.Editor
{
    public class CreateAssets
    {
        [MenuItem("Assets/Create/HFFramework/创建一个Asset配置文件(ScriptableObject版本)", false, 80)]
        public static void CreateAssetConfigScriptableObject()
        {
            AssetConfig config = ScriptableObject.CreateInstance<AssetConfig>();
            AssetDatabase.CreateAsset(config, GetSelectedPathOrFallback() + "/AssetConfig.asset");
        }

        [MenuItem("Assets/Create/HFFramework/创建一个框架配置文件", false, 80)]
        public static void CreateEnvironmentConfigScriptableObject()
        {
            EnvironmentConfig config = ScriptableObject.CreateInstance<EnvironmentConfig>();
            AssetDatabase.CreateAsset(config, GetSelectedPathOrFallback() + "/EnvironmentConfig.asset");
        }

        /*
        [MenuItem("Assets/Create/HFFramework/创建一个Asset配置文件 (json版本暂时没用)", false, 80)]
        public static void CreateAssetConfigJson()
        {
            ProjectWindowUtil.StartNameEditingIfProjectWindowExists(0, ScriptableObject.CreateInstance<CreateScriptAssetAction>(), GetSelectedPathOrFallback() + "/AssetConfig.json", null, "Assets/Core/Template/AssetConfig.json");
        }
        */

        public static string GetSelectedPathOrFallback()
        {
            string path = "Assets";
            foreach (UnityEngine.Object obj in Selection.GetFiltered(typeof(UnityEngine.Object), SelectionMode.Assets))
            {
                path = AssetDatabase.GetAssetPath(obj);
                if (!string.IsNullOrEmpty(path) && File.Exists(path))
                {
                    path = Path.GetDirectoryName(path);
                    break;
                }
            }
            return path;
        }
    }

    public class CreateScriptAssetAction : EndNameEditAction
    {
        public override void Action(int instanceId, string pathName, string resourceFile)
        {
            //创建资源
            UnityEngine.Object obj = CreateAssetFromTemplate(pathName, resourceFile);
            //高亮显示该资源
            ProjectWindowUtil.ShowCreatedAsset(obj);
        }
        internal static UnityEngine.Object CreateAssetFromTemplate(string pathName, string resourceFile)
        {
            //获取要创建的资源的绝对路径
            string fullName = Path.GetFullPath(pathName);
            //读取本地模板文件
            StreamReader reader = new StreamReader(resourceFile);
            string content = reader.ReadToEnd();
            reader.Close();

            //获取资源的文件名
            // string fileName = Path.GetFileNameWithoutExtension(pahtName);
            //替换默认的文件名
            content = content.Replace("#TIME", System.DateTime.Now.ToString("yyyy年MM月dd日 HH:mm:ss dddd"));

            //写入新文件
            StreamWriter writer = new StreamWriter(fullName, false, System.Text.Encoding.UTF8);
            writer.Write(content);
            writer.Close();

            //刷新本地资源
            AssetDatabase.ImportAsset(pathName);
            AssetDatabase.Refresh();

            return AssetDatabase.LoadAssetAtPath(pathName, typeof(UnityEngine.Object));
        }
    }
}
