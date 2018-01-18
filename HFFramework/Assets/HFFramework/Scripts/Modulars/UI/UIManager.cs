﻿using System.Collections;
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

        public static UIManager self;

        public UIRoot UIRoot;

        public Dictionary<int, GameObject> canvasDic = new Dictionary<int, GameObject>();

        public AssetBundlePackage HFUIPackage;

        void Awake()
        {
            self = this;
            LoadScene();
        }

        public void LoadScene()
        {
            ClearScene();
            HFUIPackage = HAResourceManager.self.LoadAssetBundleFromFile("hfui");
            GameObject  prefab= HFUIPackage.LoadAssetWithCache<GameObject>("UISystem");
            GameObject uiRootObj = Instantiate(prefab);
            uiRootObj.name = RootName;
            UIRoot = uiRootObj.GetComponent<UIRoot>();
        }

        public UICanvas AddCanvas(int canvasLayerIndex)
        {
            GameObject canvas;
            if (canvasDic.TryGetValue(canvasLayerIndex, out canvas) ==false)
            {
                GameObject prefab = HFUIPackage.LoadAssetWithCache<GameObject>("UICanvas");
                canvas = Instantiate(prefab);
                UICanvas uiCanvas = canvas.AddComponent<UICanvas>();
                uiCanvas.AutoSizeFitter();
                uiCanvas.SetSortingLayer(canvasLayerIndex);
                uiCanvas.SetParent(UIRoot.gameObject);
                canvasDic.Add(canvasLayerIndex, canvas);
            }
            return canvas.GetComponent<UICanvas>();
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
            self = null;
        }
    }
}


