using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using Cysharp.Threading.Tasks;

namespace HFFramework
{
    public enum StateType
    {
        Enter,
        Update,
        Exit
    }

    public class FSMState
    {
        public const string RootState = "Root";

        public FSM fsm;

        /// <summary>
        ///  状态名称
        /// </summary>
        public string name;

        /// <summary>
        ///  是否正在运行
        /// </summary>
        public bool isRunning = false;

        /// <summary>
        ///  当前的状态类型 是 正在进入 还是持续中 还是已经退出
        /// </summary>
        public StateType currentState;


        public Action OnEnterCallback;
        public Action OnStayCallback;
        public Action OnExitCallback;

        public FSMState()
        {

        }

        public static T Create<T>(FSM fsm) where T: FSMState,new()
        {
            T t = new T();
            t.fsm = fsm;
            t.name = typeof(T).Name;
            t.Awake();
            return t;
        }

        public virtual void Awake()
        {

        }

        public async virtual UniTask Enter(object param = null)
        {
            currentState = StateType.Enter;
            await OnEnter(param);
            if (OnEnterCallback != null)
            {
                isRunning = true;
                OnEnterCallback();
            }
        }

        public void Update()
        {
            currentState = StateType.Update;
            OnUpdate();
            if (OnStayCallback != null)
            {
                OnStayCallback();
            }
        }

        public async virtual UniTask Exit(object args = null)
        {
            currentState = StateType.Exit;
            await OnExit(args);
            if (OnExitCallback != null)
            {
                OnExitCallback();
                isRunning = false;
            }
        }


        public async virtual UniTask OnEnter(object args = null)
        {
            //await new UniTaskVoid();
            await UniTask.Yield();
            HFLog.C("------------------------" + this.GetType().Name + "进入" + "------------------------");
        }

        public virtual void OnUpdate()
        {

        }

        public async virtual UniTask OnExit(object args = null)
        {
            //await new UniTaskVoid();
            await UniTask.Yield();
            HFLog.C("------------------------" + this.GetType().Name + "离开" + "------------------------");
        }
    }
}