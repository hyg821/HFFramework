using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace HotFix
{
    public class BaseTabBarController: ElementBase
    {
        public Action<int> clickIndexCallback;

        public List<BaseTabBarItem> tabBarItemList = new List<BaseTabBarItem>();
        public List<ElementBase> viewList = new List<ElementBase>();

        private int tabBarItemCount = 0;

        public int currentSelectIndex = -1;

        public GameObject tabBarLayout;

        public override void Awake()
        {
            base.Awake();
        }

        public override void ElementInit()
        {
            base.ElementInit();
        }

        public override void ElementDidAppear()
        {
            base.ElementDidAppear();
            if (currentSelectIndex< viewList.Count)
            {
                viewList[currentSelectIndex].ElementDidAppear();
            }
        }

        public virtual void AddTabBarItem(BaseTabBarItem tabBarItem)
        {
            this.tabBarItemList.Add(tabBarItem);
            tabBarItem.gameObject.transform.SetParent(tabBarLayout.transform,false);
            tabBarItem.Init(tabBarItemCount, TabBarOnClick);
            tabBarItemCount++;
        }

        public void SetFirstSelect(int i)
        {
            tabBarItemList[i].button.onClick.Invoke();
        }

        public virtual void AddSubViewController(ElementBase subViewController)
        {
            viewList.Add(subViewController);
        }

        public virtual void TabBarOnClick(int index, bool b)
        {
            for (int i = 0; i < viewList.Count; i++)
            {
                if (i==index)
                {
                    viewList[i].IsShow = true;
                }
                else
                {
                    viewList[i].IsShow = false;
                }
            }

            for (int i = 0; i < tabBarItemList.Count; i++)
            {
                if (i == index)
                {
                    tabBarItemList[i].Open();
                }
                else
                {
                    tabBarItemList[i].Close();
                }
            }

            if (currentSelectIndex!=index)
            {
                currentSelectIndex = index;
                if (clickIndexCallback != null)
                {
                    clickIndexCallback(currentSelectIndex);
                }
            }
        }

        public override void Destory()
        {
            foreach (var item in viewList)
            {
                item.Destory();
            }

            viewList.Clear();
            viewList = null;

            foreach (var item in tabBarItemList)
            {
                item.Destory();
            }

            tabBarItemList.Clear();
            tabBarItemList = null;

            base.Destory();
        }

    }
}
