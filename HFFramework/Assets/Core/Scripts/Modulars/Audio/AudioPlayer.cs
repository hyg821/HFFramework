using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

namespace HFFramework
{

    /// <summary>
    ///  缓存策略
    /// </summary>
    public enum AudioCacheType
    {
        Cache,
        Destroy
    }

    /// <summary>
    ///  播放器状态
    /// </summary>
    public enum AudioPlayerState
    {
        UnKonw,
        Play,
        Pause,
        Stop
    }

    /// <summary>
    ///  播放器播放模式
    /// </summary>
    public enum AudioPlayerMode
    {
        /// <summary>
        ///  只播放一首
        /// </summary>
        Single,
        /// <summary>
        ///  单曲循环
        /// </summary>
        SingleLoop,
        /// <summary>
        ///  顺序播放
        /// </summary>
        Order,
        /// <summary>
        ///  随机播放
        /// </summary>
        Random,
    }

    public class AudioPlayer : MonoBehaviour
    {
        /// <summary>
        /// 标记 每一个 player 的名字
        /// </summary>
        public string audioPlayerName;

        /// <summary>
        ///  声音源
        /// </summary>
        public AudioSource audioSource;

        /// <summary>
        ///  缓存类型
        /// </summary>
        public AudioCacheType cacheType;

        private SoundType soundType;
        /// <summary>
        ///  声音类型
        /// </summary>
        public SoundType SoundType
        {
            set
            {
                soundType = value;
                if (value == SoundType.Effect)
                {
                    Volume = AudioManager.Instance.EffectVolume;
                    IsLoop = false;
                    cacheType = AudioCacheType.Cache;
                }
                else if (value == SoundType.Music)
                {
                    Volume = AudioManager.Instance.MusicVolume;
                    IsLoop = true;
                    cacheType = AudioCacheType.Destroy;
                }
                else if (value == SoundType.Free)
                {
                    Volume = AudioManager.Instance.EffectVolume;
                    IsLoop = false;
                    cacheType = AudioCacheType.Cache;
                }
            }
            get
            {
                return soundType;
            }
        }

        private AudioPlayerState state;
        public AudioPlayerState State
        {
            set
            {
                state = value;
                switch (state)
                {
                    case AudioPlayerState.UnKonw:
                        break;
                    case AudioPlayerState.Play:
                        if (!IsLoop)
                        {
                            playTime = 0;
                            enabled = true;
                        }
                        break;
                    case AudioPlayerState.Pause:
                        if (!IsLoop)
                        {
                            enabled = false;
                        }
                        break;
                    case AudioPlayerState.Stop:
                        if (!IsLoop)
                        {
                            playTime = 0;
                            enabled = false;
                        }
                        break;
                    default:
                        break;
                }
            }
            get
            {
                return state;
            }
        }

        private AudioPlayerMode playMode = AudioPlayerMode.Single;
        /// <summary>
        /// 循环模式
        /// </summary>
        public AudioPlayerMode PlayMode
        {
            set
            {
                playMode = value;
                switch (playMode)
                {
                    case AudioPlayerMode.Single:
                        break;
                    case AudioPlayerMode.SingleLoop:
                        IsLoop = true;
                        break;
                    case AudioPlayerMode.Order:
                        break;
                    case AudioPlayerMode.Random:
                        break;
                    default:
                        break;
                }
            }
            get
            {
                return playMode;
            }
        }

        /// <summary>
        ///  是否播放
        /// </summary>
        public bool IsPlaying
        {
            get
            {
                return audioSource.isPlaying;
            }
        }

        /// <summary>
        ///  是否循环
        /// </summary>
        public bool IsLoop
        {
            set
            {
                audioSource.loop = value;
            }
            get
            {
                return audioSource.loop;
            }
        }

        /// <summary>
        ///  播放声音列表
        /// </summary>
        public List<AudioClip> audioList = new List<AudioClip>();

        /// <summary>
        ///  当前的AudioClip;
        /// </summary>
        public AudioClip CurrentAudioClip
        {
            set
            {
                if (audioSource.isPlaying)
                {
                    Stop();
                }
                audioSource.clip = value;
            }
            get
            {
                return audioSource.clip;
            }
        }

        /// <summary>
        ///  音量
        /// </summary>
        public float Volume
        {
            set
            {
                audioSource.volume = value;
            }
            get
            {
                return audioSource.volume;
            }
        }

        /// <summary>
        ///  完成回调
        /// </summary>
        public Action<string> OnComplete;

        /// <summary>
        ///  播放时间
        /// </summary>
        public float playTime = 0;

        public int audioIndex = 0;

        public void Awake()
        {
            audioSource = gameObject.GetComponent<AudioSource>();
            if (audioSource == null)
            {
                audioSource = gameObject.AddComponent<AudioSource>();
            }
        }

        /// <summary>
        ///  通过音频名字 获取一个音乐片段
        /// </summary>
        /// <param name="name"></param>
        /// <returns></returns>
        public AudioClip GetAudioClip(string name)
        {
            AudioClip audio = null;
            for (int i = 0; i < audioList.Count; i++)
            {
                audio =audioList[i];
                if (audio.name==name)
                {
                    return audio;
                }
            }
            return null;
        }

        /// <summary>
        ///  给播放器设置一个 播放列表
        /// </summary>
        /// <param name="list"></param>
        public void SetAudioList(List<AudioClip> list)
        {
            audioList = list;
        }

        /// <summary>
        ///  给播放器设置一个 播放列表
        /// </summary>
        /// <param name="list"></param>
        public void SetAudioListAndPlay (List<AudioClip> list, AudioPlayerMode playMode)
        {
            PlayMode = playMode;
            audioList = list;
            Play(0);
        }

        public void SetAudioClipAndPlay(string packageName, string audioName)
        {
            SetAudioClipAndPlay(ResourceManager.Instance.GetAsset<AudioClip>(packageName, audioName));
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

        public void Play(int audioIndex)
        {
            if (audioIndex< audioList.Count-1)
            {
                this.audioIndex = audioIndex;
            }
            else
            {
                this.audioIndex = 0;
            }
            CurrentAudioClip = audioList[this.audioIndex];
            Play();
        }

        public void Play()
        {
            if (audioSource.isPlaying == false)
            {
                state = AudioPlayerState.Play;
                audioSource.Play();
            }
        }

        public void Pause()
        {
            state = AudioPlayerState.Pause;
            audioSource.Pause();
        }

        public void UnPause()
        {
            state = AudioPlayerState.Play;
            audioSource.UnPause();
        }

        public void Stop()
        {
            state = AudioPlayerState.Stop;
            audioSource.Stop();
        }

        private void Update()
        {
            switch (PlayMode)
            {
                case AudioPlayerMode.Single:
                    if (audioSource.time >= CurrentAudioClip.length)
                    {
                        state = AudioPlayerState.Stop;
                        OnComplete(CurrentAudioClip.name);
                    }
                    break;
                case AudioPlayerMode.SingleLoop:
                    break;
                case AudioPlayerMode.Order:
                    if (audioSource.time >= CurrentAudioClip.length)
                    {
                        OnComplete(CurrentAudioClip.name);
                        Play(audioIndex++);
                    }
                    break;
                case AudioPlayerMode.Random:
                    if (audioSource.time >= CurrentAudioClip.length)
                    {
                        OnComplete(CurrentAudioClip.name);
                        Play((int)UnityEngine.Random.Range(0,audioList.Count-1));
                    }
                    break;
                default:
                    break;
            }
        }

        public void Destroy()
        {
            GameObject.Destroy(this);
        }

        private void OnDestroy()
        {
            audioSource.Stop();
            CurrentAudioClip = null;
            Destroy(gameObject);
        }
    }
}
