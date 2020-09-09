using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Config;
using UniRx.Async;
using HFFramework.Demo;

namespace HFFramework
{
    public class StartScene : GameScene
    {
        public async override UniTask OnEnter(object param = null)
        {
            await base.OnEnter(param);
            //初始化配置文件
            HFConfigManager.Instance.Init();
            await ResourceManager.Instance.LoadScene("scenea", "Demo");
            await UIManager.Instance.Open<FunctionController>(false,true); 
        }

        public override void OnStay()
        {
            base.OnStay();
        }

        public async override UniTask OnExit(object param = null)
        {
            await base.OnExit(param);
        }
    }
}


