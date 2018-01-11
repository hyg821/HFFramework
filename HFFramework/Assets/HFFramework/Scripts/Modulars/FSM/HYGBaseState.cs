using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public delegate void OnState();

public enum StateEnum
{
	OnStateEnter,
	OnStateStay,
	OnStateExit
}

public class HYGBaseState  {

	public GameObject obj;

	public bool isRun = false;

	public string stateName;

	public OnState onStateEnter;
	public OnState onStateStay;
	public OnState onStateExit;

	public StateEnum current;


	public HYGBaseState(){
		Init ();
	}


	public virtual void Init(){
		
	}


	public virtual void OnStateInvoke(StateEnum s){
		if (s == StateEnum.OnStateEnter) {
			if (onStateEnter!=null) {
				isRun = true;
				onStateEnter ();
			}
		}
		if (s == StateEnum.OnStateStay) {
			if (onStateStay!=null) {
				onStateStay ();
			}
		}
		if (s == StateEnum.OnStateExit) {
			if (onStateExit!=null) {
				onStateExit ();
				isRun = false;
			}
		}
	}

}
