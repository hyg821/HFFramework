﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    [ExecuteAlways]
    public class RelationTarget : MonoBehaviour
    {
        public List<Relation> relations = new List<Relation>();

        private Transform m_transform;

        private Vector3 m_position;

        private void Awake()
        {
            m_transform = gameObject.transform;
            m_position = transform.position;
        }

        private void Start()
        {
            m_position = transform.position;
        }

        // Update is called once per frame
        void Update()
        {
            if (m_position!= transform.position)
            {
                for (int i = 0; i < relations.Count; i++)
                {
                    relations[i].TargetPositionChanged(m_transform);
                }
            }
        }

        private void LateUpdate()
        {
            m_position = transform.position;
        }

        public void Add(Relation widget)
        {
            relations.Add(widget);
        }

        public void Remove(Relation widget)
        {
            relations.Remove(widget);
        }
    }
}

