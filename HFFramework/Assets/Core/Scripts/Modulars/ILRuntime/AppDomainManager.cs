using System.Collections.Generic;
using UnityEngine;
using System;
using System.IO;
using DG.Tweening;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;
using Spine;
using Assets.Game.Scripts.HotFix;
using ILRuntime.CLR.Method;

namespace HFFramework
{
    public class AppDomainManager : MonoBehaviour, IManager
    {
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
        private IMethod updateMethod;
        private IMethod fixedUpdateMethod;
        private IMethod lateUpdateMethod;

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
            if (appdomain == null)
            {
                appdomain = new ILRuntime.Runtime.Enviorment.AppDomain();
                HFResourceManager.Instance.LoadHotFixAssembly(assetbundleName, dllName,HotFixInit);
            }
        }

        /// <summary>
        /// 初始化ilruntime
        /// </summary>
        public void HotFixInit(byte[] bytes)
        {
            codeStream = new MemoryStream(bytes);
            appdomain.LoadAssembly(codeStream);
            InitializeILRuntime();
            CacheMethod();
            IsActiveMonoMethod = true;
            HotFixAwake();
        }

        public void CacheMethod()
        {
            updateMethod = appdomain.LoadedTypes[MainClassName].GetMethod(updateMethodName, 0);
            fixedUpdateMethod = appdomain.LoadedTypes[MainClassName].GetMethod(fixedUpdateMethodName, 0);
            lateUpdateMethod = appdomain.LoadedTypes[MainClassName].GetMethod(lateUpdateMethodName, 0);
        }

        public void HotFixAwake()
        {
            appdomain.Invoke(MainClassName, "AwakeDLL", null, null);
        }

        public void Update()
        {
            if (appdomain!=null&& updateMethod!=null)
            {
                appdomain.Invoke(updateMethod, null, p0);
            }
        }

        public void FixedUpdate()
        {
            if (appdomain != null && updateMethod != null)
            {
                appdomain.Invoke(fixedUpdateMethod, null, p0);
            }
        }

        public void LateUpdate()
        {
            if (appdomain != null && updateMethod != null)
            {
                appdomain.Invoke(lateUpdateMethod, null, p0);
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
            appdomain.DelegateManager.RegisterMethodDelegate<TrackEntry>();
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

            appdomain.DelegateManager.RegisterDelegateConvertor<Spine.AnimationState.TrackEntryDelegate>((action) =>
            {
                return new Spine.AnimationState.TrackEntryDelegate((p) => { ((Action<TrackEntry>)action)(p); });
            });

            //不要注释  否则会开启大量反射方法
            ILRuntime.Runtime.Generated.CLRBindings.Initialize(appdomain);
            AppDomainCommonSetting.Instance.SetupCLRRedirection(appdomain);
        }

        public void DestroyManager()
        {
            if (codeStream!=null)
            {
                codeStream.Close();
            }

            if (appdomain != null)
            {
                appdomain.Invoke(MainClassName, "Destroy", null, null);
                appdomain = null;
            }
            Instance = null;
        }
    }
}