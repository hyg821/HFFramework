using UnityEngine;
using System;
using System.Collections.Generic;

namespace HFFramework
{
    public class GameLooper : MonoBehaviour
    {
        public static GameLooper self;

        public Action updateAction;
        public Action fixedUpdateAction;
        public Action lateUpdateAction;

        /// <summary>
        ///  event队列
        /// </summary>
        private Queue<Action> eventQueue = new Queue<Action>();

        public int eventQueueCount = 0;

        void Awake()
        {
            self = this;
        }

        void Update()
        {
            //执行事件队列
            while (eventQueue.Count > 0)
            {
                //吐出所有的 delegate
                eventQueueCount = eventQueue.Count;
                Action e = eventQueue.Dequeue();
                e();
            }

            if (updateAction!=null)
            {
                updateAction();
            }
        }

        void FixedUpdate()
        {
            if (fixedUpdateAction != null)
            {
                fixedUpdateAction();
            }
        }

        void LateUpdate()
        {
            if (lateUpdateAction != null)
            {
                lateUpdateAction();
            }
        }

        public void DestroyManager()
        {
            updateAction = null;
            fixedUpdateAction = null;
            lateUpdateAction = null;
            eventQueue.Clear();
            self = null;
        }

        public static void BackToMainThread(Action e)
        {
            if (e != null)
            {
                if (self != null)
                {
                    self.eventQueue.Enqueue(e);
                }
            }
        }

        public static void AddUpdate(Action update)
        {
            if (self!=null)
            {
                self.updateAction += update;
            }
        }

        public static void SubUpdate(Action update)
        {
            if (self != null)
            {
                self.updateAction -= update;
            }
        }

        public static void AddFixedUpdate(Action update)
        {
            if (self != null)
            {
                self.fixedUpdateAction += update;
            }
        }

        public static void SubFixedUpdate(Action update)
        {
            if (self != null)
            {
                self.fixedUpdateAction -= update;
            }
        }

        public static void AddLateUpdate(Action update)
        {
            if (self != null)
            {
                self.lateUpdateAction += update;
            }
        }

        public static void SubLateUpdate(Action update)
        {
            if (self != null)
            {
                self.lateUpdateAction -= update;
            }
        }
    }
}


