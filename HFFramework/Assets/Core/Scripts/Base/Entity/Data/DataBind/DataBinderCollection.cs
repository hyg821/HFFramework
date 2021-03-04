using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    public class DataBinderCollection
    {
        /// <summary>
        /// 绑定列表
        /// </summary>
        public List<IDataBinder> binderList = new List<IDataBinder>();

        public void Add(IDataBinder db)
        {
            binderList.Add(db);
        }

        public void Refresh()
        {
            for (int i = 0; i < binderList.Count; i++)
            {
                binderList[i].Invoke();
            }
        }

        public void Clear()
        {
            for (int i = 0; i < binderList.Count; i++)
            {
                binderList[i].UnBind();
            }
            binderList.Clear();
        }
    }
}
