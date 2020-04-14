﻿using System;
using System.Collections;
using System.Collections.Generic;
using UniRx.Async;
using UnityEngine;

namespace HFFramework
{
    public class FSMController
    {   
        /// <summary>
        ///  缓存状态的字典
        /// </summary>
        private Dictionary<string, FSMState> allStateDic = new Dictionary<string, FSMState>();

        /// <summary>
        ///  获取当前正在执行的状态
        /// </summary>
        public FSMState CurrentState { set; get; }

        /// <summary>
        ///  依赖反转的控制器 简而言之就是  控制 fsm 的对象
        /// </summary>
        public object control;

        /// <summary>
        ///  构造方法
        /// </summary>
        public FSMController(object control)
        {
            this.control = control;
        }

        /// <summary>
        ///  添加一个状态
        /// </summary>
        /// <param name="state"></param>
        public void AddState<T>() where T: FSMState,new()
        {
            string stateName = typeof(T).Name;
            if (!allStateDic.ContainsKey(stateName))
            {
                allStateDic.Add(stateName, FSMState.Create<T>(this));
            }
        }

        public T GetState<T>() where T : FSMState
        {
            string stateName = typeof(T).Name;
            FSMState state;
            allStateDic.TryGetValue(stateName, out state);
            return state as T;
        }

        /// <summary>
        ///  转移到某个状态
        /// </summary>
        /// <param name="stateName"></param>
        public async UniTaskVoid TranslateToState<T>(object enterParams = null, object exitParams = null) where T:FSMState
        {
            string stateName = typeof(T).Name;
            if (CurrentState != null)
            {
                if (stateName != CurrentState.stateName)
                {
                     await CurrentState.OnStateInvoke(StateType.Exit,exitParams);
                }
            }
            CurrentState = this[stateName];
            await CurrentState.OnStateInvoke(StateType.Enter, enterParams);
        }

        public void Update()
        {
            if (CurrentState != null)
            {
                CurrentState.OnStateInvoke(StateType.Stay);
            }
        }

        /// <summary>
        /// 索引器
        /// </summary>
        /// <param name="name">Name.</param>
        public FSMState this[string name]
        {
            get
            {
                return allStateDic[name];
            }
            set
            {
                allStateDic[name] = value;
            }
        }

        public void Destroy()
        {
            allStateDic.Clear();
            CurrentState = null;
            control = null;
        }
    }
}
