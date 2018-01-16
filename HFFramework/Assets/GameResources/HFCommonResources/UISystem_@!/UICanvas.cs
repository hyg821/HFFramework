using UnityEngine;
using UnityEngine.UI;

namespace HFFramework
{
    public class UICanvas : BaseMonoBehaviour
    {
        public const string CanvasName = "UICanvas";

        /// <summary>
        ///  渲染UI的摄像机 后期可以使用第二摄像机 分离UI和 物体渲染
        /// </summary>
        public Camera mainCamera;

        /// <summary>
        ///  对应的Canvas
        /// </summary>
        public Canvas canvas;

        public CanvasScaler canvasScaler;

        public override void MyAwake()
        {
            base.MyAwake();
            mainCamera = Camera.main;
            canvas = gameObject.GetComponent<Canvas>();
            canvas.renderMode = RenderMode.ScreenSpaceCamera;
            canvas.worldCamera = mainCamera;
            canvasScaler = gameObject.GetComponent<CanvasScaler>();
            canvasScaler.referenceResolution = new Vector2(GameSetter.self.ServerSceneWidth,GameSetter.self.ServerSceneHeight);
            canvasScaler.uiScaleMode = CanvasScaler.ScaleMode.ScaleWithScreenSize;
        }

        public void SetSortingLayer(int sortingLayer)
        {
            canvas.sortingOrder = sortingLayer;
            gameObject.name = CanvasName + sortingLayer;
        }

    }
}
