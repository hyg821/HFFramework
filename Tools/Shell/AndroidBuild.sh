#!/bin/sh

echo BuildStart

UnityPath=/Applications/Unity/Hub/Editor/2018.4.24f1/Unity.app/Contents/MacOS/Unity
LogPath=/Users/alan/Desktop
ClientPath=/Users/alan/.jenkins/workspace/client/Unity

for i in "$@"; do
    echo $i
done

$UnityPath -quit -batchmode -logfile /dev/stdout -projectPath $ClientPath -executeMethod JenkinsBuild.BuildForAndroid "$@"

echo BuildFinish