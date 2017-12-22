using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;


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

public class AudioManager : MonoBehaviour {

    public const string MusicVolumeDefine = "MusicVolume";
    public const string EffectVolumeDefine = "EffectVolume";
    public const string FreeVolumeDefine = "FreeVolume";

    public static AudioManager self;

    public static int Identifi =0;

    public Dictionary<string, AudioPlayer> audioDic = new Dictionary<string, AudioPlayer>();
    public Dictionary<string, AudioPlayer> audioEffectDic = new Dictionary<string, AudioPlayer>();

    public List<AudioPlayer> audioPlayerPool = new List<AudioPlayer>();


    private float musicVolume;
    private float effectVolume;
    private float freeVolume;

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

    public float EffectVolume
    {
        set
        {
            foreach (AudioPlayer player in audioEffectDic.Values)
            {
                player.Volume = value;
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
        self = this;
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


    public AudioPlayer  CreateAudioSource(string name, GameObject parent, SoundType type)
    {
        Identifi++;
        GameObject g = new GameObject();
        g.name = name;
        AudioSource a = g.AddComponent<AudioSource>();
        AudioPlayer player = g.AddComponent<AudioPlayer>();
        player.audioPlayerName = name;
        player.Type = type;
        g.transform.SetParent(parent.transform, false);

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
        if (type == SoundType.Music)
        {
            if (audioDic.ContainsKey(name))
            {
                return audioDic[name];
            }
            else
            {
                return null;
            }
        }
        else if (type == SoundType.Effect)
        {
            if (audioEffectDic.ContainsKey(name))
            {
                return audioDic[name];
            }
            else
            {
                return null;
            }
        }
        else
        {
            return null;
        }
    }


    public AudioPlayer GetFreeAudioPlayer()
    {
        int i = 0;
        while (i<audioPlayerPool.Count)
        {
            AudioPlayer p =  audioPlayerPool[i];
            if (p.source==null)
            {
                p.DestorySelf();
                audioPlayerPool.Remove(p);
            }
            else
            {
                if (p.IsPlaying==false)
                {
                    return p;
                }
            }
            i++;
        }

        AudioPlayer player = CreateAudioSource("FreeAudio" + Identifi, gameObject, SoundType.Free);
        return player;
    }


    public void Recovery(AudioPlayer player)
    {
        player.Stop();
        player.CurrentAudioClip = null;
    }


    public void DestoryPlayer(AudioPlayer player)
    {
        SoundType type = player.Type;
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
        player.DestorySelf();
    }

    public void DestoryPlayer(string name, SoundType type)
    {
        DestoryPlayer(GetAudioSource(name, type));
    }

    /// <summary>
    ///  FXK 专用方法
    /// </summary>
    /// <param name="str"></param>
    public static void Play(string assetPackage, string audioName)
    {
        AudioManager.self.GetFreeAudioPlayer().SetAudioClipAndPlay(assetPackage,audioName);
    }

    public void DestoryAllAudioPlayer()
    {
        foreach (AudioPlayer player in audioDic.Values)
        {
            player.DestorySelf();
        }

        foreach (AudioPlayer player in audioEffectDic.Values)
        {
            player.DestorySelf();
        }

        foreach (AudioPlayer player in audioPlayerPool)
        {
            player.DestorySelf();
        }

        audioDic.Clear();
        audioEffectDic.Clear();
        audioPlayerPool.Clear();
        Identifi=0;
    }
}
