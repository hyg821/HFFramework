using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HYGFSMManager  {

	Dictionary<string , HYGBaseState> allStateDic = new Dictionary<string, HYGBaseState>();

	private HYGBaseState currentState;

	public HYGBaseState CurrentState{
		set{
			currentState = value;
		}
		get{
			return currentState;
		}
	}

	public void AddState(HYGBaseState state){
		if (!allStateDic.ContainsKey(state.stateName)) {
			this [state.stateName] = state;
		}
	}


	public void TranslateToState(string stateName){
		if (CurrentState!=null) {
			if (stateName!=CurrentState.stateName) {
				CurrentState.OnStateInvoke (StateEnum.OnStateExit);
				CurrentState = this [stateName];
				CurrentState.OnStateInvoke (StateEnum.OnStateEnter);
			}
		}else{
			CurrentState = this [stateName];
			CurrentState.OnStateInvoke (StateEnum.OnStateEnter);
		}
	}


	public HYGFSMManager(){
		HYGBaseState rootState = new HYGBaseState ();
		rootState.stateName = "Root";
		AddState (rootState);
		TranslateToState ("Root");
	}
	
	// Update is called once per frame
	public void Update () {
		if (CurrentState!=null) {
			currentState.OnStateInvoke (StateEnum.OnStateStay);
		}
	}


	/// <summary>
	/// 索引器
	/// </summary>
	/// <param name="name">Name.</param>
	public HYGBaseState this[string name]{
		get{ 
			return allStateDic [name];
		}
		set{ 
			allStateDic [name] = value;
		}
	}
}
