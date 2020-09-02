using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.Reflection;

namespace HFFramework
{
    public class DataObserver
    {
        public FieldInfo fieldInfo;

        public PropertyInfo propertyInfo;

        public event Action<DataComponent> onValueChanged;

        public void AddEvent(Action<DataComponent> onValueChanged)
        {
            this.onValueChanged += onValueChanged;
        }

        public void RemoveEvent(Action<DataComponent> onValueChanged)
        {
            this.onValueChanged -= onValueChanged;
        }

        public void Invoke(DataComponent data)
        {
            if (onValueChanged != null)
            {
                onValueChanged(data);
            }
        }

        public void Destroy()
        {
            fieldInfo = null;
            propertyInfo = null;
            onValueChanged = null;
        }
    }
}