using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework.Functions
{
    /// <summary>
    /// 玩家英雄 敌人
    /// </summary>
    public class LiveEntity : ISkill,IMove
    {
        public int hp;
        public int mp;

        public List<Skill> OwnSkills { get => throw new System.NotImplementedException(); set => throw new System.NotImplementedException(); }
        public Vector3 Position { get => throw new System.NotImplementedException(); set => throw new System.NotImplementedException(); }

        public void PrintDesc()
        {
            throw new System.NotImplementedException();
        }

        public void Run()
        {
            throw new System.NotImplementedException();
        }

        public void UseSkill<S>(S skill) where S : Skill
        {
            throw new System.NotImplementedException();
        }

        public void Walk()
        {
            throw new System.NotImplementedException();
        }
    }
}

