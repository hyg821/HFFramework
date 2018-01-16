using System.Collections;
using System.Collections.Generic;
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

        public virtual void DoShowAnimation()
        {

        }

        public virtual void DoHideAnimation()
        {

        }

        public virtual void Show()
        {
            if (gameObject.activeSelf==false)
            {
                gameObject.SetActive(true);
                DoShowAnimation();
            }
        }

        public virtual void Hide()
        {
            if (gameObject.activeSelf == true)
            {
                DoHideAnimation();
                gameObject.SetActive(false);
            }
        }
    }
}


