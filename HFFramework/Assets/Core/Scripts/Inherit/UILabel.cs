using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace HFFramework
{
    public class UILabel : Text
    {
        protected override void Awake()
        {
            base.Awake();
            raycastTarget = false;
        }

        public override string text
        {
            set
            {
                base.text = value;
            }
            get
            {
                return base.text;
            }
        }
    }
}
