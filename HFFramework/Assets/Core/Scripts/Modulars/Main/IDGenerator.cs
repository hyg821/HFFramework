namespace HFFramework
{
    public class IDGenerator
    {
        private static long entityID = 0;

        private static long componentID = 0;

        /// <summary>
        ///  获取唯一标识 调用之后递增
        /// </summary>
        /// <returns></returns>
        public static long GetEntityID()
        {
            return ++entityID;
        }

        public static long GetComponentID()
        {
            return ++componentID;
        }

        private static int rpcID = 0;
        /// <summary>
        /// 获取网络消息操作 id
        /// </summary>
        /// <returns></returns>
        public static int GetRpcID()
        {
            return ++rpcID;
        }
    }
}