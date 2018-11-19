using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System;
using System.Collections.Generic;

namespace HFFramework
{
    public enum PushType
    {
        /// <summary>
        ///  上一个页面在本个页面显示之后非激活提高性能
        ///   如果想实现这个条件 必须子类view 实现 DoShowAnimation 这个重载 并且需要调用callback
        /// </summary>
        Navigation,
        /// <summary>
        ///  上一个页面在本个页面显示之后没有变化适用于弹窗
        /// </summary>
        Model
    }

    public enum PopType
    {
        /// <summary>
        ///  页面隐藏 并且缓存
        /// </summary>
        Cache,

        /// <summary>
        ///  页面隐藏 并且销毁
        /// </summary>
        Destroy
    }

    public class UICanvas : BaseMonoBehaviour
    {
        public const string CanvasName = "UICanvas";

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

        public override void OnAwake()
        {
            base.OnAwake();

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
            canvas.sortingOrder = sortingLayer;
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
