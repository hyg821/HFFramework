using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using LitJson;
using Config;
using UnityEngine.SceneManagement;

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

        public T GetController<T>(string type) where T :UIController
        {
            UIController controller;
            if (controllerDic.TryGetValue(type,out controller)==false)
            {
                UI config = ConfigUI.Get(type);
                GameObject obj;
                controller = GameFactory.Create<T>(config.AssetbundleName, config.AssetName, out obj);
                if (controller == null)
                {
                    controller = obj.AddComponent<T>();
                }
                controller.Config = config;
                controllerDic.Add(type, controller);
            }
            return controller as T;
        }

        public void OpenController(string type)
        {
            UIController controller;
            if (controllerDic.TryGetValue(type, out controller))
            {
                controller.Open();
            }
        }

        public void CloseController(string type)
        {
            UIController controller;
            if (controllerDic.TryGetValue(type, out controller))
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


