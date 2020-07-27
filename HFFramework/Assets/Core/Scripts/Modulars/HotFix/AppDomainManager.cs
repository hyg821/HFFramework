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
    /// <summary>
    /// 热更新管理器 负责启动热更新代码
    /// ILRuntime 注意事项 
    /// 1.DISABLE_ILRUNTIME_DEBUG 宏定义 作用  Profiler 关闭行号 不会产生20b的方法调用分配 打包不会产生
    /// 2.生成dll 使用release模式 vs上方解决方案配置（配置管理器） 把HotFix 改成release 然后生成
    /// 3.自动分析生成代码 运行效率提升 2-10 倍
    /// 4.只在iOS平台是使用ILRuntime 效率是mono调用模式的效率1/20  --- 1/100
    /// 5.编辑器测试 10000个update 里 每次执行100次vector3+=1 大概耗时2500ms
    /// 6.如果需要热更新代码计算量大的地方 把大量计算 转移到 HotFix.entity.gameObject.monobehivor上 然后把结果返回给entity 运行效率会有巨大提升
    /// </summary>
    public class AppDomainManager : MonoBehaviour, IManager
    {
        /// <summary>
        ///  单例
        /// </summary>
        public static AppDomainManager Instance;

        /// <summary>
        ///  当前程序执行者
        /// </summary>
        public ProgramExecutor executor;

        /// <summary>
        ///  是否激活 mono的反射方法
        /// </summary>
        public bool IsActiveMethod
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
            IsActiveMethod = false;
        }

        /// <summary>
        ///  跳转到 对应热更新DLL
        /// </summary>
        /// <param name="gameType">游戏类型</param>
        /// <param name="dllName">dll名字</param>
        /// <param name="mainClass">dll被调用的方法</param>
        ///   HFFramework.AppDomainManager.Instance.Invoke(0, "HotFixDll", "HFFrameworkHotFix", "HotFixEnter");
        public void ExcuteHotFix(string assetbundleName, string dllName)
        {
            HFResourceManager.Instance.LoadHotFixAssembly(assetbundleName, dllName, HotFixInit);
        }

        public void CreateProgramExecutor()
        {
            switch (GameEnvironment.Instance.Platform)
            {
                case GamePlatform.Android:
                    executor = new AssemblyExcutor();
                    break;
                case GamePlatform.iOS:
                    executor = new ILRuntimeExecutor();
                    break;
                case GamePlatform.Web:
                    executor = new AssemblyExcutor();
                    break;
                case GamePlatform.Windows:
                    executor = new AssemblyExcutor();
                    break;
                case GamePlatform.Mac:
                    executor = new AssemblyExcutor();
                    break;
                case GamePlatform.Editor:
                    executor = new AssemblyExcutor();
                    break;
                default:
                    break;
            }
        }

        /// <summary>
        /// 初始化ilruntime
        /// </summary>
        private void HotFixInit(byte[] code, byte[] pdb)
        {
            CreateProgramExecutor();
            executor.Init(code, pdb);
            executor.CacheMethod();
            executor.Awake();
            IsActiveMethod = true;
        }

        public void Update()
        {
            executor.Update();
        }

        public void FixedUpdate()
        {
            executor.FixedUpdate();
        }

        public void LateUpdate()
        {
            executor.LateUpdate();
        }
   
        public void Shutdown()
        {
            if (executor!=null)
            {
                executor.Destroy();
            }
            IsActiveMethod = false;
            Instance = null;
        }
    }
}