namespace HFFramework
{
    public class IDGenerator
    {
        private static long id = 0;

        /// <summary>
        ///  获取唯一标识 调用之后递增
        /// </summary>
        /// <returns></returns>
        public static long GetID()
        {
            return ++id;
        }
    }
}