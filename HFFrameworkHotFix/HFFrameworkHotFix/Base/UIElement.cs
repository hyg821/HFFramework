using UnityEngine;
using System.Collections;
using DG.Tweening;
using System;

namespace HotFix
{
    public class UIElement : BaseElement
    {
        public const float FadeTime = 0.25f;

        public static Vector3 ShowVector3 = Vector3.one;
        public static Vector3 HideVector3 = Vector3.zero;

        private bool isShow;
        public virtual bool IsShow
        {
            set
            {
                isShow = value;
                if (isShow == true)
                {
                    if (gameObject != null && transform.localScale != UIElement.ShowVector3)
                    {
                        transform.localScale = UIElement.ShowVector3;
                        ElementDidAppear();
                    }
                }
                else
                {
                    if (gameObject != null && transform.localScale != UIElement.HideVector3)
                    {
                        transform.localScale = UIElement.HideVector3;
                        ElementDidDisAppear();
                    }
                }
            }
            get
            {
                return IsShow;
            }
        }
    }
}


