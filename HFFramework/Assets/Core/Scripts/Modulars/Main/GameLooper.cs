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
        /// 即将在下一帧被update的列表
        /// </summary>
        private List<BaseMonoBehaviour> prepareUpdateList = new List<BaseMonoBehaviour>();
        /// <summary>
        ///  本帧执行的update的列表
        /// </summary>
        private List<BaseMonoBehaviour> updateList = new List<BaseMonoBehaviour>();

        /// <summary>
        ///  即将在下一帧被fixedUpdate的列表
        /// </summary>
        private List<BaseMonoBehaviour> prepareFixedUpdateList = new List<BaseMonoBehaviour>();
        /// <summary>
        ///  本帧执行fixedUpdate的列表
        /// </summary>
        private List<BaseMonoBehaviour> fixedUpdateList = new List<BaseMonoBehaviour>();

        /// <summary>
        /// 即将在下一帧被LateUpdate的列表
        /// </summary>
        private List<BaseMonoBehaviour> prepareLateUpdateList = new List<BaseMonoBehaviour>();
        /// <summary>
        ///  本帧执行lateUpdate的列表
        /// </summary>
        private List<BaseMonoBehaviour> lateUpdateList = new List<BaseMonoBehaviour>();

        /// <summary>
        ///  event队列
        /// </summary>
        private Queue<Action> eventQueue = new Queue<Action>();

        private static object lockObj = new object();

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

            for (int i = 0; i < prepareUpdateList.Count; i++)
            {
                BaseMonoBehaviour temp = prepareUpdateList[i];
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
                BaseMonoBehaviour temp = prepareFixedUpdateList[i];
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
                BaseMonoBehaviour temp = prepareLateUpdateList[i];
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
            eventQueue.Clear();
            Instance = null;
        }

        public static void BackToMainThread(Action e)
        {
            lock (lockObj)
            {
                if (e != null && Instance != null)
                {
                    Instance.eventQueue.Enqueue(e);
                }
            }
        }

        public static void PrepareForUpdate(BaseMonoBehaviour mono)
        {
            if (Instance != null)
            {
                if (Instance.prepareUpdateList.Contains(mono) ==false)
                {
                    Instance.prepareUpdateList.Add(mono);
                }
            }
        }

        public static void PrepareForFixedUpdate(BaseMonoBehaviour mono)
        {
            if (Instance != null)
            {
                if (Instance.prepareFixedUpdateList.Contains(mono) == false)
                {
                    Instance.prepareFixedUpdateList.Add(mono);
                }
            }
        }

        public static void PrepareForLateUpdate(BaseMonoBehaviour mono)
        {
            if (Instance != null)
            {
                if (Instance.prepareLateUpdateList.Contains(mono) == false)
                {
                    Instance.prepareLateUpdateList.Add(mono);
                }
            }
        }
    }
}


