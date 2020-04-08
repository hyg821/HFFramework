using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Config;
using UniRx.Async;

namespace HFFramework
{
    /// <summary>
    ///  对应UI的操作层
    /// </summary>
    /// <typeparam name="V"></typeparam>
    /// <typeparam name="M"></typeparam>
    public class UIController : UIBase 
    {
        private UniTaskCompletionSource showTask;
        private UniTaskCompletionSource hideTask;

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
        ///  打开页面 open ->PlayShowAnimation -> OnShowComplete
        /// </summary>
        /// <param name="animation"></param>
        /// <param name="callback"></param>
        public virtual UniTask Open(object param = null, bool animation = false)
        {
            showTask = new UniTaskCompletionSource();
            if (animation)
            {
                PlayShowAnimation();
            }
            else
            {
                IsShow = true;
                OnShowComplete();
            }
            return showTask.Task;
        }

        /// <summary>
        ///  关闭页面
        /// </summary>
        /// <param name="animation"></param>
        /// <param name="callback"></param>
        public virtual UniTask Close(object param = null, bool animation = false)
        {
            hideTask = new UniTaskCompletionSource();
            if (animation)
            {
                PlayHideAnimation();
            }
            else
            {
                Close();
            }
            return hideTask.Task;
        }

        public void Close()
        {
            IsShow = false;
            OnHideComplete();
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
        /// 展现动画 播放之后自行调用 OnShowComplete
        /// </summary>
        public virtual void PlayShowAnimation()
        {

        }

        /// <summary>
        /// 隐藏动画 播放之后自行调用 OnHideComplete
        /// </summary>
        public virtual void PlayHideAnimation()
        {

        }

        /// <summary>
        /// 界面完全显示完成
        /// </summary>
        public virtual void OnShowComplete()
        {
            if (showTask != null)
            {
                showTask.TrySetResult();
            }
        }

        /// <summary>
        /// 界面完全隐藏完成
        /// </summary>
        public virtual void OnHideComplete()
        {
            if (hideTask != null)
            {
                hideTask.TrySetResult();
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