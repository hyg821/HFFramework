using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using Manager;

public class AudioPlayer : MonoBehaviour {
    
    /// <summary>
    /// 标记 每一个 player 的名字
    /// </summary>
    public string audioPlayerName;

    public AudioSource source;

    private Coroutine coroutine;

    //private IEnumerator autoRecovery;

    private bool isAutoRecovery = true;
    public bool IsAutoRecovery
    {
        set
        {
            isAutoRecovery = value;
        }
        get
        {
            return isAutoRecovery;
        }
    }

    private SoundType type;
    public SoundType Type
    {
        set
        {
            if (value == SoundType.Effect)
            {
                Volume = AudioManager.self.EffectVolume;
                Loop = false;
                IsAutoRecovery = true;
            }
            else if (value ==SoundType.Music)
            {
                Volume = AudioManager.self.MusicVolume;
                Loop = true;
                IsAutoRecovery = false;
            }
            else if (value == SoundType.Free)
            {
                Volume = AudioManager.self.EffectVolume;
                Loop = false;
                IsAutoRecovery = true;
            }
            type = value;
        }
        get
        {
            return type;
        }
    }

    public bool Loop
    {
        set
        {
            source.loop = value;
        }
        get
        {
            return source.loop;
        }
    }


    public bool IsPlaying
    {
        get
        {
            return source.isPlaying;
        }
    }


    /// <summary>
    ///  播放声音列表
    /// </summary>
    public Dictionary<string,AudioClip> audioClipDic = new Dictionary<string, AudioClip>();

    public AudioClip CurrentAudioClip
    {
        set
        {
            if (source.isPlaying)
            {
                Stop();
            }
            source.clip = value;
        }
        get
        {
            return source.clip;
        }
    }


    public float Volume
    {
        set
        {
            source.volume = value;
        }
        get
        {
            return source.volume;
        }
    }



    public void Awake()
    {
        AudioSource a = GetComponent<AudioSource>();
        //autoRecovery = AutoRecovery();
        if (a != null)
        {
            source = a;
        }
        if (type == SoundType.Music)
        {
            Volume = AudioManager.self.MusicVolume;
        }
        else if (type == SoundType.Free)
        {
            Volume = AudioManager.self.MusicVolume;
        }
        else if (type == SoundType.Effect)
        {
            Volume = AudioManager.self.EffectVolume;
        }
    }


    void ResetAutoRecovery()
    {
        //coroutine = StartCoroutine(AutoRecovery());
    }

    IEnumerator AutoRecovery()
    {
        while (true)
        {
            yield return null;
            if (IsPlaying == false)
            {
                AudioManager.self.Recovery(this);
                break;
            }
        }
    }



    /// <summary>
    ///  给播放器设置一个 播放列表
    /// </summary>
    /// <param name="list"></param>
    public void SetAudioList(List<AudioClip> list)
    {
        audioClipDic.Clear();
        for (int i = 0; i < list.Count; i++)
        {
            AudioClip clip = list[i];
            if (!audioClipDic.ContainsKey(clip.name))
            {
                audioClipDic.Add(clip.name, clip);
            }
        }
    }


    /// <summary>
    ///  通过音频名字 获取一个音乐片段
    /// </summary>
    /// <param name="name"></param>
    /// <returns></returns>
    public AudioClip GetAudioClip(string name)
    {
        if (audioClipDic.ContainsKey(name))
        {
            return audioClipDic[name];
        }
        else
        {
            return null;
        }
    
    }


    /// <summary>
    ///  设置音频片段 并且播放
    /// </summary>
    /// <param name="clip"></param>
    public void SetAudioClipAndPlay(AudioClip clip)
    {
        CurrentAudioClip = clip;
        Play();
    }

    public void SetAudioClipAndPlay(string packageName ,string audioName)
    {
        SetAudioClipAndPlay(HAResourceManager.self.GetAudio(packageName, audioName));
    }

    IEnumerator dalyPlay()
    { 
        for (int i = 0; i < 1; i++)
        {
            yield return null;
        }
        Play();
    }

    public void Play()
    {
        if (source.isPlaying==false)
        {
            source.Play();
            if (IsAutoRecovery)
            {
                ResetAutoRecovery();
            }
        }
    }

    public void Pause()
    {
        source.Pause();
    }


    public void UnPause()
    {
        source.UnPause();
    }

    public void Stop()
    {
        source.Stop();
    }

    public void DestorySelf()
    {
        if (coroutine!=null)
        {
            StopCoroutine(coroutine);
            coroutine = null;
        }
        source.Stop();
        Destroy(source);
        Destroy(gameObject);
    }
}
