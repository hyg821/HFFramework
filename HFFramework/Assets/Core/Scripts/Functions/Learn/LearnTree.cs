using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework.Functions
{
    public class LearnTree : MonoBehaviour
    {
        void Start()
        {
            TreeNode<int> root = new TreeNode<int>(15);
            TreeNode<int> l1 = new TreeNode<int>(14);
            TreeNode<int> r1 = new TreeNode<int>(13);
            TreeNode<int> l2 = new TreeNode<int>(12);
            TreeNode<int> r2 = new TreeNode<int>(11);
            TreeNode<int> l3 = new TreeNode<int>(6);
            TreeNode<int> r3 = new TreeNode<int>(5);

            root.LeftChild = l1;
            root.RightNode = r1;

            l1.LeftChild = l2;
            l1.RightNode = r2;

            r2.LeftChild = l3;
            r2.RightNode = r3;

            Tree<int> tree = new Tree<int>(root);
            tree.DLR();

            tree.LDR();

            tree.LRD();

        }
    }

    public enum TreeNodeType
    {
        Root,
        Child
    }


    public class Tree<T>
    {
        public TreeNode<T> root;
        public Tree(TreeNode<T>  root)
        {
            this.root = root;
        }

        /// <summary>
        /// DLR 中左右
        /// </summary>
        public void DLR()
        {
            m_dlr(root);
            Debug.Log("-------------------------");
        }

        public void m_dlr(TreeNode<T> node)
        {
            if (node==null)
            {
                return;
            }
            Debug.Log(node.value);
            m_dlr(node.LeftChild);
            m_dlr(node.RightNode);
        }

        /// <summary>
        /// LDR 左中右
        /// </summary>
        public void LDR()
        {
            m_ldr(root);
            Debug.Log("-------------------------");
        }

        public void m_ldr(TreeNode<T> node)
        {
            if (node == null)
            {
                return;
            }
            m_ldr(node.LeftChild);
            Debug.Log(node.value);
            m_ldr(node.RightNode);
        }

        /// <summary>
        /// LRD 左右中
        /// </summary>
        public void LRD()
        {
            m_lrd(root);
            Debug.Log("-------------------------");
        }

        public void m_lrd(TreeNode<T> node)
        {
            if (node == null)
            {
                return;
            }
            m_lrd(node.LeftChild);
            m_lrd(node.RightNode);
            Debug.Log(node.value);
        }
    }

    public class TreeNode<T>
    {
        public T value;

        public TreeNodeType type;

        private TreeNode<T> leftChild;
        public TreeNode<T> LeftChild
        {
            set
            {
                leftChild = value;
                leftChild.ParentNode = this;
            }
            get
            {
                return leftChild;
            }
        }

        private TreeNode<T> rightNode;
        public TreeNode<T> RightNode
        {
            set
            {
                rightNode = value;
                rightNode.ParentNode = this;
            }
            get
            {
                return rightNode;
            }
        }

        private TreeNode<T> parentNode;
        public TreeNode<T> ParentNode
        {
            set
            {
                parentNode = value;
            }
            get
            {
                return parentNode;
            }
        }

        public TreeNode(T value)
        {
            this.value = value;
        }
    }
}
