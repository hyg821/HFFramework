using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace ETModel
{
    public class UIToggleGroup : MonoBehaviour
    {
        public List<UIToggle> list = new List<UIToggle>();

        private int currentIndex = -1;

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

        public void Select(int index)
        {
            if (index!= currentIndex)
            {
                currentIndex = index;
                for (int i = 0; i < list.Count; i++)
                {
                    UIToggle item = list[i];
                    int selectCode = currentIndex == i ? 1 : 0;
                    item.m_Select(selectCode);
                }
            }
        }
    }
}
