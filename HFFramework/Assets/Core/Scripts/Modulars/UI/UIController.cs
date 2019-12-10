using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Config;

namespace HFFramework
{
    /// <summary>
    ///  对应UI的操作层
    /// </summary>
    /// <typeparam name="V"></typeparam>
    /// <typeparam name="M"></typeparam>
    public class UIController : UIBase 
    {
        private Action showCallback;
        private Action hideCallback;

        private UI config;
        public UI Config
        {
            set
            {
                config = value;
                SetParent(UIManager.Instance.GetCanvas(config.LayerIndex).gameObject, false);
            }
            get
            {
                return config;
            }
        }

        /// <summary>
        ///  打开页面
        /// </summary>
        /// <param name="animation"></param>
        /// <param name="callback"></param>
        public virtual void Open(bool animation = false,Action callback = null)
        {
            showCallback = callback;
            if (animation)
            {
                ShowAnimation();
            }
            else
            {
                IsShow = true;
            }
        }

        /// <summary>
        ///  关闭页面
        /// </summary>
        /// <param name="animation"></param>
        /// <param name="callback"></param>
        public virtual void Close(bool animation = false,Action callback = null)
        {
            hideCallback = callback;
            if (animation)
            {
                HideAnimation();
            }
            else
            {
                IsShow = false;
            }
        }

        /// <summary>
        ///  刷新页面
        /// </summary>
        /// <param name="tag"></param>
        /// <param name="value"></param>
        public virtual void Refresh(string tag, object value)
        {

        }

        /// <summary>
        /// 展现动画
        /// </summary>
        public virtual void ShowAnimation()
        {

        }

        /// <summary>
        /// 隐藏动画
        /// </summary>
        public virtual void HideAnimation()
        {

        }

        /// <summary>
        /// 展现动画完成
        /// </summary>
        public void ShowAnimationComplete()
        {
            if (showCallback!=null)
            {
                showCallback();
            }
        }

        /// <summary>
        /// 隐藏动画完成
        /// </summary>
        public void HideAnimationComplete()
        {
            if (hideCallback!=null)
            {
                hideCallback();
            }
        }

        /// <summary>
        /// 被销毁
        /// </summary>
        public override void Destroy()
        {
            base.Destroy();
        }
    }
}