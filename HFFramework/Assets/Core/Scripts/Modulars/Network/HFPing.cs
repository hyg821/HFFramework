using System.Collections;
using System.Collections.Generic;
using System.Net.NetworkInformation;

namespace HFFramework
{
    public class HFPing 
    {
        public string address;

        public Ping ping;

        public PingReply reply;

        public Timer timer;

        public HFPing(string address,float interval)
        {
            this.address = address;
            ping =  new Ping();
            ping.PingCompleted += OnPingCompleted;
            timer = TimerManager.Schedule(interval, 0, -1, PingSend);
        }

        private void PingSend(Timer t)
        {
            ping.SendAsync(address, null);
        }

        public void OnPingCompleted(object sender, PingCompletedEventArgs e)
        {
            reply = e.Reply;
        }

        public void Dispose()
        {
            ping.PingCompleted -= OnPingCompleted;
            ping.SendAsyncCancel();
            ping.Dispose();
            timer.Close();
            reply = null;
            ping = null;
        }
    }
}


