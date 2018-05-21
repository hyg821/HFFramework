using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using UnityEngine.UI;

namespace HFFramework
{
    /// <summary>
    ///  对应UI的显示层
    /// </summary>
    public class UIView : BaseMonoBehaviour
    {
        public RectTransform myRectTransform;

        public override void MyAwake()
        {
            base.MyAwake();
            myRectTransform = myTransform as RectTransform;
        }

        public virtual void DoShowAnimation(Action callback)
        {

        }

        public virtual void DoHideAnimation(Action callback)
        {

        }

        public virtual void Show(Action callback)
        {
            if (IsActive==false)
            {
                IsActive = true;
            }
            DoShowAnimation(callback);
        }

        public virtual void Hide(Action callback)
        {
            if (IsActive==true)
            {
                DoHideAnimation(callback);
                IsActive = false;
            }
        }
    }
}


