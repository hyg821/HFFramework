using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Net;
using UnityEditor;
using UnityEditor.Build.Content;
using UnityEditor.Build.Reporting;
using UnityEditor.Callbacks;
using UnityEngine;
#if UNITY_IOS
using UnityEditor.iOS.Xcode;
#endif

namespace HFFramework.Editor
{
    public class JenkinsBuild
    {
        const string apk = "apk:";
        const string ipa = "ipa:";
        const string xcode = "xcode:";
        const string assetbundle = "assetbundle:";
        const string publish = "publish:";
        const string versioninfo = "versioninfo:";
        const string obb = "obb:";
        const string log = "log:";
        const string ApplicationIdentifierTag = "ApplicationIdentifier:";
        const string versionTag = "version:";

        /// <summary>
        /// 生成apk
        /// </summary>
        static bool isGenerateApk = false;
        /// <summary>
        /// 生成ipa
        /// </summary>
        static bool isGenerateIpa = false;
        /// <summary>
        /// 生成xcode 工程
        /// </summary>
        static bool isGenerateXcode = false;
        /// <summary>
        /// 生成assetbundle
        /// </summary>
        static bool isGenerateAssetbundle = false;
        /// <summary>
        /// 资源同步到ftp
        /// </summary>
        static bool isPublish = false;
        /// <summary>
        /// 生成版本信息
        /// </summary>
        static bool isGenerateVersionInfo = false;
        /// <summary>
        /// 打开log
        /// </summary>
        static bool isLog = false;
        /// <summary>
        /// obb分包
        /// </summary>
        static bool isObb = false;
        /// <summary>
        /// 打develop包
        /// </summary>
        static bool isDevelopmentBuild = false;
        /// <summary>
        /// 移动端连接分析器
        /// </summary>
        static bool isAutoConnectProfiler = false;
        /// <summary>
        /// app id
        /// </summary>
        static string ApplicationIdentifier;
        /// <summary>
        /// 版本
        /// </summary>
        static string version = "1.0.0";


        /// <summary>
        /// jenkis 外部调用函数 打包
        /// </summary>
        public static void BuildForAndroid()
        {
            ReceiveCommondLine();
            m_BuildForAndroid();
        }

        /// <summary>
        /// 编辑器调用打包
        /// </summary>
        [MenuItem("打包/安卓打包")]
        public static void EditorBuildForAndroid()
        {
            isGenerateAssetbundle = true;
            isGenerateApk = true;
            isLog = true;
            isDevelopmentBuild = true;
            isAutoConnectProfiler = true;
            ApplicationIdentifier = "com.test.Unity";
            m_BuildForAndroid();
        }

        /// <summary>
        /// jenkis 外部调用函数 打包
        /// </summary>
        public static void BuildForIOS()
        {
            ReceiveCommondLine();
            m_BuildForIOS();
        }

        /// <summary>
        /// 编辑器打ios包
        /// </summary>
        [MenuItem("打包/iOS打包")]
        public static void EditorBuildForIOS()
        {
            isGenerateAssetbundle = true;
            isGenerateXcode = true;
            isLog = true;
            isDevelopmentBuild = true;
            isAutoConnectProfiler = true;
            ApplicationIdentifier = "com.TYCH.JSZCQ3";
            m_BuildForIOS();
        }

        public static void m_BuildForAndroid()
        {
            SwitchAndroidPlatform();

            CommonSetting();

            BuildAssetBundle();

            if (isGenerateApk)
            {
                string directoryPath = ArchivePath();

                string filePath = directoryPath + PlayerSettings.productName + ".apk";

                if (!Directory.Exists(directoryPath))
                {
                    Directory.CreateDirectory(directoryPath);
                }

                if (File.Exists(filePath))
                {
                    File.Delete(filePath);
                    AssetDatabase.Refresh();
                }

                BuildReport report = BuildPipeline.BuildPlayer(GetBuildScenes(), filePath, BuildTarget.Android, BuildOptions.None);

                if (report.summary.result == BuildResult.Succeeded)
                {
                    Debug.Log(PlayerSettings.productName + ".apk已生成");
                    if (isGenerateVersionInfo)
                    {
                    }
                }
                else
                {
                    Debug.Log("Build Failed");
                }
            }
        }

        private static void m_BuildForIOS()
        {
            SwitchIOSPlatform();

            CommonSetting();

            BuildAssetBundle();

            if (isGenerateXcode)
            {
                //路径不能存在中文 否则xcode报错
                string filePath = ArchivePath();

                if (Directory.Exists(filePath))
                {
                    Directory.Delete(filePath, true);
                }

                BuildReport report = BuildPipeline.BuildPlayer(GetBuildScenes(), filePath, BuildTarget.iOS, BuildOptions.None);

                if (report.summary.result == BuildResult.Succeeded)
                {
                    Debug.Log(PlayerSettings.productName + " xcode工程已生成");
                    if (isGenerateVersionInfo)
                    {

                    }
                }
                else
                {
                    Debug.Log("Build Failed");
                }
            }
        }

        /// <summary>
        /// 切换安卓平台 + 设置
        /// </summary>
        static void SwitchAndroidPlatform()
        {
            if (EditorUserBuildSettings.activeBuildTarget != BuildTarget.Android)
            {
                Debug.Log("切换安卓平台");
                EditorUserBuildSettings.SwitchActiveBuildTarget(BuildTargetGroup.Android, BuildTarget.Android);
                AssetDatabase.Refresh();
            }

            PlayerSettings.Android.keystoreName = null;
            PlayerSettings.Android.keystorePass = null;
            PlayerSettings.Android.keyaliasName = null;
            PlayerSettings.Android.keyaliasPass = null;

            /*
            PlayerSettings.Android.keystoreName = "./user.keystore";
            PlayerSettings.Android.keystorePass = "111222";
            PlayerSettings.Android.keyaliasName = "tych";
            PlayerSettings.Android.keyaliasPass = "111222";
            */

            EditorUserBuildSettings.androidBuildSystem = AndroidBuildSystem.Gradle;
            PlayerSettings.Android.targetSdkVersion = (AndroidSdkVersions)29;
            PlayerSettings.Android.useAPKExpansionFiles = isObb;
            PlayerSettings.SetApplicationIdentifier(BuildTargetGroup.Android, ApplicationIdentifier);

            AssetDatabase.Refresh();
        }

        /// <summary>
        /// 切换ios 平台 +设置
        /// </summary>
        static void SwitchIOSPlatform()
        {
            if (EditorUserBuildSettings.activeBuildTarget != BuildTarget.iOS)
            {
                Debug.Log("切换苹果平台");
                EditorUserBuildSettings.SwitchActiveBuildTarget(BuildTargetGroup.iOS, BuildTarget.iOS);
                if (ApplicationIdentifier == "com.TYCH.JSZCQ3")
                {
                    PlayerSettings.SetApplicationIdentifier(BuildTargetGroup.iOS, ApplicationIdentifier);
                    PlayerSettings.iOS.appleDeveloperTeamID = "77Z7NUFARZ";
                }
            }
            PlayerSettings.iOS.appleEnableAutomaticSigning = true;
            PlayerSettings.iOS.allowHTTPDownload = true;
            AssetDatabase.Refresh();
        }

        /// <summary>
        /// 公共设置
        /// </summary>
        static void CommonSetting()
        {
            PlayerSettings.stripEngineCode = false;
            PlayerSettings.allowUnsafeCode = true;

            EditorUserBuildSettings.development = isDevelopmentBuild;
            EditorUserBuildSettings.connectProfiler = isAutoConnectProfiler;

            EnvironmentConfig config = AssetDatabase.LoadAssetAtPath<EnvironmentConfig>("Assets/Resources/EnvironmentConfig.asset");
            config.AppVersion = version;
            PlayerSettings.bundleVersion = config.AppVersion;
            config.AutoSwitchPlatform = true;

            SRDebugger.Settings.Instance.IsEnabled = isLog;

            if (isPublish)
            {
                FTPTools.UpLoad();
            }
        }

        /// <summary>
        /// 构建资源
        /// </summary>
        static void BuildAssetBundle()
        {
            if (isGenerateAssetbundle)
            {
                //生成配置
                HFConfigCreater.GenerateConfigByAnalysis();

                //图集
                AssetBundleTools.PackingAtlas();

                //清除bundleName
                AssetBundleTools.ClearAssetBundlesName();

                //打包
                AssetBundleTools.SetAssetBundleNameAndBuildAllAssetBundles();
            }

            //检测循环引用
            AssetBundleTools.CheckCircularReference();
        }

        /// <summary>
        /// 获取场景名称
        /// </summary>
        /// <returns></returns>
        static string[] GetBuildScenes()
        {
            List<string> names = new List<string>();
            foreach (EditorBuildSettingsScene e in EditorBuildSettings.scenes)
            {
                if (e!=null&&e.enabled)
                {
                    names.Add(e.path);
                }
            }
            return names.ToArray();
        }

        public static string ArchivePath()
        {
            string str = Application.dataPath.Replace("\\", "/") + "/../../Archive/" + GetBuildTarget().ToString()+"/";
            //Debug.LogError(str);
            return str;
        }

        public static BuildTarget GetBuildTarget()
        {
            BuildTarget target = BuildTarget.NoTarget;
#if UNITY_STANDALONE_WIN
            target = BuildTarget.StandaloneWindows;
#elif UNITY_STANDALONE_OSX
            target = BuildTarget.StandaloneOSXIntel;
#elif UNITY_IPHONE
            target = BuildTarget.iOS;
#elif UNITY_ANDROID
            target = BuildTarget.Android;
#endif
            HFLog.C("目标平台 " + target);
            return target;
        }

        /// <summary>
        /// 解析shel参数 
        /// </summary>
        public static void ReceiveCommondLine()
        {
            Debug.Log("开始解析 shell 参数  ············");
            foreach (string arg in System.Environment.GetCommandLineArgs())
            {
                Debug.Log(arg);
                if (arg.Contains("platform"))
                {

                }

                if (arg.Contains(apk))
                {
                    isGenerateApk = GetBool(arg);
                }

                if (arg.Contains(ipa))
                {
                    isGenerateIpa = GetBool(arg);
                }

                if (arg.Contains(xcode))
                {
                    isGenerateXcode = GetBool(arg);
                }

                if (arg.Contains(assetbundle))
                {
                    isGenerateAssetbundle = GetBool(arg);
                }

                if (arg.Contains(publish))
                {
                    isPublish = GetBool(arg);
                }

                if (arg.Contains(versioninfo))
                {
                    isGenerateVersionInfo = GetBool(arg);
                }

                if (arg.Contains(obb))
                {
                    isObb = GetBool(arg);
                }

                if (arg.Contains(log))
                {
                    isLog = GetBool(arg);
                }

                if (arg.Contains(ApplicationIdentifierTag))
                {
                    ApplicationIdentifier = GetString(arg);
                }

                if (arg.Contains(versionTag))
                {
                    version = GetString(arg);
                }
            }

            Debug.Log("isGenerateApk " + isGenerateApk);
            Debug.Log("isGenerateIpa " + isGenerateIpa);
            Debug.Log("isGenerateXcode " + isGenerateXcode);
            Debug.Log("isGenerateAssetbundle " + isGenerateAssetbundle);
            Debug.Log("isPublish " + isPublish);
            Debug.Log("isGenerateVersionInfo " + isGenerateVersionInfo);
            Debug.Log("isObb " + isObb);
            Debug.Log("isLog " + isLog);
            Debug.Log("ApplicationIdentifier " + ApplicationIdentifier);
        }

        public static bool GetBool(string str)
        {
            Debug.Log("分割字符串 " + str);
            return bool.Parse(str.Split(':')[1]);
        }

        public static string GetString(string str)
        {
            Debug.Log("分割字符串 " + str);
            return str.Split(':')[1];
        }
    }
}