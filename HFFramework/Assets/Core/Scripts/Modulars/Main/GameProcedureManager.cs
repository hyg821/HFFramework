using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace HFFramework
{
    public class GameProcedureManager : MonoBehaviour, IManager
    {
        public static GameProcedureManager Instance;

        public FSMController fsm;

        private void Awake()
        {
            Instance = this;
            fsm = new FSMController(this);
            fsm.AddState<StartState>();
            fsm.AddState<LoginState>();
            fsm.AddState<BattleState>();
            fsm.AddState<QuitState>();
            fsm.TranslateToState<StartState>();
        }

        private void Update()
        {
            fsm.Update();
        }

        public void DestroyManager()
        {
            fsm.Destroy();
            fsm = null;
            Instance = null;
        }
    }
}

