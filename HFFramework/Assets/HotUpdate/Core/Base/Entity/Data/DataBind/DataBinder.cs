﻿using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    public interface IDataBinder
    {
        void Invoke();
        void UnBind();
    }

    public class DataBinder<T,V>: IDataPropertyObserver, IDataBinder where T: IComparable
    {
        /// <summary>
        /// 数据属性
        /// </summary>
        public DataProperty<T> data;

        /// <summary>
        /// 视图控件
        /// </summary>
        public V view;

        private Action<V,T> callback;

        public bool IsDisposed { get; private set; } = false;

        public virtual void Bind(DataProperty<T> data, V view, Action<V,T> callback = null)
        {
            this.data = data;
            this.view = view;
            this.callback = callback;
            data.OnValueChanged(this, OnValueChanged);
        } 

        protected virtual void OnValueChanged(T value)
        {
            Invoke();
        }

        public void Invoke()
        {
            if (callback != null)
            {
                if (view!=null)
                {
                    callback(view,data.value);
                }
                else
                {
                    UnBind();
                }
            }
        }

        public virtual void UnBind()
        {
            IsDisposed = true;
        }
    }
}