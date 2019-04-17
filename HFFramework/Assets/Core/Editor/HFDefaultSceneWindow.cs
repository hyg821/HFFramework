using UnityEditor;
using UnityEditor.SceneManagement;
using UnityEngine;

namespace HFFramework
{
    public class HFDefaultSceneWindow : EditorWindow
    {
        public string StartScenePath = "Assets/GameResources/Game/Demo/Demo.unity";

        void OnGUI()
        {
            EditorSceneManager.playModeStartScene = (SceneAsset)EditorGUILayout.ObjectField(new GUIContent("编辑器开始场景"), EditorSceneManager.playModeStartScene, typeof(SceneAsset), false);
            if (GUILayout.Button("场景路径: " + StartScenePath))
                SetPlayModeStartScene(StartScenePath);
        }

        void SetPlayModeStartScene(string scenePath)
        {
            //EditorBuildSettings.scenes[0].path 从场景设置里获取
            SceneAsset myWantedStartScene = AssetDatabase.LoadAssetAtPath<SceneAsset>(scenePath);
            if (myWantedStartScene != null)
                EditorSceneManager.playModeStartScene = myWantedStartScene;
            else
                Debug.Log("没有找到场景路径 " + scenePath);
        }

        [MenuItem("游戏辅助工具/设置默认运行场景(仅限于编辑器开发使用)")]
        static void Open()
        {
            GetWindow<HFDefaultSceneWindow>();
        }
    }
}