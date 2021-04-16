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

        public async override UniTask OnEnter(object args)
        {
            await base.OnEnter(args);
            await LoadResources();
            await PreLoad();
            await SendEnterRequest();
            await OpenUI();
            await CloseLoading();
        }

        public async override UniTask OnExit(object args)
        {
            await base.OnExit(args);
            await OpenLoading(args);
            await SendExitRequest();
            await CloseUI();
            await ClearManager();
            await UnloadResources();
        }

        /// <summary>
        ///  打开loading
        /// </summary>
        /// <param name="p"></param>
        /// <returns></returns>
        public virtual async UniTask OpenLoading(object args)
        {
            //await new UniTaskVoid();
            HFLog.C("步骤1 打开loading");
        }

        /// <summary>
        /// 发送离开网络消息
        /// </summary>
        /// <returns></returns>
        public virtual async UniTask SendExitRequest()
        {
            //await new UniTaskVoid();
            HFLog.C("步骤2 发送离开网络消息");
        }

        /// <summary>
        ///  清理UI
        /// </summary>
        /// <returns></returns>
        public virtual async UniTask CloseUI()
        {
            //await new UniTaskVoid();
            HFLog.C("步骤3 清理UI");
        }

        /// <summary>
        ///  清理对应管理器
        /// </summary>
        /// <returns></returns>
        public virtual async UniTask ClearManager()
        {
            //await new UniTaskVoid();
            HFLog.C("步骤4 清理对应管理器");
        }

        /// <summary>
        ///  卸载场景
        /// </summary>
        /// <returns></returns>
        public virtual async UniTask UnloadResources()
        {
            await AssetManager.Instance.UnloadUnusedAssetBundle();
            HFLog.C("步骤5 卸载场景");
        }

        /// <summary>
        ///  加载场景
        /// </summary>
        /// <returns></returns>
        public virtual async UniTask LoadResources()
        {
            //await new UniTaskVoid();
            HFLog.C("步骤6 加载场景");
        }

        /// <summary>
        ///  预加载资源
        /// </summary>
        /// <returns></returns>
        public virtual async UniTask PreLoad()
        {
            //await new UniTaskVoid();
            HFLog.C("步骤7 预加载资源");
        }

        /// <summary>
        /// 发送进入网络消息
        /// </summary>
        /// <returns></returns>
        public virtual async UniTask SendEnterRequest()
        {
            //await new UniTaskVoid();
            HFLog.C("步骤8 预加载资源");
        }

        /// <summary>
        ///  打开UI
        /// </summary>
        /// <returns></returns>
        public virtual async UniTask OpenUI()
        {
            //await new UniTaskVoid();
            HFLog.C("步骤9  打开UI");
        }

        /// <summary>
        ///  关闭loading
        /// </summary>
        /// <returns></returns>
        public virtual async UniTask CloseLoading()
        {
            //await new UniTaskVoid();
            HFLog.C("步骤10  关闭loading");
        }
    }
}
