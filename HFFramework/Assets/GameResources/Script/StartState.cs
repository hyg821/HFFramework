using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Config;

namespace HFFramework
{
    public class StartState : FSMBaseState
    {
        public StartState(string stateName, FSMController controller) : base(stateName, controller)
        {
        }

        public override void OnStateEnter()
        {
            base.OnStateEnter();
            //初始化配置文件
            HFConfigManager.Instance.Init();
            DebugController debug = UIManager.Instance.GetController<DebugController>();
            debug.Close();
            controller.TranslateToState("Login");
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


