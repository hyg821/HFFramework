using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace HFFramework
{
    public class UILabel : Text, IDataPropertyObserver
    {
        private bool isDisposed = false;
        
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

        protected override void Awake()
        {
            base.Awake();
            raycastTarget = false;
        }

        public void Bind<T>(DataProperty<T> data,Action<T> action = null) where T:IComparable
        {
            if (action == null)
            {
                action = OnDataValueChanged;
            }
            data.OnValueChanged(this, action);
        }

        public void OnDataValueChanged<T>(T value)
        {
            text = value.ToString();
        }

        protected override void OnDestroy()
        {
            base.OnDestroy();
            isDisposed = true;
        }

        public bool IsDisposed
        {
            get
            {
                return isDisposed;
            }
        }
    }
}
