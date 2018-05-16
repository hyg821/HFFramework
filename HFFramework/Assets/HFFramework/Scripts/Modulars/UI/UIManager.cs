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

        public static UIManager Instance;

        public UIRoot UIRoot;

        public Dictionary<int, UICanvas> canvasDic = new Dictionary<int, UICanvas>();

        public AssetBundlePackage HFUIPackage;

        void Awake()
        {
            Instance = this;
            LoadScene();
        }

        public void LoadScene()
        {
            ClearScene();
            HFUIPackage = HAResourceManager.Instance.LoadAssetBundleFromFile("hfui");
            GameObject  prefab= HFUIPackage.LoadAssetWithCache<GameObject>("UISystem");
            GameObject uiRootObj = Instantiate(prefab);
            uiRootObj.name = RootName;
            UIRoot = uiRootObj.GetComponent<UIRoot>();
        }

        public UICanvas AddCanvas(int canvasLayerIndex)
        {
            UICanvas uiCanvas;
            if (!canvasDic.TryGetValue(canvasLayerIndex, out uiCanvas))
            {
                GameObject canvasPrefab = HFUIPackage.LoadAssetWithCache<GameObject>("UICanvas");
                GameObject canvasObject = Instantiate(canvasPrefab);
                uiCanvas = canvasObject.AddComponent<UICanvas>();
                uiCanvas.AutoSizeFitter();
                uiCanvas.SetSortingLayer(canvasLayerIndex);
                uiCanvas.SetParent(UIRoot.gameObject);
                canvasDic.Add(canvasLayerIndex, uiCanvas);
            }
            return uiCanvas;
        }

        public static C GameObjectBindUIController<C, V, M>(GameObject g) where C:UIController  where V : UIView where M : UIModel
        {
            C c= g.AddComponent<C>();
            V v = g.AddComponent<V>();
            M m = g.AddComponent<M>();
            c.view = v;
            c.model = m;
            return c;
        }

        public void ClearScene()
        {
            canvasDic.Clear();
            HFUIPackage = null;
            UIRoot = null;
        }

        public void DestroyManager()
        {
            ClearScene();
            Instance = null;
        }
    }
}


