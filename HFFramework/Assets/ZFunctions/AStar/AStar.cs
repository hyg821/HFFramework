using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using UnityEngine;

namespace HFFramework.Functions
{
    public class AStar : MonoBehaviour
    {
        public static AStar Instance;

        //最大只能是100 100
        int MaxX = 10;
        int MaxY = 10;

        public GameObject prefab;

        public Dictionary<Index, Node> allNode = new Dictionary<Index, Node>();

        public Dictionary<Index, Node> open = new Dictionary<Index, Node>();
        public Dictionary<Index, Node> close = new Dictionary<Index, Node>();

        public Node startNode;
        public Node endNode;

        void Start()
        {
            Instance = this;

            for (short i = 0; i < MaxX; i++)
            {
                for (short j = 0; j < MaxY; j++)
                {
                    GameObject gb = GameObject.Instantiate(prefab);
                    Node node = gb.AddComponent<Node>();
                    node.Init(i, j);
                    node.SetIsCanRun(true);
                    allNode.Add(node.index, node);
                }
            }

            Test();

            startNode = GetNode(0, 0);
            startNode.BecomeStart();
            endNode = GetNode(9, 0);
            endNode.BecomeEnd();

            Stopwatch watch = new Stopwatch();
            watch.Start();  //开始监视代码运行时间

            Search(startNode);

            watch.Stop();  //停止监视
            TimeSpan timespan = watch.Elapsed;  //获取当前实例测量得出的总时间
            print("输出时间" + timespan.TotalMilliseconds);

            StartCoroutine(Animation());
        }

        public void Test()
        {
            /*
            {
                Node node = GetNode(5, 5);
                node.SetIsCanRun(false);
            }
            */

            
            {
                for (short i = 0; i < 9; i++)
                {
                    Node node = GetNode(5, i);
                    node.SetIsCanRun(false);
                }
            }
            
            {
                Node node = GetNode(0, 6);
                node.SetIsCanRun(false);
                node = GetNode(1, 6);
                node.SetIsCanRun(false);
                node = GetNode(2, 6);
                node.SetIsCanRun(false);
                node = GetNode(2, 5);
                node.SetIsCanRun(false);
                node = GetNode(3, 4);
                node.SetIsCanRun(false);
                node = GetNode(1, 4);
                node.SetIsCanRun(false);
                node = GetNode(2, 4);
                node.SetIsCanRun(false);
                node = GetNode(1, 3);
                node.SetIsCanRun(false);
            }
        }

        public IEnumerator Animation()
        {
            Node temp = endNode;
            while (temp != null)
            {
                temp.BecomeSearch();
                temp = temp.parent;
                yield return new WaitForSeconds(0.2f);
            }
        }

        public Node GetNode(short x, short y)
        {
            Index idx = new Index
            {
                x = x,
                y = y
            };
            Node temp = null;
            allNode.TryGetValue(idx, out temp);
            return temp;
        }

        public void Search(Node node)
        {
            //print("检查" + node.index);

            //如果是自己直接退出
            if (node == endNode)
            {
                return;
            }

            //移除自己从openList 里
            RemoveNodeFromOpen(node);

            //算这个当前 node 周围的 F=G+H
            Node minNode = null;

            //查找当前node 周围的点加入 openList
            FindAroundNodesToOpenList(node);

            //遍历 openList
            foreach (var kv in open)
            {
                Node item = kv.Value;
                //检查是否是当前node周围的点
                if (IsAround(node, item))
                {
                    //如果没有设置过父物体
                    if (item.parent == null)
                    {
                        item.parent = node;
                    }
                    else
                    {
                        //先算一下 现在的 allG
                        Node oldParent = item.parent;
                        float oldG = item.GetAllG();

                        //再算一下基于node 的allG
                        item.parent = node;
                        float newG = item.GetAllG();

                        //目的是item追求最小allG 父物体 
                        if (oldG <= newG)
                        {
                            item.parent = oldParent;
                        }
                        else
                        {
                            item.parent = node;
                        }
                    }
                }

                if (minNode != null)
                {
                    if (minNode.F > item.F)
                    {
                        minNode = item;
                    }
                }
                else
                {
                    minNode = item;
                }
            }

            if (minNode == null || open.Count == 0)
            {
                return;
            }

            Search(minNode);
        }

        public void FindAroundNodesToOpenList(Node node)
        {
            short x = node.index.x;
            short y = node.index.y;

            for (short i = (short)(x - 1); i <= x + 1; i++)
            {
                for (short j = (short)(y - 1); j <= y + 1; j++)
                {
                    if (i != x || y != j)
                    {
                        Node tempNode = GetNode(i, j);
                        if (tempNode != null && tempNode.isCanRun == true)
                        {
                            AddNodeToOpen(tempNode);
                        }
                    }
                }
            }
        }

        public void AddNodeToOpen(Node tempNode)
        {
            if (!open.ContainsKey(tempNode.index) && !close.ContainsKey(tempNode.index))
            {
                open.Add(tempNode.index, tempNode);
            }
        }

        public void RemoveNodeFromOpen(Node tempNode)
        {
            if (open.ContainsKey(tempNode.index))
            {
                open.Remove(tempNode.index);
            }
            if (!close.ContainsKey(tempNode.index))
            {
                close.Add(tempNode.index, tempNode);
            }
        }

        public bool IsAround(Node currentNode, Node testNode)
        {
            int x = currentNode.index.x - testNode.index.x;
            int y = currentNode.index.y - testNode.index.y;
            if ((x == 0 || x == 1 || x == -1) && (y == 0 || y == -1 || y == 1))
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }

    public struct Index:IEquatable<Index>
    {
        public short x;
        public short y;

        public override int GetHashCode()
        {
            return x * 1000 + y;
        }

        public bool Equals(Index other)
        {
            if (this.x==other.x&&this.y==other.y)
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        public override string ToString()
        {
            return "index = { x = " + x + "  y = " + y + " }";
        }
    }

    public class Node : MonoBehaviour
    {
        public bool isCanRun = true;

        public Index index;

        public Node parent = null;

        public SpriteRenderer render;

        public void Init(short x, short y)
        {
            index = new Index
            {
                x = x,
                y = y
            };
            transform.position = new Vector3(x, y, 0);
            render = gameObject.GetComponent<SpriteRenderer>();
            gameObject.GetComponentInChildren<TextMesh>().text = "   ( " + x + " , " + y + " ) ";
        }

        public float F
        {
            get
            {
                if (isCanRun)
                {
                    return GetAllG() + H;
                }
                else
                {
                    return float.MaxValue;
                }
            }
        }

        public float G
        {
            get
            {
                if (parent != null)
                {
                    /*
                    Vector2 v1 = new Vector2(index.x, index.y);
                    Vector2 v2 = new Vector2(parent.index.x, parent.index.y);
                    return Vector2.Distance(v1, v2);
                    */
                    
                    int z = Mathf.Abs(index.x - parent.index.x) + Mathf.Abs(index.y - parent.index.y);
                    if (z == 1)
                    {
                        return 10;
                    }
                    else if (z == 2)
                    {
                        return 14f;
                    }
                    else
                    {
                        return 0;
                    }          
                }
                else
                {
                    return 0;
                }
            }
        }

        public float GetAllG()
        {
            Node temp;
            temp = this;
            float allG = 0;
            while (temp != null)
            {
                allG += temp.G;
                temp = temp.parent;
            }
            return allG;
        }

        public float H
        {
            get
            {
                /*
                Vector2 v1 = new Vector2(index.x, index.y);
                Node endNode = AStar.Instance.endNode;
                Vector2 v2 = new Vector2(endNode.index.x, endNode.index.y);
                return Vector2.Distance(v1, v2);
                */

                
                Node endNode = AStar.Instance.endNode;
                int z = Mathf.Abs(index.x - endNode.index.x) + Mathf.Abs(index.y - endNode.index.y);
                return z * 10;
            }
        }

        public void SetIsCanRun(bool ic)
        {
            isCanRun = ic;
            if (ic == true)
            {
                render.color = Color.white;
            }
            else
            {
                render.color = Color.black;
            }
        }

        public void BecomeStart()
        {
            render.color = Color.green;
        }

        public void BecomeEnd()
        {
            render.color = Color.blue;
        }

        public void BecomeSearch()
        {
            render.color = Color.green;
        }

        private void OnDrawGizmos()
        {
            if (parent != null)
            {
                Gizmos.DrawLine(transform.position, parent.transform.position);
            }
        }
    }
}


