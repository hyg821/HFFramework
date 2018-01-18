using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    /// <summary>
    ///  对应UI的操作层
    /// </summary>
    /// <typeparam name="V"></typeparam>
    /// <typeparam name="M"></typeparam>
    public class UIController : BaseMonoBehaviour 
    {

        public string controllerTag; 

        public UIView view;
        public UIModel model;

        public override void MyAwake()
        {
            base.MyAwake();
        }

        public virtual void ViewWillAppear()
        {

        }

        public virtual void ViewWillDisAppear()
        {

        }

        /// <summary>
        ///  元素被显示出来
        /// </summary>
        public virtual void ViewDidAppear()
        {

        }

        /// <summary>
        ///  元素被隐藏
        /// </summary>
        public virtual void ViewDidDisAppear()
        {

        }

        public virtual void Open(Action callback)
        {
            ViewWillAppear();
            view.Show(callback);
            ViewDidAppear();
        }

        public virtual void Close(Action callback)
        {
            ViewWillDisAppear();
            view.Hide(callback);
            ViewDidDisAppear();
        }
    }
}