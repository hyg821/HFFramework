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
        ///  如果是值类型那么会出现 装箱拆箱
        /// </summary>
        public object content;

        private ulong key;
        public ulong Key
        {
            get
            {
                return key;
            }
        }

        public NotificationMessage(ushort moduleID, int msgID, object sender, object content)
        {
            this.moduleID = moduleID;
            this.msgID = msgID;
            this.sender = sender;
            this.content = content;
            this.key = NotificationCenter.ConvertToKey(moduleID, msgID);
        }
    }
}