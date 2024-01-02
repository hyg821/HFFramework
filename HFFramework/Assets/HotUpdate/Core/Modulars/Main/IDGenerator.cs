namespace HFFramework
{
    public class IDGenerator
    {
        private static long entityId = 0;

        private static long componentId = 0;

        /// <summary>
        ///  获取唯一标识 调用之后递增
        /// </summary>
        /// <returns></returns>
        public static long GetEntityId()
        {
            return ++entityId;
        }

        public static long GetComponentId()
        {
            return ++componentId;
        }

        private static int rpcId = 0;
        /// <summary>
        /// 获取网络消息操作 id
        /// </summary>
        /// <returns></returns>
        public static int GetRpcId()
        {
            return ++rpcId;
        }
    }
}