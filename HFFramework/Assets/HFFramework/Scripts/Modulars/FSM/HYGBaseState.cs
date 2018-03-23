using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

namespace HFFramework
{
    public enum StateEnum
    {
        StateEnter,
        StateStay,
        StateExit
    }

    public class HYGBaseState
    {
        public string stateName;
        public bool isRun = false;
        public StateEnum current;

        public Action onStateEnter;
        public Action onStateStay;
        public Action onStateExit;

        public HYGBaseState()
        {
            Init();
        }

        public virtual void Init()
        {

        }

        public virtual void OnStateInvoke(StateEnum s)
        {
            switch (s)
            {
                case StateEnum.StateEnter:

                    if (onStateEnter != null)
                    {
                        isRun = true;
                        onStateEnter();
                    }

                    break;
                case StateEnum.StateStay:

                    if (onStateStay != null)
                    {
                        onStateStay();
                    }

                    break;
                case StateEnum.StateExit:

                    if (onStateExit != null)
                    {
                        onStateExit();
                        isRun = false;
                    }

                    break;
                default:
                    break;
            }
        }
    }
}