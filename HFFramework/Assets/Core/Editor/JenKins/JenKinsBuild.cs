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
        const string obb = "obb:";
        const string log = "log:";
        const string ApplicationIdentifierTag = "ApplicationIdentifier:";
        const string versionTag = "version:";

        public static BuildConfig config;

        /// <summary>
        /// jenkis 外部调用函数 打包
        /// </summary>
        public static void BuildForAndroid()
        {
            ReceiveCommondLine();
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

        private static void m_BuildForAndroid()
        {
            SwitchAndroidPlatform();

            CommonSetting();

            BuildAssetBundle();

            if (config.isGenerateAPK)
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
                    EditorHelper.OpenDirectory(ArchivePath());
                    Debug.Log(PlayerSettings.productName + ".apk已生成");
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

            if (config.isGenerateXcode)
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
                    EditorHelper.OpenDirectory(ArchivePath());
                    Debug.Log(PlayerSettings.productName + " xcode工程已生成");
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
            PlayerSettings.Android.useAPKExpansionFiles = config.isObb;
            PlayerSettings.SetApplicationIdentifier(BuildTargetGroup.Android, config.ApplicationIdentifier);

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
                if (config.ApplicationIdentifier == "com.TYCH.JSZCQ3")
                {
                    PlayerSettings.SetApplicationIdentifier(BuildTargetGroup.iOS, config.ApplicationIdentifier);
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

            //EditorUserBuildSettings.development = config.isDevelopmentBuild;
            //EditorUserBuildSettings.connectProfiler = config.isAutoConnectProfiler;

            EnvironmentConfig config = AssetDatabase.LoadAssetAtPath<EnvironmentConfig>(GameConst.EnvironmentConfigPath);
            config.AppVersion = JenkinsBuild.config.version;
            PlayerSettings.bundleVersion = config.AppVersion;
            config.AutoSetting = true;

            SRDebugger.Settings.Instance.IsEnabled = JenkinsBuild.config.isLog;

            if (JenkinsBuild.config.isPublish)
            {
                FTPTools.UpLoad();
            }
        }

        /// <summary>
        /// 构建资源
        /// </summary>
        static void BuildAssetBundle()
        {
            if (config.isGenerateAssetbundle)
            {
                //生成配置
                ConfigCreater.GenerateConfigByAnalysis();

                //图集
                AssetBundleTools.PackingAtlas();

                //清除bundleName
                AssetBundleTools.ClearAssetBundlesName();

                //打包
                AssetBundleTools.BuildAllAssetBundles();
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
            config = AssetDatabase.LoadAssetAtPath<BuildConfig>(GameConst.BuildConfigPath);
            foreach (string arg in System.Environment.GetCommandLineArgs())
            {
                Debug.Log(arg);

                if (arg.Contains(apk))
                {
                    config.isGenerateAPK = GetBool(arg);
                }

                if (arg.Contains(ipa))
                {
                    config.isGenerateIPA = GetBool(arg);
                }

                if (arg.Contains(xcode))
                {
                    config.isGenerateXcode = GetBool(arg);
                }

                if (arg.Contains(assetbundle))
                {
                    config.isGenerateAssetbundle = GetBool(arg);
                }

                if (arg.Contains(publish))
                {
                    config.isPublish = GetBool(arg);
                }

                if (arg.Contains(obb))
                {
                    config.isObb = GetBool(arg);
                }

                if (arg.Contains(log))
                {
                    config.isLog = GetBool(arg);
                }

                if (arg.Contains(ApplicationIdentifierTag))
                {
                    config.ApplicationIdentifier = GetString(arg);
                }

                if (arg.Contains(versionTag))
                {
                    config.version = GetString(arg);
                }
            }

            config.Log();
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