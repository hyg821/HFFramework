using UnityEngine;
using UnityEditor;
using System.Collections.Generic;

namespace HFFramework
{
    [CustomEditor(typeof(AutoGeneratePath))]
    public class AutoGeneratePathEditor : Editor
    {
        public int selectIndex = 0;

        public override void OnInspectorGUI()
        {
            DrawDefaultInspector();
            AutoGeneratePath info = target as AutoGeneratePath;

            MonoBehaviour[] components = info.GetComponents<MonoBehaviour>();
            string str = info.GetPropertyType();
            List<string> list = new List<string>();
            for (int i = 0; i < components.Length; i++)
            {
                string name = components[i].GetType().Name;
                list.Add(name);
                if (str== name)
                {
                    selectIndex = i;
                }
            }

            selectIndex = EditorGUILayout.Popup("类型", selectIndex, list.ToArray(), GUILayout.Width(500));
            info.SetPropertyType(list[selectIndex]);

            if (GUILayout.Button("刷新类型"))
            {
                EditorUtility.SetDirty(info);
            }

            if (GUILayout.Button("生成"))
            {
                EditorUtility.SetDirty(info);
                info.GeneratePath();
            }
        }
    }
}
