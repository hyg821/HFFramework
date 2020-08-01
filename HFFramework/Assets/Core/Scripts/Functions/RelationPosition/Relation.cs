using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    [ExecuteAlways]
    public class Relation : MonoBehaviour
    {
        /// <summary>
        /// 是否是ui
        /// </summary>
        private bool isUI;

        private Transform m_transform;
        private Vector3 m_position;

        /// <summary>
        /// 偏移量
        /// </summary>
        public Vector3 offset;

        /// <summary>
        /// ui偏移量
        /// </summary>
        public Vector3 uiOffset;

        private GameObject m_target;

        /// <summary>
        /// 目标
        /// </summary>
        public GameObject target;

        private RelationTarget relationTarget;

        private void Awake()
        {
            m_transform = gameObject.transform;
            m_position = transform.position;
            isUI = m_transform is RectTransform;
        }

        private void Start()
        {
            m_position = transform.position;
        }

        public void SetTarget(GameObject go)
        {
            if (go==gameObject)
            {
                target = null;
                return;
            }

            if (go==null)
            {
                if (relationTarget != null)
                {
                    relationTarget.Remove(this);
                    relationTarget = null;
                }
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
            //HFLog.C("target " + target);
            SetTarget(target);
        }
#endif
    }
} 


