using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Config;
using Cysharp.Threading.Tasks;
using HFFramework.Demo;

namespace HFFramework
{
    public class StartScene : GameScene
    {
        public override async UniTask OnEnter(object args = null)
        {
            await base.OnEnter(args);
            //初始化配置文件
            ConfigManager.Instance.Init();
            await AssetManager.Instance.LoadScene("GameStart", "GameStart");
            await UIManager.Instance.Open<DebugController>(true,false);
            await UIManager.Instance.Open<FunctionController>(true,true);
        }

        public override void OnUpdate()
        {
            base.OnUpdate();
        }

        public async override UniTask OnExit(object param = null)
        {
            await base.OnExit(param);
        }
    }
}


