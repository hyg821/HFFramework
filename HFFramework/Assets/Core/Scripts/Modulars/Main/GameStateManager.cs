using Sirenix.OdinInspector;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace HFFramework
{
    public class GameStateManager : SerializedMonoBehaviour, IManager
    {
        public static GameStateManager Instance;

        public FSMController fsm;

        private void Awake()
        {
            Instance = this;
            fsm = new FSMController(this);
            StartState start = new StartState("Start", fsm);
            LoginState login = new LoginState("Login", fsm);
            BattleState battle = new BattleState("Battle", fsm);
            QuitState quit = new QuitState("Quit", fsm);
            fsm.AddState(start);
            fsm.AddState(login);
            fsm.AddState(battle);
            fsm.AddState(quit);
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

