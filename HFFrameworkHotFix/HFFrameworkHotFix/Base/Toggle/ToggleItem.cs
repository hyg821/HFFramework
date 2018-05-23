using UnityEngine;

namespace HotFix
{
    public class ToggleItem : BaseElement
    {
        public int index;

        private bool isSelect;

        public ToggleCenter center;

        public void Init(int index)
        {
            this.index = index;
        }

        public  void StartSelect(bool isSelect)
        {
            if (this.isSelect != isSelect)
            {
                Select(isSelect);
            }
        }

        /// <summary>
        ///  子类需要在对应button 里 调用 CallCenter
        /// </summary>
        public void CallCenter()
        {
            center.ItemCallback(index);
        }

        /// <summary>
        ///  子类需要实现方法
        /// </summary>
        /// <param name="isSelect"></param>
        public virtual void Select(bool isSelect)
        {

        }
    }
}

