using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniRx.Async;

namespace HFFramework
{
    public class GameSceneParams
    {
        public bool isOpenLoading = false;
    }

    /// <summary>
    /// 逻辑场景  登录 大厅 主城  大世界 副本 等等
    /// </summary>
    public class GameScene : FSMState
    {
        public override void Awake()
        {
            base.Awake();
        }

        public async override UniTaskVoid OnEnter(object param = null)
        {
            await base.OnEnter(param);
            await LoadScene();
            await PreLoad();
            await SendEnterRequest();
            await OpenUI();
            await CloseLoading();
        }

        public async override UniTaskVoid OnExit(object param = null)
        {
            await base.OnExit(param);
            await OpenLoading(param as GameSceneParams);
            await SendExitRequest();
            await CloseUI();
            await ClearManager();
            await UnloadScene();
        }

        /// <summary>
        ///  打开loading
        /// </summary>
        /// <param name="p"></param>
        /// <returns></returns>
        public virtual async UniTaskVoid OpenLoading(GameSceneParams p)
        {
            HFLog.C("步骤1 打开loading");
        }

        /// <summary>
        /// 发送离开网络消息
        /// </summary>
        /// <returns></returns>
        public virtual async UniTaskVoid SendExitRequest()
        {
            HFLog.C("步骤2 发送离开网络消息");
        }

        /// <summary>
        ///  清理UI
        /// </summary>
        /// <returns></returns>
        public virtual async UniTaskVoid CloseUI()
        {
            HFLog.C("步骤3 清理UI");
        }

        /// <summary>
        ///  清理对应管理器
        /// </summary>
        /// <returns></returns>
        public virtual async UniTaskVoid ClearManager()
        {
            HFLog.C("步骤4 清理对应管理器");
        }

        /// <summary>
        ///  卸载场景
        /// </summary>
        /// <returns></returns>
        public virtual async UniTaskVoid UnloadScene()
        {
            HFLog.C("步骤5 卸载场景");
        }

        /// <summary>
        ///  加载场景
        /// </summary>
        /// <returns></returns>
        public virtual async UniTaskVoid LoadScene()
        {
            HFLog.C("步骤6 加载场景");
        }

        /// <summary>
        ///  预加载资源
        /// </summary>
        /// <returns></returns>
        public virtual async UniTaskVoid PreLoad()
        {
            HFLog.C("步骤7 预加载资源");
        }

        /// <summary>
        /// 发送进入网络消息
        /// </summary>
        /// <returns></returns>
        public virtual async UniTaskVoid SendEnterRequest()
        {
            HFLog.C("步骤8 预加载资源");
        }

        /// <summary>
        ///  打开UI
        /// </summary>
        /// <returns></returns>
        public virtual async UniTaskVoid OpenUI()
        {
            HFLog.C("步骤9  打开UI");
        }

        /// <summary>
        ///  关闭loading
        /// </summary>
        /// <returns></returns>
        public virtual async UniTaskVoid CloseLoading()
        {
            HFLog.C("步骤10  关闭loading");
        }
    }
}
