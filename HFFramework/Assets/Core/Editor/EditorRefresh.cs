using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

namespace HFFramework.Editor
{
    [InitializeOnLoad]
    public class EditorRefresh 
    {
        static EditorRefresh()
        {
            HFLog.C("编辑器工具刷新");
            EnvironmentConfig config = AssetDatabase.LoadAssetAtPath<EnvironmentConfig>("Assets/Resources/EnvironmentConfig.asset");
            if (config == null)
            {
                config = ScriptableObject.CreateInstance<EnvironmentConfig>();
                AssetDatabase.CreateAsset(config, "Assets/Resources/EnvironmentConfig.asset");
                config.Refresh();
            }
        }

        [InitializeOnLoadMethod]
        static void ReloadMethod()
        {
            HFLog.C("编辑器工具刷新方法");
        }
    }
}

