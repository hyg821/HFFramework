using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    /// <summary>
    /// 封装一些实用功能
    /// </summary>
    public class ApiHelper
    {
        /// <summary>
        /// 清理 Entity 数组
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="list"></param>
        public static void Clear<T>(ref List<T> list) where T : Entity
        {
            if (list!=null)
            {
                foreach (var item in list)
                {
                    item.Destroy();
                }
                list.Clear();
                list = null;
            }
        }

        /// <summary>
        /// 清理 Entity 字典
        /// </summary>
        /// <typeparam name="K"></typeparam>
        /// <typeparam name="V"></typeparam>
        /// <param name="dictionary"></param>
        public static void Clear<K,V>(ref Dictionary<K,V> dictionary) where V : Entity
        {
            if (dictionary != null)
            {
                foreach (var item in dictionary)
                {
                    item.Value.Destroy();
                }
                dictionary.Clear();
                dictionary = null;
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
    }
}

