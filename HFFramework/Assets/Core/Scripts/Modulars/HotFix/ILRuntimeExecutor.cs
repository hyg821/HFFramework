﻿using System.Collections.Generic;
using UnityEngine;
using System;
using System.IO;
using DG.Tweening;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;
using ILRuntime.CLR.Method;
using ILRuntime.CLR.TypeSystem;
using ILRuntime.Mono.Cecil.Pdb;
using ILRuntime.Runtime.Stack;
using ILRuntime.Runtime.Intepreter;
using ILRuntime.CLR.Utils;

namespace HFFramework
{
    public class ILRuntimeExecutor : ProgramExecutor
    {
        /// <summary>
        ///  全局app作用域
        /// </summary>
        private ILRuntime.Runtime.Enviorment.AppDomain appdomain;

        /// <summary>
        ///  缓存Stream 2018之后新版 需要一直开启这个
        /// </summary>
        private MemoryStream codeStream;
        private MemoryStream pdbStream;

        /// <summary>
        ///  update缓存方法
        /// </summary>
        private IMethod mainMethod;
        private IMethod updateMethod;
        private IMethod fixedUpdateMethod;
        private IMethod lateUpdateMethod;
        private IMethod destroyMethod;

        private Dictionary<string, Dictionary<string, IMethod>> cache = new Dictionary<string, Dictionary<string, IMethod>>();

        /// <summary>
        ///  空参数
        /// </summary>
        private object[] p0 = new object[0];

        public override void Init(byte[] code, byte[] pdb)
        {
            appdomain = new ILRuntime.Runtime.Enviorment.AppDomain();
            codeStream = new MemoryStream(code);
            if (pdb!=null)
            {
                pdbStream = new MemoryStream(pdb);
                PdbReaderProvider pv = new ILRuntime.Mono.Cecil.Pdb.PdbReaderProvider();
                appdomain.LoadAssembly(codeStream, pdbStream, pv);
            }
            else
            {
                appdomain.LoadAssembly(codeStream);
            }

            InitILRuntime(appdomain);
        }

        public override void CacheMethod()
        {
            IType type = appdomain.LoadedTypes[MainClassName];
            mainMethod = type.GetMethod(mainMethodName, 0);
            updateMethod = type.GetMethod(updateMethodName, 0);
            fixedUpdateMethod = type.GetMethod(fixedUpdateMethodName, 0);
            lateUpdateMethod = type.GetMethod(lateUpdateMethodName, 0);
            destroyMethod = type.GetMethod(destroyMethodName, 0);
        }

        public override void Awake()
        {
            appdomain.Invoke(mainMethod, null, p0);
        }

        public override void Update()
        {
            appdomain.Invoke(updateMethod, null, p0);
        }

        public override void FixedUpdate()
        {
            appdomain.Invoke(fixedUpdateMethod, null, p0);
        }

        public override void LateUpdate()
        {
            appdomain.Invoke(lateUpdateMethod, null, p0);
        }

        public override void Invoke(string className, string methodName, object instance,params object[] args)
        {
            base.Invoke(className, methodName, instance, args);
            Dictionary<string, IMethod> temp;
            if (!cache.TryGetValue(className, out temp))
            {
                temp = new Dictionary<string, IMethod>();
                cache.Add(className, temp);
            }

            IMethod method;
            if (!temp.TryGetValue(methodName, out method))
            {
                IType type = appdomain.LoadedTypes[className];
                method = type.GetMethod(methodName, args.Length);
                temp.Add(methodName, method);
            }

            appdomain.Invoke(method, instance, args);
        }

        public override void Destroy()
        {
            if (appdomain!=null)
            {
                appdomain.Invoke(destroyMethod, null, p0);
                appdomain = null;
            }

            if (codeStream != null)
            {
                codeStream.Close();
                codeStream = null;
            }

            if (pdbStream!=null)
            {
                pdbStream.Close();
                pdbStream = null;
            }

            p0 = null;

            mainMethod = null;
            updateMethod = null;
            fixedUpdateMethod = null;
            lateUpdateMethod = null;
            destroyMethod = null;
        }


        /// <summary>
        /// 初始化一下ILRuntime框架的东西
        /// 注册一些回掉
        /// </summary>
        public unsafe static void InitILRuntime(ILRuntime.Runtime.Enviorment.AppDomain appdomain)
        {
            Register(appdomain);
            //不要注释  否则会开启大量反射方法 放在最后一步
            ILRuntime.Runtime.Generated.CLRBindings.Initialize(appdomain);
        }

        public unsafe static void Register(ILRuntime.Runtime.Enviorment.AppDomain appdomain)
        {
#if DEBUG && (UNITY_EDITOR || UNITY_ANDROID || UNITY_IPHONE)
            appdomain.UnityMainThreadID = System.Threading.Thread.CurrentThread.ManagedThreadId;
#endif
            // 注册litjson
            LitJson.JsonMapper.RegisterILRuntimeCLRRedirection(appdomain);

            appdomain.RegisterCrossBindingAdaptor(new MonoBehaviourAdapter());
            appdomain.RegisterCrossBindingAdaptor(new CoroutineAdapter());
            appdomain.RegisterCrossBindingAdaptor(new IAsyncStateMachineClassInheritanceAdaptor());

            //添加值绑定
            appdomain.RegisterValueTypeBinder(typeof(Vector3), new Vector3Binder());
            appdomain.RegisterValueTypeBinder(typeof(Quaternion), new QuaternionBinder());
            appdomain.RegisterValueTypeBinder(typeof(Vector2), new Vector2Binder());

            var mi = typeof(HFLog).GetMethod("L", new System.Type[] { typeof(object) });
            appdomain.RegisterCLRMethodRedirection(mi, L);

            mi = typeof(HFLog).GetMethod("E", new System.Type[] { typeof(object) });
            appdomain.RegisterCLRMethodRedirection(mi, E);

            //==============================如果将委托实例传出给ILRuntime外部使用=============================================
            appdomain.DelegateManager.RegisterMethodDelegate<int>();
            appdomain.DelegateManager.RegisterMethodDelegate<int, MemoryStream>();
            appdomain.DelegateManager.RegisterMethodDelegate<Scene, LoadSceneMode>();
            appdomain.DelegateManager.RegisterMethodDelegate<int, object>();
            appdomain.DelegateManager.RegisterMethodDelegate<GameObject>();
            appdomain.DelegateManager.RegisterMethodDelegate<bool>();
            appdomain.DelegateManager.RegisterMethodDelegate<GameObject[]>();
            appdomain.DelegateManager.RegisterMethodDelegate<UnityEngine.Object[]>();
            appdomain.DelegateManager.RegisterMethodDelegate<Sprite[]>();
            appdomain.DelegateManager.RegisterMethodDelegate<BaseEventData>();
            appdomain.DelegateManager.RegisterMethodDelegate<float>();
            appdomain.DelegateManager.RegisterMethodDelegate<Dictionary<string, string>>();
            appdomain.DelegateManager.RegisterMethodDelegate<string>();
            appdomain.DelegateManager.RegisterMethodDelegate<NotificationMessage>();
            appdomain.DelegateManager.RegisterMethodDelegate<AssetPackage>();
            appdomain.DelegateManager.RegisterFunctionDelegate<GameObject>();
            appdomain.DelegateManager.RegisterMethodDelegate<System.Int32, System.Byte[]>();

            //===========================委托转换器（DelegateConvertor）================================================
            // 如果你需要将一个不是Action或者Func类型的委托实例传到ILRuntime外部使用的话，
            // 除了委托适配器，还需要额外写一个转换器，将Action和Func转换成你真正需要的那个委托类型
            appdomain.DelegateManager.RegisterDelegateConvertor<UnityAction>((action) =>
            {
                return new UnityAction(() => { ((Action)action)(); });
            });

            appdomain.DelegateManager.RegisterDelegateConvertor<UnityAction<bool>>((action) =>
            {
                return new UnityAction<bool>((a) => { ((Action<bool>)action)(a); });
            });

            appdomain.DelegateManager.RegisterDelegateConvertor<UnityAction<string>>((action) =>
            {
                return new UnityAction<string>((a) => { ((Action<string>)action)(a); });
            });

            appdomain.DelegateManager.RegisterDelegateConvertor<UnityAction<float>>((action) =>
            {
                return new UnityAction<float>((a) => { ((Action<float>)action)(a); });
            });

            appdomain.DelegateManager.RegisterDelegateConvertor<UnityAction<Scene, LoadSceneMode>>((action) =>
            {
                return new UnityAction<Scene, LoadSceneMode>((s, l) =>
                {
                    ((Action<Scene, LoadSceneMode>)action)(s, l);
                });
            });

            appdomain.DelegateManager.RegisterDelegateConvertor<TweenCallback>((action) =>
            {
                return new TweenCallback(() => { ((Action)action)(); });
            });

            appdomain.DelegateManager.RegisterDelegateConvertor<UnityAction<BaseEventData>>((action) =>
            {
                return new UnityAction<BaseEventData>((p) => { ((Action<BaseEventData>)action)(p); });
            });
        }

        //编写重定向方法对于刚接触ILRuntime的朋友可能比较困难，比较简单的方式是通过CLR绑定生成绑定代码，然后在这个基础上改，比如下面这个代码是从UnityEngine_Debug_Binding里面复制来改的
        //如何使用CLR绑定请看相关教程和文档
        private unsafe static StackObject* L(ILIntepreter __intp, StackObject* __esp, IList<object> __mStack, CLRMethod __method, bool isNewObj)
        {
            //ILRuntime的调用约定为被调用者清理堆栈，因此执行这个函数后需要将参数从堆栈清理干净，并把返回值放在栈顶，具体请看ILRuntime实现原理文档
            ILRuntime.Runtime.Enviorment.AppDomain __domain = __intp.AppDomain;
            StackObject* ptr_of_this_method;
            //这个是最后方法返回后esp栈指针的值，应该返回清理完参数并指向返回值，这里是只需要返回清理完参数的值即可
            StackObject* __ret = ILIntepreter.Minus(__esp, 1);
            //取Log方法的参数，如果有两个参数的话，第一个参数是esp - 2,第二个参数是esp -1, 因为Mono的bug，直接-2值会错误，所以要调用ILIntepreter.Minus
            ptr_of_this_method = ILIntepreter.Minus(__esp, 1);

            //这里是将栈指针上的值转换成object，如果是基础类型可直接通过ptr->Value和ptr->ValueLow访问到值，具体请看ILRuntime实现原理文档
            object message = typeof(object).CheckCLRTypes(StackObject.ToObject(ptr_of_this_method, __domain, __mStack));
            //所有非基础类型都得调用Free来释放托管堆栈
            __intp.Free(ptr_of_this_method);

            //在真实调用Debug.Log前，我们先获取DLL内的堆栈
            var stacktrace = __domain.DebugService.GetStackTrace(__intp);

            //我们在输出信息后面加上DLL堆栈
            UnityEngine.Debug.Log(message + "\n" + stacktrace);

            return __ret;
        }

        //编写重定向方法对于刚接触ILRuntime的朋友可能比较困难，比较简单的方式是通过CLR绑定生成绑定代码，然后在这个基础上改，比如下面这个代码是从UnityEngine_Debug_Binding里面复制来改的
        //如何使用CLR绑定请看相关教程和文档
        private unsafe static StackObject* E(ILIntepreter __intp, StackObject* __esp, IList<object> __mStack, CLRMethod __method, bool isNewObj)
        {
            //ILRuntime的调用约定为被调用者清理堆栈，因此执行这个函数后需要将参数从堆栈清理干净，并把返回值放在栈顶，具体请看ILRuntime实现原理文档
            ILRuntime.Runtime.Enviorment.AppDomain __domain = __intp.AppDomain;
            StackObject* ptr_of_this_method;
            //这个是最后方法返回后esp栈指针的值，应该返回清理完参数并指向返回值，这里是只需要返回清理完参数的值即可
            StackObject* __ret = ILIntepreter.Minus(__esp, 1);
            //取Log方法的参数，如果有两个参数的话，第一个参数是esp - 2,第二个参数是esp -1, 因为Mono的bug，直接-2值会错误，所以要调用ILIntepreter.Minus
            ptr_of_this_method = ILIntepreter.Minus(__esp, 1);

            //这里是将栈指针上的值转换成object，如果是基础类型可直接通过ptr->Value和ptr->ValueLow访问到值，具体请看ILRuntime实现原理文档
            object message = typeof(object).CheckCLRTypes(StackObject.ToObject(ptr_of_this_method, __domain, __mStack));
            //所有非基础类型都得调用Free来释放托管堆栈
            __intp.Free(ptr_of_this_method);

            //在真实调用Debug.Log前，我们先获取DLL内的堆栈
            var stacktrace = __domain.DebugService.GetStackTrace(__intp);

            //我们在输出信息后面加上DLL堆栈
            UnityEngine.Debug.LogError(message + "\n" + stacktrace);

            return __ret;
        }
    }
}