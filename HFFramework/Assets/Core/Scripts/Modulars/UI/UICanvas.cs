using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System;
using System.Collections.Generic;

namespace HFFramework
{
    public class UICanvas : BaseBehaviour
    {
        public const string CanvasName = "UILayer";

        /// <summary>
        ///  渲染UI的摄像机 后期可以使用第二摄像机 分离UI和 物体渲染
        /// </summary>
        public UICamera mainCamera;

        /// <summary>
        ///  对应的Canvas
        /// </summary>
        public Canvas canvas;

        /// <summary>
        ///  canvasScaler
        /// </summary>
        public CanvasScaler canvasScaler;

        public void Awake()
        {
            gameObject.layer = LayerMask.NameToLayer("UI"); ;

            canvas = gameObject.GetComponent<Canvas>();
            canvas.renderMode = RenderMode.ScreenSpaceCamera;

            canvasScaler = gameObject.GetComponent<CanvasScaler>();
            canvasScaler.referenceResolution = new Vector2(GameEnvironment.Instance.ServerSceneWidth, GameEnvironment.Instance.ServerSceneHeight);
            canvasScaler.uiScaleMode = CanvasScaler.ScaleMode.ScaleWithScreenSize;
        }

        public void SetUICamera(UICamera camera)
        {
            mainCamera = camera;
            canvas.worldCamera = mainCamera.camera;
        }

        public void SetSortingLayer(int sortingLayer)
        {
            canvas.sortingOrder =10 + sortingLayer*10;
            gameObject.name = CanvasName + sortingLayer;
        }

        public void AutoSizeFitter()
        {
            if (canvasScaler != null)
            {
                if (((Screen.width + 0.0f) / (Screen.height + 0.0f)) > (GameEnvironment.Instance.ServerSceneWidth / GameEnvironment.Instance.ServerSceneHeight))
                {
                    canvasScaler.matchWidthOrHeight = 1f;
                }
                else
                {
                    canvasScaler.matchWidthOrHeight = 0f;
                }
            }
        }
    }
}
