﻿using UnityEngine;
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

        public RectTransform rectTransform;

        public void Awake()
        {
            gameObject.layer = LayerMask.NameToLayer("UI"); ;

            canvas = gameObject.GetComponent<Canvas>();
            canvas.renderMode = RenderMode.ScreenSpaceCamera;

            canvasScaler = gameObject.GetComponent<CanvasScaler>();
            canvasScaler.referenceResolution = GameEnvironment.Instance.config.SceneSize;
            canvasScaler.uiScaleMode = CanvasScaler.ScaleMode.ScaleWithScreenSize;

            rectTransform = transform as RectTransform;
        }

        public void SetUICamera(UICamera camera)
        {
            mainCamera = camera;
            canvas.worldCamera = mainCamera.camera;
        }

        public void SetSortingLayer(int sortingLayer)
        {
            canvas.sortingOrder = 10 + sortingLayer * 100;
            gameObject.name = CanvasName + sortingLayer;
        }

        public void AutoSizeFitter()
        {
            if (canvasScaler != null)
            {
                if (((Screen.width + 0.0f) / (Screen.height + 0.0f)) > (GameEnvironment.Instance.config.SceneSize.x / GameEnvironment.Instance.config.SceneSize.y))
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
