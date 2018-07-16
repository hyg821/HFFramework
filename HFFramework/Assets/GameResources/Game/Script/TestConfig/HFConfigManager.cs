using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Text;
using System.IO;
using System;
using HFFramework;
namespace HFConfig
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
            HFConfigBuffEffect.Instance.StartAnalysis();
            HFConfigBuffShow.Instance.StartAnalysis();
            HFConfigCardlvgrowcost.Instance.StartAnalysis();
            HFConfigComposite.Instance.StartAnalysis();
            HFConfigDamDef.Instance.StartAnalysis();
            HFConfigDecomposition.Instance.StartAnalysis();
            HFConfigEquipment.Instance.StartAnalysis();
            HFConfigEquipmentStrengthen.Instance.StartAnalysis();
            HFConfigGoods.Instance.StartAnalysis();
            HFConfigGuildGoods.Instance.StartAnalysis();
            HFConfigGuildLevelup.Instance.StartAnalysis();
            HFConfigGuildMission.Instance.StartAnalysis();
            HFConfigGuildMissionAndTeamLv.Instance.StartAnalysis();
            HFConfigGuildShop.Instance.StartAnalysis();
            HFConfigGuildWelfareTechnology.Instance.StartAnalysis();
            HFConfigHangingCheckPoint.Instance.StartAnalysis();
            HFConfigItem.Instance.StartAnalysis();
            HFConfigLocalizationConfig_CN.Instance.StartAnalysis();
            HFConfigMonster.Instance.StartAnalysis();
            HFConfigRecruit.Instance.StartAnalysis();
            HFConfigRefuge.Instance.StartAnalysis();
            HFConfigRoleAwake.Instance.StartAnalysis();
            HFConfigRoleBasics.Instance.StartAnalysis();
            HFConfigRoleBreak.Instance.StartAnalysis();
            HFConfigScore.Instance.StartAnalysis();
            HFConfigShop.Instance.StartAnalysis();
            HFConfigSkill.Instance.StartAnalysis();
            HFConfigSkillShow.Instance.StartAnalysis();
            HFConfigSpineEquipment.Instance.StartAnalysis();
            HFConfigStoneCombination.Instance.StartAnalysis();
            HFConfigStoneType.Instance.StartAnalysis();
            HFConfigUI.Instance.StartAnalysis();
            HAResourceManager.Instance.UnloadAssetBundle("Config", false); 
        } 
    } 
} 
