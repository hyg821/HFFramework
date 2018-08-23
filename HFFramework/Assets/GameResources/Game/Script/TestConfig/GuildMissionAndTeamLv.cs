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
    public class GuildMissionAndTeamLv
    { 
        /// <summary>
        /// 团队等级
        /// <summary>
        public int teamLv;
        /// <summary>
        /// 公会任务品质
        /// <summary>
        public string missionModule;
    }

    [System.Serializable]
    public class ConfigGuildMissionAndTeamLv
    { 
        public static string[] split = new string[] { "," };
        public static string[] splitArray = new string[] { ";", "[", "]" };

        private static ConfigGuildMissionAndTeamLv instance;
        public static ConfigGuildMissionAndTeamLv Instance
        { 
            get 
            { 
                if (instance==null) 
                { 
                     instance = new ConfigGuildMissionAndTeamLv ();
                } 
                return instance;
            } 
        } 

        public Dictionary<int , GuildMissionAndTeamLv> dic = new Dictionary<int , GuildMissionAndTeamLv>();

        public List<GuildMissionAndTeamLv> list = new List<GuildMissionAndTeamLv>();

        public GuildMissionAndTeamLv Get(int id)
        {
            GuildMissionAndTeamLv temp;
            dic.TryGetValue(id, out temp);
            return temp;
        }

        public void StartAnalysis()
        {
            AssetBundlePackage package = HAResourceManager.Instance.LoadAssetBundleFromFile("Config");
            TextAsset textAsset = package.LoadAssetWithCache<TextAsset>("GuildMissionAndTeamLv");
            StringReader reader = new StringReader(textAsset.text);
            string notes = reader.ReadLine();
            string names = reader.ReadLine();
            string types = reader.ReadLine();
            while (true)
            {
                string row = reader.ReadLine();
                if (string.IsNullOrEmpty(row))
                {
                    break;
                }
                string[] strs = row.Split(split, StringSplitOptions.None);
                if (strs.Length > 0)
                {
                    GuildMissionAndTeamLv config = new GuildMissionAndTeamLv();
                    int.TryParse(strs[0], out config.teamLv);
                    config.missionModule = strs[1];
                    dic.Add(config.teamLv, config );
                    list.Add(config);
               }
           }
           notes = null;
           names = null;
           types = null;
        }
    }
}
