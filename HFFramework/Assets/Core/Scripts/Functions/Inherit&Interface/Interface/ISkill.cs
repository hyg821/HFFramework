using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework.Functions
{
    /// <summary>
    /// 技能接口
    /// </summary>
    public interface ISkill : IDescribe
    {
        List<Skill> OwnSkills { set; get; }
        void UseSkill<S>(S skill) where S : Skill;
    }
}

