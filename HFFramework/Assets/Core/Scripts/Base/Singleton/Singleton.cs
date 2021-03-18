namespace HFFramework
{
    public class Singleton<T> where T : Entity, new()
    {
        /// <summary>
        ///  私有
        /// </summary>
        private static T instance;

        /// <summary>
        ///  单例
        /// </summary>
        public static T Instance
        {
            get
            {
                if (instance == null)
                {
                    instance = GameFactory.CreateEntity<T>();
                }
                return instance;
            }
            set
            {
                instance = value;
            }
        }
    }
}
