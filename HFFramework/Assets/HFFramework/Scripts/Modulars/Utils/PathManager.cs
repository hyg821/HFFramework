using System.IO;
using UnityEngine;

namespace HFFramework
{
    // The path manager class.
    /// <summary>
    /// 路径管理器
    /// </summary>
    public class PathManager
    {
        // The lua data folder name.
        public static readonly string DATA_CATAGORY_LUA = "Hall";

        // The lua file affix.
        public static readonly string FILE_AFFIX_LUA = ".lua";

        // The local file url prefix. (For assetbundle.)
#if UNITY_EDITOR_WIN || UNITY_STANDALONE_WIN
        public static readonly string LOCAL_URL_PREFIX = "file://";
#elif UNITY_ANDROID
        public static readonly string LOCAL_URL_PREFIX = "jar:file:///";
#else
	    public static readonly string LOCAL_URL_PREFIX = "file://";
#endif

        // The android jar file prefix.
        public static readonly string JAR_URL_PREFIX = "jar:file://";

        // The slash of path separate char.
        public static readonly char PATH_SEPARATE_CHAR_SLASH = '/';

        // The backlash kind of path separate char.
        public static readonly char PATH_SEPARATE_CHAR_BACKLASH = '\\';

        // The asset path in persistent asset path.
        private string m_strPersistAssetPath = Application.persistentDataPath + Path.DirectorySeparatorChar;
        
        // The asset path in streaming asset path.
        private string m_strStreamAssetPath = string.Empty;

        private string m_strAssetDataPath = string.Empty;

        // The asset path in caching path.
        private string m_strCachingAssetPath = string.Empty;

        // The global instance.
        private static PathManager m_cInstance = null;

        /**
         * Constructor.
         * 
         * @param void.
         * @return void.
         */
        private PathManager()
        {
            if (null != m_cInstance)
            {
                return;
            }

            m_cInstance = this;
        }

        /**
         * Destructor.
         * 
         * @param void.
         * @return void.
         */
        ~PathManager()
        {
            m_cInstance = null;
        }

        /**
         * Get the global instance.
         * 
         * @param void.
         * @return PathManager - The instance.
         */
        public static PathManager Instance
        {
            get
            {
                if (null == m_cInstance)
                {
                    new PathManager();
                }

                return m_cInstance;
            }
        }

        // Get persistent assets path.
        public string PersistentAssetsPath
        {
            get
            {
                if (string.IsNullOrEmpty(m_strPersistAssetPath))
                {
                    m_strPersistAssetPath = Application.persistentDataPath + Path.DirectorySeparatorChar;
                }

                return m_strPersistAssetPath;
            }
        }

        // Get streaming assets path.
        public string StreamingAssetsPath
        {
            get
            {
                if (string.IsNullOrEmpty(m_strStreamAssetPath))
                {
                    // m_strStreamAssetPath = Application.streamingAssetsPath + Path.DirectorySeparatorChar;// 其他平台

                    if (Application.platform == RuntimePlatform.WindowsEditor || Application.platform == RuntimePlatform.OSXEditor)
                    {
                        m_strStreamAssetPath = "file://" + Application.streamingAssetsPath + "/";
                    }else if (Application.platform == RuntimePlatform.Android)
                    {
                        m_strStreamAssetPath = Application.streamingAssetsPath + "/";
                    }else if (Application.platform == RuntimePlatform.IPhonePlayer)
                    {
                        m_strStreamAssetPath = "file://" + Application.dataPath + "/Raw/";
                    }
                                        

//#if UNITY_EDITOR
//                    m_strStreamAssetPath = "file://" + Application.streamingAssetsPath + "/";
//#elif UNITY_STANDALONE
//                m_strStreamAssetPath = Application.streamingAssetsPath + "/";
//#elif UNITY_ANDROID
//                m_strStreamAssetPath = Application.streamingAssetsPath + "/";
//#elif UNITY_IPHONE
//                m_strStreamAssetPath = Application.dataPath + "/Raw/";
//#endif


                }

                return m_strStreamAssetPath;
            }
        }

        public string AssetsDataPath
        {
            get
            {
                if (string.IsNullOrEmpty(m_strAssetDataPath))
                {

		#if UNITY_EDITOR
		m_strAssetDataPath = "file://" + Application.dataPath + "/";
		#elif UNITY_STANDALONE
		m_strAssetDataPath = Application.dataPath + "/";
		#elif UNITY_ANDROID
		m_strAssetDataPath = Application.dataPath + "/";
		#elif UNITY_IPHONE
		m_strAssetDataPath = Application.dataPath + "/";
		#endif

                    //m_strAssetDataPath = Application.dataPath + Path.DirectorySeparatorChar;
                }

                return m_strAssetDataPath;
            }
        }

        // Get caching assets path.
        public string CachingAssetsPath
        {
            get
            {
                if (string.IsNullOrEmpty(m_strCachingAssetPath))
                {
                    m_strCachingAssetPath = Application.temporaryCachePath + Path.DirectorySeparatorChar;
                }

                return m_strCachingAssetPath;
            }
        }

        /**
         * Get the final load url.
         * 
         * @param string strPathName - The path name of the file with dir except the base url.
         * @return string - The final full url load string.
         */
        public string GetLoadUrl(string strPathName)
        {
            string strFilePath = PersistentAssetsPath + strPathName;
            if (File.Exists(strFilePath))
            {
                return strFilePath;
            }
            else
            {
                strFilePath = StreamingAssetsPath + strPathName;
                return strFilePath;
            }
        }

        /**
         * Get the final load url at persistent asset path.
         * 
         * @param string strPathName - The path name of the file with dir except the base url.
         * @return string - The final full url load string.
         */
        public string GetLoadUrlPersistentAssetPath(string strPathName)
        {
            string strFilePath = PersistentAssetsPath + strPathName;
            return strFilePath;
        }

        /**
         * Get the final load url at streaming asset path.
         * 
         * @param string strPathName - The path name of the file with dir except the base url.
         * @return string - The final full url load string.
         */
        public string GetLoadUrlStreamingAssetPath(string strPathName)
        {
            string strFilePath = StreamingAssetsPath + strPathName;
            return strFilePath;
        }

        /**
         * Get the final load url for directory.
         * 
         * @param string strPathName - The path dir name of the file with dir except the base url.
         * @return string - The final full url load string for the path dir.
         */
        public string GetLoadUrlForDir(string strPathName)
        {
            string strFilePath = PersistentAssetsPath + strPathName;
            if (Directory.Exists(strFilePath))
            {
                return strFilePath;
            }
            else
            {
                strFilePath = StreamingAssetsPath + strPathName;
                return strFilePath;
            }
        }

        /**
         * Get the final load url for directory at persistent asset path.
         * 
         * @param string strPathName - The path dir name of the file with dir except the base url.
         * @return string - The final full url load string for the path dir.
         */
        public string GetLoadUrlForDirPersistentAssetPath(string strPathName)
        {
            string strFilePath = PersistentAssetsPath + strPathName;
            return strFilePath;
        }

        /**
         * Get the final load url for directory at streaming asset path.
         * 
         * @param string strPathName - The path dir name of the file with dir except the base url.
         * @return string - The final full url load string for the path dir.
         */
        public string GetLoadUrlForDirStreamingAssetPath(string strPathName)
        {
            string strFilePath = StreamingAssetsPath + strPathName;
            return strFilePath;
        }

        public string GetLoadUrlForDirAssetDataPath(string strPathName)
        {
            string strFilePath = AssetsDataPath + strPathName;
            return strFilePath;
        }


        /**
         * Copy file from a source path to a destination path, create directory if not exist, override the file if already exist.
         * 
         * @param string strSrcFilePath - The source path.
         * @param string strDstFilePath - The destination path.
         * @return bool - true if success, otherwise false.
         */
        public bool CopyFile(string strSrcFilePath, string strDstFilePath)
        {
            if (!File.Exists(strSrcFilePath))
            {
                return false;
            }

            if (!CreateDirIfNotExist(strDstFilePath, false))
            {
                return false;
            }

            File.Copy(strSrcFilePath, strDstFilePath, true);
            return true;
        }

        /**
         * Create directory if it not exist when giving a file or dir path.
         * 
         * @param string strPathName - The path file/dir name.
         * @param bool bIsDirPath - If the path name is file path or dir path, true is dir path, false is file path.
         * @return bool - true if success, otherwise false.
         */
        public bool CreateDirIfNotExist(string strPathName, bool bIsDirPath)
        {
            if (string.IsNullOrEmpty(strPathName))
            {
                return false;
            }

            if (Directory.Exists(strPathName))
            {
                return true;
            }

            string strFinalPathName = string.Empty;
            char chDirSpt = Path.DirectorySeparatorChar;
            if (PATH_SEPARATE_CHAR_SLASH == chDirSpt)
            {
                strFinalPathName = strPathName.Replace(PATH_SEPARATE_CHAR_BACKLASH, PATH_SEPARATE_CHAR_SLASH);
            }
            else if (PATH_SEPARATE_CHAR_BACKLASH == chDirSpt)
            {
                strFinalPathName = strPathName.Replace(PATH_SEPARATE_CHAR_SLASH, PATH_SEPARATE_CHAR_BACKLASH);
            }

            // Define the checking path.
#if UNITY_EDITOR_WIN || UNITY_STANDALONE_WIN
            string strCheckPath = string.Empty;
#else
        string strCheckPath = chDirSpt.ToString();
#endif

            // Split the path.
            string[] aPathSegment = strFinalPathName.Split(new char[] { chDirSpt });
            int nSegmentCount = bIsDirPath ? aPathSegment.Length : (aPathSegment.Length - 1);
            for (int i = 0; i < nSegmentCount; i++)
            {
                if (string.IsNullOrEmpty(aPathSegment[i]))
                {
                    continue;
                }

                strCheckPath += aPathSegment[i] + chDirSpt;
                if (!Directory.Exists(strCheckPath))
                {
                    Directory.CreateDirectory(strCheckPath);
                }
            }

            return true;
        }


        /// <summary>
        ///  运行时 获取之前设定好的 Assetbudle资源文件文件目录 路径 安卓读persistentDataPath路径  pc读StreamingAssets路径  使用 www 读取 使用这个
        /// </summary>
        /// <returns></returns>
        public string RuntimeAssetbundlePath()
        {
            string path;
            if (Application.platform == RuntimePlatform.Android || Application.platform == RuntimePlatform.IPhonePlayer)
            {
                path = "file://" + Application.persistentDataPath + "/XJJBXAppData/" + "HotFixResources/" + "AssetBundles/";
            }
            else if (Application.platform == RuntimePlatform.WindowsEditor || Application.platform == RuntimePlatform.OSXEditor)
            {
                path = Instance.StreamingAssetsPath + "AssetBundles/";
            }
            else
            {
                path = "";
            }
            return path;
        }


        /// <summary>
        ///  写文件 用这个
        /// </summary>
        /// <returns></returns>
        public string RuntimeWriteAssetbundlePath()
        {
            string path;
            if (Application.platform == RuntimePlatform.Android || Application.platform == RuntimePlatform.IPhonePlayer)
            {
                path =  Application.persistentDataPath + "/XJJBXAppData/" + "HotFixResources/" + "AssetBundles/";
            }
            else if (Application.platform == RuntimePlatform.WindowsEditor || Application.platform == RuntimePlatform.OSXEditor)
            {
                path = Instance.StreamingAssetsPath + "AssetBundles/";
            }
            else
            {
                path = "";
            }
            return path;
        }



        /// <summary>
        ///  运行时 获取之前设定好的 Config配置文件目录 路径 安卓读persistentDataPath路径  pc读StreamingAssets路径
        /// </summary>
        /// <returns></returns>
        public string RuntimeConfigPath()
        {
            string path="";

            if (Application.platform == RuntimePlatform.Android || Application.platform == RuntimePlatform.IPhonePlayer)
            {
                path = "file://" + Application.persistentDataPath + "/XJJBXAppData/" + "HotFixResources/" + "Config/";
            }
            else if (Application.platform == RuntimePlatform.WindowsEditor || Application.platform == RuntimePlatform.OSXEditor)
            {
                path = Instance.StreamingAssetsPath+ "Config/";
            }
            else
            {
                path = "";
            }

            return path;
        }


        /// <summary>
        ///  assetbundle 通过 LoadFromFile 来读取的路径
        /// </summary>
        /// <returns></returns>
        public string RuntimeAssetBundleReadPath()
        {
            string path = "";

            if (Application.platform == RuntimePlatform.Android || Application.platform == RuntimePlatform.IPhonePlayer)
            {
                path =  Application.persistentDataPath + "/XJJBXAppData/" + "HotFixResources/" + "AssetBundles/";
            }
            else if (Application.platform == RuntimePlatform.WindowsEditor || Application.platform == RuntimePlatform.OSXEditor)
            {
                path = Application.streamingAssetsPath +"/"+ "AssetBundles/";
            }
            else
            {
                path = "";
            }

            return path;
        }
    }
}