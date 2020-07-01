using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework.Functions
{
#if UNITY_EDITOR
    [ExecuteInEditMode]
#endif
    public enum ColliderType
    {
        AABB,
        OBB
    }

    public class Box : MonoBehaviour
    {
        public ColliderType type;

        public Vector3 size;

        public Color color = Color.blue;

#if UNITY_EDITOR
        private void Awake()
        {
            if (transform.localRotation == Quaternion.identity)
            {
                type = ColliderType.AABB;
            }
            else
            {
                type = ColliderType.OBB;
                //InitOBB();
            }
        }
#endif

        public Vector3 Clamp(Vector3 position)
        {
            if (type == ColliderType.AABB)
            {
                return ClampAABB(position);
            }
            else
            {
                return ClampOBB(position);
            }
        }

        public Vector3 ClampAABB(Vector3 position)
        {
            float x = Mathf.Clamp(position.x, transform.position.x - size.x / 2, transform.position.x + size.x / 2);
            float z = Mathf.Clamp(position.z, transform.position.z - size.z / 2, transform.position.z + size.z / 2);
            return new Vector3(x, position.y, z);
        }

        public Vector3 ClampOBB(Vector3 position)
        {
            Vector4 w2l = transform.worldToLocalMatrix * new Vector4(position.x, position.y, position.z, 1);
            Vector3 limit = ClampLocalAABB(new Vector3(w2l.x / w2l.w, w2l.y / w2l.w, w2l.z / w2l.w));
            Vector4 l2w = transform.localToWorldMatrix * new Vector4(limit.x, limit.y, limit.z, 1);
            return new Vector3(l2w.x / l2w.w, l2w.y / l2w.w, l2w.z / l2w.w);
        }

        public Vector3 ClampLocalAABB(Vector3 position)
        {
            float x = Mathf.Clamp(position.x, -size.x / 2, size.x / 2);
            float z = Mathf.Clamp(position.z, -size.z / 2, size.z / 2);
            return new Vector3(x, position.y, z);
        }


        private void OnDrawGizmos()
        {
            Gizmos.matrix = transform.localToWorldMatrix;
            Gizmos.color = new Color(color.r, color.g, color.b, 0.5f);
            Gizmos.DrawCube(Vector3.zero, size);
        }


        /*
        private double m_Rotation;
        public Vector2 m_Extents;
        public Vector2[] m_Axiss;

        public void InitOBB()
        {
            m_Axiss = new Vector2[2];
            SetExtents();
        }

        private void SetExtents()
        {
            Quaternion rotation = transform.rotation;
            transform.rotation = new Quaternion(0, 0, 0, 1);
            Vector3 center = transform.position;
            Vector3 size = this.size / 2;
            Vector3 Point1 = new Vector3(center.x + size.x, center.y, center.z - size.z);
            Vector3 Point2 = new Vector3(center.x - size.x, center.y, center.z + size.z);
            Point1 = transform.localToWorldMatrix.MultiplyPoint3x4(Point1);
            Point2 = transform.localToWorldMatrix.MultiplyPoint3x4(Point2);
            m_Extents = new Vector2(Mathf.Abs(Point1.x - Point2.x) / 2, Mathf.Abs(Point2.z - Point1.z) / 2);
            transform.rotation = rotation;
        }
        public float dot(Vector2 a, Vector2 b)
        {
            return Mathf.Abs(a.x * b.x + a.y * b.y);
        }
        public float getProjectionRadius(Vector2 axis)
        {
            return (m_Extents.x * dot(m_Axiss[0], axis) + m_Extents.y * dot(m_Axiss[1], axis));
        }
        public void m_Update()
        {
            m_Rotation = transform.eulerAngles.y * Math.PI / 180;
            m_Axiss[0] = new Vector2((float)Math.Cos(m_Rotation), -(float)Math.Sin(m_Rotation));
            m_Axiss[1] = new Vector2(-m_Axiss[0].y, m_Axiss[0].x);
        }
        public bool intersects(Box other)
        {
            m_Update();
            other.m_Update();
            Vector2 distanceVector = new Vector2(transform.position.x - other.transform.position.x, transform.position.z - other.transform.position.z);

            Vector2[] checkObbVector2s =
            {
                m_Axiss[0],
                m_Axiss[1],
                other.m_Axiss[0],
                other.m_Axiss[1],
            };
            for (int index = 0; index < checkObbVector2s.Length; index++)
            {
                Vector2 curVector2 = checkObbVector2s[index];
                if ((getProjectionRadius(curVector2) + other.getProjectionRadius(curVector2)) <= dot(distanceVector, curVector2))
                {
                    return false;
                }
            }
            return true;
        }
        */

    }
}


