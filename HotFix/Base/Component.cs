﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using HFFramework;

namespace HotFix
{
    /// <summary>
    /// Entity 上 挂载的组件
    /// </summary>
    public class Component
    {
        /// <summary>
        ///  标记每一个元素 的 id
        /// </summary>
        public long instanceID;

        /// <summary>
        /// 组件所属于的实体
        /// </summary>
        public Entity entity;

        public void SetEntity(Entity entity)
        {
            this.entity = entity;
        }

        /// <summary>
        ///  是否销毁
        /// </summary>
        public bool IsDisposed
        {
            get
            {
                return instanceID == 0;
            }
        }

        public virtual void Awake()
        {
            instanceID = IDGenerator.GetComponentID();
        }

        public virtual void Start()
        {
        }

        public virtual void OnEnable()
        {
        }

        public virtual void OnDisable()
        {
        }

        public virtual void OnUpdate(float deltaTime)
        {
        }

        public virtual void OnFixedUpdate(float deltaTime)
        {
        }

        public virtual void OnLateUpdate(float deltaTime)
        {
        }

        /// <summary>
        /// 通过Entity.RemoveComponent 调用
        /// </summary>
        public virtual void OnDestroy()
        {
            entity = null;
            instanceID = 0;
        }
    }
}


