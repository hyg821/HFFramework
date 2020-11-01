using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace HFFramework
{
    public class UILabel : Text,IDataPropertyObserver
    {
        private bool isDisposed = false;

        public bool IsDisposed
        {
            get
            {
                return isDisposed;
            }
        }

        protected override void Awake()
        {
            base.Awake();
            raycastTarget = false;
        }

        public void BindDataProperty<T>(DataProperty<T> property) where T : IComparable
        {
            property.OnValueChanged(this, OnValueChanged);
        }

        private void OnValueChanged<T>(T value) where T : IComparable
        {
            this.text = value.ToString();
        }

        protected override void OnDestroy()
        {
            isDisposed = true;
        }
    }
}
