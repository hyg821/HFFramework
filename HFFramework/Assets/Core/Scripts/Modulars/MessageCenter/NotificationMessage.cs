namespace HFFramework
{
    public struct NotificationMessage
    {
        /// <summary>
        ///  模块id
        /// </summary>
        public ushort moduleId;

        /// <summary>
        ///  消息id
        /// </summary>
        public int msgId;

        /// <summary>
        ///  发送者
        /// </summary>
        public object sender;

        /// <summary>
        ///  消息的内容 需要as 转换成对应的类 
        ///  如果是值类型那么会出现 装箱拆箱
        /// </summary>
        public object content;

        public ulong Key { get; }

        public NotificationMessage(ushort moduleId, int msgId, object sender, object content)
        {
            this.moduleId = moduleId;
            this.msgId = msgId;
            this.sender = sender;
            this.content = content;
            this.Key = NotificationCenter.ConvertToKey(moduleId, msgId);
        }
    }
}