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
        ///  需要update的 列表
        /// </summary>
        private List<BaseElement> updateList = new List<BaseElement>(64);

        /// <summary>
        ///  需要fixedUpdate的 列表
        /// </summary>
        private List<BaseElement> fixedUpdateList = new List<BaseElement>(64);

        /// <summary>
        ///  需要lateUpdate的 列表
        /// </summary>
        private List<BaseElement> lateUpdateList = new List<BaseElement>(64);


        public void Update()
        {
            int i = 0;
            while (i< updateList.Count)
            {
                updateList[i].OnUpdate(Time.deltaTime);
                i++;
            }
        }

        public void FixedUpdate()
        {
            int i = 0;
            while (i <= fixedUpdateList.Count)
            {
                fixedUpdateList[i].OnFixedUpdate(0);
                i++;
            }
        }

        public void LateUpdate()
        {
            int i = 0;
            while (i < lateUpdateList.Count)
            {
                lateUpdateList[i].OnLateUpdate(0);
            }
        }

        public static void AddUpdate(BaseElement mono)
        {
            if (Instance != null)
            {
                if (Instance.updateList.Contains(mono) == false)
                {
                    Instance.updateList.Add(mono);
                }
            }
        }

        public static void SubUpdate(BaseElement mono)
        {
            if (Instance != null)
            {
                Instance.updateList.Remove(mono);
            }
        }

        public static void AddFixedUpdate(BaseElement mono)
        {
            if (Instance != null)
            {
                if (Instance.fixedUpdateList.Contains(mono) == false)
                {
                    Instance.fixedUpdateList.Add(mono);
                }
            }
        }

        public static void SubFixedUpdate(BaseElement mono)
        {
            if (Instance != null)
            {
                Instance.fixedUpdateList.Remove(mono);
            }
        }

        public static void AddLateUpdate(BaseElement mono)
        {
            if (Instance != null)
            {
                if (Instance.lateUpdateList.Contains(mono) == false)
                {
                    Instance.lateUpdateList.Add(mono);
                }
            }
        }

        public static void SubLateUpdate(BaseElement mono)
        {
            if (Instance != null)
            {
                Instance.lateUpdateList.Remove(mono);
            }
        }

        public void Destroy()
        {
            updateList.Clear();
            fixedUpdateList.Clear();
            lateUpdateList.Clear();
        }
    }
}
