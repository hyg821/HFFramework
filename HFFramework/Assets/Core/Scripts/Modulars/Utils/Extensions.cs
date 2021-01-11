using System;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    public static class Extensions
    {
        public static void SetWebImage(this Image image, string url)
        {
            WebImageManager.DownLoadImage(image, url);
        }

        /// <summary>
        ///  自动区分大小端
        /// </summary>
        /// <param name="value"></param>
        /// <returns></returns>
        public static byte[] BitConverterGetBytes(int value)
        {
            byte[] temp = BitConverter.GetBytes(value);
            if (BitConverter.IsLittleEndian)
            {
                Array.Reverse(temp);
            }
            return temp;
        }

        /// <summary>
        ///  BitConverter 判断大小端 自动转换
        /// </summary>
        /// <param name="value"></param>
        /// <param name="startIndex"></param>
        /// <returns></returns>
        public static int BitConverterToInt32(byte[] value, int startIndex)
        {
            if (BitConverter.IsLittleEndian)
            {
                Array.Reverse(value);
            }
            return BitConverter.ToInt32(value, startIndex);
        }

        /// <summary>
        /// 清理 Entity 数组
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="list"></param>
        public static void Clear<T>(List<T> list) where T : Entity
        {
            if (list != null)
            {
                for (int i = 0; i < list.Count; i++)
                {
                    list[i].Destroy();
                }
                list.Clear();
            }
        }

        /// <summary>
        /// 清理 Entity 字典
        /// </summary>
        /// <typeparam name="K"></typeparam>
        /// <typeparam name="V"></typeparam>
        /// <param name="dictionary"></param>
        public static void Clear<K, V>(Dictionary<K, V> dictionary) where V : Entity
        {
            if (dictionary != null)
            {
                foreach (var item in dictionary)
                {
                    item.Value.Destroy();
                }
                dictionary.Clear();
            }
        }

        /// <summary>
        ///  世界坐标 转UI 坐标
        /// </summary>
        public static Vector2 WorldPosition2UIPosition(Vector3 world, Vector2 offset, Transform target)
        {
            Camera camera = UIManager.Instance.UICamera.camera;
            Vector3 scenePoint = camera.WorldToScreenPoint(world);
            UICanvas canvas = UIManager.Instance.GetCanvas(0);
            Vector2 pos = Vector2.zero;
            RectTransformUtility.ScreenPointToLocalPointInRectangle(canvas.rectTransform, scenePoint, camera, out pos);
            pos += offset;
            if (target != null)
            {
                RectTransform rect = target as RectTransform;
                rect.anchoredPosition = pos;
            }
            return pos;
        }

        public static void SetParent(this GameObject self,GameObject parent, bool worldPositionStays = false)
        {
            self.transform.SetParent(parent.transform, worldPositionStays);
        }

        public static void SetParent(this MonoBehaviour self, GameObject parent, bool worldPositionStays = false)
        {
            self.transform.SetParent(parent.transform, worldPositionStays);
        }

        public static  float TextWidth(Font font, string text, int fontSize, FontStyle sytle)
        {
            float width = 0f;
            TextGenerator textGenerator = new TextGenerator();
            TextGenerationSettings setting = new TextGenerationSettings();
            setting.font = font;
            setting.fontSize = fontSize;
            setting.lineSpacing = 1;
            setting.scaleFactor = 1;
            setting.horizontalOverflow = HorizontalWrapMode.Overflow;
            width = textGenerator.GetPreferredWidth(text, setting);
            return width;
        }
    }
}