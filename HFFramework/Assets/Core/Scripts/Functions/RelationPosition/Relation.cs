using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    [ExecuteAlways]
    public class Relation : MonoBehaviour
    {
        private bool isUI;

        private Vector3 m_position;

        public Vector3 offset;
        public Vector3 uiOffset;

        private GameObject m_target;
        public GameObject target;
        private RelationTarget relationTarget;

        private Transform m_transform;

        private void Awake()
        {
            m_transform = gameObject.transform;
            m_position = transform.position;
            isUI = m_transform is RectTransform;
        }

        void Start()
        {
            m_position = transform.position;
        }

        public void SetTarget(GameObject go)
        {
            if (go==null&& target!=null)
            {
                relationTarget.Remove(this);
            }

            if (target != m_target&&go!=null)
            {
                m_target = go;

                if (relationTarget != null)
                {
                    relationTarget.Remove(this);
                }

                offset = m_transform.position - m_target.transform.position;
                uiOffset = offset;

                relationTarget = go.GetComponent<RelationTarget>();
                if (target != null)
                {
                    relationTarget = go.AddComponent<RelationTarget>();
                }
                relationTarget.Add(this);
            }
        }

        public void TargetPositionChanged(Transform targetTransform)
        {
            if (isUI)
            {
                m_transform.position = targetTransform.position + uiOffset;
            }
            else
            {
                m_transform.position = targetTransform.position + offset;
            }
        }

        private void LateUpdate()
        {
            if (target!=null)
            {
                TargetPositionChanged(target.transform);
            }
        }

#if UNITY_EDITOR
        void OnValidate()
        {
            SetTarget(target);
        }
#endif
    }
} 


