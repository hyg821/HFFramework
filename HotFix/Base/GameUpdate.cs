using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;

namespace HotFix
{
    public class GameUpdate
    {
        private static GameUpdate instance;
        public static GameUpdate Instance
        {
            get
            {
                if (instance == null)
                {
                    instance = new GameUpdate();
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

        public void FixedUpdate()
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

        public void LateUpdate()
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

        public static void PrepareForUpdate(Entity mono)
        {
            if (Instance != null)
            {
                if (Instance.prepareUpdateList.Contains(mono) == false)
                {
                    Instance.prepareUpdateList.Add(mono);
                }
            }
        }

        public static void PrepareForFixedUpdate(Entity mono)
        {
            if (Instance != null)
            {
                if (Instance.prepareFixedUpdateList.Contains(mono) == false)
                {
                    Instance.prepareFixedUpdateList.Add(mono);
                }
            }
        }

        public static void PrepareForLateUpdate(Entity mono)
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