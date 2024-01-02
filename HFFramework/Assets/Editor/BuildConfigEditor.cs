using UnityEngine;
using UnityEditor;
using System.Collections.Generic;
using UnityEditor.Experimental.SceneManagement;
using UnityEditor.SceneManagement;

namespace HFFramework.Editor
{
    [CustomEditor(typeof(BuildConfig))]
    public class BuildConfigEditor : UnityEditor.Editor
    {
        public override void OnInspectorGUI()
        {
            DrawDefaultInspector();

            BuildConfig info = target as BuildConfig;

            if (GUILayout.Button("Android 打包"))
            {
                JenkinsBuild.BuildForAndroid();
            }

            if (GUILayout.Button("IOS 打包"))
            {
                JenkinsBuild.BuildForIOS();
            }
        }
    }
}

