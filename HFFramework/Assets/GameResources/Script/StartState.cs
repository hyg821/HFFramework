using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Config;

namespace HFFramework
{
    public class StartState : FSMState
    {
        public async override void OnStateEnter()
        {
            base.OnStateEnter();
            //初始化配置文件
            HFConfigManager.Instance.Init();
            DebugController debug = await UIManager.Open<DebugController>(true);
            debug.Close();
            controller.TranslateToState<LoginState>();
        }

        public override void OnStateStay()
        {
            base.OnStateStay();
        }

        public override void OnStateExit()
        {
            base.OnStateExit();
        }
    }
}


