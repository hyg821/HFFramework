using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cysharp.Threading.Tasks;

namespace HFFramework
{
    /// <summary>
    /// 逻辑场景  登录 大厅 主城  大世界 副本 等等
    /// </summary>
    public class GameScene : FSMState
    {
        public override void Awake()
        {
            base.Awake();
        }

        public override async UniTask OnEnter(object args = null)
        {
            await base.OnEnter(args);
            await LoadResources();
            await PreLoad();
            await SendEnterRequest();
            await OpenUI();
            CloseLoading();
        }

        public override async UniTask OnExit(object args = null)
        {
            await base.OnExit(args);
            await OpenLoading(args);
            await SendExitRequest();
            CloseUI();
            ClearManager();
            UnloadResources();
        }

        /// <summary>
        /// 打开loading
        /// </summary>
        /// <param name="args"></param>
        public virtual async UniTask OpenLoading(object args = null)
        {
            await UniTask.Yield();
            HFLog.C("步骤1 打开loading");
        }

        /// <summary>
        /// 发送离开网络消息
        /// </summary>
        /// <returns></returns>
        public virtual async UniTask SendExitRequest()
        {
            await UniTask.Yield();
            HFLog.C("步骤2 发送离开网络消息");
        }

        /// <summary>
        ///  清理UI
        /// </summary>
        /// <returns></returns>
        public virtual void CloseUI()
        {
            HFLog.C("步骤3 清理UI");
        }

        /// <summary>
        ///  清理对应管理器
        /// </summary>
        /// <returns></returns>
        public virtual void ClearManager()
        {
            HFLog.C("步骤4 清理对应管理器");
        }

        /// <summary>
        ///  卸载场景
        /// </summary>
        /// <returns></returns>
        public virtual void UnloadResources()
        {
            AssetManager.Instance.UnloadUnusedAssetBundle(false,true);
            HFLog.C("步骤5 卸载场景");
        }

        /// <summary>
        ///  加载场景
        /// </summary>
        /// <returns></returns>
        public virtual async UniTask LoadResources()
        {
            await UniTask.Yield();
            HFLog.C("步骤6 加载场景");
        }

        /// <summary>
        ///  预加载资源
        /// </summary>
        /// <returns></returns>
        public virtual async UniTask PreLoad()
        {
            await UniTask.Yield();
            HFLog.C("步骤7 预加载资源");
        }

        /// <summary>
        /// 发送进入网络消息
        /// </summary>
        /// <returns></returns>
        public virtual async UniTask SendEnterRequest()
        {
            await UniTask.Yield();
            HFLog.C("步骤8 预加载资源");
        }

        /// <summary>
        ///  打开UI
        /// </summary>
        /// <returns></returns>
        public virtual async UniTask OpenUI()
        {
            await UniTask.Yield();
            HFLog.C("步骤9  打开UI");
        }

        /// <summary>
        ///  关闭loading
        /// </summary>
        /// <returns></returns>
        public virtual void CloseLoading()
        {
            HFLog.C("步骤10  关闭loading");
        }
    }
}
