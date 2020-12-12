using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    public class ViewListRefresher<T, K> where K : Entity
    {
        public List<K> viewList = new List<K>();

        public List<T> dataList;

        public void Refresh(List<T> dataList, Func<K> Create, Action<T, K> ViewRefresh)
        {
            if (dataList.Count > 20)
            {
                HFLog.C("视图层数量大于20 适用复用滚动列表实现");
            }

            this.dataList = dataList;

            if (dataList.Count < viewList.Count)
            {
                for (int i = dataList.Count; i < viewList.Count; i++)
                {
                    viewList[i].IsActive = false;
                }
            }

            for (int i = 0; i < dataList.Count; i++)
            {
                T data = dataList[i];
                K k = null;
                if (i < viewList.Count)
                {
                    k = viewList[i];
                    k.IsActive = true;
                }
                else
                {
                    //生成Item列表并显示数据
                    k = Create();
                    viewList.Add(k);
                }
                ViewRefresh(data, k);
            }
        }

        public void Clear()
        {
            dataList.Clear();
            Extensions.Clear(viewList);
        }
    }
}


