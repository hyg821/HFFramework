using System;
using System.Collections;
using System.Collections.Generic;
using Cysharp.Threading.Tasks;
using UnityEngine;

namespace HFFramework
{
    public class FSM
    {
        /// <summary>
        /// 状态转换锁
        /// </summary>
        private bool locked = false;

        /// <summary>
        ///  缓存状态的字典
        /// </summary>
        private Dictionary<string, FSMState> stateDic = new Dictionary<string, FSMState>();

        /// <summary>
        ///  获取当前正在执行的状态
        /// </summary>
        public FSMState currentState;

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
            string key = typeof(T).Name;
            if (!stateDic.ContainsKey(key))
            {
                state = FSMState.Create<T>(this);
                stateDic.Add(key, state);
            }
            return state;
        }

        public T GetState<T>() where T : FSMState
        {
            string key = typeof(T).Name;
            FSMState state;
            stateDic.TryGetValue(key, out state);
            return state as T;
        }

        /// <summary>
        ///  转移到某个状态
        /// </summary>
        /// <param name="stateName"></param>
        public async UniTaskVoid ChangeState<T>(object enterParams = null, object exitParams = null) where T:FSMState,new()
        {
            if (!locked)
            {
                locked = true;
                string key = typeof(T).Name;
                if (currentState != null)
                {
                    await currentState.Exit(exitParams);
                }
                if (!stateDic.TryGetValue(key, out currentState))
                {
                    currentState = AddState<T>();
                }
                await currentState.Enter(enterParams);
                locked = false;
            }
            else
            {
                HFLog.E("重复转换状态 " + typeof(T).Name);
            }
        }

        public void Update()
        {
            if (currentState != null)
            {
                currentState.Update();
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
            currentState = null;
            control = null;
        }
    }
}
