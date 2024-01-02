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

        public int selectCode = -1;

        public Action<bool> OnValueChange;

        private void Awake()
        {
            
        }

        public void Init(UIToggleGroup group,int index)
        {
            this.group = group;
            this.index = index;
        }

        public void m_Select(int selectCode, bool flip)
        {
            //如果是翻转的 
            if (flip)
            {
                //遍历 当前选择的是 对勾
                if (selectCode == 1)
                {
                    if (this.selectCode == 1)
                    {
                        this.selectCode = 0;
                    }
                    else
                    {
                        this.selectCode = 1;
                    }
                }
                else
                {
                    this.selectCode = selectCode;
                }
            }
            else
            {
                this.selectCode = selectCode;
            }

            Handler();
        }

        private void Handler()
        {
            bool b = selectCode == 1 ? true : false;
            OnSelect(b);
            if (OnValueChange!=null)
            {
                OnValueChange(b);
            }
        }

        public void Select()
        {
            group.Select(index);
        }

        public void ForceSelect(bool force = true)
        {
            group.Select(index, force);
        }

        public void FlipSelect(bool force = true, bool flip = true)
        {
            group.Select(index, force, flip);
        }

        public void Reset()
        {
            selectCode = -1; 
        }

        public void Destroy()
        {
            group.RemoveToggle(this);
        }

        public virtual void OnSelect(bool isOn)
        {

        }
    }
}

