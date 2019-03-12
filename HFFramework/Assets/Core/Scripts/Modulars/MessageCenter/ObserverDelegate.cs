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
        public Action<NotificationMessage> callback;

        private ulong key;
        public ulong Key
        {
            get
            {
                return key;
            }
        }

        public ObserverDelegate(object receiver, ushort moduleID, int msgID, Action<NotificationMessage> callback)
        {
            this.receiver = receiver;
            this.moduleID = moduleID;
            this.msgID = msgID;
            this.callback = callback;
            this.key = NotificationCenter.ConvertToKey(moduleID, msgID);
        }

        public void Destroy()
        {
            receiver = null;
            callback = null;
            msgID = 0;
        }
    }
}