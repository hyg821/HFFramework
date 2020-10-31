using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

namespace HFFramework.Functions
{
    public enum RedPointType
    {
        Root = -1,

        Bag,

        Hero,

        Task,
    }

    public class RedPointNode
    {
        public RedPointType type;

        public bool isRoot = false;

        public bool isLeaf = true;

        public RedPointNode parent;

        public List<RedPointNode> childs = new List<RedPointNode>();

        public int value;

        public Action<int> callback;

        public RedPointNode(RedPointType type)
        {
            this.type = type;
        }

        public void AddChild(RedPointNode node)
        {
            this.isLeaf = false;
            node.parent = this;
            childs.Add(node);
        }

        public void SetValue(int value)
        {
            this.value = value;
            if (callback != null)
            {
                callback(value);
            }
            if (isRoot == false && parent != null)
            {
                parent.Census();
            }
        }

        public void Census()
        {
            if (isRoot == false)
            {
                int all = 0;
                for (int i = 0; i < childs.Count; i++)
                {
                    all += childs[i].value;
                }
                value = all;
                if (callback != null)
                {
                    callback(value);
                }
                if (parent != null)
                {
                    parent.Census();
                }
            }
        }
    }
}


