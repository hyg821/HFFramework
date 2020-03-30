﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

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

        public FSMController controller;

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


        public Action OnStateEnterCallback;
        public Action OnStateStayCallback;
        public Action OnStateExitCallback;

        public FSMState()
        {

        }

        public static T Create<T>(FSMController controller) where T: FSMState,new()
        {
            T t = new T();
            t.controller = controller;
            t.stateName = typeof(T).Name;
            t.Init();
            return t;
        }

        public virtual void Init()
        {

        }

        public virtual void OnStateInvoke(StateType s)
        {
            currentState = s;
            switch (s)
            {
                case StateType.Enter:
                    OnStateEnter();
                    if (OnStateEnterCallback != null)
                    {
                        isRunning = true;
                        OnStateEnterCallback();
                    }
                    break;

                case StateType.Stay:
                    OnStateStay();
                    if (OnStateStayCallback != null)
                    {
                        OnStateStayCallback();
                    }
                    break;

                case StateType.Exit:
                    OnStateExit();
                    if (OnStateExitCallback != null)
                    {
                        OnStateExitCallback();
                        isRunning = false;
                    }

                    break;
                default:
                    break;
            }
        }

        public virtual void OnStateEnter()
        {

        }

        public virtual void OnStateStay()
        {

        }

        public virtual void OnStateExit()
        {

        }
    }
}