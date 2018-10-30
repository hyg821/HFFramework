using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using LitJson;

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

        public Dictionary<string, UIConfig> configDic = new Dictionary<string, UIConfig>(); 

        public AssetBundlePackage assetBundlePackage;

        void Awake()
        {
            Instance = this;
            LoadConfig();
            LoadScene();
        }

        public void LoadConfig()
        {
            assetBundlePackage = HAResourceManager.Instance.LoadAssetBundleFromFile("hfui");
            TextAsset text = assetBundlePackage.LoadAssetWithCache<TextAsset>("UIConfig.json");
            UIConfigRoot root = JsonMapper.ToObject<UIConfigRoot>(text.text);
            for (int i = 0; i < root.List.Count; i++)
            {
                UIConfig config = root.List[i];
                configDic.Add(config.Type, config);
            }
        }

        public void LoadScene()
        {
            ClearScene();
            assetBundlePackage = HAResourceManager.Instance.LoadAssetBundleFromFile("hfui");
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
                GameObject canvasPrefab = assetBundlePackage.LoadAssetWithCache<GameObject>("UICanvas");
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
                UIConfig config = configDic[type];
                GameObject obj;
                controller  =GameFactory.Create<T>(config.AssetbundleName, config.AssetName,out obj);     
                controller.config = config;
                if (controller==null)
                {
                    controller = obj.AddComponent<T>();
                }
            }
            return controller as T;
        }

        public void ClearScene()
        {
            canvasDic.Clear();
            assetBundlePackage = null;
            UIRoot = null;
        }

        public void DestroyManager()
        {
            ClearScene();
            Instance = null;
        }
    }
}


