using System;
using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;

namespace HotFix
{
    public class ToggleCenter : BaseElement
    {
        /// <summary>
        ///  当前点击的index
        /// </summary>
        private int currentIndex = -1;

        /// <summary>
        ///  item 集合
        /// </summary>
        private List<ToggleCell> list = new List<ToggleCell>();

        /// <summary>
        ///  每次选择之后的回调
        /// </summary>
        private Action<int> callback;

        /// <summary>
        ///  添加监听事件
        /// </summary>
        /// <param name="callback"></param>
        public void AddListener(Action<int> callback)
        {
            this.callback = callback;
        }

        /// <summary>
        ///  添加item
        /// </summary>
        /// <param name="it"></param>
        public void AddToggleItem(ToggleCell it)
        {
            it.center = this;
            list.Add(it);
        }

        /// <summary>
        ///  item 回调
        /// </summary>
        /// <param name="index"></param>
        public void ItemCallback(int index)
        {
            currentIndex = index;
            for (int i = 0; i < list.Count; i++)
            {
                ToggleCell item = list[i];
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

        /// <summary>
        ///  设置选择index
        /// </summary>
        /// <param name="index"></param>
        public void SetSelect(int index)
        {
            ItemCallback(index);
        }

    }
}

