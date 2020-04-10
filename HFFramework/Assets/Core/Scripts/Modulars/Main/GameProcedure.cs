using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniRx.Async;

namespace HFFramework
{
    public class GameProcedureParams
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
            await OpenLoading(param as GameProcedureParams);
            await SendExitRequest();
            await ClearManager();
            await ClearUI();
            await UnloadScene();
        }

        /// <summary>
        ///  打开loading
        /// </summary>
        /// <param name="p"></param>
        /// <returns></returns>
        public virtual async UniTaskVoid OpenLoading(GameProcedureParams p)
        {

        }

        /// <summary>
        ///  清理对应管理器
        /// </summary>
        /// <returns></returns>
        public virtual async UniTaskVoid ClearManager()
        {

        }

        /// <summary>
        ///  清理UI
        /// </summary>
        /// <returns></returns>
        public virtual async UniTaskVoid ClearUI()
        {

        }

        /// <summary>
        ///  卸载场景
        /// </summary>
        /// <returns></returns>
        public virtual async UniTaskVoid UnloadScene()
        {

        }

        /// <summary>
        ///  加载场景
        /// </summary>
        /// <returns></returns>
        public virtual async UniTaskVoid LoadScene()
        {

        }

        /// <summary>
        ///  预加载
        /// </summary>
        /// <returns></returns>
        public virtual async UniTaskVoid PreLoad()
        {

        }

        /// <summary>
        /// 发送进入网络消息
        /// </summary>
        /// <returns></returns>
        public virtual async UniTaskVoid SendEnterRequest()
        {

        }

        /// <summary>
        /// 发送离开网络消息
        /// </summary>
        /// <returns></returns>
        public virtual async UniTaskVoid SendExitRequest()
        {

        }

        /// <summary>
        ///  打开UI
        /// </summary>
        /// <returns></returns>
        public virtual async UniTaskVoid OpenUI()
        {

        }

        /// <summary>
        ///  关闭loading
        /// </summary>
        /// <returns></returns>
        public virtual async UniTaskVoid CloseLoading()
        {

        }
    }
}
