using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

namespace HFFramework
{
    /// <summary>
    ///  HotFix.Entity -> gameObject -> HotFixLinker ->HotFixLinker.entity ->HotFix.Entity
    /// </summary>
    public class HotFixLinker : MonoBehaviour
    {
        public object entity;

        private Action<string, object> callMethod;

        private Action destroyCallback;

        /// <summary>
        ///  依赖注入 HotFix.Entity 
        /// </summary>
        /// <param name="entity"></param>
        /// <param name="destroyCallback"></param>
        public virtual void Injector(object entity,Action<string,object> callMethod, Action destroyCallback)
        {
            this.entity = entity;
            this.callMethod = callMethod;
            this.destroyCallback = destroyCallback;
        }

        /// <summary>
        ///  主工程 调用 热更新 某一个对象的方法
        /// </summary>
        /// <param name="method"></param>
        /// <param name="param"></param>
        public void Call(string method,object param)
        {
            if (callMethod!=null)
            {
                callMethod(method, param);
            }
        }

        private void OnDestroy()
        {
            if (destroyCallback != null)
            {
                destroyCallback();
            }
            entity = null;
            destroyCallback = null;
        }
    }
}


