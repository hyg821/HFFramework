using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using LitJson;
using Config;

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

        public UIRoot UIRoot;

        public UICamera UICamera;

        public Dictionary<int, UICanvas> canvasDic = new Dictionary<int, UICanvas>();

        public Dictionary<string, UIController> controllerDic = new Dictionary<string, UIController>();

        void Awake()
        {
            Instance = this;
            LoadScene();
        }

        public UICanvas GetCanvas(int index)
        {
            return canvasDic[index];
        }

        public void LoadScene()
        {
            ClearScene();
            AssetBundlePackage assetBundlePackage = HFResourceManager.Instance.LoadAssetBundleFromFile("hfui");
            GameObject  prefab= assetBundlePackage.LoadAssetWithCache<GameObject>("UIRoot");
            GameObject temp = Instantiate(prefab);
            temp.name = RootName;
            UIRoot = temp.GetComponent<UIRoot>();

            prefab = assetBundlePackage.LoadAssetWithCache<GameObject>("UICamera");
            temp = Instantiate(prefab);
            temp.name = CameraName;
            UICamera = temp.GetComponent<UICamera>();
            UICamera.SetParent(UIRoot.gameObject);
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
                uiCanvas.SetParent(UIRoot.gameObject);
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

        public void ClearScene()
        {
            foreach (var item in controllerDic)
            {
                item.Value.Destroy();
            }
            controllerDic.Clear();
            canvasDic.Clear();
            UIRoot = null;
        }

        public void DestroyManager()
        {
            ClearScene();
            Instance = null;
        }
    }
}


