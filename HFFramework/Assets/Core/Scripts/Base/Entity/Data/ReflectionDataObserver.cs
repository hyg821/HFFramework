using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.Reflection;

namespace HFFramework
{
    public class ReflectionDataObserver
    {
        public FieldInfo fieldInfo;

        public PropertyInfo propertyInfo;

        public event Action<DataComponent> onValueChanged;

        public ReflectionDataObserver(string key, Type type)
        {
            if (fieldInfo == null)
            {
                fieldInfo = type.GetField(key);
            }

            if (propertyInfo == null)
            {
                propertyInfo = type.GetProperty(key);
            }
        }

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