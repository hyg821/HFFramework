using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

namespace HFFramework
{

    public enum CoroutineType
    {
        WaitForEndOfFrame,
        WaitForFixedUpdate,
        WaitForSeconds,
        WaitFrame,
        WaitNull
    }

    public class GameTimer : MonoBehaviour
    {
        public static WaitForEndOfFrame WaitForEndOfFrame = new WaitForEndOfFrame();
        public static WaitForFixedUpdate WaitForFixedUpdate = new WaitForFixedUpdate();

        public static GameTimer Instance;

        public void Awake()
        {
            Instance = this;
        }

        public static void StartSingleCoroutine(CoroutineType coroutineType, float time, Action callback)
        {
            Instance.StartCoroutine(Instance.StartCoroutineFunction(coroutineType, time, callback));
        }

        private IEnumerator StartCoroutineFunction(CoroutineType coroutineType, float time, Action callback)
        {
            yield return GetIEnumerator(coroutineType, time);
            callback();
        }

        public static IEnumerator GetIEnumerator(CoroutineType coroutineType, float time)
        {
            switch (coroutineType)
            {
                case CoroutineType.WaitForEndOfFrame:
                    yield return WaitForEndOfFrame;
                    break;
                case CoroutineType.WaitForFixedUpdate:
                    yield return WaitForFixedUpdate;
                    break;
                case CoroutineType.WaitForSeconds:
                    yield return new WaitForSeconds(time);
                    break;
                case CoroutineType.WaitFrame:
                    if (time == 0)
                    {
                        time = 1;
                    }
                    for (float i = time; i > 0; i--)
                    {
                        yield return null;
                    }
                    break;
                case CoroutineType.WaitNull:
                    break;
                default:
                    break;
            }
        }

        public void ExecuteCoroutineQueue(CoroutineQueue coroutineQueue)
        {
            StartCoroutine(m_ExecuteTimerQueue(coroutineQueue));
        }

        public void StopCoroutineQueue(CoroutineQueue coroutineQueue)
        {
            foreach (var item in coroutineQueue.queue)
            {
                StopCoroutine(item.daly);
            }
            coroutineQueue.Destroy();
        }

        public IEnumerator m_ExecuteTimerQueue(CoroutineQueue coroutineQueue)
        {
            foreach (var item in coroutineQueue.queue)
            {
                item.action();
                yield return item.daly;
            }
            coroutineQueue.Complete();
        }

        public static CoroutineQueue CreateCoroutineQueue()
        {
            CoroutineQueue qe = new CoroutineQueue();
            return qe;
        }

    }

    public class CoroutineQueue
    {
        public Queue<SingleCoroutine> queue = new Queue<SingleCoroutine>();

        private Action complete;

        public CoroutineQueue OnComplete(Action complete)
        {
            this.complete = complete;
            return this;
        }

        public CoroutineQueue Append(SingleCoroutine t)
        {
            queue.Enqueue(t);
            return this;
        }

        public void Execute()
        {
            GameTimer.Instance.ExecuteCoroutineQueue(this);
        }

        public void Complete()
        {
            if (complete!=null)
            {
                complete();
            }
        }

        public void Stop()
        {
            GameTimer.Instance.StopCoroutineQueue(this); 
        }

        public void Destroy()
        {
            queue.Clear();
        }
    }

    public class SingleCoroutine
    {
        public Action action;
        public IEnumerator daly;
        public SingleCoroutine(CoroutineType coroutineType, float time, Action action)
        {
            this.action = action;
            this.daly = GameTimer.GetIEnumerator(coroutineType,time);
        }
    }


}

