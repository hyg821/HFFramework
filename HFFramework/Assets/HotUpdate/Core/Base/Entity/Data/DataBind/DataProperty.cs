using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

namespace HFFramework
{
    public class DataProperty<T> where T : IComparable
    {
        private T m_value;

        public virtual T value
        {
            get
            {
                return m_value;
            }
        }

        private List<DataObserver<T>> notifyList = new List<DataObserver<T>>();

        public DataProperty()
        {

        }

        public DataProperty(T value)
        {
            m_value = value;
        }

        public virtual void SetValue(T value,bool notify = true)
        {
            if (Compare<T>.CompareGeneric(m_value, value))
            {
                m_value = value;
                if (notify)
                {
                    Dispatch();
                }
            }
        }

        public void OnValueChanged(IDataPropertyObserver observer, Action<T> notify)
        {
            DataObserver<T> dop = new DataObserver<T>(observer, notify);
            notifyList.Add(dop);
        }

        private void Dispatch()
        {
            for (int i = notifyList.Count-1; i >=0 ; i--)
            {
                DataObserver<T> o = notifyList[i];
                if (o.observer.IsDisposed)
                {
                    HFLog.C("observer 被销毁 从属性观察列表移除");
                    o.Clear();
                    notifyList.RemoveAt(i);
                }
                else
                {
                    o.notify(value);
                }
            }
        }

        public void Clear()
        {
            for (int i = 0; i < notifyList.Count; i++)
            {
                notifyList[i].Clear();
            }
            notifyList.Clear();
        }
    }
}
