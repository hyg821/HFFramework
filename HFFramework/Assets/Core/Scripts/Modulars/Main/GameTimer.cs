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

        /// <summary>
        ///  获取一个携程队列
        /// </summary>
        /// <returns></returns>
        public static CoroutineQueue CreateCoroutineQueue()
        {
            CoroutineQueue qe = new CoroutineQueue();
            return qe;
        }

        /// <summary>
        ///  开启单个协程
        /// </summary>
        /// <param name="coroutineType"></param>
        /// <param name="time"></param>
        /// <param name="callback"></param>
        public static void StartSingleCoroutine(CoroutineType coroutineType, float time, Action callback)
        {
            Instance.StartCoroutine(Instance.StartCoroutineFunction(coroutineType, time, callback));
        }

        /// <summary>
        ///  执行携程队列
        /// </summary>
        /// <param name="coroutineQueue"></param>
        public void ExecuteCoroutineQueue(CoroutineQueue coroutineQueue)
        {
            StartCoroutine(m_ExecuteTimerQueue(coroutineQueue));
        }

        private IEnumerator StartCoroutineFunction(CoroutineType coroutineType, float time, Action callback)
        {
            yield return GetIEnumerator(coroutineType, time);
            callback();
        }

        /// <summary>
        ///  获得等待类型
        /// </summary>
        /// <param name="coroutineType"></param>
        /// <param name="time"></param>
        /// <returns></returns>
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

        /// <summary>
        ///  停止携程队列
        /// </summary>
        /// <param name="coroutineQueue"></param>
        public void StopCoroutineQueue(CoroutineQueue coroutineQueue)
        {
            foreach (var item in coroutineQueue.queue)
            {
                StopCoroutine(item.daly);
            }
            coroutineQueue.Destroy();
        }

        private IEnumerator m_ExecuteTimerQueue(CoroutineQueue coroutineQueue)
        {
            int i = 0;
            foreach (var item in coroutineQueue.queue)
            {
                i++;
                item.action();
                if (i != coroutineQueue.queue.Count)
                {
                    yield return item.daly;
                }
                else
                {
                    coroutineQueue.Complete();
                    yield break;
                }
            }
        }
    }

    /// <summary>
    ///  携程队列
    /// </summary>
    public class CoroutineQueue
    {
        public Queue<SingleCoroutine> queue = new Queue<SingleCoroutine>();

        private Action complete;
        
        /// <summary>
        /// 完成回调
        /// </summary>
        /// <param name="complete"></param>
        /// <returns></returns>
        public CoroutineQueue OnComplete(Action complete)
        {
            this.complete = complete;
            return this;
        }

        /// <summary>
        ///  队列末未添加
        /// </summary>
        /// <param name="t"></param>
        /// <returns></returns>
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

        /// <summary>
        ///  停止
        /// </summary>
        public void Stop()
        {
            GameTimer.Instance.StopCoroutineQueue(this); 
        }

        /// <summary>
        ///  销毁
        /// </summary>
        public void Destroy()
        {
            queue.Clear();
        }
    }

    /// <summary>
    ///  单一协程
    /// </summary>
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

