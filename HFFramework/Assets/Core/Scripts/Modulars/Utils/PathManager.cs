using System.IO;
using UnityEngine;

namespace HFFramework
{
    /// <summary>
    /// 路径管理器
    /// </summary>
    public class PathManager:MonoBehaviour
    {
        public static PathManager self;

        public string PersistentDataPath;

        public string StreamingAssetsPath;

        public void Awake()
        {
            self = this;
            PersistentDataPath = SetPersistentDataPath();
            StreamingAssetsPath = SetStreamingAssetsPath();
        }

        public string SetPersistentDataPath()
        {
            return Application.persistentDataPath + "/";
        }

        public string SetStreamingAssetsPath()
        {
            return Application.streamingAssetsPath + "/";
        }
    }
}