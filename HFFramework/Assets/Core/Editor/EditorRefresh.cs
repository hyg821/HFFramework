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
            EnvironmentConfig environmentConfig = AssetDatabase.LoadAssetAtPath<EnvironmentConfig>(GameConst.EnvironmentConfigPath);
            if (environmentConfig == null)
            {
                environmentConfig = ScriptableObject.CreateInstance<EnvironmentConfig>();
                AssetDatabase.CreateAsset(environmentConfig, GameConst.EnvironmentConfigPath);
                environmentConfig.Refresh();
            }

            BuildConfig buildConfig = AssetDatabase.LoadAssetAtPath<BuildConfig>(GameConst.BuildConfigPath);
            if (buildConfig == null)
            {
                buildConfig = ScriptableObject.CreateInstance<BuildConfig>();
                AssetDatabase.CreateAsset(buildConfig, GameConst.BuildConfigPath);
                buildConfig.Refresh();
            }
        }

        [InitializeOnLoadMethod]
        static void ReloadMethod()
        {
            HFLog.C("编辑器工具刷新方法");
        }
    }
}

