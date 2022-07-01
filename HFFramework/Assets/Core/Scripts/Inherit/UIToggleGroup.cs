using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

namespace HFFramework
{
    public class UIToggleGroup : MonoBehaviour
    {
        public Action<int> OnValueChange;

        public List<UIToggle> list = new List<UIToggle>();

        private int currentIndex = -99999;

        public int Index
        {
            get
            {
                return currentIndex;
            }
        }

        private void Awake()
        {
            for (int i = 0; i < list.Count; i++)
            {
                list[i].Init(this, i);
            }
        }

        public void AddToggle(UIToggle toggle)
        {
            list.Add(toggle);
            toggle.Init(this, list.Count-1);
        }

        public T GetToggle<T>(int index) where T: UIToggle
        {
            return list[index] as T;
        }
        
        public void RemoveToggle(UIToggle toggle)
        {
            if (list.Contains(toggle))
            {
                list.Remove(toggle);
            }
            currentIndex = Mathf.Min(list.Count - 1,currentIndex);
        }


        public void Select(int index, bool force = false,bool flip = false)
        {
            if (force == false)
            {
                if (index != currentIndex)
                {
                    m_select(index, flip);
                }
            }
            else
            {
                m_select(index, flip);
            }
        }

        private void m_select(int index, bool flip)
        {
            int result = -1;
            currentIndex = index;
            for (int i = 0; i < list.Count; i++)
            {
                UIToggle item = list[i];
                int selectCode = currentIndex == i ? 1 : 0;
                item.m_Select(selectCode, flip);

                if (item.selectCode==1)
                {
                    result = i;
                }
            }

            if (OnValueChange!=null)
            {
                OnValueChange(result);
            }
        }

        public void Foreach<T>(Action<int,T> action) where T: UIToggle
        {
            for (int i = 0; i < list.Count; i++)
            {
                T t = list[i] as T;
                action?.Invoke(i, t);
            }
        }

        public void Reset()
        {
            currentIndex = -1;
            foreach (var item in list)
            {
                item.Reset();
            }
        }

        public void Clear()
        {
            Reset();
            list.Clear();
        }
    }
}
