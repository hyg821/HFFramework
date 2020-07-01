using UnityEngine;
using UnityEditor;
using System.Collections.Generic;
using UnityEditor.Experimental.SceneManagement;
using UnityEditor.SceneManagement;

namespace HFFramework.Editor
{
    [CustomEditor(typeof(HotFixLinker))]
    public class HotFixLinkerEditor : UnityEditor.Editor
    {
        public override void OnInspectorGUI()
        {
            DrawDefaultInspector();

            HotFixLinker info = target as HotFixLinker;

            if (GUILayout.Button("调用Debug方法"))
            {
                info.Call(info.debugMethodName, info.debugMethodParams);
            }
        }
    }
}
