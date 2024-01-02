using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework.Functions
{
    /*
     *     1.(数据层)初始化树  和 静态 Node 
     *     2.视图层绑定 Node 然后接收node回调 设置Text 
     *     3.通过Tree 获取 特定Node 
     *     4.Node设置value 回调给视图层 
     *     5.并且可以动态设置树 和 绑定视图 形成动态红点
     *     tree = new RedPointTree();
            RedPointNode node =  new RedPointNode(RedPointType.Root);
            tree.SetRoot(node);
            RedPointNode node = new RedPointNode(RedPointType.Bag_List);
            tree.root.AddChild(node);
            {
                RedPointNode node1 = new RedPointNode(RedPointType.Bag_List_0);
                node.AddChild(node1);

                node1 = new RedPointNode(RedPointType.Bag_List_1);
                node.AddChild(node1);

                node1 = new RedPointNode(RedPointType.Bag_List_2);
                node.AddChild(node1);

                node1 = new RedPointNode(RedPointType.Bag_List_3);
                node.AddChild(node1);

                node1 = new RedPointNode(RedPointType.Bag_List_4);
                node.AddChild(node1);
            }
     */

    public class RedPointTree
    {
        public RedPointNode root;

        public void SetRoot(RedPointNode root)
        {
            this.root = root;
            this.root.isRoot = true;
            this.root.isLeaf = true;
        }

        public RedPointNode GetNode(RedPointType type)
        {
            RedPointNode node = null;
            if (root != null)
            {
                node = FindNode(root, type);
            }
            return node;
        }

        private RedPointNode FindNode(RedPointNode source, RedPointType type)
        {
            RedPointNode node = null;
            for (int i = 0; i < source.childs.Count; i++)
            {
                node = source.childs[i];
                if (node.type != type)
                {
                    node = FindNode(node, type);
                    if (node != null)
                    {
                        break;
                    }
                }
                else
                {
                    break;
                }
            }
            return node;
        }
    }
}

