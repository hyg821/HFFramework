using Microsoft.CSharp;
using System.CodeDom.Compiler;
using System.Collections;
using System.Collections.Generic;
using System.Xml;
using UnityEditor;
using UnityEngine;
using System.IO;
using System;
using UnityEditor.Compilation;
using System.Linq;

namespace HFFramework.Editor
{
    public class AutoCompilerEditor
    {
        public static string RootPath;

        public static string ReferenceRootPath;

        [InitializeOnLoadMethod]
        public static void RegisterPlayMode()
        {
            EditorApplication.playModeStateChanged += OnEditorPlayeModeChanged;
        }

        public static void OnEditorPlayeModeChanged(PlayModeStateChange state)
        {
            //HFLog.C(Application.dataPath + "../../HotFix/HotFix.csproj");
            //CompilerHotFixDLL();
            switch (state)
            {
                case PlayModeStateChange.EnteredEditMode:
                    break;
                case PlayModeStateChange.ExitingEditMode:
                    //CompilerHotFixDLL();
                    break;
                case PlayModeStateChange.EnteredPlayMode:
                    break;
                case PlayModeStateChange.ExitingPlayMode:
                    break;
                default:
                    break;
            }

        }


        [MenuItem("构建/编译热更代码")]
        public static void CompilerHotFixDLL()
        {
            BuildMuteAssembly("HotFix", new[] { "../HotFix" }, GetReferences(), CodeOptimization.Release);
        }

        private static void BuildMuteAssembly(string assemblyName, string[] CodeDirectorys, string[] additionalReferences, CodeOptimization codeOptimization)
        {
            List<string> scripts = new List<string>();
            for (int i = 0; i < CodeDirectorys.Length; i++)
            {
                DirectoryInfo dti = new DirectoryInfo(CodeDirectorys[i]);
                FileInfo[] fileInfos = dti.GetFiles("*.cs", System.IO.SearchOption.AllDirectories);
                for (int j = 0; j < fileInfos.Length; j++)
                {
                    scripts.Add(fileInfos[j].FullName);
                }
            }

            string dllPath = "Assets/StreamingAssets/DLL/" + assemblyName + ".dll";

            AssemblyBuilder assemblyBuilder = new AssemblyBuilder(dllPath, scripts.ToArray());

            BuildTargetGroup buildTargetGroup = BuildPipeline.GetBuildTargetGroup(EditorUserBuildSettings.activeBuildTarget);

            assemblyBuilder.compilerOptions.CodeOptimization = codeOptimization;
            assemblyBuilder.compilerOptions.ApiCompatibilityLevel = PlayerSettings.GetApiCompatibilityLevel(buildTargetGroup);
            // assemblyBuilder.compilerOptions.ApiCompatibilityLevel = ApiCompatibilityLevel.NET_4_6;

            assemblyBuilder.additionalReferences = additionalReferences;

            assemblyBuilder.flags = AssemblyBuilderFlags.None;
            //AssemblyBuilderFlags.None                 正常发布
            //AssemblyBuilderFlags.DevelopmentBuild     开发模式打包
            //AssemblyBuilderFlags.EditorAssembly       编辑器状态
            assemblyBuilder.referencesOptions = ReferencesOptions.UseEngineModules;

            assemblyBuilder.buildTarget = EditorUserBuildSettings.activeBuildTarget;

            assemblyBuilder.buildTargetGroup = buildTargetGroup;

            assemblyBuilder.buildStarted += delegate (string assemblyPath) { Debug.LogFormat("热更代码编译开始"); };

            assemblyBuilder.buildFinished += delegate (string assemblyPath, CompilerMessage[] compilerMessages)
            {
                AssetDatabase.Refresh();

                int errorCount = compilerMessages.Count(m => m.type == CompilerMessageType.Error);
                int warningCount = compilerMessages.Count(m => m.type == CompilerMessageType.Warning);

                Debug.LogFormat("Warnings: {0} - Errors: {1}", warningCount, errorCount);

                if (warningCount > 0)
                {
                    Debug.LogFormat("有{0}个Warning!!!", warningCount);
                }

                if (errorCount > 0)
                {
                    for (int i = 0; i < compilerMessages.Length; i++)
                    {
                        if (compilerMessages[i].type == CompilerMessageType.Error)
                        {
                            Debug.LogError(compilerMessages[i].message);
                        }
                    }
                }
                else
                {
          
                    Debug.Log("热更代码编译成功");
                }
            };

            //开始构建
            if (!assemblyBuilder.Build())
            {
                Debug.LogErrorFormat("热更代码编译失败");
                return;
            }

            while (assemblyBuilder.status != AssemblyBuilderStatus.Finished)
            {
                System.Threading.Thread.Sleep(10);
            }
        }

        public static string[] GetReferences()
        {
            ReferenceRootPath = Application.dataPath + "/../";

            string path = Application.dataPath + "/../../HotFix/HotFix.csproj";
            XmlDocument doc = new XmlDocument();
            doc.Load(path);

            XmlNodeList list = doc.GetElementsByTagName("ItemGroup");

            List<string> codes = new List<string>();

            for (int i = 0; i < list.Count; i++)
            {
                XmlNode node = list[i];
                foreach (var item in node)
                {
                    XmlElement element = (XmlElement)item;
                    if (element.Name == "Reference")
                    {
                        XmlElement tt = element["HintPath"];
                        if (tt != null)
                        {
                            string refPath = ReferenceRootPath + tt.InnerXml;
                            codes.Add(refPath);
                        }

                    }
                }
            }
            return codes.ToArray();
        }

        /*
        public static void CompilerHotFixDLL()
        {
            string outPath = Application.dataPath+ "/StreamingAssets/DLL/HotFix.dll";
            CSharpCodeProvider complier = new CSharpCodeProvider();
            //设置编译参数
            CompilerParameters paras = new CompilerParameters();

            if (complier.Supports(GeneratorSupport.EntryPointMethod))
            {
                paras.MainClass = "Program";
            }

            //是否内存中生成输出
            paras.GenerateInMemory = false;
            //是否生成可执行文件
            paras.GenerateExecutable = true;
            paras.OutputAssembly = outPath;

            RootPath = Application.dataPath + "/../../HotFix/";
            ReferenceRootPath = Application.dataPath + "/../";
            //"D:/HFFramework/HFFramework/Assets"
            string path = Application.dataPath + "/../../HotFix/HotFix.csproj";

            XmlDocument doc = new XmlDocument();
            doc.Load(path);

            XmlNodeList list = doc.GetElementsByTagName("ItemGroup");

            List<string> codes = new List<string>();

            Debug.LogError(outPath);

            for (int i = 0; i < list.Count; i++)
            {
                XmlNode node = list[i];
                foreach (var item in node)
                {
                    XmlElement element = (XmlElement)item;
                    if (element.Name == "Reference")
                    {
                        AddReference(element, paras);
                    }
                    if (element.Name == "Compile")
                    {
                        string code = AddCode(element);
                        if (!string.IsNullOrEmpty(code))
                        {
                            codes.Add(code);
                        }
                    }                   
                }
            }

            //编译代码
            CompilerResults result = complier.CompileAssemblyFromSource(paras, codes.ToArray());
            for (int i = 0; i < result.Errors.Count; i++)
            {
                Debug.LogError(result.Errors[i]);
            }
        }

        public static void AddReference(XmlElement element, CompilerParameters args) 
        {
            XmlElement path = element["HintPath"];
            if (path!=null)
            {
                //Debug.LogError(path.InnerXml);
                string refPath = ReferenceRootPath + path.InnerXml;
                args.ReferencedAssemblies.Add(refPath);
                //Debug.LogError(ReferenceRootPath + path.InnerXml);
            }
        }

        public static string AddCode(XmlElement element)
        {
            string result = null;
            string subPath = element.GetAttribute("Include");

            if (File.Exists(RootPath + subPath))
            {
                string str = File.ReadAllText(RootPath + subPath);
                if (!string.IsNullOrEmpty(str))
                {
                    result = str;
                }
            }
            return result;
        }

        */
    }
}

