using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    public class FindHierarchyPath : MonoBehaviour
    {
        public List<string> pathList = new List<string>();
        public string path = "";

        void Start()
        {
            FindParent(gameObject);
            foreach (var item in pathList)
            {
                path = @"/" + item + path;
            }

            if (Application.platform == RuntimePlatform.Android || Application.platform == RuntimePlatform.IPhonePlayer)
            {
                GameObject.Destroy(this);
            }
        }

        public void FindParent(GameObject t)
        {
            pathList.Add(t.name);
            Transform g = t.transform.parent;
            if (g != null)
            {
                FindParent(g.gameObject);
            }
        }
    }
}
