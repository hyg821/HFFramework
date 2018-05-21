using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{

    public enum AudioCacheType
    {
        Cache,
        Destroy
    }

    public class AudioPlayer : BaseMonoBehaviour
    {
        /// <summary>
        /// 标记 每一个 player 的名字
        /// </summary>
        public string audioPlayerName;

        public AudioSource audioSource;

        public AudioCacheType cacheType;

        private SoundType soundType;
        public SoundType SoundType
        {
            set
            {
                soundType = value;
                if (value == SoundType.Effect)
                {
                    Volume = AudioManager.Instance.EffectVolume;
                    Loop = false;
                    cacheType = AudioCacheType.Cache;
                }
                else if (value == SoundType.Music)
                {
                    Volume = AudioManager.Instance.MusicVolume;
                    Loop = true;
                    cacheType = AudioCacheType.Destroy;
                }
                else if (value == SoundType.Free)
                {
                    Volume = AudioManager.Instance.EffectVolume;
                    Loop = false;
                    cacheType = AudioCacheType.Cache;
                }
            }
            get
            {
                return soundType;
            }
        }

        public bool Loop
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

        public bool IsPlaying
        {
            get
            {
                return audioSource.isPlaying;
            }
        }

        /// <summary>
        ///  播放声音列表
        /// </summary>
        public Dictionary<string, AudioClip> audioClipDic = new Dictionary<string, AudioClip>();

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

        public override void MyAwake()
        {
            base.MyAwake();
            audioSource = gameObject.GetComponent<AudioSource>();
            if (audioSource == null)
            {
                audioSource = gameObject.AddComponent<AudioSource>();
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
            AudioClip clip;
            audioClipDic.TryGetValue(name, out clip);
            return clip;
        }

        public void SetAudioClipAndPlay(string packageName, string audioName)
        {
            SetAudioClipAndPlay(HAResourceManager.Instance.GetAudio(packageName, audioName));
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

        public void Play()
        {
            if (audioSource.isPlaying == false)
            {
                audioSource.Play();
            }
        }

        public void Pause()
        {
            audioSource.Pause();
        }

        public void UnPause()
        {
            audioSource.UnPause();
        }

        public void Stop()
        {
            audioSource.Stop();
        }

        public override void Destory()
        {
            base.Destory();
            audioSource.Stop();
            CurrentAudioClip = null;
            Destroy(gameObject);
        }
    }
}
