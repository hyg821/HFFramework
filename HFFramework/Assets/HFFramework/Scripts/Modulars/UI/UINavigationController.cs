using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    public class UINavigationController : UIBase
    {
        public const string UINavigation = "UINavigation";
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
            name = UINavigation;
            cachePool = FindChild<UICachePool>("CachePool");
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
            if (popType == PopType.Cache)
            {
                CachePoolAdd(controller);
            }
            //然后再做显示上的操作
            ControllerListEndHide(popType);
            //先从当前的 视图栈移除
            ControllerListRemove(controller);
        }

        public void PopController(PopType popType)
        {
            if (controllerList.Count > 0)
            {
                UIController controller = controllerList[controllerList.Count - 1];
                //如果是 需要缓存的 加入到缓存池
                if (popType == PopType.Cache)
                {
                    CachePoolAdd(controller);
                }
                //然后再做显示上的操作
                ControllerListEndHide(popType);
                //先从当前的 视图栈移除
                ControllerListRemove(controller);
            }
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
                        if (pushType == PushType.Navigation)
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

                    if (popType == PopType.Destroy)
                    {
                        controllerList[count - 1].Destroy();
                    }
                });
            }
        }

        public void ControllerListAdd(UIController cx)
        {
            if (controllerList.Contains(cx) == false)
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


