using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

namespace HFFramework
{
    public class UIToggle : MonoBehaviour
    {
        public  UIToggleGroup group;

        public int index;

        private int selectCode = -1;

        public Action<bool> OnValueChange;

        private void Awake()
        {
            
        }

        public void Init(UIToggleGroup group,int index)
        {
            this.group = group;
            this.index = index;
        }

        public void m_Select(int selectCode)
        {
            if (OnValueChange!=null&&this.selectCode!=selectCode)
            {
                this.selectCode = selectCode;
                bool b = selectCode == 1 ? true : false;
                OnValueChange(b);
            }
        }

        public void Select()
        {
            group.Select(index);
        }

    }
}

