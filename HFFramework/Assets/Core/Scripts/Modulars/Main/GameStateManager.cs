using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace HFFramework
{
    public class GameStateManager : MonoBehaviour, IManager
    {
        public static GameStateManager Instance;

        public FSMController fsm;

        private void Awake()
        {
            Instance = this;
            fsm = new FSMController(this);
            fsm.AddState(new StartState("Start", fsm));
            fsm.AddState(new LoginState("Login", fsm));
            fsm.AddState(new BattleState("Battle", fsm));
            fsm.AddState(new QuitState("Quit", fsm));
            fsm.TranslateToState("Start");
        }

        private void Update()
        {
            fsm.Update();
        }

        public void DestroyManager()
        {
            Instance = null;
        }
    }
}

