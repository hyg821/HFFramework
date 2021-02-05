using System.IO;
using UnityEngine;

namespace HFFramework
{
    /// <summary>
    /// 路径管理器
    /// </summary>
    public class PathManager: MonoBehaviour,IManager
    {
        public static PathManager Instance;

        /// <summary>
        ///  持久化路径
        /// </summary>
        public string PersistentDataPath;

        /// <summary>
        ///  StreamingAssets 路径
        /// </summary>
        public string StreamingAssetsPath;

        /// <summary>
        ///   StreamingAssets AssetBundles 路径
        /// </summary>
        public string StreamingAssetsAssetBundlesPath;

        /// <summary>
        /// 持久化  AssetBundles 路径
        /// </summary>
        public string PersistentDataAssetBundlesPath;

        /// <summary>
        /// 持久化  自定义读写路径
        /// </summary>
        public string PersistentDataCustomPath;

        public void Awake()
        {
            Instance = this;
            PersistentDataPath = SetPersistentDataPath();
            StreamingAssetsPath = SetStreamingAssetsPath();
            StreamingAssetsAssetBundlesPath = StreamingAssetsPath + "AssetBundles";
            PersistentDataAssetBundlesPath = PersistentDataPath + "AssetBundles";
            PersistentDataCustomPath = PersistentDataPath + "GameData";
        }

        private string SetPersistentDataPath()
        {
            return Application.persistentDataPath + "/";
        }

        private string SetStreamingAssetsPath()
        {
            return Application.streamingAssetsPath + "/";
        }

        public void Dispose()
        {
            Instance = null;
        }
    }
}