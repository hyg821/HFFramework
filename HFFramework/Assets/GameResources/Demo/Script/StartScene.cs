using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Config;
using UniRx.Async;

namespace HFFramework
{
    public class StartScene : GameScene
    {
        public async override UniTaskVoid OnEnter(object param = null)
        {
            await base.OnEnter(param);
            //初始化配置文件
            HFConfigManager.Instance.Init();
            await fsm.ChangeState<LoginScene>();
        }

        public override void OnStay()
        {
            base.OnStay();
        }

        public async override UniTaskVoid OnExit(object param = null)
        {
            await base.OnExit(param);
        }
    }
}


