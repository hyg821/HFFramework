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
        /// 执行回调
        /// </summary>
        public Action<Timer> task;

        /// <summary>
        /// 完成回调
        /// </summary>
        public Action<Timer> complete;

        /// <summary>
        ///  已经使用的总时间
        /// </summary>
        public float useAllTime;

        /// <summary>
        ///  执行Task次数
        /// </summary>
        public int executeCount;

        /// <summary>
        ///  目标总时间
        /// </summary>
        public float taskTime;

        /// <summary>
        ///  每一个间隔使用时间
        /// </summary>
        public float useIntervalTime;

        public Timer(float interval, float delay, int repeatCount, Action<Timer> task, Action<Timer> complete = null)
        {
            this.interval = interval;
            this.delay = delay;
            this.repeatCount = repeatCount;
            this.task = task;
            this.complete = complete;
            this.isComplete = false;
            this.taskTime = delay + interval * repeatCount;
        }

        public void Update(float delta)
        {
            if (repeatCount==0)
            {
                isComplete = true;
            }

            //如果标记完成 直接退出
            if (isComplete==true)
            {
                return;
            }

            //无限执行 
            if (repeatCount<0)
            {
                Execute(delta);
                return;
            }

            if (useAllTime > taskTime)
            {
                //做一个特殊判断 如果 任务时间 等于 延迟 那么直接执行一次 
                if (delay==taskTime)
                {
                    Execute(delta);
                }
                isComplete = true;
                return;
            }

            //如果使用的总时间大于延迟 那么开始执行
            if (useAllTime>= delay)
            {
                Execute(delta);
            }

            //使用总时间 递增
            useAllTime += delta;
        }

        private void Execute(float delta)
        {
            //特殊判断 如果是 第一次 那么直接执行
            if (executeCount == 0)
            {
                Execute();
            }
            else
            {
                //如果经过的时间 小于 间隔时间
                if (useIntervalTime < interval)
                {
                    useIntervalTime += delta;
                }
                else
                {
                    Execute();
                }
            }
        }

        private void Execute()
        {
            useIntervalTime = 0;
            executeCount++;
            if (task != null)
            {
                task(this);
            }
        }


        public void Close()
        {
            isComplete = true;
            interval = 0;
            delay = 0;
            repeatCount = 0;
            useAllTime = 0;
            taskTime = 0;
            useIntervalTime = 0;
            task = null;
            complete = null;
        }
    }
}


