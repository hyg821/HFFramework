using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    public class UICachePool : UIBase
    {
        /// <summary>
        ///  休眠页面的缓存池
        /// </summary>
        public Dictionary<string, List<UIController>> cacheDic = new Dictionary<string, List<UIController>>();

        public override void OnAwake()
        {
            base.OnAwake();
            myTransform.position = Vector3.one;
            myTransform.rotation = Quaternion.identity;
            IsShow = false;
        }

        /// <summary>
        ///  通过 实例化物体的id 去找对应的 物体
        /// </summary>
        /// <param name="instanceID"></param>
        /// <returns></returns>
        public UIController GetController(string type)
        {
            List<UIController> list = null;
            if (cacheDic.TryGetValue(type, out list))
            {
                if (list.Count > 0)
                {
                    UIController controller = list[0];
                    list.RemoveAt(0);
                    return controller;
                }
            }
            return null;
        }

        public void Add(UIController controller)
        {
            List<UIController> list = null;
            if (!cacheDic.TryGetValue(controller.Config.Type, out list))
            {
                list = new List<UIController>();
                cacheDic.Add(controller.Config.Type, list);
            }
            list.Add(controller);
            controller.SetParent(this);
        }
    }
}
