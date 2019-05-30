using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Sirenix.OdinInspector;
using System.Text;

namespace HFFramework
{
    public class AutoGeneratePath : MonoBehaviour
    {
        public enum UIType
        {
            Root,
            Child
        }

        /// <summary>
        ///  是根节点 还是子节点
        /// </summary>
        [Title("节点类型","", TitleAlignments.Left, false, false)]
        public UIType type = UIType.Child;

        /// <summary>
        ///  泛型名称
        /// </summary>
        [Title("属性类型", "", TitleAlignments.Left, false, false)]
        public string propertyType;

        /// <summary>
        ///  属性名称
        /// </summary>
        [Title("属性名称", "", TitleAlignments.Left, false, false)]
        public string propertyName;

        [Button("自动生成代码  只对于类型是 Root 的起作用", ButtonSizes.Medium)]
        public void GeneratePath()
        {
            if (type == UIType.Root)
            {
                StringBuilder str = new StringBuilder();
                AutoGeneratePath[] temp = gameObject.GetComponentsInChildren<AutoGeneratePath>(true);
                foreach (var item in temp)
                {
                    string P = item.propertyName;
                    string T = item.propertyType;
                    if (string.IsNullOrEmpty(P)||string.IsNullOrEmpty(T))
                    {
                        continue;
                    }
                    str.AppendLine("        public " + T + " " + P+";");
                }
                str.AppendLine("        #region");
                str.AppendLine("        public override void FindElement()");
                str.AppendLine("        {");
                foreach (var item in temp)
                {
                    string P = item.propertyName;
                    string T = item.propertyType;
                    if (string.IsNullOrEmpty(P)|| string.IsNullOrEmpty(T))
                    {
                        continue;
                    }
                    if (T == "GameObject")
                    {
                        str.AppendLine("            "+P + " = " + "FindChild" + "(\"" + GetRelativePath(this,item) + "\");");
                    }
                    else
                    {
                        str.AppendLine("            " + P + " = " + "AutoFind" + "<" + T + ">(\"" + GetRelativePath(this, item) + "\");");
                    }
                }
                str.AppendLine("        }");
                str.AppendLine("        #endregion");

                TextEditor textEditor = new TextEditor();
                textEditor.text = str.ToString();
                textEditor.OnFocus();
                textEditor.Copy();

                print("自动生成路径成功");
            }
            else
            {
                print("自动生成代码  只对于类型是 Root 的起作用");
            }
        }

        private string GetRelativePath(AutoGeneratePath root, AutoGeneratePath me)
        {
            if (root==me)
            {
                return null;
            }
            else
            {
                string str = Recursion(root.transform, me.transform, "");
                if (str[0]=='/')
                {
                    str = str.Substring(1);
                }
                return str;
            }
        }

        public string Recursion(Transform root, Transform temp, string path)
        {
            if (root==temp)
            {
                return path;
            }
            else
            {
                path = "/" +temp.gameObject.name+path;
                temp = temp.parent;
                return Recursion(root, temp, path);
            }
        }
    }
}


