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
        /// <summary>
        ///  热更新层里的entity
        /// </summary>
        public object entity;

        /// <summary>
        ///  热更新层里的entity 类名
        /// </summary>
        public string entityClass;

        /// <summary>
        ///  热更新层里的entity id
        /// </summary>
        public long entityID;

        /// <summary>
        /// 调试方法名字
        /// </summary>
        public string debugMethodName;

        /// <summary>
        /// 调试方法参数
        /// </summary>
        public string[] debugMethodParams;

        private Action<string, object> callMethod;

        private Action destroyCallback;

        /// <summary>
        ///  依赖注入 HotFix.Entity 
        /// </summary>
        /// <param name="entity"></param>
        /// <param name="destroyCallback"></param>
        public virtual void Injector(long entityID, string entityClass, object entity,Action<string,object> callMethod, Action destroyCallback)
        {
            this.entityID = entityID;
            this.entityClass = entityClass;
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
            callMethod = null;
            destroyCallback = null;
        }
    }
}


