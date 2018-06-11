using UnityEngine;
using System.Collections;
using DG.Tweening;
using System;

namespace HotFix
{
    public enum UIHideType
    {
        Scale,
        CanvasGroup
    }

    public class UIElement : BaseElement
    {
        /// <summary>
        ///  UI 隐藏 类型
        /// </summary>
        private UIHideType hideType = UIHideType.Scale;

        private CanvasGroup canvasGroup;
        /// <summary>
        ///  如果使用了 CanvasGroup
        /// </summary>
        public CanvasGroup CanvasGroup
        {
            get
            {
                if (canvasGroup==null&&gameObject!=null)
                {
                    canvasGroup = gameObject.AddComponent<CanvasGroup>();
                }
                return canvasGroup;
            }
        }

        private bool isShow;
        /// <summary>
        ///  对于UI 的显示 或者隐藏 如果使用 SetActive 那么会产生额外的GC  所以使用缩放 或者 CanvasGroup.alpha 方法 降低DrawCall 和GC 
        /// </summary>
        public virtual bool IsShow
        {
            set
            {
                isShow = value;
                if (gameObject != null)
                {
                    if (isShow == true)
                    {
                        if (hideType == UIHideType.Scale)
                        {
                            transform.localScale = Vector3.one;
                        }
                        else
                        {
                            CanvasGroup.alpha = 1;
                        }
                        ElementDidAppear();
                    }
                    else
                    {
                        if (hideType == UIHideType.Scale)
                        {
                            transform.localScale = Vector3.zero;
                        }
                        else
                        {
                            CanvasGroup.alpha = 0;
                        }
                        ElementDidDisAppear();
                    }
                }
            }
            get
            {
                return isShow;
            }
        }
    }
}


