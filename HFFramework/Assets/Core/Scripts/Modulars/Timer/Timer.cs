using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    [Serializable]
    public class Timer
    {
        /// <summary>
        ///  是否完成
        /// </summary>
        public bool isComplete;

        /// <summary>
        ///  间隔
        /// </summary>
        public float interval;

        /// <summary>
        /// 延时
        /// </summary>
        public float delay;

        /// <summary>
        ///  重复次数
        /// </summary>
        public int repeatCount;

        /// <summary>
        /// 回调
        /// </summary>
        public Action task;

        /// <summary>
        ///  已经使用的总时间
        /// </summary>
        public float useAllTime;

        public int useCount;

        /// <summary>
        ///  目标总时间
        /// </summary>
        public float taskTime;

        /// <summary>
        ///  每一个间隔使用时间
        /// </summary>
        public float useIntervalTime;

        public Timer(float interval, float delay, int repeatCount, Action task)
        {
            this.interval = interval;
            this.delay = delay;
            this.repeatCount = repeatCount;
            this.task = task;
            this.isComplete = false;
            this.taskTime = delay + interval * repeatCount;
        }

        public void Update(float delta)
        {
            if (isComplete==true)
            {
                return;
            }

            if (repeatCount<0)
            {
                Execute(delta);
                return;
            }

            if (useAllTime > taskTime)
            {
                isComplete = true;
                return;
            }

            if (useAllTime>= delay)
            {
                Execute(delta);
            }

            useAllTime += delta;
        }

        private void Execute(float delta)
        {
            //特殊判断 
            if (useCount==0)
            {
                Execute();
            }

            if (useIntervalTime < interval)
            {
                useIntervalTime += delta;
            }
            else
            {
                Execute();
            }
        }

        private void Execute()
        {
            useIntervalTime = 0;
            useCount++;
            if (task != null)
            {
                task();
            }
        }


        public void Close()
        {
            isComplete = true;
            interval = 0;
            delay = 0;
            repeatCount = 0;
            task = null;
            useAllTime = 0;
            taskTime = 0;
            useIntervalTime = 0;
        }
    }
}


