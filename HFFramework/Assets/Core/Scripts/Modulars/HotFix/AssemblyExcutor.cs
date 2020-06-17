using System.Collections.Generic;
using UnityEngine;
using System;
using System.IO;
using DG.Tweening;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;
using System.Reflection;
using ReflectorOptimization.Common;

namespace HFFramework
{
    public class AssemblyExcutor : ProgramExecutor
    {
        private Assembly assembly;

        private FastMethodInvoker.FastInvokeHandler mainMethod;
        private FastMethodInvoker.FastInvokeHandler updateMethod;
        private FastMethodInvoker.FastInvokeHandler fixedUpdateMethod;
        private FastMethodInvoker.FastInvokeHandler lateUpdateMethod;
        private FastMethodInvoker.FastInvokeHandler destroyMethod;

        public override void Init(byte[] bytes)
        {
            assembly = Assembly.Load(bytes);
        }

        public override void CacheMethod()
        {
            Type type = assembly.GetType("HotFixEnter");
            mainMethod = FastMethodInvoker.GetMethodInvoker(type.GetMethod(mainMethodName));
            updateMethod = FastMethodInvoker.GetMethodInvoker(type.GetMethod(updateMethodName));
            fixedUpdateMethod = FastMethodInvoker.GetMethodInvoker(type.GetMethod(fixedUpdateMethodName));
            lateUpdateMethod = FastMethodInvoker.GetMethodInvoker(type.GetMethod(lateUpdateMethodName));
            destroyMethod = FastMethodInvoker.GetMethodInvoker(type.GetMethod(destroyMethodName));
        }

        public new void Awake()
        {
            mainMethod.Invoke(null, null);
        }

        public new void Update()
        {
            updateMethod(null, null);
        }

        public new void LateUpdate()
        {
            fixedUpdateMethod(null, null);
        }

        public new void FixedUpdate()
        {
            lateUpdateMethod.Invoke(null, null);
        }

        public new void Destroy()
        {
            if (destroyMethod!=null)
            {
                destroyMethod.Invoke(null, null);
            }

            assembly = null;
            mainMethod = null;
            updateMethod = null;
            fixedUpdateMethod = null;
            lateUpdateMethod = null;
            destroyMethod = null;
        }
    }
}


