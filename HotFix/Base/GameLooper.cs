﻿using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;

namespace HotFix
{
    public class GameLooper
    {
        private static GameLooper instance;
        public static GameLooper Instance
        {
            get
            {
                if (instance == null)
                {
                    instance = new GameLooper();
                }
                return instance;
            }
        }

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

        public void Update()
        {
            int index = 0;
            while (index < prepareUpdateList.Count)
            {
                Entity temp = prepareUpdateList[index];
                if (temp.IsNeedUpdate)
                {
                    updateList.Add(temp);
                }
                else
                {
                    updateList.Remove(temp);
                }
                index++;
            }
            prepareUpdateList.Clear();

            for (int i = 0; i < updateList.Count; i++)
            {
                updateList[i].OnUpdate(Time.deltaTime);
            }
        }

        public void FixedUpdate()
        {
            int index = 0;
            while (index < prepareFixedUpdateList.Count)
            {
                Entity temp = prepareFixedUpdateList[index];
                if (temp.IsNeedFixedUpdate)
                {
                    fixedUpdateList.Add(temp);
                }
                else
                {
                    fixedUpdateList.Remove(temp);
                }
                index++;
            }
            prepareFixedUpdateList.Clear();

            for (int i = 0; i < fixedUpdateList.Count; i++)
            {
                fixedUpdateList[i].OnFixedUpdate(Time.deltaTime);
            }
        }

        public void LateUpdate()
        {
            int index = 0;
            while (index < prepareLateUpdateList.Count)
            {
                Entity temp = prepareLateUpdateList[index];
                if (temp.IsNeedLateUpdate)
                {
                    lateUpdateList.Add(temp);
                }
                else
                {
                    lateUpdateList.Remove(temp);
                }
                index++;
            }
            prepareLateUpdateList.Clear();

            for (int i = 0; i < lateUpdateList.Count; i++)
            {
                lateUpdateList[i].OnLateUpdate(Time.deltaTime);
            }
        }

        public void Destroy()
        {
            prepareUpdateList.Clear();
            updateList.Clear();
            prepareFixedUpdateList.Clear();
            fixedUpdateList.Clear();
            prepareLateUpdateList.Clear();
            lateUpdateList.Clear();
            instance = null;
        }

        public static void PrepareForUpdate(Entity entity)
        {
            if (Instance != null)
            {
                Instance.prepareUpdateList.Add(entity);
            }
        }

        public static void PrepareForFixedUpdate(Entity entity)
        {
            if (Instance != null)
            {
                Instance.prepareFixedUpdateList.Add(entity);
            }
        }

        public static void PrepareForLateUpdate(Entity entity)
        {
            if (Instance != null)
            {
                Instance.prepareLateUpdateList.Add(entity);
            }
        }

        public Coroutine StartCoroutine(IEnumerator c)
        {
            return HFFramework.GameLooper.Instance.StartCoroutine(c);
        }

        public void StopCoroutine(Coroutine c)
        {
            if (c != null)
            {
                HFFramework.GameLooper.Instance.StopCoroutine(c);
            }
        }
    }
}