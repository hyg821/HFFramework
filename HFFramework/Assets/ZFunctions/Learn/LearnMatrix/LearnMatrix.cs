using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework.Functions
{
    public class LearnMatrix : MonoBehaviour
    {
        public Transform point;

        [Space]

        public Vector4 l2w0;
        public Vector4 l2w1;
        public Vector4 l2w2;
        public Vector4 l2w3;

        [Space]

        public Vector4 w2l0;
        public Vector4 w2l1;
        public Vector4 w2l2;
        public Vector4 w2l3;

        [Space]

        public Vector3 pointLoacalPosition;
        public Vector3 pointPosition;

        [Space]
        public Vector3 New_pointLoacalPosition;
        public Vector3 New_pointPosition;

        // Use this for initialization
        void Start()
        {

        }

        // Update is called once per frame
        void Update()
        {
            l2w0 = transform.localToWorldMatrix.GetRow(0);
            l2w1 = transform.localToWorldMatrix.GetRow(1);
            l2w2 = transform.localToWorldMatrix.GetRow(2);
            l2w3 = transform.localToWorldMatrix.GetRow(3);

            w2l0 = transform.worldToLocalMatrix.GetRow(0);
            w2l1 = transform.worldToLocalMatrix.GetRow(1);
            w2l2 = transform.worldToLocalMatrix.GetRow(2);
            w2l3 = transform.worldToLocalMatrix.GetRow(3);

            pointLoacalPosition = point.localPosition;
            pointPosition = point.position;

            New_pointLoacalPosition = transform.worldToLocalMatrix * ToVector4(point.position);
            New_pointPosition = transform.localToWorldMatrix * ToVector4(point.localPosition);
        }

        public Vector4 ToVector4(Vector3 vv)
        {
            return new Vector4(vv.x, vv.y, vv.z, 1);
        }

    }

}


