using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    public class LearnMatrix : MonoBehaviour
    {
        public Matrix4x4 localToWorldMatrix;
        public Matrix4x4 worldToLocalMatrix;

        public Vector4 worldV;
        public Vector4 localV;

        void Start()
        {

        }

        private void Update()
        {
            localToWorldMatrix = transform.localToWorldMatrix;
            worldToLocalMatrix = transform.worldToLocalMatrix;

            worldV = localToWorldMatrix * new Vector4(10, 5, 0, 1);
            localV = worldToLocalMatrix * worldV;
        }

    }
}

