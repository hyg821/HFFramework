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
    public class UIController : UIBase 
    {
        public string controllerTag; 

        public override void MyAwake()
        {
            base.MyAwake();
        }

        public virtual void DoShowAnimation(Action callback)
        {

        }

        public virtual void DoHideAnimation(Action callback)
        {

        }

        public virtual void Open(Action callback)
        {
            IsShow = true;
            DoShowAnimation(callback);
        }

        public virtual void Close(Action callback)
        {
            DoHideAnimation(callback);
            IsShow = false;
        }

        public override void Destroy()
        {
            base.Destroy();
            Destroy(gameObject);
        }

    }
}