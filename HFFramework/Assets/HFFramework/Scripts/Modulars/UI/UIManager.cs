using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    public class UIManager : MonoBehaviour
    {
        /// <summary>
        ///  UI根物体名字
        /// </summary>
        public const string RootName = "UISystem";

        public const string CameraName = "UICamera";

        public static UIManager Instance;

        public UIRoot UIRoot;

        public UICamera UICamera;

        public Dictionary<int, UICanvas> canvasDic = new Dictionary<int, UICanvas>();

        public AssetBundlePackage assetBundlePackage;

        void Awake()
        {
            Instance = this;
            LoadScene();
        }

        public void LoadScene()
        {
            ClearScene();

            assetBundlePackage = HAResourceManager.Instance.LoadAssetBundleFromFile("hfui");

            GameObject  prefab= assetBundlePackage.LoadAssetWithCache<GameObject>("UISystem");
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


