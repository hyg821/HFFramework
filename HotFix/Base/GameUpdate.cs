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
        private List<BaseElement> prepareUpdateList = new List<BaseElement>();
        /// <summary>
        ///  本帧执行的update的列表
        /// </summary>
        private List<BaseElement> updateList = new List<BaseElement>();

        /// <summary>
        ///  即将在下一帧被fixedUpdate的列表
        /// </summary>
        private List<BaseElement> prepareFixedUpdateList = new List<BaseElement>();
        /// <summary>
        ///  本帧执行fixedUpdate的列表
        /// </summary>
        private List<BaseElement> fixedUpdateList = new List<BaseElement>();

        /// <summary>
        /// 即将在下一帧被LateUpdate的列表
        /// </summary>
        private List<BaseElement> prepareLateUpdateList = new List<BaseElement>();
        /// <summary>
        ///  本帧执行lateUpdate的列表
        /// </summary>
        private List<BaseElement> lateUpdateList = new List<BaseElement>();

        public void Update()
        {
            for (int i = 0; i < prepareUpdateList.Count; i++)
            {
                BaseElement temp = prepareUpdateList[i];
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
                BaseElement temp = prepareFixedUpdateList[i];
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
                BaseElement temp = prepareLateUpdateList[i];
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

        public static void PrepareForUpdate(BaseElement mono)
        {
            if (Instance != null)
            {
                if (Instance.prepareUpdateList.Contains(mono) == false)
                {
                    Instance.prepareUpdateList.Add(mono);
                }
            }
        }

        public static void PrepareForFixedUpdate(BaseElement mono)
        {
            if (Instance != null)
            {
                if (Instance.prepareFixedUpdateList.Contains(mono) == false)
                {
                    Instance.prepareFixedUpdateList.Add(mono);
                }
            }
        }

        public static void PrepareForLateUpdate(BaseElement mono)
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