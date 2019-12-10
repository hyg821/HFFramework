using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using LitJson;
using Config;
using UnityEngine.SceneManagement;
using System;

namespace HFFramework
{
    public class UIManager : MonoBehaviour, IManager
    {
        /// <summary>
        ///  UI根物体名字
        /// </summary>
        public const string RootName = "UIRoot";

        public const string CameraName = "UICamera";

        public static UIManager Instance;

        public UICamera UICamera;

        public Dictionary<int, UICanvas> canvasDic = new Dictionary<int, UICanvas>();

        public Dictionary<string, UIController> controllerDic = new Dictionary<string, UIController>();

        void Awake()
        {
            Instance = this;
            Init();
        }

        public UICanvas GetCanvas(int index)
        {
            return canvasDic[index];
        }

        public void Init()
        {
            SceneManager.sceneLoaded += SceneLoaded;
            GameObject prefab = HFResourceManager.Instance.GetAsset<GameObject>("hfui", "UICamera");
            GameObject temp = Instantiate(prefab);
            temp.name = CameraName;
            UICamera = temp.GetComponent<UICamera>();
            UICamera.SetParent(gameObject);

            prefab = HFResourceManager.Instance.GetAsset<GameObject>("hfui", "UIEventSystem");
            GameObject eventSystem = Instantiate(prefab);
            eventSystem.name = "UIEventSystem";
            eventSystem.transform.SetParent(gameObject.transform);

            AddCanvas(0);
        }

        private void SceneLoaded(Scene s, LoadSceneMode m)
        {
            //保证全局只有一个EventSystem
            GameObject[] temp = s.GetRootGameObjects();
            for (int i = temp.Length-1; i >0 ; i--)
            {
                if (temp[i].name =="EventSystem")
                {
                    HFLog.C("跳转场景 发现多余的EventSystem 删除");
                    GameObject.Destroy(temp[i]);
                }
            }
        }

        public UICanvas AddCanvas(int canvasLayerIndex)
        {
            UICanvas uiCanvas;
            if (!canvasDic.TryGetValue(canvasLayerIndex, out uiCanvas))
            {
                GameObject canvasPrefab = HFResourceManager.Instance.GetPrefab("hfui","UICanvas");
                GameObject canvasObject = Instantiate(canvasPrefab);
                uiCanvas = canvasObject.AddComponent<UICanvas>();
                uiCanvas.SetUICamera(UICamera);
                uiCanvas.AutoSizeFitter();
                uiCanvas.SetSortingLayer(canvasLayerIndex);
                uiCanvas.SetParent(gameObject);
                canvasDic.Add(canvasLayerIndex, uiCanvas);
            }
            return uiCanvas;
        }

        public T GetController<T>() where T :UIController,new()
        {
            UIController controller;
            string type = typeof(T).Name;
            if (controllerDic.TryGetValue(type, out controller)==false)
            {
                UI config = ConfigUI.Get(type);

                GameObject prefab = HFResourceManager.Instance.GetPrefab(config.AssetbundleName, config.AssetName);
                GameObject sourcers = GameObject.Instantiate(prefab);
                sourcers.name = config.AssetName;

                controller = Entity.CreateEntity<T>(sourcers);

                controller.Config = config;
                controllerDic.Add(type, controller);
            }
            return controller as T;
        }

        public T OpenController<T>() where T : UIController,new()
        {
            T t = GetController<T>();
            t.Open();
            return t;
        }

        public void CloseController<T>()
        {
            UIController controller;
            if (controllerDic.TryGetValue(typeof(T).Name, out controller))
            {
                controller.Close();
            }
        }

        public void Clear()
        {
            foreach (var item in controllerDic)
            {
                item.Value.Destroy();
            }
            controllerDic.Clear();
            canvasDic.Clear();
        }

        public void DestroyManager()
        {
            Clear();
            SceneManager.sceneLoaded -= SceneLoaded;
            Instance = null;
        }
    }
}


