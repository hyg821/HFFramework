using UnityEngine;
using System;
using System.Collections.Generic;

namespace HFFramework
{
    public class GameLooper : MonoBehaviour
    {
        public static GameLooper self;

        /// <summary>
        ///  需要update的 列表
        /// </summary>
        private List<BaseMonoBehaviour> updateList = new List<BaseMonoBehaviour>();

        /// <summary>
        ///  需要fixedUpdate的 列表
        /// </summary>
        private List<BaseMonoBehaviour> fixedUpdateList = new List<BaseMonoBehaviour>();

        /// <summary>
        ///  需要lateUpdate的 列表
        /// </summary>
        private List<BaseMonoBehaviour> lateUpdateList = new List<BaseMonoBehaviour>();

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

            for (int i = 0; i < updateList.Count; i++)
            {
                updateList[i].MyUpdate(Time.deltaTime);
            }
        }

        void FixedUpdate()
        {
            for (int i = 0; i < fixedUpdateList.Count; i++)
            {
                fixedUpdateList[i].MyFixedUpdate(Time.deltaTime);
            }
        }

        void LateUpdate()
        {
            for (int i = 0; i < lateUpdateList.Count; i++)
            {
                lateUpdateList[i].MyLateUpdate(Time.deltaTime);
            }
        }

        public void DestroyManager()
        {
            updateList.Clear();
            fixedUpdateList.Clear();
            lateUpdateList.Clear();
            eventQueue.Clear();
            self = null;
        }

        public static void BackToMainThread(Action e)
        {
            if (e != null&& self != null)
            {
                self.eventQueue.Enqueue(e);
            }
        }

        public static void AddUpdate(BaseMonoBehaviour b)
        {
            if (self!=null)
            {
                if (self.updateList.Contains(b)==false)
                {
                    self.updateList.Add(b);
                }
            }
        }

        public static void SubUpdate(BaseMonoBehaviour b)
        {
            if (self != null)
            {
                self.updateList.Remove(b);
            }
        }

        public static void AddFixedUpdate(BaseMonoBehaviour b)
        {
            if (self != null)
            {
                if (self.fixedUpdateList.Contains(b) == false)
                {
                    self.fixedUpdateList.Add(b);
                }
            }
        }

        public static void SubFixedUpdate(BaseMonoBehaviour b)
        {
            if (self != null)
            {
                self.fixedUpdateList.Remove(b);
            }
        }

        public static void AddLateUpdate(BaseMonoBehaviour b)
        {
            if (self != null)
            {
                if (self.lateUpdateList.Contains(b) == false)
                {
                    self.lateUpdateList.Add(b);
                }
            }
        }

        public static void SubLateUpdate(BaseMonoBehaviour b)
        {
            if (self != null)
            {
                self.lateUpdateList.Remove(b);
            }
        }
    }
}


