using System;
namespace HFFramework
{
    public class ObserverDelegate
    {
        /// <summary>
        ///  接收者
        /// </summary>
        public object receiver;

        /// <summary>
        ///  模块id
        /// </summary>
        public ushort moduleId;

        /// <summary>
        ///  消息id
        /// </summary>
        public int msgId;

        /// <summary>
        ///  消息回调
        /// </summary>
        public Action<NotificationMessage> handler;

        public ulong Key { get; }

        public ObserverDelegate(object receiver, ushort moduleId, int msgId, Action<NotificationMessage> handler)
        {
            this.receiver = receiver;
            this.moduleId = moduleId;
            this.msgId = msgId;
            this.handler = handler;
            this.Key = NotificationCenter.ConvertToKey(moduleId, msgId);
        }

        public void Destroy()
        {
            msgId = 0;
            moduleId = 0;
            receiver = null;
            handler = null;
        }
    }
}