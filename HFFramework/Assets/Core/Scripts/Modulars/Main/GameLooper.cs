using UnityEngine;
using System;
using System.Collections.Generic;
using System.Collections;

namespace HFFramework
{
    public class GameLooper : MonoBehaviour, IManager
    {

        public static GameLooper Instance;
        /// <summary>
        ///  需要update的 列表
        /// </summary>
        private List<BaseMonoBehaviour> updateList = new List<BaseMonoBehaviour>(64);

        /// <summary>
        ///  需要fixedUpdate的 列表
        /// </summary>
        private List<BaseMonoBehaviour> fixedUpdateList = new List<BaseMonoBehaviour>(64);

        /// <summary>
        ///  需要lateUpdate的 列表
        /// </summary>
        private List<BaseMonoBehaviour> lateUpdateList = new List<BaseMonoBehaviour>(64);

        /// <summary>
        ///  event队列
        /// </summary>
        private Queue<Action> eventQueue = new Queue<Action>();

        void Awake()
        {
            Instance = this;
        }
    
        void Update()
        {
            //执行事件队列
            while (eventQueue.Count > 0)
            {
                Action e = eventQueue.Dequeue();
                e();
            }

            for (int i = 0; i < updateList.Count; i++)
            {
                updateList[i].OnUpdate(Time.deltaTime);
            }
        }

        void FixedUpdate()
        {
            for (int i = 0; i < fixedUpdateList.Count; i++)
            {
                fixedUpdateList[i].OnFixedUpdate(Time.deltaTime);
            }
        }

        void LateUpdate()
        {
            for (int i = 0; i < lateUpdateList.Count; i++)
            {
                lateUpdateList[i].OnLateUpdate(Time.deltaTime);
            }
        }

        public void DestroyManager()
        {
            updateList.Clear();
            fixedUpdateList.Clear();
            lateUpdateList.Clear();
            eventQueue.Clear();
            Instance = null;
        }

        public static void BackToMainThread(Action e)
        {
            if (e != null&& Instance != null)
            {
                Instance.eventQueue.Enqueue(e);
            }
        }

        public static void AddUpdate(BaseMonoBehaviour mono)
        {
            if (Instance != null)
            {
                if (Instance.updateList.Contains(mono) ==false)
                {
                    Instance.updateList.Add(mono);
                }
            }
        }

        public static void SubUpdate(BaseMonoBehaviour mono)
        {
            if (Instance != null)
            {
                Instance.updateList.Remove(mono);
            }
        }

        public static void AddFixedUpdate(BaseMonoBehaviour mono)
        {
            if (Instance != null)
            {
                if (Instance.fixedUpdateList.Contains(mono) == false)
                {
                    Instance.fixedUpdateList.Add(mono);
                }
            }
        }

        public static void SubFixedUpdate(BaseMonoBehaviour mono)
        {
            if (Instance != null)
            {
                Instance.fixedUpdateList.Remove(mono);
            }
        }

        public static void AddLateUpdate(BaseMonoBehaviour mono)
        {
            if (Instance != null)
            {
                if (Instance.lateUpdateList.Contains(mono) == false)
                {
                    Instance.lateUpdateList.Add(mono);
                }
            }
        }

        public static void SubLateUpdate(BaseMonoBehaviour mono)
        {
            if (Instance != null)
            {
                Instance.lateUpdateList.Remove(mono);
            }
        }
    }
}


