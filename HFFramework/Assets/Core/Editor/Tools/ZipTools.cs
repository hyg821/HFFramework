using ICSharpCode.SharpZipLib.Zip;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

namespace HFFramework.Editor
{
    public class ZipTools
    {
        /// <summary>
        ///  压缩 资源
        /// </summary>
        //[MenuItem("Game Editor/Build zip")]
        private static void BuildZip()
        {
            GoCompress(Application.streamingAssetsPath + "/AssetBundles", Application.streamingAssetsPath + "/HotFixResources" + "/AssetBundles");
        }

        public static void GoCompress(string SourceFile, string TartgetFile)
        {
            string Source = SourceFile;
            string Tartget = TartgetFile + ".zip";
            Directory.CreateDirectory(Path.GetDirectoryName(Tartget));
            using (ZipOutputStream s = new ZipOutputStream(File.Create(Tartget)))
            {
                s.SetLevel(6);
                Compress(Source, s);
                s.Finish();
                s.Close();
            }
        }

        public static void Compress(string source, ZipOutputStream s)
        {
            string[] filenames = Directory.GetFileSystemEntries(source);
            foreach (string file in filenames)
            {
                if (Directory.Exists(file))
                {
                    // 递归压缩子文件夹
                    Compress(file, s);
                }
                else
                {
                    using (FileStream fs = File.OpenRead(file))
                    {
                        byte[] buffer = new byte[4 * 1024];
                        ZipEntry entry = new ZipEntry(Path.GetFileName(file));
                        entry.DateTime = DateTime.Now;
                        s.PutNextEntry(entry);
                        int sourceBytes;
                        do
                        {
                            sourceBytes = fs.Read(buffer, 0, buffer.Length);
                            s.Write(buffer, 0, sourceBytes);
                        } while (sourceBytes > 0);
                    }
                }
            }
        }

    }
}


