using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework.Functions
{
    public class ViewConfig : MonoBehaviour
    {
        public Transform startPosition;
        public float xRoation;
        public Box box;
        private void Awake()
        {
            box = GetComponent<Box>();
        }

        private void OnDrawGizmos()
        {
            if (startPosition != null)
            {
                Gizmos.color = Color.black;
                Gizmos.DrawCube(startPosition.transform.position + new Vector3(0, 10, 0), Vector3.one);
            }
        }
    }
}


