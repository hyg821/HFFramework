using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using LitJson;
using Config;
using UnityEngine.SceneManagement;
using System;
using UniRx.Async;

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
            GameObject prefab = HFResourceManager.Instance.GetPrefab("hfui", "UICamera");
            GameObject temp = GameFactory.Instantiate(prefab);
            temp.name = CameraName;
            UICamera = temp.GetComponent<UICamera>();
            UICamera.SetParent(gameObject);

            prefab = HFResourceManager.Instance.GetPrefab("hfui", "UIEventSystem");
            GameObject eventSystem = GameFactory.Instantiate(prefab);
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

        public async UniTask<T> GetController<T>(bool async) where T :UIController,new()
        {
            try
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
                        GameObject prefab = HFResourceManager.Instance.GetPrefab(config.AssetbundleName, config.AssetName);
                        GameObject sourcers = GameObject.Instantiate(prefab);
                        sourcers.name = config.AssetName;
                        controller = GameFactory.CreateEntity<T>(sourcers);
                    }

                    controller.Config = config;
                    controllerDic.Add(type, controller);
                }
                return controller as T;
            }
            catch (Exception e)
            {
                Debug.LogError(e);
                throw;
            }
        }

        public async UniTask<T> Open<T>(object param = null,bool async = false,bool animation = false) where T : UIController, new()
        {
            T t = await GetController<T>(async);
            await t.Open(param, animation);
            return t;
        }

        public async UniTask Close<T>(bool animation = false)
        {
            UIController controller;
            string key = typeof(T).Name;
            if (controllerDic.TryGetValue(key, out controller))
            {
                await controller.Close(animation);
                if ((UICacheType)controller.Config.CacheType ==UICacheType.Destroy)
                {
                    Instance.controllerDic.Remove(key);
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

        public void DestroyManager()
        {
            Clear();
            SceneManager.sceneLoaded -= SceneLoaded;
            Instance = null;
        }
    }
}


