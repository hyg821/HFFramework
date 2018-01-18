using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    public class UICachePool : BaseMonoBehaviour
    {
        /// <summary>
        ///  休眠页面的缓存池
        /// </summary>
        public Dictionary<long, UIController> cacheDic = new Dictionary<long, UIController>();

        public override void MyAwake()
        {
            base.MyAwake();
            IsShow = false;
        }

        /// <summary>
        ///  通过 实例化物体的id 去找对应的 物体
        /// </summary>
        /// <param name="instanceID"></param>
        /// <returns></returns>
        public UIController FindControllerWithID(long instanceID)
        {
            UIController c = null;
            if (cacheDic.TryGetValue(instanceID, out c))
            {
                return c;
            }
            return null;
        }

        public void Add(UIController c)
        {
            cacheDic.Add(c.myInstanceID, c);
            c.SetParent(gameObject);
        }

        public void Remove(UIController c)
        {
            UIController cx;
            if (cacheDic.TryGetValue(c.myInstanceID, out cx))
            {
                cacheDic.Remove(c.myInstanceID);
            }
        }
    }
}
