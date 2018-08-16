using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    public enum SoundType
    {
        /// <summary>
        ///  普通音乐
        /// </summary>
        Music,
        /// <summary>
        /// 音效  （短音乐）
        /// </summary>
        Effect,
        /// <summary>
        ///  自由
        /// </summary>
        Free
    }

    public class AudioManager : MonoBehaviour, IManager
    {
        /// <summary>
        ///  标记背景音乐
        /// </summary>
        public const string MusicVolumeDefine = "MusicVolume";

        /// <summary>
        ///  标记效果音乐
        /// </summary>
        public const string EffectVolumeDefine = "EffectVolume";

        /// <summary>
        ///  标记自由音乐
        /// </summary>
        public const string FreeVolumeDefine = "FreeVolume";

        /// <summary>
        /// 自己
        /// </summary>
        public static AudioManager Instance;

        /// <summary>
        ///  生成标记
        /// </summary>
        public static int identifier = 0;

        /// <summary>
        ///  主音乐缓存字典
        /// </summary>
        public Dictionary<string, AudioPlayer> audioDic = new Dictionary<string, AudioPlayer>();

        /// <summary>
        ///  效果音乐缓存字典
        /// </summary>
        public Dictionary<string, AudioPlayer> audioEffectDic = new Dictionary<string, AudioPlayer>();

        /// <summary>
        ///  自由player 对象池
        /// </summary>
        public List<AudioPlayer> audioPlayerPool = new List<AudioPlayer>();

        private float musicVolume;
        /// <summary>
        ///  主音乐音量
        /// </summary>
        public float MusicVolume
        {
            set
            {
                foreach (AudioPlayer player in audioDic.Values)
                {
                    player.Volume = value;
                }
                musicVolume = value;
                PlayerPrefs.SetFloat(MusicVolumeDefine, musicVolume);
            }
            get
            {
                return musicVolume;
            }
        }

        private float effectVolume;
        /// <summary>
        /// 效果声音音量
        /// </summary>
        public float EffectVolume
        {
            set
            {
                foreach (var item in audioEffectDic)
                {
                    item.Value.Volume = value;
                }

                for (int i = 0; i < audioPlayerPool.Count; i++)
                {
                    audioPlayerPool[i].Volume = value;
                }

                effectVolume = value;
                PlayerPrefs.SetFloat(EffectVolumeDefine, effectVolume);
            }
            get
            {
                return effectVolume;
            }
        }

        private float freeVolume;
        /// <summary>
        ///  自有声音音量
        /// </summary>
        public float FreeVolume
        {
            set
            {
                for (int i = 0; i < audioPlayerPool.Count; i++)
                {
                    audioPlayerPool[i].Volume = value;
                }

                freeVolume = value;
                PlayerPrefs.SetFloat(FreeVolumeDefine, freeVolume);
            }
            get
            {
                return freeVolume;
            }
        }

        void Awake()
        {
            Instance = this;
            if (!PlayerPrefs.HasKey(EffectVolumeDefine))
            {
                EffectVolume = 1;
            }
            else
            {
                EffectVolume = PlayerPrefs.GetFloat(EffectVolumeDefine);
            }

            if (!PlayerPrefs.HasKey(MusicVolumeDefine))
            {
                MusicVolume = 1;
            }
            else
            {
                MusicVolume = PlayerPrefs.GetFloat(MusicVolumeDefine);
            }
        }


        public AudioPlayer CreateAudioSource(string name, GameObject parent, SoundType type)
        {
            identifier++;
            GameObject temp = new GameObject();
            AudioPlayer player = temp.AddComponent<AudioPlayer>();
            temp.name = name;
            player.audioPlayerName = name;
            player.SoundType = type;
            temp.transform.SetParent(parent.transform);

            if (type == SoundType.Music)
            {
                audioDic.Add(name, player);
            }
            else if (type == SoundType.Effect)
            {
                audioEffectDic.Add(name, player);
            }
            else if (type == SoundType.Free)
            {
                audioPlayerPool.Add(player);
            }
            return player;
        }

        public AudioPlayer GetAudioSource(string name, SoundType type)
        {
            AudioPlayer player = null;
            if (type == SoundType.Music)
            {
                audioDic.TryGetValue(name, out player);
            }
            else if (type == SoundType.Effect)
            {
                audioEffectDic.TryGetValue(name, out player);
            }
            else if (type == SoundType.Free)
            {
                for (int i = 0; i < audioPlayerPool.Count; i++)
                {
                    AudioPlayer temp = audioPlayerPool[i];
                    if (temp.audioPlayerName == name)
                    {
                        player = temp;
                    }
                }
            }
            return player;
        }

        public AudioPlayer GetFreeAudioPlayer()
        {
            AudioPlayer player = null;
            for (int i = 0; i < audioPlayerPool.Count; i++)
            {
                AudioPlayer temp = audioPlayerPool[i];
                if (temp.IsPlaying == false)
                {
                    player = temp;
                }
            }

            if (player==null)
            {
                player = CreateAudioSource("FreeAudio" + identifier, gameObject, SoundType.Free);
            }

            return player;
        }

        public void DestroyPlayer(AudioPlayer player)
        {
            SoundType type = player.SoundType;
            if (type == SoundType.Effect)
            {
                audioEffectDic.Remove(player.audioPlayerName);
            }
            else if (type == SoundType.Music)
            {
                audioDic.Remove(player.audioPlayerName);
            }
            else if (type == SoundType.Free)
            {
                audioPlayerPool.Remove(player);
            }
            player.Destroy();
        }

        public void DestoryPlayer(string name, SoundType type)
        {
            DestroyPlayer(GetAudioSource(name, type));
        }

        public void DestroyAllAudioPlayer()
        {
            foreach (var item in audioDic)
            {
                item.Value.Destroy();
            }

            foreach (var item in audioEffectDic)
            {
                item.Value.Destroy();
            }

            foreach (var item in audioPlayerPool)
            {
                item.Destroy();
            }

            audioDic.Clear();
            audioEffectDic.Clear();
            audioPlayerPool.Clear();
            identifier = 0;
        }

        public void DestroyManager()
        {
            DestroyAllAudioPlayer();
            Instance = null;
        }
    }
}
