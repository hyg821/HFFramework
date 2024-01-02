using System.Collections.Generic;
public class AOTGenericReferences : UnityEngine.MonoBehaviour
{

	// {{ AOT assemblies
	public static readonly IReadOnlyList<string> PatchedAOTAssemblyList = new List<string>
	{
		"DOTween.dll",
		"Google.Protobuf.dll",
		"IEnhancedScroller.dll",
		"System.Core.dll",
		"UniTask.dll",
		"UnityEngine.AssetBundleModule.dll",
		"UnityEngine.CoreModule.dll",
		"mscorlib.dll",
	};
	// }}

	// {{ constraint implement type
	// }} 

	// {{ AOT generic types
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask.<>c<HFFramework.AssetLoader.<LoadAssetAsync>d__6<object>,object>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask.<>c<HFFramework.AssetManager.<GetAssetAsync>d__21<object>,object>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask.<>c<HFFramework.AssetManager.<LoadAssetBundleAsync>d__26,object>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask.<>c<HFFramework.AssetManager.<LoadScene>d__22>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask.<>c<HFFramework.AssetManager.<RawLoadAssetBundleAsync>d__27,object>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask.<>c<HFFramework.AssetManager.<m_LoadScene>d__23>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask.<>c<HFFramework.AssetPackage.<LoadAssetAsync>d__20<object>,object>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask.<>c<HFFramework.Command.<ExecuteAsync>d__6>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask.<>c<HFFramework.Demo.FunctionController.<>c.<<命令队列>b__19_0>d>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask.<>c<HFFramework.Demo.FunctionController.<>c.<<命令队列>b__19_1>d>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask.<>c<HFFramework.Demo.FunctionController.<Test>d__24>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask.<>c<HFFramework.Entity.<LoadResourcesAsync>d__26>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask.<>c<HFFramework.Entity.<RpcCall>d__56<object>,object>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask.<>c<HFFramework.FSMState.<Enter>d__11>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask.<>c<HFFramework.FSMState.<Exit>d__13>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask.<>c<HFFramework.FSMState.<OnEnter>d__14>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask.<>c<HFFramework.FSMState.<OnExit>d__16>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask.<>c<HFFramework.GameFactory.<CreateEntityAsync>d__13<object>,object>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask.<>c<HFFramework.GameScene.<LoadResources>d__6>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask.<>c<HFFramework.GameScene.<OnEnter>d__1>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask.<>c<HFFramework.GameScene.<OnExit>d__2>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask.<>c<HFFramework.GameScene.<OpenLoading>d__3>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask.<>c<HFFramework.GameScene.<SendEnterRequest>d__7>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask.<>c<HFFramework.GameScene.<SendExitRequest>d__4>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask.<>c<HFFramework.LambdaUpdateTask.<Wait>d__4<object>>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask.<>c<HFFramework.StartScene.<OnEnter>d__0>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask.<>c<HFFramework.StartScene.<OnExit>d__2>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask.<>c<HFFramework.UIManager.<Close>d__14<object>>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask.<>c<HFFramework.UIManager.<GetController>d__11<object>,object>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask.<>c<HFFramework.UIManager.<Open>d__13<object>,object>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask<HFFramework.AssetLoader.<LoadAssetAsync>d__6<object>,object>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask<HFFramework.AssetManager.<GetAssetAsync>d__21<object>,object>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask<HFFramework.AssetManager.<LoadAssetBundleAsync>d__26,object>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask<HFFramework.AssetManager.<LoadScene>d__22>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask<HFFramework.AssetManager.<RawLoadAssetBundleAsync>d__27,object>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask<HFFramework.AssetManager.<m_LoadScene>d__23>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask<HFFramework.AssetPackage.<LoadAssetAsync>d__20<object>,object>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask<HFFramework.Command.<ExecuteAsync>d__6>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask<HFFramework.Demo.FunctionController.<>c.<<命令队列>b__19_0>d>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask<HFFramework.Demo.FunctionController.<>c.<<命令队列>b__19_1>d>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask<HFFramework.Demo.FunctionController.<Test>d__24>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask<HFFramework.Entity.<LoadResourcesAsync>d__26>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask<HFFramework.Entity.<RpcCall>d__56<object>,object>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask<HFFramework.FSMState.<Enter>d__11>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask<HFFramework.FSMState.<Exit>d__13>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask<HFFramework.FSMState.<OnEnter>d__14>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask<HFFramework.FSMState.<OnExit>d__16>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask<HFFramework.GameFactory.<CreateEntityAsync>d__13<object>,object>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask<HFFramework.GameScene.<LoadResources>d__6>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask<HFFramework.GameScene.<OnEnter>d__1>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask<HFFramework.GameScene.<OnExit>d__2>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask<HFFramework.GameScene.<OpenLoading>d__3>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask<HFFramework.GameScene.<SendEnterRequest>d__7>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask<HFFramework.GameScene.<SendExitRequest>d__4>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask<HFFramework.LambdaUpdateTask.<Wait>d__4<object>>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask<HFFramework.StartScene.<OnEnter>d__0>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask<HFFramework.StartScene.<OnExit>d__2>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask<HFFramework.UIManager.<Close>d__14<object>>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask<HFFramework.UIManager.<GetController>d__11<object>,object>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask<HFFramework.UIManager.<Open>d__13<object>,object>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder<object>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoid.<>c<HFFramework.AssetManager.<m_LoadAssetsBundlesAsync>d__30>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoid.<>c<HFFramework.FSM.<ChangeState>d__7<object>>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoid.<>c<HFFramework.UIManager.<PreLoad>d__12<object>>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoid<HFFramework.AssetManager.<m_LoadAssetsBundlesAsync>d__30>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoid<HFFramework.FSM.<ChangeState>d__7<object>>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoid<HFFramework.UIManager.<PreLoad>d__12<object>>
	// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise<object>
	// Cysharp.Threading.Tasks.ITaskPoolNode<object>
	// Cysharp.Threading.Tasks.IUniTaskSource<System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>>>>>>>
	// Cysharp.Threading.Tasks.IUniTaskSource<System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>>>>>>
	// Cysharp.Threading.Tasks.IUniTaskSource<System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>>>>>
	// Cysharp.Threading.Tasks.IUniTaskSource<System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>>>>
	// Cysharp.Threading.Tasks.IUniTaskSource<System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>>>
	// Cysharp.Threading.Tasks.IUniTaskSource<System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>>
	// Cysharp.Threading.Tasks.IUniTaskSource<System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>
	// Cysharp.Threading.Tasks.IUniTaskSource<System.ValueTuple<byte,System.ValueTuple<byte,object>>>
	// Cysharp.Threading.Tasks.IUniTaskSource<System.ValueTuple<byte,object>>
	// Cysharp.Threading.Tasks.IUniTaskSource<object>
	// Cysharp.Threading.Tasks.TaskPool<object>
	// Cysharp.Threading.Tasks.UniTask.Awaiter<System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>>>>>>>
	// Cysharp.Threading.Tasks.UniTask.Awaiter<System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>>>>>>
	// Cysharp.Threading.Tasks.UniTask.Awaiter<System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>>>>>
	// Cysharp.Threading.Tasks.UniTask.Awaiter<System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>>>>
	// Cysharp.Threading.Tasks.UniTask.Awaiter<System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>>>
	// Cysharp.Threading.Tasks.UniTask.Awaiter<System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>>
	// Cysharp.Threading.Tasks.UniTask.Awaiter<System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>
	// Cysharp.Threading.Tasks.UniTask.Awaiter<System.ValueTuple<byte,System.ValueTuple<byte,object>>>
	// Cysharp.Threading.Tasks.UniTask.Awaiter<System.ValueTuple<byte,object>>
	// Cysharp.Threading.Tasks.UniTask.Awaiter<object>
	// Cysharp.Threading.Tasks.UniTask.CanceledResultSource<object>
	// Cysharp.Threading.Tasks.UniTask.ExceptionResultSource<object>
	// Cysharp.Threading.Tasks.UniTask.IsCanceledSource<System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>>>>>>>
	// Cysharp.Threading.Tasks.UniTask.IsCanceledSource<System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>>>>>>
	// Cysharp.Threading.Tasks.UniTask.IsCanceledSource<System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>>>>>
	// Cysharp.Threading.Tasks.UniTask.IsCanceledSource<System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>>>>
	// Cysharp.Threading.Tasks.UniTask.IsCanceledSource<System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>>>
	// Cysharp.Threading.Tasks.UniTask.IsCanceledSource<System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>>
	// Cysharp.Threading.Tasks.UniTask.IsCanceledSource<System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>
	// Cysharp.Threading.Tasks.UniTask.IsCanceledSource<System.ValueTuple<byte,System.ValueTuple<byte,object>>>
	// Cysharp.Threading.Tasks.UniTask.IsCanceledSource<System.ValueTuple<byte,object>>
	// Cysharp.Threading.Tasks.UniTask.IsCanceledSource<object>
	// Cysharp.Threading.Tasks.UniTask.MemoizeSource<System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>>>>>>>
	// Cysharp.Threading.Tasks.UniTask.MemoizeSource<System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>>>>>>
	// Cysharp.Threading.Tasks.UniTask.MemoizeSource<System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>>>>>
	// Cysharp.Threading.Tasks.UniTask.MemoizeSource<System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>>>>
	// Cysharp.Threading.Tasks.UniTask.MemoizeSource<System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>>>
	// Cysharp.Threading.Tasks.UniTask.MemoizeSource<System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>>
	// Cysharp.Threading.Tasks.UniTask.MemoizeSource<System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>
	// Cysharp.Threading.Tasks.UniTask.MemoizeSource<System.ValueTuple<byte,System.ValueTuple<byte,object>>>
	// Cysharp.Threading.Tasks.UniTask.MemoizeSource<System.ValueTuple<byte,object>>
	// Cysharp.Threading.Tasks.UniTask.MemoizeSource<object>
	// Cysharp.Threading.Tasks.UniTask<System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>>>>>>>>
	// Cysharp.Threading.Tasks.UniTask<System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>>>>>>>
	// Cysharp.Threading.Tasks.UniTask<System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>>>>>>
	// Cysharp.Threading.Tasks.UniTask<System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>>>>>
	// Cysharp.Threading.Tasks.UniTask<System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>>>>
	// Cysharp.Threading.Tasks.UniTask<System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>>>
	// Cysharp.Threading.Tasks.UniTask<System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>>
	// Cysharp.Threading.Tasks.UniTask<System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>
	// Cysharp.Threading.Tasks.UniTask<System.ValueTuple<byte,System.ValueTuple<byte,object>>>
	// Cysharp.Threading.Tasks.UniTask<System.ValueTuple<byte,object>>
	// Cysharp.Threading.Tasks.UniTask<object>
	// Cysharp.Threading.Tasks.UniTaskCompletionSource<object>
	// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore<Cysharp.Threading.Tasks.AsyncUnit>
	// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore<object>
	// EnhancedUI.SmallList<HFFramework.LogInfo>
	// Google.Protobuf.Collections.RepeatedField.<GetEnumerator>d__22<byte>
	// Google.Protobuf.Collections.RepeatedField.<GetEnumerator>d__22<float>
	// Google.Protobuf.Collections.RepeatedField.<GetEnumerator>d__22<int>
	// Google.Protobuf.Collections.RepeatedField.<GetEnumerator>d__22<long>
	// Google.Protobuf.Collections.RepeatedField.<GetEnumerator>d__22<object>
	// Google.Protobuf.Collections.RepeatedField<byte>
	// Google.Protobuf.Collections.RepeatedField<float>
	// Google.Protobuf.Collections.RepeatedField<int>
	// Google.Protobuf.Collections.RepeatedField<long>
	// Google.Protobuf.Collections.RepeatedField<object>
	// Google.Protobuf.FieldCodec.<>c__16<object>
	// Google.Protobuf.FieldCodec.<>c__DisplayClass16_0<object>
	// Google.Protobuf.FieldCodec.<>c__DisplayClass27_0<byte>
	// Google.Protobuf.FieldCodec.<>c__DisplayClass27_0<float>
	// Google.Protobuf.FieldCodec.<>c__DisplayClass27_0<int>
	// Google.Protobuf.FieldCodec.<>c__DisplayClass27_0<long>
	// Google.Protobuf.FieldCodec.<>c__DisplayClass27_0<object>
	// Google.Protobuf.FieldCodec<byte>
	// Google.Protobuf.FieldCodec<float>
	// Google.Protobuf.FieldCodec<int>
	// Google.Protobuf.FieldCodec<long>
	// Google.Protobuf.FieldCodec<object>
	// Google.Protobuf.IDeepCloneable<byte>
	// Google.Protobuf.IDeepCloneable<float>
	// Google.Protobuf.IDeepCloneable<int>
	// Google.Protobuf.IDeepCloneable<long>
	// Google.Protobuf.IDeepCloneable<object>
	// Google.Protobuf.IMessage<object>
	// Google.Protobuf.MessageParser.<>c__DisplayClass2_0<object>
	// Google.Protobuf.MessageParser<object>
	// System.Action<HFFramework.NotificationMessage>
	// System.Action<HFFramework.Package>
	// System.Action<System.ValueTuple<object,object>>
	// System.Action<UnityEngine.Vector3>
	// System.Action<byte>
	// System.Action<float>
	// System.Action<int,object>
	// System.Action<int>
	// System.Action<object,byte>
	// System.Action<object,float>
	// System.Action<object,int>
	// System.Action<object,long>
	// System.Action<object,object>
	// System.Action<object>
	// System.ByReference<ushort>
	// System.Collections.Concurrent.ConcurrentQueue.<Enumerate>d__28<object>
	// System.Collections.Concurrent.ConcurrentQueue.Segment<object>
	// System.Collections.Concurrent.ConcurrentQueue<object>
	// System.Collections.Generic.ArraySortHelper<System.ValueTuple<object,object>>
	// System.Collections.Generic.ArraySortHelper<UnityEngine.Vector3>
	// System.Collections.Generic.ArraySortHelper<int>
	// System.Collections.Generic.ArraySortHelper<object>
	// System.Collections.Generic.Comparer<System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>>>>>>
	// System.Collections.Generic.Comparer<System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>>>>>
	// System.Collections.Generic.Comparer<System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>>>>
	// System.Collections.Generic.Comparer<System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>>>
	// System.Collections.Generic.Comparer<System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>>
	// System.Collections.Generic.Comparer<System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>
	// System.Collections.Generic.Comparer<System.ValueTuple<byte,System.ValueTuple<byte,object>>>
	// System.Collections.Generic.Comparer<System.ValueTuple<byte,object>>
	// System.Collections.Generic.Comparer<System.ValueTuple<object,object>>
	// System.Collections.Generic.Comparer<UnityEngine.Vector3>
	// System.Collections.Generic.Comparer<byte>
	// System.Collections.Generic.Comparer<int>
	// System.Collections.Generic.Comparer<object>
	// System.Collections.Generic.Dictionary.Enumerator<int,object>
	// System.Collections.Generic.Dictionary.Enumerator<long,object>
	// System.Collections.Generic.Dictionary.Enumerator<object,object>
	// System.Collections.Generic.Dictionary.Enumerator<ulong,object>
	// System.Collections.Generic.Dictionary.KeyCollection.Enumerator<int,object>
	// System.Collections.Generic.Dictionary.KeyCollection.Enumerator<long,object>
	// System.Collections.Generic.Dictionary.KeyCollection.Enumerator<object,object>
	// System.Collections.Generic.Dictionary.KeyCollection.Enumerator<ulong,object>
	// System.Collections.Generic.Dictionary.KeyCollection<int,object>
	// System.Collections.Generic.Dictionary.KeyCollection<long,object>
	// System.Collections.Generic.Dictionary.KeyCollection<object,object>
	// System.Collections.Generic.Dictionary.KeyCollection<ulong,object>
	// System.Collections.Generic.Dictionary.ValueCollection.Enumerator<int,object>
	// System.Collections.Generic.Dictionary.ValueCollection.Enumerator<long,object>
	// System.Collections.Generic.Dictionary.ValueCollection.Enumerator<object,object>
	// System.Collections.Generic.Dictionary.ValueCollection.Enumerator<ulong,object>
	// System.Collections.Generic.Dictionary.ValueCollection<int,object>
	// System.Collections.Generic.Dictionary.ValueCollection<long,object>
	// System.Collections.Generic.Dictionary.ValueCollection<object,object>
	// System.Collections.Generic.Dictionary.ValueCollection<ulong,object>
	// System.Collections.Generic.Dictionary<int,object>
	// System.Collections.Generic.Dictionary<long,object>
	// System.Collections.Generic.Dictionary<object,object>
	// System.Collections.Generic.Dictionary<ulong,object>
	// System.Collections.Generic.EqualityComparer<System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>>>>>>
	// System.Collections.Generic.EqualityComparer<System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>>>>>
	// System.Collections.Generic.EqualityComparer<System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>>>>
	// System.Collections.Generic.EqualityComparer<System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>>>
	// System.Collections.Generic.EqualityComparer<System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>>
	// System.Collections.Generic.EqualityComparer<System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>
	// System.Collections.Generic.EqualityComparer<System.ValueTuple<byte,System.ValueTuple<byte,object>>>
	// System.Collections.Generic.EqualityComparer<System.ValueTuple<byte,object>>
	// System.Collections.Generic.EqualityComparer<byte>
	// System.Collections.Generic.EqualityComparer<double>
	// System.Collections.Generic.EqualityComparer<float>
	// System.Collections.Generic.EqualityComparer<int>
	// System.Collections.Generic.EqualityComparer<long>
	// System.Collections.Generic.EqualityComparer<object>
	// System.Collections.Generic.EqualityComparer<ulong>
	// System.Collections.Generic.HashSet.Enumerator<ulong>
	// System.Collections.Generic.HashSet<ulong>
	// System.Collections.Generic.HashSetEqualityComparer<ulong>
	// System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<int,object>>
	// System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<long,object>>
	// System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<object,object>>
	// System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<ulong,object>>
	// System.Collections.Generic.ICollection<System.ValueTuple<object,object>>
	// System.Collections.Generic.ICollection<UnityEngine.Vector3>
	// System.Collections.Generic.ICollection<int>
	// System.Collections.Generic.ICollection<object>
	// System.Collections.Generic.ICollection<ulong>
	// System.Collections.Generic.IComparer<System.ValueTuple<object,object>>
	// System.Collections.Generic.IComparer<UnityEngine.Vector3>
	// System.Collections.Generic.IComparer<int>
	// System.Collections.Generic.IComparer<object>
	// System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<int,object>>
	// System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<long,object>>
	// System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<object,object>>
	// System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<ulong,object>>
	// System.Collections.Generic.IEnumerable<System.ValueTuple<object,object>>
	// System.Collections.Generic.IEnumerable<UnityEngine.Vector3>
	// System.Collections.Generic.IEnumerable<byte>
	// System.Collections.Generic.IEnumerable<float>
	// System.Collections.Generic.IEnumerable<int>
	// System.Collections.Generic.IEnumerable<long>
	// System.Collections.Generic.IEnumerable<object>
	// System.Collections.Generic.IEnumerable<ulong>
	// System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<int,object>>
	// System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<long,object>>
	// System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<object,object>>
	// System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<ulong,object>>
	// System.Collections.Generic.IEnumerator<System.ValueTuple<object,object>>
	// System.Collections.Generic.IEnumerator<UnityEngine.Vector3>
	// System.Collections.Generic.IEnumerator<byte>
	// System.Collections.Generic.IEnumerator<float>
	// System.Collections.Generic.IEnumerator<int>
	// System.Collections.Generic.IEnumerator<long>
	// System.Collections.Generic.IEnumerator<object>
	// System.Collections.Generic.IEnumerator<ulong>
	// System.Collections.Generic.IEqualityComparer<int>
	// System.Collections.Generic.IEqualityComparer<long>
	// System.Collections.Generic.IEqualityComparer<object>
	// System.Collections.Generic.IEqualityComparer<ulong>
	// System.Collections.Generic.IList<System.ValueTuple<object,object>>
	// System.Collections.Generic.IList<UnityEngine.Vector3>
	// System.Collections.Generic.IList<int>
	// System.Collections.Generic.IList<object>
	// System.Collections.Generic.KeyValuePair<int,object>
	// System.Collections.Generic.KeyValuePair<long,object>
	// System.Collections.Generic.KeyValuePair<object,object>
	// System.Collections.Generic.KeyValuePair<ulong,object>
	// System.Collections.Generic.List.Enumerator<System.ValueTuple<object,object>>
	// System.Collections.Generic.List.Enumerator<UnityEngine.Vector3>
	// System.Collections.Generic.List.Enumerator<int>
	// System.Collections.Generic.List.Enumerator<object>
	// System.Collections.Generic.List<System.ValueTuple<object,object>>
	// System.Collections.Generic.List<UnityEngine.Vector3>
	// System.Collections.Generic.List<int>
	// System.Collections.Generic.List<object>
	// System.Collections.Generic.ObjectComparer<System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>>>>>
	// System.Collections.Generic.ObjectComparer<System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>>>>
	// System.Collections.Generic.ObjectComparer<System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>>>
	// System.Collections.Generic.ObjectComparer<System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>>
	// System.Collections.Generic.ObjectComparer<System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>
	// System.Collections.Generic.ObjectComparer<System.ValueTuple<byte,System.ValueTuple<byte,object>>>
	// System.Collections.Generic.ObjectComparer<System.ValueTuple<byte,object>>
	// System.Collections.Generic.ObjectComparer<System.ValueTuple<object,object>>
	// System.Collections.Generic.ObjectComparer<UnityEngine.Vector3>
	// System.Collections.Generic.ObjectComparer<byte>
	// System.Collections.Generic.ObjectComparer<int>
	// System.Collections.Generic.ObjectComparer<object>
	// System.Collections.Generic.ObjectEqualityComparer<System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>>>>>
	// System.Collections.Generic.ObjectEqualityComparer<System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>>>>
	// System.Collections.Generic.ObjectEqualityComparer<System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>>>
	// System.Collections.Generic.ObjectEqualityComparer<System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>>
	// System.Collections.Generic.ObjectEqualityComparer<System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>
	// System.Collections.Generic.ObjectEqualityComparer<System.ValueTuple<byte,System.ValueTuple<byte,object>>>
	// System.Collections.Generic.ObjectEqualityComparer<System.ValueTuple<byte,object>>
	// System.Collections.Generic.ObjectEqualityComparer<byte>
	// System.Collections.Generic.ObjectEqualityComparer<double>
	// System.Collections.Generic.ObjectEqualityComparer<float>
	// System.Collections.Generic.ObjectEqualityComparer<int>
	// System.Collections.Generic.ObjectEqualityComparer<long>
	// System.Collections.Generic.ObjectEqualityComparer<object>
	// System.Collections.Generic.ObjectEqualityComparer<ulong>
	// System.Collections.Generic.Queue.Enumerator<HFFramework.Package>
	// System.Collections.Generic.Queue.Enumerator<object>
	// System.Collections.Generic.Queue<HFFramework.Package>
	// System.Collections.Generic.Queue<object>
	// System.Collections.Generic.Stack.Enumerator<object>
	// System.Collections.Generic.Stack<object>
	// System.Collections.ObjectModel.ReadOnlyCollection<System.ValueTuple<object,object>>
	// System.Collections.ObjectModel.ReadOnlyCollection<UnityEngine.Vector3>
	// System.Collections.ObjectModel.ReadOnlyCollection<int>
	// System.Collections.ObjectModel.ReadOnlyCollection<object>
	// System.Comparison<System.ValueTuple<object,object>>
	// System.Comparison<UnityEngine.Vector3>
	// System.Comparison<int>
	// System.Comparison<object>
	// System.Func<Cysharp.Threading.Tasks.UniTask>
	// System.Func<byte,int>
	// System.Func<float,int>
	// System.Func<int,int>
	// System.Func<int>
	// System.Func<long,int>
	// System.Func<object,byte>
	// System.Func<object,float>
	// System.Func<object,int>
	// System.Func<object,long>
	// System.Func<object,object,object>
	// System.Func<object,object>
	// System.Func<object>
	// System.IEquatable<object>
	// System.Predicate<System.ValueTuple<object,object>>
	// System.Predicate<UnityEngine.Vector3>
	// System.Predicate<int>
	// System.Predicate<object>
	// System.Predicate<ulong>
	// System.ReadOnlySpan<ushort>
	// System.Runtime.CompilerServices.ConditionalWeakTable.CreateValueCallback<object,object>
	// System.Runtime.CompilerServices.ConditionalWeakTable.Enumerator<object,object>
	// System.Runtime.CompilerServices.ConditionalWeakTable<object,object>
	// System.Span<ushort>
	// System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>>>>>>>
	// System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>>>>>>
	// System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>>>>>
	// System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>>>>
	// System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>>>
	// System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>>
	// System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>>
	// System.ValueTuple<byte,System.ValueTuple<byte,System.ValueTuple<byte,object>>>
	// System.ValueTuple<byte,System.ValueTuple<byte,object>>
	// System.ValueTuple<byte,object>
	// System.ValueTuple<object,object>
	// UnityEngine.Events.UnityAction<UnityEngine.SceneManagement.Scene,int>
	// }}

	public void RefMethods()
	{
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask.Awaiter,HFFramework.AssetManager.<LoadScene>d__22>(Cysharp.Threading.Tasks.UniTask.Awaiter&,HFFramework.AssetManager.<LoadScene>d__22&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask.Awaiter,HFFramework.Command.<ExecuteAsync>d__6>(Cysharp.Threading.Tasks.UniTask.Awaiter&,HFFramework.Command.<ExecuteAsync>d__6&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask.Awaiter,HFFramework.Demo.FunctionController.<>c.<<命令队列>b__19_0>d>(Cysharp.Threading.Tasks.UniTask.Awaiter&,HFFramework.Demo.FunctionController.<>c.<<命令队列>b__19_0>d&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask.Awaiter,HFFramework.Demo.FunctionController.<>c.<<命令队列>b__19_1>d>(Cysharp.Threading.Tasks.UniTask.Awaiter&,HFFramework.Demo.FunctionController.<>c.<<命令队列>b__19_1>d&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask.Awaiter,HFFramework.Demo.FunctionController.<Test>d__24>(Cysharp.Threading.Tasks.UniTask.Awaiter&,HFFramework.Demo.FunctionController.<Test>d__24&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask.Awaiter,HFFramework.FSMState.<Enter>d__11>(Cysharp.Threading.Tasks.UniTask.Awaiter&,HFFramework.FSMState.<Enter>d__11&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask.Awaiter,HFFramework.FSMState.<Exit>d__13>(Cysharp.Threading.Tasks.UniTask.Awaiter&,HFFramework.FSMState.<Exit>d__13&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask.Awaiter,HFFramework.GameScene.<OnEnter>d__1>(Cysharp.Threading.Tasks.UniTask.Awaiter&,HFFramework.GameScene.<OnEnter>d__1&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask.Awaiter,HFFramework.GameScene.<OnExit>d__2>(Cysharp.Threading.Tasks.UniTask.Awaiter&,HFFramework.GameScene.<OnExit>d__2&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask.Awaiter,HFFramework.LambdaUpdateTask.<Wait>d__4<object>>(Cysharp.Threading.Tasks.UniTask.Awaiter&,HFFramework.LambdaUpdateTask.<Wait>d__4<object>&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask.Awaiter,HFFramework.StartScene.<OnEnter>d__0>(Cysharp.Threading.Tasks.UniTask.Awaiter&,HFFramework.StartScene.<OnEnter>d__0&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask.Awaiter,HFFramework.StartScene.<OnExit>d__2>(Cysharp.Threading.Tasks.UniTask.Awaiter&,HFFramework.StartScene.<OnExit>d__2&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask.Awaiter,HFFramework.UIManager.<Close>d__14<object>>(Cysharp.Threading.Tasks.UniTask.Awaiter&,HFFramework.UIManager.<Close>d__14<object>&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask.Awaiter<object>,HFFramework.AssetManager.<m_LoadScene>d__23>(Cysharp.Threading.Tasks.UniTask.Awaiter<object>&,HFFramework.AssetManager.<m_LoadScene>d__23&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask.Awaiter<object>,HFFramework.Entity.<LoadResourcesAsync>d__26>(Cysharp.Threading.Tasks.UniTask.Awaiter<object>&,HFFramework.Entity.<LoadResourcesAsync>d__26&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask.Awaiter<object>,HFFramework.StartScene.<OnEnter>d__0>(Cysharp.Threading.Tasks.UniTask.Awaiter<object>&,HFFramework.StartScene.<OnEnter>d__0&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UnityAsyncExtensions.AsyncOperationAwaiter,HFFramework.AssetManager.<m_LoadScene>d__23>(Cysharp.Threading.Tasks.UnityAsyncExtensions.AsyncOperationAwaiter&,HFFramework.AssetManager.<m_LoadScene>d__23&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.YieldAwaitable.Awaiter,HFFramework.FSMState.<OnEnter>d__14>(Cysharp.Threading.Tasks.YieldAwaitable.Awaiter&,HFFramework.FSMState.<OnEnter>d__14&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.YieldAwaitable.Awaiter,HFFramework.FSMState.<OnExit>d__16>(Cysharp.Threading.Tasks.YieldAwaitable.Awaiter&,HFFramework.FSMState.<OnExit>d__16&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.YieldAwaitable.Awaiter,HFFramework.GameScene.<LoadResources>d__6>(Cysharp.Threading.Tasks.YieldAwaitable.Awaiter&,HFFramework.GameScene.<LoadResources>d__6&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.YieldAwaitable.Awaiter,HFFramework.GameScene.<OpenLoading>d__3>(Cysharp.Threading.Tasks.YieldAwaitable.Awaiter&,HFFramework.GameScene.<OpenLoading>d__3&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.YieldAwaitable.Awaiter,HFFramework.GameScene.<SendEnterRequest>d__7>(Cysharp.Threading.Tasks.YieldAwaitable.Awaiter&,HFFramework.GameScene.<SendEnterRequest>d__7&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.YieldAwaitable.Awaiter,HFFramework.GameScene.<SendExitRequest>d__4>(Cysharp.Threading.Tasks.YieldAwaitable.Awaiter&,HFFramework.GameScene.<SendExitRequest>d__4&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder<object>.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask.Awaiter,HFFramework.GameFactory.<CreateEntityAsync>d__13<object>>(Cysharp.Threading.Tasks.UniTask.Awaiter&,HFFramework.GameFactory.<CreateEntityAsync>d__13<object>&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder<object>.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask.Awaiter,HFFramework.UIManager.<Open>d__13<object>>(Cysharp.Threading.Tasks.UniTask.Awaiter&,HFFramework.UIManager.<Open>d__13<object>&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder<object>.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask.Awaiter<object>,HFFramework.AssetLoader.<LoadAssetAsync>d__6<object>>(Cysharp.Threading.Tasks.UniTask.Awaiter<object>&,HFFramework.AssetLoader.<LoadAssetAsync>d__6<object>&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder<object>.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask.Awaiter<object>,HFFramework.AssetManager.<GetAssetAsync>d__21<object>>(Cysharp.Threading.Tasks.UniTask.Awaiter<object>&,HFFramework.AssetManager.<GetAssetAsync>d__21<object>&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder<object>.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask.Awaiter<object>,HFFramework.AssetManager.<LoadAssetBundleAsync>d__26>(Cysharp.Threading.Tasks.UniTask.Awaiter<object>&,HFFramework.AssetManager.<LoadAssetBundleAsync>d__26&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder<object>.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask.Awaiter<object>,HFFramework.AssetPackage.<LoadAssetAsync>d__20<object>>(Cysharp.Threading.Tasks.UniTask.Awaiter<object>&,HFFramework.AssetPackage.<LoadAssetAsync>d__20<object>&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder<object>.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask.Awaiter<object>,HFFramework.Entity.<RpcCall>d__56<object>>(Cysharp.Threading.Tasks.UniTask.Awaiter<object>&,HFFramework.Entity.<RpcCall>d__56<object>&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder<object>.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask.Awaiter<object>,HFFramework.UIManager.<GetController>d__11<object>>(Cysharp.Threading.Tasks.UniTask.Awaiter<object>&,HFFramework.UIManager.<GetController>d__11<object>&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder<object>.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask.Awaiter<object>,HFFramework.UIManager.<Open>d__13<object>>(Cysharp.Threading.Tasks.UniTask.Awaiter<object>&,HFFramework.UIManager.<Open>d__13<object>&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder<object>.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UnityAsyncExtensions.AssetBundleCreateRequestAwaiter,HFFramework.AssetManager.<RawLoadAssetBundleAsync>d__27>(Cysharp.Threading.Tasks.UnityAsyncExtensions.AssetBundleCreateRequestAwaiter&,HFFramework.AssetManager.<RawLoadAssetBundleAsync>d__27&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder<object>.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UnityAsyncExtensions.AssetBundleRequestAwaiter,HFFramework.AssetPackage.<LoadAssetAsync>d__20<object>>(Cysharp.Threading.Tasks.UnityAsyncExtensions.AssetBundleRequestAwaiter&,HFFramework.AssetPackage.<LoadAssetAsync>d__20<object>&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder.Start<HFFramework.AssetManager.<LoadScene>d__22>(HFFramework.AssetManager.<LoadScene>d__22&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder.Start<HFFramework.AssetManager.<m_LoadScene>d__23>(HFFramework.AssetManager.<m_LoadScene>d__23&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder.Start<HFFramework.Command.<ExecuteAsync>d__6>(HFFramework.Command.<ExecuteAsync>d__6&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder.Start<HFFramework.Demo.FunctionController.<>c.<<命令队列>b__19_0>d>(HFFramework.Demo.FunctionController.<>c.<<命令队列>b__19_0>d&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder.Start<HFFramework.Demo.FunctionController.<>c.<<命令队列>b__19_1>d>(HFFramework.Demo.FunctionController.<>c.<<命令队列>b__19_1>d&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder.Start<HFFramework.Demo.FunctionController.<Test>d__24>(HFFramework.Demo.FunctionController.<Test>d__24&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder.Start<HFFramework.Entity.<LoadResourcesAsync>d__26>(HFFramework.Entity.<LoadResourcesAsync>d__26&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder.Start<HFFramework.FSMState.<Enter>d__11>(HFFramework.FSMState.<Enter>d__11&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder.Start<HFFramework.FSMState.<Exit>d__13>(HFFramework.FSMState.<Exit>d__13&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder.Start<HFFramework.FSMState.<OnEnter>d__14>(HFFramework.FSMState.<OnEnter>d__14&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder.Start<HFFramework.FSMState.<OnExit>d__16>(HFFramework.FSMState.<OnExit>d__16&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder.Start<HFFramework.GameScene.<LoadResources>d__6>(HFFramework.GameScene.<LoadResources>d__6&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder.Start<HFFramework.GameScene.<OnEnter>d__1>(HFFramework.GameScene.<OnEnter>d__1&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder.Start<HFFramework.GameScene.<OnExit>d__2>(HFFramework.GameScene.<OnExit>d__2&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder.Start<HFFramework.GameScene.<OpenLoading>d__3>(HFFramework.GameScene.<OpenLoading>d__3&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder.Start<HFFramework.GameScene.<SendEnterRequest>d__7>(HFFramework.GameScene.<SendEnterRequest>d__7&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder.Start<HFFramework.GameScene.<SendExitRequest>d__4>(HFFramework.GameScene.<SendExitRequest>d__4&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder.Start<HFFramework.LambdaUpdateTask.<Wait>d__4<object>>(HFFramework.LambdaUpdateTask.<Wait>d__4<object>&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder.Start<HFFramework.StartScene.<OnEnter>d__0>(HFFramework.StartScene.<OnEnter>d__0&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder.Start<HFFramework.StartScene.<OnExit>d__2>(HFFramework.StartScene.<OnExit>d__2&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder.Start<HFFramework.UIManager.<Close>d__14<object>>(HFFramework.UIManager.<Close>d__14<object>&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder<object>.Start<HFFramework.AssetLoader.<LoadAssetAsync>d__6<object>>(HFFramework.AssetLoader.<LoadAssetAsync>d__6<object>&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder<object>.Start<HFFramework.AssetManager.<GetAssetAsync>d__21<object>>(HFFramework.AssetManager.<GetAssetAsync>d__21<object>&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder<object>.Start<HFFramework.AssetManager.<LoadAssetBundleAsync>d__26>(HFFramework.AssetManager.<LoadAssetBundleAsync>d__26&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder<object>.Start<HFFramework.AssetManager.<RawLoadAssetBundleAsync>d__27>(HFFramework.AssetManager.<RawLoadAssetBundleAsync>d__27&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder<object>.Start<HFFramework.AssetPackage.<LoadAssetAsync>d__20<object>>(HFFramework.AssetPackage.<LoadAssetAsync>d__20<object>&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder<object>.Start<HFFramework.Entity.<RpcCall>d__56<object>>(HFFramework.Entity.<RpcCall>d__56<object>&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder<object>.Start<HFFramework.GameFactory.<CreateEntityAsync>d__13<object>>(HFFramework.GameFactory.<CreateEntityAsync>d__13<object>&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder<object>.Start<HFFramework.UIManager.<GetController>d__11<object>>(HFFramework.UIManager.<GetController>d__11<object>&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder<object>.Start<HFFramework.UIManager.<Open>d__13<object>>(HFFramework.UIManager.<Open>d__13<object>&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask.Awaiter,HFFramework.FSM.<ChangeState>d__7<object>>(Cysharp.Threading.Tasks.UniTask.Awaiter&,HFFramework.FSM.<ChangeState>d__7<object>&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask.Awaiter<object>,HFFramework.AssetManager.<m_LoadAssetsBundlesAsync>d__30>(Cysharp.Threading.Tasks.UniTask.Awaiter<object>&,HFFramework.AssetManager.<m_LoadAssetsBundlesAsync>d__30&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask.Awaiter<object>,HFFramework.UIManager.<PreLoad>d__12<object>>(Cysharp.Threading.Tasks.UniTask.Awaiter<object>&,HFFramework.UIManager.<PreLoad>d__12<object>&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder.Start<HFFramework.AssetManager.<m_LoadAssetsBundlesAsync>d__30>(HFFramework.AssetManager.<m_LoadAssetsBundlesAsync>d__30&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder.Start<HFFramework.FSM.<ChangeState>d__7<object>>(HFFramework.FSM.<ChangeState>d__7<object>&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder.Start<HFFramework.UIManager.<PreLoad>d__12<object>>(HFFramework.UIManager.<PreLoad>d__12<object>&)
		// Cysharp.Threading.Tasks.UniTask<object> Cysharp.Threading.Tasks.UniTask.FromCanceled<object>(System.Threading.CancellationToken)
		// Cysharp.Threading.Tasks.UniTask<object> Cysharp.Threading.Tasks.UniTask.FromException<object>(System.Exception)
		// object DG.Tweening.TweenSettingsExtensions.OnComplete<object>(object,DG.Tweening.TweenCallback)
		// Google.Protobuf.FieldCodec<object> Google.Protobuf.FieldCodec.ForMessage<object>(uint,Google.Protobuf.MessageParser<object>)
		// object Google.Protobuf.ProtoPreconditions.CheckNotNull<object>(object,string)
		// object System.Activator.CreateInstance<object>()
		// System.Void System.Array.Reverse<byte>(byte[])
		// System.Void System.Array.Reverse<byte>(byte[],int,int)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask.Awaiter,HFFramework.CommandQueue.<Run>d__4>(Cysharp.Threading.Tasks.UniTask.Awaiter&,HFFramework.CommandQueue.<Run>d__4&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask.Awaiter,HFFramework.Demo.FunctionController.<CancellationToken取消UniTask>d__22>(Cysharp.Threading.Tasks.UniTask.Awaiter&,HFFramework.Demo.FunctionController.<CancellationToken取消UniTask>d__22&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask.Awaiter,HFFramework.Demo.FunctionController.<Entity作为控制器>d__15>(Cysharp.Threading.Tasks.UniTask.Awaiter&,HFFramework.Demo.FunctionController.<Entity作为控制器>d__15&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask.Awaiter,HFFramework.Demo.FunctionController.<Entity数据显示分离>d__17>(Cysharp.Threading.Tasks.UniTask.Awaiter&,HFFramework.Demo.FunctionController.<Entity数据显示分离>d__17&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask.Awaiter,HFFramework.Demo.FunctionController.<UniTask取消>d__20>(Cysharp.Threading.Tasks.UniTask.Awaiter&,HFFramework.Demo.FunctionController.<UniTask取消>d__20&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask.Awaiter,HFFramework.Demo.FunctionController.<局部刷新Task>d__23>(Cysharp.Threading.Tasks.UniTask.Awaiter&,HFFramework.Demo.FunctionController.<局部刷新Task>d__23&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask.Awaiter<object>,HFFramework.Demo.FunctionController.<Entity作为控制器>d__15>(Cysharp.Threading.Tasks.UniTask.Awaiter<object>&,HFFramework.Demo.FunctionController.<Entity作为控制器>d__15&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask.Awaiter<object>,HFFramework.Demo.FunctionController.<Entity创建>d__14>(Cysharp.Threading.Tasks.UniTask.Awaiter<object>&,HFFramework.Demo.FunctionController.<Entity创建>d__14&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask.Awaiter<object>,HFFramework.Demo.FunctionController.<Entity数据显示分离>d__17>(Cysharp.Threading.Tasks.UniTask.Awaiter<object>&,HFFramework.Demo.FunctionController.<Entity数据显示分离>d__17&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.Start<HFFramework.CommandQueue.<Run>d__4>(HFFramework.CommandQueue.<Run>d__4&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.Start<HFFramework.Demo.FunctionController.<CancellationToken取消UniTask>d__22>(HFFramework.Demo.FunctionController.<CancellationToken取消UniTask>d__22&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.Start<HFFramework.Demo.FunctionController.<Entity作为控制器>d__15>(HFFramework.Demo.FunctionController.<Entity作为控制器>d__15&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.Start<HFFramework.Demo.FunctionController.<Entity创建>d__14>(HFFramework.Demo.FunctionController.<Entity创建>d__14&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.Start<HFFramework.Demo.FunctionController.<Entity数据显示分离>d__17>(HFFramework.Demo.FunctionController.<Entity数据显示分离>d__17&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.Start<HFFramework.Demo.FunctionController.<OnShow>d__26>(HFFramework.Demo.FunctionController.<OnShow>d__26&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.Start<HFFramework.Demo.FunctionController.<UniTask取消>d__20>(HFFramework.Demo.FunctionController.<UniTask取消>d__20&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.Start<HFFramework.Demo.FunctionController.<局部刷新Task>d__23>(HFFramework.Demo.FunctionController.<局部刷新Task>d__23&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.Start<HFFramework.Demo.FunctionController.<数据绑定控件>d__21>(HFFramework.Demo.FunctionController.<数据绑定控件>d__21&)
		// byte& System.Runtime.CompilerServices.Unsafe.Add<byte>(byte&,int)
		// byte& System.Runtime.CompilerServices.Unsafe.As<byte,byte>(byte&)
		// object& System.Runtime.CompilerServices.Unsafe.As<object,object>(object&)
		// System.Void* System.Runtime.CompilerServices.Unsafe.AsPointer<object>(object&)
		// bool System.Runtime.CompilerServices.Unsafe.IsAddressLessThan<byte>(byte&,byte&)
		// int System.Runtime.InteropServices.Marshal.SizeOf<uint>(uint)
		// object System.Threading.Interlocked.CompareExchange<object>(object&,object,object)
		// object UnityEngine.AssetBundle.LoadAsset<object>(string)
		// UnityEngine.AssetBundleRequest UnityEngine.AssetBundle.LoadAssetAsync<object>(string)
		// object UnityEngine.Component.GetComponent<object>()
		// object[] UnityEngine.Component.GetComponents<object>()
		// object UnityEngine.GameObject.AddComponent<object>()
		// object UnityEngine.GameObject.GetComponent<object>()
		// object[] UnityEngine.GameObject.GetComponents<object>()
		// object UnityEngine.Object.Instantiate<object>(object)
		// object UnityEngine.Resources.Load<object>(string)
	}
}