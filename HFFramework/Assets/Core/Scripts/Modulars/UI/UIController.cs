﻿using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Config;
using Cysharp.Threading.Tasks;

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

        public UI config;

        /// <summary>
        ///  打开页面 open ->PlayShowAnimation -> OnShowComplete
        /// </summary>
        /// <param name="animation"></param>
        /// <param name="callback"></param>
        public virtual UniTask Open(bool animation = false)
        {
            showTask = new UniTaskCompletionSource();
            if (animation)
            {
                OnShowAnimation();
            }
            else
            {
                IsShow = true;
                OnShow();
            }
            return showTask.Task;
        }

        /// <summary>
        ///  关闭页面
        /// </summary>
        /// <param name="animation"></param>
        /// <param name="callback"></param>
        public virtual UniTask Close(bool animation = false)
        {
            hideTask = new UniTaskCompletionSource();
            if (animation)
            {
                OnHideAnimation();
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
            OnHide();
        }

        /// <summary>
        ///  刷新页面
        /// </summary>
        /// <param name="tag"></param>
        /// <param name="value"></param>
        public virtual void Refresh(object @params)
        {

        }

        /// <summary>
        /// 展现动画 播放之后自行调用 OnShow
        /// </summary>
        public virtual void OnShowAnimation()
        {

        }

        /// <summary>
        /// 隐藏动画 播放之后自行调用 OnHide
        /// </summary>
        public virtual void OnHideAnimation()
        {

        }

        /// <summary>
        /// 界面完全显示完成
        /// </summary>
        public virtual void OnShow()
        {
            try
            {
                if (showTask != null)
                {
                    showTask.TrySetResult();
                }
            }
            catch (Exception e)
            {
                Debug.LogError(e);
                throw;
            }
        }

        /// <summary>
        /// 界面完全隐藏完成
        /// </summary>
        public virtual void OnHide()
        {
            try
            {
                if (hideTask != null)
                {
                    hideTask.TrySetResult();
                }
            }
            catch (Exception e)
            {
                Debug.LogError(e);
                throw;
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