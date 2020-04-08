using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Text;

namespace HFFramework
{
#if UNITY_EDITOR
    [ExecuteInEditMode]
#endif
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
        public UIType type = UIType.Child;

        /// <summary>
        ///  属性名称
        /// </summary>
        public string propertyName;

        /// <summary>
        ///  泛型名称
        /// </summary>
        [HideInInspector]
        [SerializeField]
        private string propertyType;

        public void SetPropertyType(string propertyType)
        {
            this.propertyType = propertyType;
        }

        public string GetPropertyType()
        {
            return propertyType;
        }

        public void GeneratePath()
        {
            if (type == UIType.Root)
            {
                StringBuilder str = new StringBuilder();
                AutoGeneratePath[] temp = GetAllAutoGeneratePath();
                foreach (var item in temp)
                {
                    string P = item.propertyName;
                    string T = item.propertyType;
                    if (string.IsNullOrEmpty(P) || string.IsNullOrEmpty(T))
                    {
                        continue;
                    }
                    str.AppendLine("        public " + T + " " + P + ";");
                }
                str.AppendLine("        #region");
                str.AppendLine("        public override void FindElement()");
                str.AppendLine("        {");
                foreach (var item in temp)
                {
                    string P = item.propertyName;
                    string T = item.propertyType;
                    if (string.IsNullOrEmpty(P) || string.IsNullOrEmpty(T))
                    {
                        continue;
                    }
                    if (T == "GameObject")
                    {
                        str.AppendLine("            " + P + " = " + "FindChild" + "(\"" + GetRelativePath(this, item) + "\");");
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
                print("自动生成代码");
            }
        }

        private string GetRelativePath(AutoGeneratePath root, AutoGeneratePath me)
        {
            if (root == me)
            {
                return null;
            }
            else
            {
                string str = Recursion(root.transform, me.transform, "");
                if (str[0] == '/')
                {
                    str = str.Substring(1);
                }
                return str;
            }
        }

        public string Recursion(Transform root, Transform temp, string path)
        {
            if (root == temp)
            {
                return path;
            }
            else
            {
                path = "/" + temp.gameObject.name + path;
                temp = temp.parent;
                return Recursion(root, temp, path);
            }
        }

        public AutoGeneratePath[] GetAllAutoGeneratePath()
        {
            List<AutoGeneratePath> list = new List<AutoGeneratePath>();
            //先找自身的
            AutoGeneratePath[] paths = transform.GetComponents<AutoGeneratePath>();
            if (paths != null)
            {
                for (int i = 0; i < paths.Length; i++)
                {
                    AutoGeneratePath path = paths[i];
                    if (path.type==UIType.Root)
                    {
                        list.Add(path);
                    }
                }         
            }
            //找儿子的
            FindChildAutoGeneratePath(transform,list);
            return list.ToArray();
        }

        public void FindChildAutoGeneratePath(Transform tas , List<AutoGeneratePath> list)
        {
            for (int i = 0; i < tas.childCount; i++)
            {
                Transform temp = tas.GetChild(i);
                AutoGeneratePath[] paths = temp.GetComponents<AutoGeneratePath>();
                if (paths == null||paths.Length==0)
                {
                    FindChildAutoGeneratePath(temp, list);
                }
                else
                {
                    bool isFind = true;
                    for (int j = 0; j < paths.Length; j++)
                    {
                        AutoGeneratePath path = paths[j];
                        if (path.type==UIType.Root)
                        {
                            isFind = false;
                        }
                    }

                    for (int j = 0; j < paths.Length; j++)
                    {
                        AutoGeneratePath path = paths[j];
                        if (path.type == UIType.Child)
                        {
                            list.Add(path);
                        }

                        if (path.type == UIType.Child&&isFind)
                        {
                            FindChildAutoGeneratePath(temp, list);
                        }
                    }
                }     
            }
        }
    }
}
