using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using BestHTTP;
using System;

namespace HFFramework
{
    public class WebImageManager : MonoBehaviour, IManager
    {
        public static WebImageManager Instance;

        /// <summary>
        ///  图片缓存字典
        /// </summary>
        private Dictionary<string, Sprite> cacheDic = new Dictionary<string, Sprite>();

        public void Awake()
        {
            Instance = this;
        }

        /// <summary>
        ///  下载图片
        /// </summary>
        /// <param name="url">URL</param>
        /// <param name="c">Image组件</param>
        public static void DownLoadImage(Image image,string url)
        {
            WebImageManager.Instance.m_LoadImage(url, image);
        }

        private void m_LoadImage(string url, Image c)
        {
            if (url.Length != 0 && c != null)
            {
                Sprite m_sprite;
                if (cacheDic.TryGetValue(url, out m_sprite))
                {
                    c.sprite = m_sprite;
                }
                else
                {
                    HTTPRequest request = new HTTPRequest(new Uri(url), delegate (HTTPRequest originalRequest, HTTPResponse response)
                    {
                        TextureFormat format;
                        if (GameEnvironment.Instance.Platform == GamePlatform.iOS)
                        {
                            format = TextureFormat.PVRTC_RGBA4;
                        }
                        else if (GameEnvironment.Instance.Platform == GamePlatform.Android)
                        {
                            format = TextureFormat.ETC2_RGBA8;
                        }
                        else
                        {
                            format = TextureFormat.DXT5;
                        }
                        Texture2D m_texture = new Texture2D(0, 0, format, false);
                        m_texture.LoadImage(response.Data);
                        m_texture.name = url.GetHashCode().ToString();
                        if (m_texture != null)
                        {
                            m_sprite = Sprite.Create(m_texture, new Rect(0, 0, m_texture.width, m_texture.height), new Vector2(0, 0));
                            c.sprite = m_sprite;
                            if (!cacheDic.ContainsKey(url))
                            {
                                cacheDic.Add(url, m_sprite);
                            }
                        }
                        else
                        {
                            SetDefaultImage(url, c);
                        }
                    }).Send();
                }
            }
            else
            {
                SetDefaultImage(url, c);
            }
        }

        public static void SetDefaultImage(string url, Image c)
        {
            Sprite s = Sprite.Create(null,Rect.zero,Vector2.zero);
            if (c != null)
            {
                c.sprite = s;
            }
        }

        public static void ClearCache()
        {
            foreach (var item in Instance.cacheDic)
            {
                GameFactory.DestroyAsset(item.Value.texture);
                GameFactory.DestroyAsset(item.Value);
            }
            Instance.cacheDic.Clear();
            Resources.UnloadUnusedAssets();
        }

        public void DestroyManager()
        {
            ClearCache();
            Instance = null;
        }
    }
}
