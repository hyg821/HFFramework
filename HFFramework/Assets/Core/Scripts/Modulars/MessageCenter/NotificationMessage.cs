namespace HFFramework
{
    public struct NotificationMessage
    {
        /// <summary>
        ///  模块id
        /// </summary>
        public ushort moduleID;

        /// <summary>
        ///  消息id
        /// </summary>
        public int msgID;

        /// <summary>
        ///  发送者
        /// </summary>
        public object sender;

        /// <summary>
        ///  消息的内容 需要as 转换成对应的类
        /// </summary>
        public object obj;

        private ulong key;
        public ulong Key
        {
            get
            {
                return key;
            }
        }

        public NotificationMessage(ushort moduleID, int msgID, object sender, object obj)
        {
            this.moduleID = moduleID;
            this.msgID = msgID;
            this.sender = sender;
            this.obj = obj;
            this.key = NotificationCenter.ConvertToKey(moduleID, msgID);
        }
    }
}