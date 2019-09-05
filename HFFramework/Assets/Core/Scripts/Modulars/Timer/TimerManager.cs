using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

namespace HFFramework
{
    public class TimerManager : MonoBehaviour,IManager
    {
        public static TimerManager Instance;

        /// <summary>
        ///  下一帧将要移除的timer 列表
        /// </summary>
        public List<Timer> removeTimerList = new List<Timer>();

        /// <summary>
        /// 下一帧要添加的timer 列表
        /// </summary>
        public List<Timer> addTimerList = new List<Timer>();

        /// <summary>
        /// 当前正在跑的timer 列表
        /// </summary>
        public List<Timer> currentTimerList = new List<Timer>();

        private void Awake()
        {
            Instance = this;
        }

        // Update is called once per frame
        private void Update()
        {
            for (int i = 0; i < removeTimerList.Count; i++)
            {
                currentTimerList.Remove(removeTimerList[i]);
            }
            removeTimerList.Clear();

            for (int i = 0; i < addTimerList.Count; i++)
            {
                currentTimerList.Add(addTimerList[i]);
            }
            addTimerList.Clear();

            for (int i = 0; i < currentTimerList.Count; i++)
            {
                Timer timer = currentTimerList[i];
                timer.Update(Time.deltaTime);
                if (timer.isComplete)
                {
                    removeTimerList.Add(timer);
                }
            }
        }

        /// <summary>
        ///  开启一个定时器
        /// </summary>
        /// <param name="interval">秒间隔</param>
        /// <param name="delay">秒延迟</param>
        /// <param name="repeatCount">重复次数</param>
        /// <param name="callback">任务</param>
        public static void Schedule(float interval,float delay,int repeatCount,Action callback)
        {
            Timer timer = new Timer(interval, delay, repeatCount, callback);
            AddTimer(timer);
        }

        public static void AddTimer(Timer timer)
        {
            Instance.addTimerList.Add(timer);
        }

        public static void CloseTimer(Timer timer)
        {
            timer.Close();
        }

        public void DestroyManager()
        {
            Instance = null;
            for (int i = 0; i < removeTimerList.Count; i++)
            {
                removeTimerList[i].Close();
            }
            removeTimerList.Clear();
            removeTimerList = null;

            for (int i = 0; i < addTimerList.Count; i++)
            {
                addTimerList[i].Close();
            }
            addTimerList.Clear();
            addTimerList = null;

            for (int i = 0; i < currentTimerList.Count; i++)
            {
                currentTimerList[i].Close();
            }
            currentTimerList.Clear();
            currentTimerList = null;
        }
    }
}


