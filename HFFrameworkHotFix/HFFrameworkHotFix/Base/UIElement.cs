using UnityEngine;
using System.Collections;
using DG.Tweening;
using System;

namespace HotFix
{
    public class UIElement : BaseElement
    {
        public static Vector3 showVector = new Vector3(1, 1, 1);

        public static Vector3 hideVector = Vector3.zero;

        public const float FadeTime = 0.25f;
    }
}


