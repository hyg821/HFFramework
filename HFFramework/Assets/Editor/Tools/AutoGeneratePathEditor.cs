using UnityEngine;
using UnityEditor;
using System.Collections.Generic;
using UnityEditor.Experimental.SceneManagement;
using UnityEditor.SceneManagement;

namespace HFFramework.Editor
{
    [CustomEditor(typeof(AutoGeneratePath))]
    public class AutoGeneratePathEditor : UnityEditor.Editor
    {
        public int selectIndex = 0;

        public List<string> propertyList = new List<string>();
        
        public override void OnInspectorGUI()
        {
            DrawDefaultInspector();
            
            propertyList.Clear();
            
            AutoGeneratePath info = target as AutoGeneratePath;

            UnityEngine.Component[] components = info.GetComponents<UnityEngine.Component>();
            string str = info.GetPropertyType();
      
            propertyList.Add("GameObject");
            propertyList.Add("Transform");
            for (int i = 0; i < components.Length; i++)
            {
                string name = components[i].GetType().Name;
                propertyList.Add(name);
            }

            for (int i = 0; i < propertyList.Count; i++)
            {
                string name = propertyList[i];
                if (str == name)
                {
                    selectIndex = i;
                }
            }  

            int currentSelect = EditorGUILayout.Popup("类型", selectIndex, propertyList.ToArray());
            info.SetPropertyType(propertyList[currentSelect]);
            //判断一下是否选择了新的 
            if (currentSelect!=selectIndex)
            {
                selectIndex = currentSelect;
                PrefabModeSave(info);
            }
            /*
            if (GUILayout.Button("刷新类型"))
            {
                EditorUtility.SetDirty(info);
                PrefabModeSave(info);
            }
            */

            if (info.type==AutoGeneratePath.UIType.Root)
            {
                if (GUILayout.Button("生成"))
                {
                    EditorUtility.SetDirty(info);
                    PrefabModeSave(info);
                    info.GeneratePath();
                }
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
