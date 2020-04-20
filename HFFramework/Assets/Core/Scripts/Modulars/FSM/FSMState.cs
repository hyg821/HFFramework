﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UniRx.Async;

namespace HFFramework
{
    public enum StateType
    {
        Enter,
        Stay,
        Exit
    }

    public class FSMState
    {
        public const string RootState = "Root";

        public FSM fsm;

        /// <summary>
        ///  状态名称
        /// </summary>
        public string stateName;

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
            t.stateName = typeof(T).Name;
            t.Awake();
            return t;
        }

        public virtual void Awake()
        {

        }

        public async virtual UniTask OnStateInvoke(StateType s,object param = null)
        {
            currentState = s;
            switch (s)
            {
                case StateType.Enter:
                    await OnEnter(param);
                    if (OnEnterCallback != null)
                    {
                        isRunning = true;
                        OnEnterCallback();
                    }
                    break;
                case StateType.Stay:
                    OnStay();
                    if (OnStayCallback != null)
                    {
                        OnStayCallback();
                    }
                    break;
                case StateType.Exit:
                    await OnExit(param);
                    if (OnExitCallback != null)
                    {
                        OnExitCallback();
                        isRunning = false;
                    }
                    break;
                default:
                    break;
            }
        }

  
        public async virtual UniTask OnEnter(object param = null)
        {
            HFLog.C("------------------------" + this.GetType().Name + "进入" + "------------------------");
        }

        public virtual void OnStay()
        {

        }

        public async virtual UniTask OnExit(object param = null)
        {
            HFLog.C("------------------------" + this.GetType().Name + "离开" + "------------------------");
        }
    }
}