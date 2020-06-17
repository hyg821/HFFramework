using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    public class ProgramExecutor
    {
        /// <summary>
        ///  dll入口类名字
        /// </summary>
        public const string MainClassName = "HotFixEnter";

        public const string mainMethodName = "Main";
        public const string updateMethodName = "Update";
        public const string fixedUpdateMethodName = "FixedUpdate";
        public const string lateUpdateMethodName = "LateUpdate";
        public const string destroyMethodName = "Destroy";

        public virtual void Init(byte[] bytes)
        {

        }

        public virtual void CacheMethod()
        {

        }

        public void Awake()
        {

        }

        public void Update()
        {

        }

        public void FixedUpdate()
        {

        }

        public void LateUpdate()
        {

        }      

        public void Destroy()
        {

        }
    }
}

