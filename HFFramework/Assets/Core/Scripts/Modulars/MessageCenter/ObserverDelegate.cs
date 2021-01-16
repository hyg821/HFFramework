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
        public ushort moduleID;

        /// <summary>
        ///  消息id
        /// </summary>
        public int msgID;

        /// <summary>
        ///  消息回调
        /// </summary>
        public Action<NotificationMessage> handler;

        public ulong Key { get; }

        public ObserverDelegate(object receiver, ushort moduleID, int msgID, Action<NotificationMessage> handler)
        {
            this.receiver = receiver;
            this.moduleID = moduleID;
            this.msgID = msgID;
            this.handler = handler;
            this.Key = NotificationCenter.ConvertToKey(moduleID, msgID);
        }

        public void Destroy()
        {
            msgID = 0;
            moduleID = 0;
            receiver = null;
            handler = null;
        }
    }
}