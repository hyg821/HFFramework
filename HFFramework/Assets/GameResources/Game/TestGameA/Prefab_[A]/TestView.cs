using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using HFFramework;
using System;
using DG.Tweening;

public class TestView :  UIView {

	// Use this for initialization
	void Start () {
		
	}

    public override void DoHideAnimation(Action callback)
    {
        base.DoHideAnimation(callback);
        if (callback!=null)
        {
            Debug.Log("做消失动画");
            callback();
        }
    }

    public override void DoShowAnimation(Action callback)
    {
        base.DoShowAnimation(callback);
        myRectTransform.anchoredPosition = new Vector2(3000, 0);
        myRectTransform.DOAnchorPos(new Vector2(0, 0), 1).OnComplete(delegate ()
        {
             Debug.Log("做显示动画");
             callback();
        });
    }
}
