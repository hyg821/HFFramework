using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    public enum UIHideType
    {
        /// <summary>
        ///  通过激活非激活的方式来控制隐藏 有GC 适合一些子物体 小物体
        /// </summary>
        Active,
        /// <summary>
        /// 通过缩放的方式控制 无GC scollRect 会跳动 适合没有scrollRect的页面
        /// </summary>
        Scale,
        /// <summary>
        ///  通过canvasGroup的方式 无GC 太多了界面会卡顿 适合大页面
        /// </summary>
        CanvasGroup
    }

    public class UIBase : BaseMonoBehaviour
    {
        /// <summary>
        ///  UI 隐藏 类型
        /// </summary>
        public UIHideType hideType = UIHideType.Active;

        private CanvasGroup canvasGroup;
        /// <summary>
        ///  如果使用了 CanvasGroup
        /// </summary>
        public CanvasGroup CanvasGroup
        {
            get
            {
                if (canvasGroup == null && gameObject != null)
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
                        switch (hideType)
                        {
                            case UIHideType.Active:
                                IsActive = isShow;
                                break;
                            case UIHideType.Scale:
                                transform.localScale = Vector3.one;
                                ElementDidAppear();
                                break;
                            case UIHideType.CanvasGroup:
                                CanvasGroup.alpha = 1;
                                ElementDidAppear();
                                break;
                            default:
                                break;
                        }    
                    }
                    else
                    {
                        switch (hideType)
                        {
                            case UIHideType.Active:
                                IsActive = false;
                                break;
                            case UIHideType.Scale:
                                transform.localScale = Vector3.zero;
                                ElementDidDisAppear();
                                break;
                            case UIHideType.CanvasGroup:
                                CanvasGroup.alpha = 0;
                                ElementDidDisAppear();
                                break;
                            default:
                                break;
                        }
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