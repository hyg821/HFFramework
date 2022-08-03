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
            await SendEnterRequest();
            CloseLoading();
        }

        public async override UniTask OnExit(object args)
        {
            await base.OnExit(args);
            await OpenLoading(args);
            await SendExitRequest();
            UnloadResources();
        }

        /// <summary>
        ///  打开loading
        /// </summary>
        /// <param name="p"></param>
        /// <returns></returns>
        public virtual async UniTask OpenLoading(object args)
        {
            await UniTask.Yield();
            HFLog.C("打开loading");
        }

        /// <summary>
        /// 发送离开网络消息
        /// </summary>
        /// <returns></returns>
        public virtual async UniTask SendExitRequest()
        {
            await UniTask.Yield();
            HFLog.C("发送离开场景网络消息");
        }

        /// <summary>
        ///  卸载资源
        /// </summary>
        /// <returns></returns>
        public virtual void UnloadResources()
        {
            AssetManager.Instance.UnloadUnusedAssetBundle(false,true);
            HFLog.C("卸载资源");
        }

        /// <summary>
        ///  加载资源
        /// </summary>
        /// <returns></returns>
        public virtual async UniTask LoadResources()
        {
            await UniTask.Yield();
            HFLog.C("加载资源");
        }

        /// <summary>
        /// 发送进入网络消息
        /// </summary>
        /// <returns></returns>
        public virtual async UniTask SendEnterRequest()
        {
            await UniTask.Yield();
            HFLog.C("发送进入场景网络请求");
        }

        /// <summary>
        ///  关闭loading
        /// </summary>
        /// <returns></returns>
        public virtual void CloseLoading()
        {
            HFLog.C("关闭loading");
        }
    }
}
