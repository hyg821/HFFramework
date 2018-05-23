using System;
using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;

namespace HotFix
{
    public class ToggleCenter : BaseElement
    {
        private int currentIndex = -1;

        private List<ToggleItem> list = new List<ToggleItem>();

        private Action<int> callback;

        public void AddListener(Action<int> callback)
        {
            this.callback = callback;
        }

        public void AddToggleItem(ToggleItem it)
        {
            it.center = this;
            list.Add(it);
        }

        public void ItemCallback(int index)
        {
            currentIndex = index;
            for (int i = 0; i < list.Count; i++)
            {
                ToggleItem item = list[i];
                if (currentIndex == item.index)
                {
                    item.StartSelect(true);
                    callback(currentIndex);
                }
                else
                {
                    item.StartSelect(false);
                }
            }
        }

        public void SetSelect(int index)
        {
            ItemCallback(index);
        }

    }
}

