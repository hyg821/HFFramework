根目录三个文件夹 分别是 
1.Unity主工程  
2.热更工程 
3.工具&&DLL 
如果想使用 dll 热更protobuf  需要删除工程内 Google.Protobuf.dll 
并且按照https://github.com/gongxun/protobuf3-for-Unity-and-ILRuntime 去重新导入并且设置protobuf 

制作bmfont工具在tool文件夹下引用工程 https://github.com/ThisisGame/BitmapFontMaker