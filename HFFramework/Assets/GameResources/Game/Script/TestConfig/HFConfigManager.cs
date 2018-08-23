using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Text;
using System.IO;
using System;
using HFFramework;
namespace Config
{ 
    [System.Serializable]
    public class HFConfigManager
    { 
        private static HFConfigManager instance;
        public static HFConfigManager Instance
        { 
            get 
            { 
                if (instance==null) 
                { 
                     instance = new HFConfigManager ();
                } 
                return instance;
            } 
        } 
        public void Init()
        { 
            ConfigBuffEffect.Instance.StartAnalysis();
            ConfigBuffShow.Instance.StartAnalysis();
            ConfigCardlvgrowcost.Instance.StartAnalysis();
            ConfigComposite.Instance.StartAnalysis();
            ConfigDamDef.Instance.StartAnalysis();
            ConfigDecomposition.Instance.StartAnalysis();
            ConfigEquipment.Instance.StartAnalysis();
            ConfigEquipmentStrengthen.Instance.StartAnalysis();
            ConfigGoods.Instance.StartAnalysis();
            ConfigGuildGoods.Instance.StartAnalysis();
            ConfigGuildLevelup.Instance.StartAnalysis();
            ConfigGuildMission.Instance.StartAnalysis();
            ConfigGuildMissionAndTeamLv.Instance.StartAnalysis();
            ConfigGuildShop.Instance.StartAnalysis();
            ConfigGuildWelfareTechnology.Instance.StartAnalysis();
            ConfigHangingCheckPoint.Instance.StartAnalysis();
            ConfigItem.Instance.StartAnalysis();
            ConfigLocalizationConfig_CN.Instance.StartAnalysis();
            ConfigMonster.Instance.StartAnalysis();
            ConfigRecruit.Instance.StartAnalysis();
            ConfigRefuge.Instance.StartAnalysis();
            ConfigRoleAwake.Instance.StartAnalysis();
            ConfigRoleBasics.Instance.StartAnalysis();
            ConfigRoleBreak.Instance.StartAnalysis();
            ConfigScore.Instance.StartAnalysis();
            ConfigShop.Instance.StartAnalysis();
            ConfigSkill.Instance.StartAnalysis();
            ConfigSkillShow.Instance.StartAnalysis();
            ConfigSpineEquipment.Instance.StartAnalysis();
            ConfigStoneCombination.Instance.StartAnalysis();
            ConfigStoneType.Instance.StartAnalysis();
            ConfigUI.Instance.StartAnalysis();
            HAResourceManager.Instance.UnloadAssetBundle("Config", false); 
        } 
    } 
} 
