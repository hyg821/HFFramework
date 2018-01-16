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
    public class UIController<V,M> : BaseMonoBehaviour where V : UIView where M : UIModel
    {
        public V view;
        public M model;

        public override void MyAwake()
        {
            base.MyAwake();
        }

        public virtual void ViewWillAppear()
        {

        }

        public virtual void ViewViewDisAppear()
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

        public virtual void Open()
        {
            ViewWillAppear();
            view.Show();
            ViewDidAppear();
        }

        public virtual void Close()
        {
            ViewViewDisAppear();
            view.Hide();
            ViewDidDisAppear();
        }
    }
}