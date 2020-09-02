using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
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

        public virtual void Awake()
        {
            instanceID = IDGenerator.GetEntityID();
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

        public void SetEntity(Entity entity)
        {
            this.entity = entity;
        }

        public virtual void Destroy()
        {

        }
    }
}


