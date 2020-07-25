using System.Collections.Generic;
using UnityEngine;
using System;
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

        private Dictionary<string, Dictionary<string, FastMethodInvoker.FastInvokeHandler>> cache = new Dictionary<string, Dictionary<string, FastMethodInvoker.FastInvokeHandler>>();

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

        public override void Awake()
        {
            mainMethod.Invoke(null, null);
        }

        public override void Update()
        {
            updateMethod(null, null);
        }

        public override void LateUpdate()
        {
            fixedUpdateMethod(null, null);
        }

        public override void FixedUpdate()
        {
            lateUpdateMethod.Invoke(null, null);
        }

        public override void Invoke(string className, string methodName, object instance, params object[] args)
        {
            base.Invoke(className, className, instance, args);
            
            Dictionary<string, FastMethodInvoker.FastInvokeHandler> temp;
            if (!cache.TryGetValue(className,out temp))
            {
                temp = new Dictionary<string, FastMethodInvoker.FastInvokeHandler>();
                cache.Add(className, temp);
            }

            FastMethodInvoker.FastInvokeHandler method;
            if (!temp.TryGetValue(methodName, out method))
            {
                Type type = assembly.GetType(className);
                method = FastMethodInvoker.GetMethodInvoker(type.GetMethod(methodName));
                temp.Add(methodName, method);
            }

            method.Invoke(instance, args);
        }

        public override void Destroy()
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


