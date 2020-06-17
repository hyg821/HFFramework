using System.Collections.Generic;
using UnityEngine;
using System;
using System.IO;
using DG.Tweening;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;
using ILRuntime.CLR.Method;

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

        /// <summary>
        ///  update缓存方法
        /// </summary>
        private IMethod mainMethod;
        private IMethod updateMethod;
        private IMethod fixedUpdateMethod;
        private IMethod lateUpdateMethod;
        private IMethod destroyMethod;

        /// <summary>
        ///  空参数
        /// </summary>
        private object[] p0 = new object[0];

        public override void Init(byte[] bytes)
        {
            appdomain = new ILRuntime.Runtime.Enviorment.AppDomain();
            codeStream = new MemoryStream(bytes);
            appdomain.LoadAssembly(codeStream);
            InitializeILRuntime();
        }

        public override void CacheMethod()
        {
            mainMethod = appdomain.LoadedTypes[MainClassName].GetMethod(mainMethodName, 0);
            updateMethod = appdomain.LoadedTypes[MainClassName].GetMethod(updateMethodName, 0);
            fixedUpdateMethod = appdomain.LoadedTypes[MainClassName].GetMethod(fixedUpdateMethodName, 0);
            lateUpdateMethod = appdomain.LoadedTypes[MainClassName].GetMethod(lateUpdateMethodName, 0);
            destroyMethod = appdomain.LoadedTypes[MainClassName].GetMethod(destroyMethodName, 0);
        }

        public new void Awake()
        {
            appdomain.Invoke(mainMethod, null, p0);
        }

        public new void Update()
        {
            appdomain.Invoke(updateMethod, null, p0);
        }

        public new void FixedUpdate()
        {
            appdomain.Invoke(fixedUpdateMethod, null, p0);
        }

        public new void LateUpdate()
        {
            appdomain.Invoke(lateUpdateMethod, null, p0);
        }

        public new void Destroy()
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
        unsafe void InitializeILRuntime()
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
            appdomain.DelegateManager.RegisterMethodDelegate<AssetBundlePackage>();
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

            //不要注释  否则会开启大量反射方法
            ILRuntime.Runtime.Generated.CLRBindings.Initialize(appdomain);
        }
    }
}