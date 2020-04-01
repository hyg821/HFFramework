using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    public enum UICacheType
    {
        Cache = 0,
        Destroy = 1
    }

    public enum UIShowType
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

    public class UIBase : Entity
    {
        /// <summary>
        ///  UI 隐藏 类型
        /// </summary>
        public UIShowType showType = UIShowType.Active;

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
                        switch (showType)
                        {
                            case UIShowType.Active:
                                IsActive = isShow;
                                break;
                            case UIShowType.Scale:
                                transform.localScale = Vector3.one;
                                OnEnable();
                                break;
                            case UIShowType.CanvasGroup:
                                CanvasGroup.alpha = 1;
                                CanvasGroup.blocksRaycasts = true;
                                CanvasGroup.interactable = true;
                                OnEnable();
                                break;
                            default:
                                break;
                        }    
                    }
                    else
                    {
                        switch (showType)
                        {
                            case UIShowType.Active:
                                IsActive = false;
                                break;
                            case UIShowType.Scale:
                                transform.localScale = Vector3.zero;
                                OnDisable();
                                break;
                            case UIShowType.CanvasGroup:
                                CanvasGroup.alpha = 0;
                                CanvasGroup.blocksRaycasts = false;
                                CanvasGroup.interactable = false;
                                OnDisable();
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