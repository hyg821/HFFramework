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
using HFFramework;

namespace HFFramework
{
    public class AppDomainManager : MonoBehaviour
    {
        public static AppDomainManager self;

        //AppDomain是ILRuntime的入口，最好是在一个单例类中保存，整个游戏全局就一个，这里为了示例方便，每个例子里面都单独做了一个
        //大家在正式项目中请全局只创建一个AppDomain
        private ILRuntime.Runtime.Enviorment.AppDomain appdomain;

        public int GameType;
        public string DllName;
        public string MainClassName;

        public void Awake()
        {
            self = this;
        }

        /// <summary>
        ///  跳转到 对应热更新DLL
        /// </summary>
        /// <param name="gameType">游戏类型</param>
        /// <param name="dllName">dll名字</param>
        /// <param name="mainClass">dll被调用的方法</param>
        public void Jump(int gameType, string assetbundleName, string dllName, string mainClass)
        {
            GameType = gameType;
            DllName = dllName;
            MainClassName = mainClass;

            if (appdomain == null)
            {
                appdomain = new ILRuntime.Runtime.Enviorment.AppDomain();
                HAResourceManager.self.LoadHotFixAssembly(assetbundleName, dllName, appdomain, HotFixInit);
            }

            HotFixAwake();
        }

        /// <summary>
        /// 初始化ilruntime
        /// </summary>
        public unsafe void HotFixInit(bool isOK)
        {
            if (isOK)
            {
                InitializeILRuntime();
                appdomain.Invoke(MainClassName, "InitMonoBehaviour", null, GameObject.Find("AppDomainManager"));
            }
        }

        public unsafe void HotFixAwake()
        {
            appdomain.Invoke(MainClassName, "EnterDLL", null, null);
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
            //使用Couroutine时，C#编译器会自动生成一个实现了IEnumerator，IEnumerator<object>，IDisposable接口的类，因为这是跨域继承，所以需要写CrossBindAdapter（详细请看04_Inheritance教程），Demo已经直接写好，直接注册即可
            appdomain.RegisterCrossBindingAdaptor(new CoroutineAdapter());

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
            //ILRuntime.Runtime.Generated.CLRBindings.Initialize(appdomain);

            AppDomainCommonSetting.Instance.SetupCLRRedirection(appdomain);
        }


        public void DestroyManager()
        {
            if (appdomain != null)
            {
                appdomain.Invoke(MainClassName, "Destory", null, GameObject.Find("AppDomainManager"));
                appdomain = null;
            }
            self = null;
        }

    }

}