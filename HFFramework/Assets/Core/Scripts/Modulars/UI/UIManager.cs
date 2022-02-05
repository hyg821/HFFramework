using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using LitJson;
using Config;
using UnityEngine.SceneManagement;
using System;
using Cysharp.Threading.Tasks;

namespace HFFramework
{
    /// <summary>
    /// UI管理器
    /// </summary>
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
            GameObject prefab = AssetManager.Instance.GetPrefab("hfui", "UICamera");
            GameObject temp = GameFactory.Instantiate(prefab);
            temp.name = CameraName;
            UICamera = temp.GetComponent<UICamera>();
            UICamera.SetParent(gameObject);

            prefab = AssetManager.Instance.GetPrefab("hfui", "UIEventSystem");
            GameObject eventSystem = GameFactory.Instantiate(prefab);
            eventSystem.name = "UIEventSystem";
            eventSystem.transform.SetParent(gameObject.transform);

            AddCanvas(0);
        }

        private void SceneLoaded(Scene scene, LoadSceneMode mode)
        {
            //保证全局只有一个EventSystem
            GameObject[] temp = scene.GetRootGameObjects();
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
                GameObject canvasPrefab = AssetManager.Instance.GetPrefab("hfui","UICanvas");
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

        public async UniTask<T> GetController<T>(bool async) where T :UIController,new()
        {
            UIController controller;
            string type = typeof(T).Name;
            if (controllerDic.TryGetValue(type, out controller) == false)
            {
                UI config = ConfigUI.Get(type);
                if (async)
                {
                    controller = await GameFactory.CreateEntityAsync<T>(config.AssetbundleName, config.AssetName);
                }
                else
                {
                    GameObject prefab = AssetManager.Instance.GetPrefab(config.AssetbundleName, config.AssetName);
                    GameObject sourcers = GameObject.Instantiate(prefab);
                    sourcers.name = config.AssetName;
                    controller = GameFactory.CreateEntity<T>(sourcers);
                }

                controller.config = config;

                controller.transform.SetParent(GetCanvas(config.LayerIndex).transform, false);

                controllerDic.Add(type, controller);
            }
            return controller as T;
        }

        public async UniTaskVoid PreLoad<T>() where T : UIController, new()
        {
            T t = await GetController<T>(false);
            t.Close();
        }

        public async UniTask<T> Open<T>(bool async = false,bool animation = false,object param = null) where T : UIController, new()
        {
            T t = await GetController<T>(async);
            t.Refresh(param);
            await t.Open(animation);
            return t;
        }

        public async UniTask Close<T>(bool animation = false)
        {
            UIController controller;
            string key = typeof(T).Name;
            if (controllerDic.TryGetValue(key, out controller))
            {
                await controller.Close(animation);
                if ((UICacheType)controller.config.CacheType ==UICacheType.Destroy)
                {
                    controllerDic.Remove(key);
                    controller.Destroy();
                }
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

        public void Dispose()
        {
            Clear();
            SceneManager.sceneLoaded -= SceneLoaded;
            Instance = null;
        }
    }
}


