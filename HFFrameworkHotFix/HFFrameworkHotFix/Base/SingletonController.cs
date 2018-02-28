namespace HotFix
{
    public class SingletonController<T> where T : ElementBase, new()
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
                    instance = new T();
                    instance.Awake();
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
