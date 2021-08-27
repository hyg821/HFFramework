using Microsoft.CSharp;
using System.CodeDom.Compiler;
using System.Collections;
using System.Collections.Generic;
using System.Xml;
using UnityEditor;
using UnityEngine;
using System.IO;
using System;

namespace HFFramework.Editor
{
    public class AutoCompilerEditor
    {
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

        public static string RootPath;
        public static string ReferenceRootPath;

        public static void CompilerHotFixDLL()
        {
            string outPath = Application.dataPath+ "/StreamingAssets/DLL/HotFix.dll";
            CSharpCodeProvider complier = new CSharpCodeProvider();
            //设置编译参数
            CompilerParameters paras = new CompilerParameters();

            if (complier.Supports(GeneratorSupport.EntryPointMethod))
            {
                // Specify the class that contains 
                // the main method of the executable.
                Debug.LogError("AAAAAAAAAAAAAA");
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
                Debug.LogError(path.InnerXml);
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
    }
}

