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
            if (gameObject.activeSelf==false)
            {
                gameObject.SetActive(true);
            }
            DoShowAnimation(callback);
        }

        public virtual void Hide(Action callback)
        {
            if (gameObject.activeSelf == true)
            {
                DoHideAnimation(callback);
                gameObject.SetActive(false);
            }
        }
    }
}


