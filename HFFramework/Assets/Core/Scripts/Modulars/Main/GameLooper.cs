using UnityEngine;
using System;
using System.Collections.Generic;
using System.Collections;
using System.Threading;
using System.Collections.Concurrent;

namespace HFFramework
{
    public class GameLooper : MonoBehaviour, IManager
    {
        public static GameLooper Instance;

        /// <summary>
        /// 锁
        /// </summary>
        private static object lockObj = new object();

        /// <summary>
        ///  主线程上下文
        /// </summary>
        private static SynchronizationContext mainThreadContext;

        /// <summary>
        /// 即将在下一帧被update的列表
        /// </summary>
        private List<Entity> prepareUpdateList = new List<Entity>();
        /// <summary>
        ///  本帧执行的update的列表
        /// </summary>
        private List<Entity> updateList = new List<Entity>();

        /// <summary>
        ///  即将在下一帧被fixedUpdate的列表
        /// </summary>
        private List<Entity> prepareFixedUpdateList = new List<Entity>();
        /// <summary>
        ///  本帧执行fixedUpdate的列表
        /// </summary>
        private List<Entity> fixedUpdateList = new List<Entity>();

        /// <summary>
        /// 即将在下一帧被LateUpdate的列表
        /// </summary>
        private List<Entity> prepareLateUpdateList = new List<Entity>();
        /// <summary>
        ///  本帧执行lateUpdate的列表
        /// </summary>
        private List<Entity> lateUpdateList = new List<Entity>();

        /// <summary>
        ///  event队列
        /// </summary>
        private ConcurrentQueue<Action> eventQueue = new ConcurrentQueue<Action>();

        void Awake()
        {
            Instance = this;
            mainThreadContext = SynchronizationContext.Current;
        }
    
        void Update()
        {
            //执行事件队列
            while (eventQueue.Count > 0)
            {
                Action action;
                if (eventQueue.TryDequeue(out action))
                {
                    action();
                }
            }

            for (int i = 0; i < prepareUpdateList.Count; i++)
            {
                Entity temp = prepareUpdateList[i];
                if (temp.IsNeedUpdate)
                {
                    updateList.Add(temp);
                }
                else
                {
                    updateList.Remove(temp);
                }
            }
            prepareUpdateList.Clear();

            for (int i = 0; i < updateList.Count; i++)
            {
                updateList[i].OnUpdate(Time.deltaTime);
            }
        }

        void FixedUpdate()
        {
            for (int i = 0; i < prepareFixedUpdateList.Count; i++)
            {
                Entity temp = prepareFixedUpdateList[i];
                if (temp.IsNeedFixedUpdate)
                {
                    fixedUpdateList.Add(temp);
                }
                else
                {
                    fixedUpdateList.Remove(temp);
                }
            }
            prepareFixedUpdateList.Clear();

            for (int i = 0; i < fixedUpdateList.Count; i++)
            {
                fixedUpdateList[i].OnFixedUpdate(Time.deltaTime);
            }
        }

        void LateUpdate()
        {
            for (int i = 0; i < prepareLateUpdateList.Count; i++)
            {
                Entity temp = prepareLateUpdateList[i];
                if (temp.IsNeedLateUpdate)
                {
                    lateUpdateList.Add(temp);
                }
                else
                {
                    lateUpdateList.Remove(temp);
                }
            }
            prepareLateUpdateList.Clear();

            for (int i = 0; i < lateUpdateList.Count; i++)
            {
                lateUpdateList[i].OnLateUpdate(Time.deltaTime);
            }
        }

        public void DestroyManager()
        {
            prepareUpdateList.Clear();
            updateList.Clear();
            prepareFixedUpdateList.Clear();
            fixedUpdateList.Clear();
            prepareLateUpdateList.Clear();
            lateUpdateList.Clear();
            eventQueue = null;
            mainThreadContext = null;
            Instance = null;
        }

        public static void BackToMainThread(Action e)
        {
            if (e != null && Instance != null)
            {
                Instance.eventQueue.Enqueue(e);
            }
        }

        /// <summary>
        ///  子线程回到主线程带参数方法
        /// </summary>
        /// <param name="d"></param>
        /// <param name="state">传给主线程的对象</param>
        public static void BackToMainThread(SendOrPostCallback d, object state)
        {
            mainThreadContext.Send(d, state);
        }

        public static void PrepareForUpdate(Entity mono)
        {
            if (Instance != null)
            {
                Instance.prepareUpdateList.Add(mono);
            }
        }

        public static void PrepareForFixedUpdate(Entity mono)
        {
            if (Instance != null)
            {
                Instance.prepareFixedUpdateList.Add(mono);
            }
        }

        public static void PrepareForLateUpdate(Entity mono)
        {
            if (Instance != null)
            {
                Instance.prepareLateUpdateList.Add(mono);
            }
        }
    }
}


