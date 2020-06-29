using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using System.IO;
using System.Text;
using System;
using System.Reflection;

namespace HFFramework
{
    public class HFConfigCreater
    {
        public static string[] split = new string[] { "," };
        public static string[] arraySplit = new string[] { "[", "]", ";" };

        [MenuItem("游戏辅助工具/配置文件/生成解析 .cs文件")]
        public static void GenerateConfigByAnalysis()
        {
            string path = Application.dataPath + "/" + GameConst.ConfigInputPath;
            if (!Directory.Exists(path))
            {
                Directory.CreateDirectory(path);
            }
            DirectoryInfo directoryInfo = new DirectoryInfo(path);

            path = Application.dataPath + "/" + GameConst.ConfigOutputPath;
            if (!Directory.Exists(path))
            {
                Directory.CreateDirectory(path);
            }

            AssetDatabase.Refresh();

            FileInfo[] files = directoryInfo.GetFiles();
            List<FileInfo> fileList = new List<FileInfo>();
            for (int i = 0; i < files.Length; i++)
            {
                FileInfo file = files[i];
                if (file.Name.EndsWith(".csv"))
                {
                    CreateConfig(file);
                    fileList.Add(file);
                }
            }

            CreateConfigManager(fileList);

            Debug.Log("生成配置文件完成");

            AssetDatabase.Refresh();
        }


        public static void CreateConfig(FileInfo file)
        {
            string temp0 = file.Name.Replace(".csv", "");
            string temp1 = temp0.Substring(0, 1);
            string temp2 = temp0.Substring(1, temp0.Length - 1);

            string _class = temp1.ToUpper() + temp2;
            string _table = "Config" + _class;
            string _namespace = "Config";
            string _content = "";
            int _column = 0;

            using (StreamReader stream = file.OpenText())
            {
                _content = stream.ReadToEnd();
            }

            StringReader reader = new StringReader(_content);

            //第一行 中文名字
            string cNames = reader.ReadLine();

            //第二行 代码属性名字
            string propertys = reader.ReadLine();

            //第三行 值类型还是引用类型
            string valueRef = reader.ReadLine();

            //第四行 属性的类型  int float custom..
            string types = reader.ReadLine();

            string[] cNameList;
            string[] valueRefList;
            string[] propertyList;
            string[] typeList;

            cNameList = cNames.Split(split, StringSplitOptions.None);
            _column = cNameList.Length;
            valueRefList = valueRef.Split(split, StringSplitOptions.None);
            propertyList = propertys.Split(split, StringSplitOptions.None);
            typeList = types.Split(split, StringSplitOptions.None);

            StringBuilder builder = new StringBuilder();
            builder.AppendLine(@"using System.Collections;");
            builder.AppendLine(@"using System.Collections.Generic;");
            builder.AppendLine(@"using UnityEngine;");
            builder.AppendLine(@"using System.Text;");
            builder.AppendLine(@"using System.IO;");
            builder.AppendLine(@"using System;");
            builder.AppendLine(@"using HFFramework;");
            builder.AppendLine(@"using System.Reflection;");
            builder.AppendLine();
            builder.AppendLine(@"namespace " + _namespace);
            builder.AppendLine("{ ");
            builder.AppendLine(@"    [System.Serializable]");
            builder.AppendLine(@"    public class " + _class);
            builder.AppendLine("    { ");

            for (int i = 0; i < _column; i++)
            {
                string property = propertyList[i];
                string type = typeList[i].ToLower();
                string note = cNameList[i];
                string vf = valueRefList[i];

                builder.AppendLine("        /// <summary>");
                builder.AppendLine("        /// " + note);
                builder.AppendLine("        /// </summary>");

                if (type.Contains("[") && type.Contains("]"))
                {
                    type = type.Replace("[", null);
                    type = type.Replace("]", null);
                    builder.AppendLine("        public List<" + type + @">" + property + " = new List<" + type + @">();");
                    if (vf.Contains("ref"))
                    {
                        string[] valueRefTempList = vf.Split('_');
                        if (valueRefTempList.Length > 1)
                        {
                            builder.AppendLine("        public " + valueRefTempList[1] + " " + "Get" + FirstCharToUpper(property) + "(" + type + " key" + ")");
                            builder.AppendLine("        { ");
                            builder.AppendLine("              return " + "Config" + valueRefTempList[1] + ".Get(key);");
                            builder.AppendLine("        } ");
                        }
                    }
                }
                else
                {
                    builder.AppendLine("        public " + type + " " + property + ";");
                    if (vf.Contains("ref"))
                    {
                        string[] valueRefTempList = vf.Split('_');
                        if (valueRefTempList.Length > 1)
                        {
                            builder.AppendLine("        public " + valueRefTempList[1] + " " + FirstCharToUpper(property));
                            builder.AppendLine("        { ");
                            builder.AppendLine("            get ");
                            builder.AppendLine("            { ");
                            builder.AppendLine("                return " + "Config" + valueRefTempList[1] + ".Get(" + property + ");");
                            builder.AppendLine("            } ");
                            builder.AppendLine("        } ");
                        }
                    }
                }
            }
            builder.AppendLine("    }");

            builder.AppendLine();

            builder.AppendLine("    [System.Serializable]");
            builder.AppendLine("    public partial class " + _table);
            builder.AppendLine("    { ");
            builder.AppendLine("        public static string[] split = new string[] { " + "\"" + "," + "\"" + " };");
            builder.AppendLine("        public static string[] splitArray = new string[] { " + "\"" + ";" + "\"" + ", " + "\"" + "[" + "\"" + ", " + "\"" + "]" + "\"" + " };");
            builder.AppendLine();
            builder.AppendLine("        " + @"private static " + _table + " instance;");
            builder.AppendLine("        " + @"public static " + _table + " Instance");
            builder.AppendLine("        { ");
            builder.AppendLine("            get ");
            builder.AppendLine("            { ");
            builder.AppendLine("                if (instance==null) ");
            builder.AppendLine("                { ");
            builder.AppendLine("                     instance = new " + _table + " ();");
            builder.AppendLine("                } ");
            builder.AppendLine("                return instance;");
            builder.AppendLine("            } ");
            builder.AppendLine("        } ");

            builder.AppendLine();

            builder.AppendLine("        public Dictionary<" + typeList[0] + " , " + _class + @"> dic = new Dictionary<" + typeList[0] + " , " + _class + @">();");
            builder.AppendLine();
            builder.AppendLine("        public List<" + _class + @"> list = new List<" + _class + @">();");
            builder.AppendLine();

            builder.AppendLine("        public static " + _class + " Get(" + typeList[0] + " id)");
            builder.AppendLine("        {");
            builder.AppendLine("            " + _class + " temp;");
            builder.AppendLine("            Instance." + "dic.TryGetValue(id, out temp);");
            builder.AppendLine("            return temp;");
            builder.AppendLine("        }");

            builder.AppendLine();
            builder.AppendLine("        public void Init()");
            builder.AppendLine("        {");
            builder.AppendLine(@"            TextAsset textAsset  = HFResourceManager.Instance.GetAsset<TextAsset>(" + "\"" + GameConst.ConfigAssetbundleName + "\"" + "," + "\"" + _class + "\"" + ");");
            builder.AppendLine(@"            StringReader reader = new StringReader(textAsset.text);");
            builder.AppendLine(@"            reader.ReadLine();");
            builder.AppendLine(@"            reader.ReadLine();");
            builder.AppendLine(@"            reader.ReadLine();");
            builder.AppendLine(@"            reader.ReadLine();");
            builder.AppendLine(@"            while (true)");
            builder.AppendLine(@"            {");
            builder.AppendLine(@"                string row = reader.ReadLine();");
            builder.AppendLine(@"                if (string.IsNullOrEmpty(row))");
            builder.AppendLine(@"                {");
            builder.AppendLine(@"                    break;");
            builder.AppendLine(@"                }");
            builder.AppendLine(@"                string[] strs = row.Split(split, StringSplitOptions.None);");
            builder.AppendLine(@"                if (strs.Length > 0)");
            builder.AppendLine(@"                {");
            builder.AppendLine(@"                    " + _class + " config " + "= new " + _class + "();");
            builder.AppendLine(@"                    string[] air = null;");
            for (int i = 0; i < _column; i++)
            {
                string m_type = typeList[i];
                string m_property = propertyList[i];

                if (m_type.Contains("[") && m_type.Contains("]"))
                {
                    m_type = m_type.Replace("[", null);
                    m_type = m_type.Replace("]", null);
                    builder.AppendLine(@"                    air = strs[" + i + "].Split(splitArray, StringSplitOptions.RemoveEmptyEntries);");
                    builder.AppendLine(@"                    for (int x = 0; x < air.Length; x++)");
                    builder.AppendLine(@"                    {");
                    switch (m_type)
                    {
                        case "string":
                            builder.AppendLine(@"                       config." + m_property + ".Add(air[x]);");
                            break;
                        case "int":
                            builder.AppendLine(@"                       int ite = 0;");
                            builder.AppendLine(@"                       int.TryParse(air[x]" + ", out ite);");
                            builder.AppendLine(@"                       config." + m_property + ".Add(ite);");
                            break;
                        case "float":
                            builder.AppendLine(@"                       float ite = 0;");
                            builder.AppendLine(@"                       float.TryParse(air[x]" + ", out ite);");
                            builder.AppendLine(@"                       config." + m_property + ".Add(ite);");
                            break;
                        case "bool":
                            builder.AppendLine(@"                       bool ite = false;");
                            builder.AppendLine(@"                       bool.TryParse(air[x]" + ", out ite);");
                            builder.AppendLine(@"                       config." + m_property + ".Add(ite);");
                            break;
                        default:
                            break;
                    }
                    builder.AppendLine(@"                     }");
                }
                else
                {
                    switch (m_type)
                    {
                        case "string":
                            builder.AppendLine(@"                    config." + m_property + " = " + "strs[" + i + "];");
                            break;
                        case "int":
                            builder.AppendLine(@"                    int.TryParse(strs[" + i + "]" + ", out config." + m_property + ");");
                            break;
                        case "float":
                            builder.AppendLine(@"                    float.TryParse(strs[" + i + "]" + ", out config." + m_property + ");");
                            break;
                        case "bool":
                            builder.AppendLine(@"                    bool.TryParse(strs[" + i + "]" + ", out config." + m_property + ");");
                            break;
                        default:
                            break;
                    }
                }
            }

            builder.AppendLine(@"                    dic.Add(config." + propertyList[0] + ", config );");
            builder.AppendLine(@"                    list.Add(config);");
            builder.AppendLine(@"               }");
            builder.AppendLine(@"           }");
            builder.AppendLine(@"           reader.Close();");
            builder.AppendLine(@"           Type type = GetType();");
            builder.AppendLine("           MethodInfo method = type.GetMethod( \"PostProcessing\");");
            builder.AppendLine(@"           if (method!=null)");
            builder.AppendLine(@"           {");
            builder.AppendLine(@"               method.Invoke(this,null);");
            builder.AppendLine(@"           }");
            builder.AppendLine(@"        }");
            builder.AppendLine();
            builder.AppendLine(@"        public void Dispose()");
            builder.AppendLine(@"        {");
            builder.AppendLine(@"            dic.Clear();");
            builder.AppendLine(@"            list.Clear();");
            builder.AppendLine(@"            list = null;");
            builder.AppendLine(@"            dic = null;");
            builder.AppendLine(@"            instance = null;");
            builder.AppendLine(@"        }");
            builder.AppendLine(@"    }");
            builder.AppendLine(@"}");

            string path = Application.dataPath + "/" + GameConst.ConfigOutputPath + "/" + _class + ".cs";
            byte[] b = Encoding.UTF8.GetBytes(builder.ToString());
            using (FileStream f = new FileStream(path, FileMode.Create))
            {
                f.Write(b, 0, b.Length);
            }
        }

        public static void CreateConfigManager(List<FileInfo> files)
        {
            string _namespace = "Config";
            string _manager = "HFConfigManager";
            StringBuilder builder = new StringBuilder();
            builder.AppendLine(@"using System.Collections;");
            builder.AppendLine(@"using System.Collections.Generic;");
            builder.AppendLine(@"using UnityEngine;");
            builder.AppendLine(@"using System.Text;");
            builder.AppendLine(@"using System.IO;");
            builder.AppendLine(@"using System;");
            builder.AppendLine(@"using HFFramework;");
            builder.AppendLine();
            builder.AppendLine(@"namespace " + _namespace);
            builder.AppendLine("{ ");
            builder.AppendLine(@"    [System.Serializable]");
            builder.AppendLine(@"    public class " + _manager);
            builder.AppendLine("    { ");
            builder.AppendLine("        " + @"private static " + _manager + " instance;");
            builder.AppendLine("        " + @"public static " + _manager + " Instance");
            builder.AppendLine("        { ");
            builder.AppendLine("            get ");
            builder.AppendLine("            { ");
            builder.AppendLine("                if (instance==null) ");
            builder.AppendLine("                { ");
            builder.AppendLine("                     instance = new " + _manager + " ();");
            builder.AppendLine("                } ");
            builder.AppendLine("                return instance;");
            builder.AppendLine("            } ");
            builder.AppendLine("        } ");
            builder.AppendLine();
            builder.AppendLine("        public void Init()");
            builder.AppendLine("        { ");

            for (int i = 0; i < files.Count; i++)
            {
                FileInfo file = files[i];
                string temp0 = file.Name.Replace(".csv", "");
                string temp1 = temp0.Substring(0, 1);
                string temp2 = temp0.Substring(1, temp0.Length - 1);
                string _class = temp1.ToUpper() + temp2;
                string _table = "Config" + _class;

                builder.AppendLine("            " + _table + ".Instance.Init();");
            }

            builder.AppendLine("            " + "HFResourceManager.Instance.UnloadAssetBundle(" + "\"" + GameConst.ConfigAssetbundleName + "\"" + ", true); ");
            builder.AppendLine("            GC.Collect();");

            builder.AppendLine("        } ");
            builder.AppendLine();
            builder.AppendLine(@"        public void Dispose()");
            builder.AppendLine(@"        {");
            for (int i = 0; i < files.Count; i++)
            {
                FileInfo file = files[i];
                string temp0 = file.Name.Replace(".csv", "");
                string temp1 = temp0.Substring(0, 1);
                string temp2 = temp0.Substring(1, temp0.Length - 1);
                string _class = temp1.ToUpper() + temp2;
                string _table = "Config" + _class;
                builder.AppendLine("            " + _table + ".Instance.Dispose();");
            }
            builder.AppendLine(@"            instance = null;");
            builder.AppendLine(@"            GC.Collect();");
            builder.AppendLine(@"        }");
            builder.AppendLine(@"    } ");
            builder.AppendLine(@"} ");

            string path = Application.dataPath + "/" + GameConst.ConfigOutputPath + "/" + _manager + ".cs";
            byte[] b = Encoding.UTF8.GetBytes(builder.ToString());
            using (FileStream f = new FileStream(path, FileMode.Create))
            {
                f.Write(b, 0, b.Length);
            }
        }

        public static string FirstCharToUpper(string str)
        {
            return str.Substring(0, 1).ToUpper() + str.Substring(1);
        }
    }
}

