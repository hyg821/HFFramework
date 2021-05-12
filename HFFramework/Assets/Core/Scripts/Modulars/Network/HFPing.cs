using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    public class HFPing :UnityEngine.Component
    {
        public string address;

        public Ping ping;

        public Timer timer;

        public float time;

        public void Init(string address,float interval)
        {
            this.address = address;
            timer = TimerManager.Schedule(interval, 0, -1, PingSend);
        }

        private void PingSend(Timer t)
        {
            DestroyPing();
            ping = new Ping(address);
        }

        public void Update()
        {
            if (ping!=null&&ping.isDone)
            {
                time = ping.time;
            }
        }

        public void DestroyPing()
        {
            if (ping != null)
            {
                ping.DestroyPing();
                ping = null;
            }
        }

        public void Destroy()
        {
            timer.Close();
            DestroyPing();
        }
    }
}


