using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    public class QuitState:FSMBaseState
    {
        public QuitState(string stateName, FSMController controller) : base(stateName, controller)
        {
        }

        public override void OnStateEnter()
        {
            base.OnStateEnter();
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


