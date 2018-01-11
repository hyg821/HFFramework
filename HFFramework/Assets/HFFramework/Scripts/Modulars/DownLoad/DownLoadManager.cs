using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using BestHTTP;
using System;

namespace HFFramework
{
    public class DownLoadManager : MonoBehaviour
    {
        public static DownLoadManager self;

        /// <summary>
        ///  图片缓存字典
        /// </summary>
        private Dictionary<int, Sprite> cacheDic = new Dictionary<int, Sprite>();

        public void Awake()
        {
            self = this;
        }

        /// <summary>
        ///  下载图片
        /// </summary>
        /// <param name="url">URL</param>
        /// <param name="c">Image组件</param>
        public static void DownLoadImage(string url, Image c)
        {
            DownLoadManager.self.m_LoadImage(url, c);
        }

        private void m_LoadImage(string url, Image c)
        {
            StartCoroutine(SetImage(url, c));
        }

        private IEnumerator SetImage(string url, Image c)
        {
            if (url.Length != 0 && c != null)
            {
                int hash = url.GetHashCode();
                if (cacheDic.ContainsKey(hash))
                {
                    c.sprite = cacheDic[hash];
                }
                else
                {
                    HTTPRequest http = new HTTPRequest(new Uri(url));
                    http.Send();
                    yield return StartCoroutine(http);
                    if (http.Response.IsSuccess)
                    {
                        Texture2D tex2d = http.Response.DataAsTexture2D;
                        if (tex2d != null)
                        {
                            Sprite m_sprite = Sprite.Create(tex2d, new Rect(0, 0, tex2d.width, tex2d.height), new Vector2(0, 0));
                            c.sprite = m_sprite;
                            if (cacheDic.ContainsKey(hash))
                            {
                                cacheDic[hash] = m_sprite;
                            }
                            else
                            {
                                cacheDic.Add(hash, m_sprite);
                            }
                        }
                        else
                        {
                            SetDefaultImage(url, c);
                        }
                    }
                    else
                    {
                        SetDefaultImage(url, c);
                    }
                }
            }
            else
            {
                SetDefaultImage(url, c);
            }
        }

        public static void SetDefaultImage(string url, Image c)
        {
            Sprite s = new Sprite();
            if (c != null)
            {
                c.sprite = s;
            }
        }

        public static void ClearCache()
        {
            foreach (var item in self.cacheDic.Values)
            {
                Resources.UnloadAsset(item);
            }
            self.cacheDic.Clear();
            self = null;
        }

        void OnDestroy()
        {
            ClearCache();
        }
    }
}
