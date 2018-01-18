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
        Destory
    }

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

        /// <summary>
        ///  canvasScaler
        /// </summary>
        public CanvasScaler canvasScaler;

        /// <summary>
        /// 缓存池
        /// </summary>
        public UICachePool cachePool;

        /// <summary>
        ///  当前的视图栈
        /// </summary>
        public List<UIController> controllerList = new List<UIController>();


        public override void MyAwake()
        {
            base.MyAwake();
            cachePool = FindChild<UICachePool>("CachePool");
            mainCamera = Camera.main;
            canvas = gameObject.GetComponent<Canvas>();
            canvas.renderMode = RenderMode.ScreenSpaceCamera;
            SetMainCamera(mainCamera);
            canvasScaler = gameObject.GetComponent<CanvasScaler>();
            canvasScaler.referenceResolution = new Vector2(GameSetter.self.ServerSceneWidth,GameSetter.self.ServerSceneHeight);
            canvasScaler.uiScaleMode = CanvasScaler.ScaleMode.ScaleWithScreenSize;
        }

        public void SetMainCamera(Camera c)
        {
            mainCamera = c;
            canvas.worldCamera = mainCamera;
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
                if (((Screen.width+0.0f) / (Screen.height+0.0f)) > (GameSetter.self.ServerSceneWidth / GameSetter.self.ServerSceneHeight))
                {
                    canvasScaler.matchWidthOrHeight = 1f;
                }
                else
                {
                    canvasScaler.matchWidthOrHeight = 0f;
                }
            }
        } 
        
        public void PushController(UIController controller, PushType pushType)
        {
            //先从缓存池里取出 对应的controller
            UIController cx = FindControllerWithID(controller.myInstanceID);

            //先处理 两个数据集合的数据
            if (cx != null)
            {
                //从缓存池里移除
                CachePoolRemove(cx);
            }

            //添加到当前视图栈
            ControllerListAdd(controller);

            //再显示 
            ControllerListEndShow(pushType);
        }

        public void PopController(UIController controller, PopType popType)
        {

            //如果是 需要缓存的 加入到缓存池
            if (popType==PopType.Cache)
            {
                CachePoolAdd(controller);    
            }

            //然后再做显示上的操作
            ControllerListEndHide(popType);

            //先从当前的 视图栈移除
            ControllerListRemove(controller);
        }

         
        /// <summary>
        ///  找到对应的controller
        /// </summary>
        /// <param name="controllerTag"></param>
        /// <returns></returns>
        public UIController FindControllerWithID(long instanceID)
        {
            UIController c = cachePool.FindControllerWithID(instanceID);
            return c;
        }

        public void ControllerListEndShow(PushType pushType)
        {
            int count = controllerList.Count;
            if (count >= 1)
            {
                controllerList[count - 1].Open(delegate () 
                {
                    if (count - 2 >= 0)
                    {
                        if (pushType== PushType.Navigation)
                        {
                            controllerList[count - 2].IsShow = false;
                        }
                    }
                });
            }
        }

        public void ControllerListEndHide(PopType popType)
        {
            int count = controllerList.Count;
            if (count >= 1)
            {
                controllerList[count - 1].Close(delegate ()
                {
                    if (count - 2 >= 0)
                    {
                        controllerList[count - 2].IsShow = true;
                    }

                    if (popType == PopType.Destory)
                    {
                        controllerList[count - 1].MyDestory();
                    }
                });
            }
        }


        public void ControllerListAdd(UIController cx)
        {
            if (controllerList.Contains(cx)==false)
            {
                controllerList.Add(cx);
                cx.SetParent(gameObject);
            }
            else
            {
                controllerList.Remove(cx);
                controllerList.Add(cx);
            }
            cx.BringSelfToFront();
        }

        public void ControllerListRemove(UIController cx)
        {
            if (controllerList.Contains(cx) == true)
            {
                controllerList.Remove(cx);
            }
        }

        public void CachePoolAdd(UIController cx)
        {
            cachePool.Add(cx);
        }

        public void CachePoolRemove(UIController cx)
        {
            cachePool.Remove(cx);
        }
    }
}
