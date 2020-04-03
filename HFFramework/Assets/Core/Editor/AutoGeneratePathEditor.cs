using UnityEngine;
using UnityEditor;
using System.Collections.Generic;
using UnityEditor.Experimental.SceneManagement;
using UnityEditor.SceneManagement;

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
            list.Add("GameObject");
            list.Add("Transform");
            for (int i = 0; i < components.Length; i++)
            {
                string name = components[i].GetType().Name;
                list.Add(name);
            }

            for (int i = 0; i < list.Count; i++)
            {
                string name = list[i];
                if (str == name)
                {
                    selectIndex = i;
                }
            }  

            int currentSelect = EditorGUILayout.Popup("类型", selectIndex, list.ToArray(), GUILayout.Width(500));
            info.SetPropertyType(list[currentSelect]);
            //判断一下是否选择了新的 
            if (currentSelect!=selectIndex)
            {
                selectIndex = currentSelect;
                PrefabModeSave(info);
            }

            if (GUILayout.Button("刷新类型"))
            {
                EditorUtility.SetDirty(info);
                PrefabModeSave(info);
            }

            if (GUILayout.Button("生成"))
            {
                EditorUtility.SetDirty(info);
                PrefabModeSave(info);
                info.GeneratePath();
            }
        }

        public void PrefabModeSave(AutoGeneratePath info)
        {
            //判断是否是预设体模式 
            var prefabStage = PrefabStageUtility.GetPrefabStage(info.gameObject);
            if (prefabStage != null)
            {
                //如果是那么设置场景脏  就会自动 保存
                EditorSceneManager.MarkSceneDirty(prefabStage.scene);
            }
        }
    }
}
