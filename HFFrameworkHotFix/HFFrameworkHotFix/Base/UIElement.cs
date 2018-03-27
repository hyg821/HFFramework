using UnityEngine;
using System.Collections;
using DG.Tweening;
using System;

namespace HotFix
{
    public class UIElement : ElementBase
    {
        public static Vector3 showVector = new Vector3(1, 1, 1);
        public static Vector3 hideVector = Vector3.zero;
        public static float FadeTime = 0.25f;

        /// <summary>
        ///  显示一个view  
        /// </summary>
        /// <param name="maskView">灰色蒙版</param>
        /// <param name="view">真正的负责显示的元素</param>
        /// <param name="animation">是否要动画</param>
        /// <param name="finishCallback">执行完的回调</param>
        public void Show(GameObject maskView, GameObject view, bool animation, Action finishCallback = null)
        {
            IsShow = true;
            if (animation == false)
            {
                maskView.SetActive(IsShow);
                view.SetActive(IsShow);
                if (finishCallback != null)
                {
                    finishCallback();
                }
            }
            else
            {
                maskView.SetActive(IsShow);
                view.SetActive(true);
                view.transform.localScale = new Vector3(0, 0, 1);
                view.transform.DOScale(Vector3.one, FadeTime).SetEase(Ease.OutBack).OnComplete(delegate ()
                {
                    if (finishCallback != null)
                    {
                        finishCallback();
                    }
                });
            }
        }

        public void Hide(GameObject maskView, GameObject view, bool animation, Action finishCallback = null)
        {
            if (animation == false)
            {
                maskView.SetActive(false);
                view.SetActive(false);
                if (finishCallback != null)
                {
                    finishCallback();
                }
                IsShow = false;
            }
            else
            {

                view.transform.localScale = new Vector3(1, 1, 1);
                view.transform.DOScale(new Vector3(0, 0, 1), FadeTime).SetEase(Ease.InBack).OnComplete(delegate ()
                {
                    if (finishCallback != null)
                    {
                        finishCallback();
                    }
                    view.SetActive(false);
                    maskView.SetActive(false);
                    IsShow = false;
                });
            }
        }

    }
}


