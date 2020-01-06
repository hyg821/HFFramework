using System.Collections.Generic;
using UnityEngine;
using System;
using System.IO;
using DG.Tweening;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;
using ILRuntime.CLR.Method;
using System.Reflection;
using ReflectorOptimization.Common;

namespace HFFramework
{
    public class AppDomainManager : MonoBehaviour, IManager
    {
        //DISABLE_ILRUNTIME_DEBUG

        public string updateMethodName = "Update";
        public string fixedUpdateMethodName = "FixedUpdate";
        public string lateUpdateMethodName = "LateUpdate";

        /// <summary>
        ///  单例
        /// </summary>
        public static AppDomainManager Instance;

        /// <summary>
        ///  全局app作用域
        /// </summary>
        private ILRuntime.Runtime.Enviorment.AppDomain appdomain;

        
        private Assembly assembly;

        /// <summary>
        ///  缓存Stream 2018之后新版 需要一直开启这个
        /// </summary>
        private MemoryStream codeStream;

        /// <summary>
        ///  dll名字
        /// </summary>
        public string DllName;

        /// <summary>
        ///  dll入口类名字
        /// </summary>
        public string MainClassName;

        /// <summary>
        ///  空参数
        /// </summary>
        private object[] p0 = new object[0];

        /// <summary>
        ///  update缓存方法
        /// </summary>
        private IMethod i_updateMethod;
        private IMethod i_fixedUpdateMethod;
        private IMethod i_lateUpdateMethod;

        private FastMethodInvoker.FastInvokeHandler m_mainMethod;
        private FastMethodInvoker.FastInvokeHandler m_updateMethod;
        private FastMethodInvoker.FastInvokeHandler m_fixedUpdateMethod;
        private FastMethodInvoker.FastInvokeHandler m_lateUpdateMethod;
        private FastMethodInvoker.FastInvokeHandler m_DestroyMethod;

        /// <summary>
        ///  执行ILRuntime 的平台
        /// </summary>
        public GamePlatform ILRuntimePlatform = GamePlatform.iOS;

        /// <summary>
        ///  是否激活 mono的反射方法
        /// </summary>
        public bool IsActiveMonoMethod
        {
            set
            {
                enabled = value;
            }
            get
            {
                return enabled;
            }
        }

        public void Awake()
        {
            Instance = this;
            IsActiveMonoMethod = false;
        }

        /// <summary>
        ///  跳转到 对应热更新DLL
        /// </summary>
        /// <param name="gameType">游戏类型</param>
        /// <param name="dllName">dll名字</param>
        /// <param name="mainClass">dll被调用的方法</param>
        ///   HFFramework.AppDomainManager.self.Jump(0, "HotFixDll", "HFFrameworkHotFix", "HotFixEnter");
        public void JumpToHotFix(string assetbundleName, string dllName, string mainClass)
        {
            DllName = dllName;
            MainClassName = mainClass;
            HFResourceManager.Instance.LoadHotFixAssembly(assetbundleName, dllName, HotFixInit);
        }

        /// <summary>
        /// 初始化ilruntime
        /// </summary>
        private void HotFixInit(byte[] bytes)
        {
            if (GameEnvironment.Instance.Platform == ILRuntimePlatform)
            {
                if (appdomain==null)
                {
                    appdomain = new ILRuntime.Runtime.Enviorment.AppDomain();
                    codeStream = new MemoryStream(bytes);
                    appdomain.LoadAssembly(codeStream);
                    InitializeILRuntime();
                }
            }
            else
            {
                if (assembly==null)
                {
                    assembly = Assembly.Load(bytes);
                }
            }

            CacheMethod();
            HotFixAwake();
            IsActiveMonoMethod = true;
        }

        public void CacheMethod()
        {
            if (GameEnvironment.Instance.Platform == ILRuntimePlatform)
            {
                i_updateMethod = appdomain.LoadedTypes[MainClassName].GetMethod(updateMethodName, 0);
                i_fixedUpdateMethod = appdomain.LoadedTypes[MainClassName].GetMethod(fixedUpdateMethodName, 0);
                i_lateUpdateMethod = appdomain.LoadedTypes[MainClassName].GetMethod(lateUpdateMethodName, 0);
            }
            else
            {
                Type type = assembly.GetType("HotFixEnter");
                m_mainMethod = FastMethodInvoker.GetMethodInvoker(type.GetMethod("Main"));
                m_updateMethod = FastMethodInvoker.GetMethodInvoker(type.GetMethod("Update"));
                m_fixedUpdateMethod = FastMethodInvoker.GetMethodInvoker(type.GetMethod("FixedUpdate"));
                m_lateUpdateMethod = FastMethodInvoker.GetMethodInvoker(type.GetMethod("LateUpdate"));
                m_DestroyMethod = FastMethodInvoker.GetMethodInvoker(type.GetMethod("Destroy"));
            }
        }

        public void HotFixAwake()
        {
            if (GameEnvironment.Instance.Platform == ILRuntimePlatform)
            {
                appdomain.Invoke(MainClassName, "Main", null, null);
            }
            else
            {
                m_mainMethod.Invoke(null, null);
            }
        }

        public void Update()
        {
            if (GameEnvironment.Instance.Platform == ILRuntimePlatform)
            {
                appdomain.Invoke(i_updateMethod, null, p0);
            }
            else
            {
                m_updateMethod(null, null);
            }
        }

        public void FixedUpdate()
        {
            if (GameEnvironment.Instance.Platform == ILRuntimePlatform)
            {
                appdomain.Invoke(i_fixedUpdateMethod, null, p0);
            }
            else
            {
                m_fixedUpdateMethod.Invoke(null, null);
            }
        }

        public void LateUpdate()
        {
            if (GameEnvironment.Instance.Platform == ILRuntimePlatform)
            {
                appdomain.Invoke(i_lateUpdateMethod, null, p0);
            }
            else
            {
                m_lateUpdateMethod.Invoke(null, null);
            }
        }

        /// <summary>
        /// 初始化一下ILRuntime框架的东西
        /// 注册一些回掉
        /// </summary>
        unsafe void InitializeILRuntime()
        {
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

        public void DestroyManager()
        {
            IsActiveMonoMethod = false;

            if (codeStream!=null)
            {
                codeStream.Close();
                codeStream = null;
            }

            if (appdomain != null)
            {
                appdomain.Invoke(MainClassName, "Destroy", null, null);
                appdomain = null;
            }

            if (assembly != null)
            {
                m_DestroyMethod.Invoke(null, null);
                assembly = null;
            }

            p0 = null;

            i_updateMethod = null;
            i_fixedUpdateMethod = null;
            i_lateUpdateMethod = null;

            m_mainMethod = null;
            m_updateMethod = null;
            m_fixedUpdateMethod = null;
            m_lateUpdateMethod = null;
            m_DestroyMethod = null;

            Instance = null;
        }
    }
}