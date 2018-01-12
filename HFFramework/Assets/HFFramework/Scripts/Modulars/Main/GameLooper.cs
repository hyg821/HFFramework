﻿using UnityEngine;
using System;
using System.Collections.Generic;

namespace HFFramework
{

    public class SimpleLooper
    {
        public int instanceID;
        public Action action;
        public GameObject obj;

        public SimpleLooper(Action action, GameObject obj)
        {
            this.instanceID = obj.GetInstanceID();
            this.action = action;
            this.obj = obj;
        }
    }

    public class GameLooper : MonoBehaviour
    {

        public static GameLooper self;

        public Dictionary<int, SimpleLooper> updateDic = new Dictionary<int, SimpleLooper>();

        public Dictionary<int, SimpleLooper> fixedUpdateDic = new Dictionary<int, SimpleLooper>();

        public Dictionary<int, SimpleLooper> lateUpdateDic = new Dictionary<int, SimpleLooper>();

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

            foreach (var item in updateDic)
            {
                item.Value.action();
            }
        }

        void FixedUpdate()
        {
            foreach (var item in fixedUpdateDic)
            {
                item.Value.action();
            }
        }

        void LateUpdate()
        {
            foreach (var item in lateUpdateDic)
            {
                item.Value.action();
            }
        }

        void OnDestroy()
        {
            updateDic.Clear();
            fixedUpdateDic.Clear();
            lateUpdateDic.Clear();
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

        public static void AddUpdate(Action update,GameObject gm)
        {
            SimpleLooper looper;
            if (self.updateDic.TryGetValue(gm.GetInstanceID(), out looper) == false)
            {
                if (update!=null&&gm!=null)
                {
                    looper = new SimpleLooper(update, gm);
                    self.updateDic.Add(looper.instanceID, looper);
                }
            }
        }

        public static void SubUpdate(GameObject gm)
        {
            self.updateDic.Remove(gm.GetInstanceID());
        }

        public static void AddFixedUpdate(Action update, GameObject gm)
        {
            SimpleLooper looper;
            if (self.fixedUpdateDic.TryGetValue(gm.GetInstanceID(), out looper) == false)
            {
                if (update != null && gm != null)
                {
                    looper = new SimpleLooper(update, gm);
                    self.fixedUpdateDic.Add(looper.instanceID, looper);
                }
            }
        }

        public static void SubFixedUpdate(Action update, GameObject gm)
        {
            self.fixedUpdateDic.Remove(gm.GetInstanceID());
        }

        public static void AddLateUpdate(Action update, GameObject gm)
        {
            SimpleLooper looper;
            if (self.lateUpdateDic.TryGetValue(gm.GetInstanceID(), out looper) == false)
            {
                if (update != null && gm != null)
                {
                    looper = new SimpleLooper(update, gm);
                    self.lateUpdateDic.Add(looper.instanceID, looper);
                }
            }
        }

        public static void SubLateUpdate(Action update, GameObject gm)
        {
            self.lateUpdateDic.Remove(gm.GetInstanceID());
        }
    }
}


