using UnityEngine;
using UnityEditor;
using UnityEditor.Callbacks;
using System.IO;
using System;

public class HFOpenAssetHandler
{
    /// <summary>
    ///  ide路径
    /// </summary>
    public const string emacsPath = "D://VSCode/Code";

    /// <summary>
    ///  使用自定义ide 打开的扩展名
    /// </summary>
    public const string fileExtensions = ".txt, .js, .javascript, .json, .html, .shader, .template";

    [OnOpenAssetAttribute(1)]
    public static bool step1(int instanceID, int line)
    {
        UnityEngine.Object selected = EditorUtility.InstanceIDToObject(instanceID);

        string selectedFilePath = AssetDatabase.GetAssetPath(selected);
        string selectedFileExt = Path.GetExtension(selectedFilePath);
        if (selectedFileExt == null)
        {
            selectedFileExt = String.Empty;
        }
        if (!String.IsNullOrEmpty(selectedFileExt))
        {
            selectedFileExt = selectedFileExt.ToLower();
        }

        //selected.GetType().ToString() == "UnityEditor.MonoScript" ||
        if (selected.GetType().ToString() == "UnityEngine.Shader" || fileExtensions.IndexOf(selectedFileExt, StringComparison.OrdinalIgnoreCase) >= 0)
        {
            string ProjectPath = System.IO.Path.GetDirectoryName(UnityEngine.Application.dataPath);
            string completeFilepath = ProjectPath + Path.DirectorySeparatorChar + AssetDatabase.GetAssetPath(selected);
            string args = null;
            if (line == -1)
            {
                args = completeFilepath;
            }
            else
            {
                args = "-n +" + line.ToString() + " " + completeFilepath;
            }

            System.Diagnostics.Process proc = new System.Diagnostics.Process();
            proc.StartInfo.FileName = emacsPath;
            proc.StartInfo.Arguments = args;
            proc.StartInfo.UseShellExecute = false;
            proc.StartInfo.WindowStyle = System.Diagnostics.ProcessWindowStyle.Hidden;
            proc.StartInfo.CreateNoWindow = true;
            proc.StartInfo.RedirectStandardOutput = true;
            proc.Start();

            Debug.Log("使用VSCode打开");
            return true;
        }

        return false;
    }

    [OnOpenAssetAttribute(2)]
    public static bool step2(int instanceID, int line)
    {
        //Debug.Log("Open Asset step: 2 (" + instanceID + ")");
        return false; // we did not handle the open
    }

}


