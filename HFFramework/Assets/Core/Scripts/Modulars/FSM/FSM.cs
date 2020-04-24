using System;
using System.Collections;
using System.Collections.Generic;
using UniRx.Async;
using UnityEngine;

namespace HFFramework
{
    public class FSM
    {   
        /// <summary>
        ///  缓存状态的字典
        /// </summary>
        private Dictionary<string, FSMState> stateDic = new Dictionary<string, FSMState>();

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
        public FSM(object control)
        {
            this.control = control;
        }

        /// <summary>
        ///  添加一个状态
        /// </summary>
        /// <param name="state"></param>
        public T AddState<T>() where T: FSMState,new()
        {
            T state = null;
            string stateName = typeof(T).Name;
            if (!stateDic.ContainsKey(stateName))
            {
                state = FSMState.Create<T>(this);
                stateDic.Add(stateName, state);
            }
            return state;
        }

        public T GetState<T>() where T : FSMState
        {
            string stateName = typeof(T).Name;
            FSMState state;
            stateDic.TryGetValue(stateName, out state);
            return state as T;
        }

        /// <summary>
        ///  转移到某个状态
        /// </summary>
        /// <param name="stateName"></param>
        public async UniTaskVoid ChangeState<T>(object enterParams = null, object exitParams = null) where T:FSMState,new()
        {
            try
            {
                string stateName = typeof(T).Name;
                if (CurrentState != null)
                {
                    if (stateName != CurrentState.stateName)
                    {
                        await CurrentState.OnStateInvoke(StateType.Exit, exitParams);
                    }
                }
                FSMState now;
                if (!stateDic.TryGetValue(stateName, out now))
                {
                    now = AddState<T>();
                }
                CurrentState = now;
                await CurrentState.OnStateInvoke(StateType.Enter, enterParams);
            }
            catch (Exception exception)
            {
                Debug.LogError(exception);
            }
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
                return stateDic[name];
            }
            set
            {
                stateDic[name] = value;
            }
        }

        public void Destroy()
        {
            stateDic.Clear();
            CurrentState = null;
            control = null;
        }
    }
}
