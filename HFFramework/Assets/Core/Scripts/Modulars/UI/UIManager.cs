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

        public UICachePool cachePool;

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
            AssetBundlePackage assetBundlePackage = HAResourceManager.Instance.LoadAssetBundleFromFile("hfui");
            GameObject  prefab= assetBundlePackage.LoadAssetWithCache<GameObject>("UIRoot");
            GameObject temp = Instantiate(prefab);
            temp.name = RootName;
            UIRoot = temp.GetComponent<UIRoot>();

            prefab = assetBundlePackage.LoadAssetWithCache<GameObject>("UICamera");
            temp = Instantiate(prefab);
            temp.name = CameraName;
            UICamera = temp.GetComponent<UICamera>();
            UICamera.SetParent(UIRoot.gameObject);

            cachePool = new GameObject("CachePool").AddComponent<UICachePool>();
            cachePool.SetParent(UIRoot);
        }

        public UICanvas AddCanvas(int canvasLayerIndex)
        {
            UICanvas uiCanvas;
            if (!canvasDic.TryGetValue(canvasLayerIndex, out uiCanvas))
            {
                GameObject canvasPrefab = HAResourceManager.Instance.GetPrefab("hfui","UICanvas");
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
            UIController controller = cachePool.GetController(type);
            if (controller==null)
            {
                UI config = ConfigUI.Get(type);
                GameObject obj;
                controller  =GameFactory.Create<T>(config.AssetbundleName, config.AssetName,out obj);
                if (controller==null)
                {
                    controller = obj.AddComponent<T>();
                }
                controller.Config = config;
            }
            return controller as T;
        }

        public void ClearScene()
        {
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


