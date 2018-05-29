@echo off  
@set unity="E:\Unity2017\Editor\Unity.exe"  
echo 正在更新版本
echo 正在生成android客户端...  
%unity%  -batchmode -quit -nographics -executeMethod BatchMode.BuildAndroid
echo android客户端生成完毕!  
explorer.exe c:\android
pause  