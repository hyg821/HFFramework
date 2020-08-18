using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Net;
using System.Text;
using UnityEngine;
using UnityEditor;

public class FTPTools
{
    //[MenuItem("AssetBundle/上传bundle到ftp")]
    public static void UpLoad()
    {
        //FTP地址
        string ftpPath = @"Ftp://182.48.99.226/Res/Assetbundles/";
        //本机要上传的目录的父目录
        string localPath = Application.dataPath+ "/../Assetbundles/";
        Debug.Log("localPath  " + localPath);
        //要上传的目录名
        string fileName = "";
        Debug.Log("fileName  " + fileName);
        Debug.Log("开始上传资源到FTP ");
        UploadDirectory(localPath, ftpPath, fileName, "anonymous", "");
        Debug.Log("传资源到FTP结束 ");
    }

#region 上传文件
    /// <summary>
    /// 上传文件
    /// </summary>
    /// <param name="localFile">要上传到FTP服务器的文件</param>
    /// <param name="ftpPath"></param>
    public static void UpLoadFile(string localFile, string ftpPath, string ftpUser, string ftpPassword)
    {
        if (ftpUser == null)
        {
            ftpUser = "";
        }
        if (ftpPassword == null)
        {
            ftpPassword = "";
        }

        if (!File.Exists(localFile))
        {
            Debug.LogError("文件：“" + localFile + "” 不存在！");
            return;
        }

        FtpWebRequest ftpWebRequest = null;
        FileStream localFileStream = null;
        Stream requestStream = null;
        try
        {
            ftpWebRequest = (FtpWebRequest)FtpWebRequest.Create(new Uri(ftpPath));
            ftpWebRequest.Credentials = new NetworkCredential(ftpUser, ftpPassword);
            ftpWebRequest.UseBinary = true;
            ftpWebRequest.KeepAlive = false;
            ftpWebRequest.Method = WebRequestMethods.Ftp.UploadFile;
            ftpWebRequest.ContentLength = localFile.Length;
            int buffLength = 4096;
            byte[] buff = new byte[buffLength];
            int contentLen;
            localFileStream = new FileInfo(localFile).OpenRead();
            requestStream = ftpWebRequest.GetRequestStream();
            contentLen = localFileStream.Read(buff, 0, buffLength);
            while (contentLen != 0)
            {
                requestStream.Write(buff, 0, contentLen);
                contentLen = localFileStream.Read(buff, 0, buffLength);
            }
        }
        catch (Exception ex)
        {
            Debug.LogError(ex);
        }
        finally
        {
            if (requestStream != null)
            {
                requestStream.Close();
            }
            if (localFileStream != null)
            {
                localFileStream.Close();
            }
        }
    }
#endregion



#region 上传文件夹
    /// <summary>
    /// 获取目录下的详细信息
    /// </summary>
    /// <param name="localDir">本机目录</param>
    /// <returns></returns>
    private static List<List<string>> GetDirDetails(string localDir)
    {
        List<List<string>> infos = new List<List<string>>();
        try
        {
            infos.Add(Directory.GetFiles(localDir).ToList()); //获取当前目录的文件

            infos.Add(Directory.GetDirectories(localDir).ToList()); //获取当前目录的目录

            for (int i = 0; i < infos[0].Count; i++)
            {
                int index = infos[0][i].LastIndexOf(@"/");
                infos[0][i] = infos[0][i].Substring(index + 1);
            }
            for (int i = 0; i < infos[1].Count; i++)
            {
                int index = infos[1][i].LastIndexOf(@"/");
                infos[1][i] = infos[1][i].Substring(index + 1);
            }
        }
        catch (Exception ex)
        {
            ex.ToString();
        }
        return infos;
    }

    /// <summary>
    /// 上传整个目录
    /// </summary>
    /// <param name="localDir">要上传的目录的上一级目录</param>
    /// <param name="ftpPath">FTP路径</param>
    /// <param name="dirName">要上传的目录名</param>
    /// <param name="ftpUser">FTP用户名（匿名为空）</param>
    /// <param name="ftpPassword">FTP登录密码（匿名为空）</param>
    public static void UploadDirectory(string localDir, string ftpPath, string dirName, string ftpUser, string ftpPassword)
    {
        if (ftpUser == null)
        {
            ftpUser = "";
        }
        if (ftpPassword == null)
        {
            ftpPassword = "";
        }

        string dir = localDir + dirName + @"/"; //获取当前目录（父目录在目录名）

        if (!Directory.Exists(dir))
        {
            Debug.LogError("目录：“" + dir + "” 不存在！");
            return;
        }

        if (!CheckDirectoryExist(ftpPath, dirName))
        {
            MakeDir(ftpPath, dirName);
        }



        List<List<string>> infos = GetDirDetails(dir); //获取当前目录下的所有文件和文件夹

        //先上传文件
        //MyLog.ShowMessage(dir + "下的文件数：" + infos[0].Count.ToString());
        for (int i = 0; i < infos[0].Count; i++)
        {
            Debug.Log(infos[0][i]);
            EditorUtility.DisplayProgressBar("上传中", $"({i}/{infos[0].Count})正在上传：{infos[0][i]}", (i+ 0.0f) / infos[0].Count);
            UpLoadFile(dir + infos[0][i], ftpPath + dirName + @"/" + infos[0][i], ftpUser, ftpPassword);
        }

        EditorUtility.ClearProgressBar();
        //再处理文件夹
        //MyLog.ShowMessage(dir + "下的目录数：" + infos[1].Count.ToString());
        for (int i = 0; i < infos[1].Count; i++)
        {
            UploadDirectory(dir, ftpPath + dirName + @"/", infos[1][i], ftpUser, ftpPassword);
        }
    }



    /// <summary>
    /// 新建目录
    /// </summary>
    /// <param name="ftpPath"></param>
    /// <param name="dirName"></param>
    public static void MakeDir(string ftpPath, string dirName)
    {
        try
        {
            //实例化FTP连接
            FtpWebRequest request = (FtpWebRequest)FtpWebRequest.Create(new Uri(ftpPath + dirName));
            //指定FTP操作类型为创建目录
            request.Method = WebRequestMethods.Ftp.MakeDirectory;
            //获取FTP服务器的响应
            FtpWebResponse response = (FtpWebResponse)request.GetResponse();
            response.Close();
        }
        catch (Exception ex)
        {
            Debug.LogError(ex.Message);
        }
    }

    /// <summary>
    /// 检查目录是否存在
    /// </summary>
    /// <param name="ftpPath">要检查的目录的上一级目录</param>
    /// <param name="dirName">要检查的目录名</param>
    /// <returns>存在返回true，否则false</returns>
    public static bool CheckDirectoryExist(string ftpPath, string dirName)
    {
        bool result = false;
        try
        {
            //实例化FTP连接
            FtpWebRequest request = (FtpWebRequest)FtpWebRequest.Create(new Uri(ftpPath));
            //指定FTP操作类型为创建目录
            request.Method = WebRequestMethods.Ftp.ListDirectoryDetails;
            //获取FTP服务器的响应
            FtpWebResponse response = (FtpWebResponse)request.GetResponse();
            StreamReader sr = new StreamReader(response.GetResponseStream(), Encoding.Default);

            StringBuilder str = new StringBuilder();
            string line = sr.ReadLine();
            while (line != null)
            {
                str.Append(line);
                str.Append("|");
                line = sr.ReadLine();
            }
            Debug.Log(str.ToString());
            string[] datas = str.ToString().Split('|');

            for (int i = 0; i < datas.Length; i++)
            {
                if (datas[i].Contains("<DIR>"))
                {
                    int index = datas[i].IndexOf("<DIR>");
                    string name = datas[i].Substring(index + 5).Trim();
                    if (name == dirName)
                    {
                        result = true;
                        break;
                    }
                }
            }

            sr.Close();
            sr.Dispose();
            response.Close();
        }
        catch (Exception ex)
        {
            Debug.LogError(ex.Message);
        }
        return result;
    }
}
#endregion