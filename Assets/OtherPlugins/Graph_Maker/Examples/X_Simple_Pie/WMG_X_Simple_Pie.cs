using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class WMG_X_Simple_Pie : MonoBehaviour {

	public GameObject emptyPiePrefab;
	public WMG_Pie_Graph pieGraph;
	public List<float> testData;
	public List<string> testStrings;

	// Use this for initialization
	void Start () {
		GameObject graphGO = GameObject.Instantiate(emptyPiePrefab);
		graphGO.transform.SetParent(this.transform, false);
		pieGraph = graphGO.GetComponent<WMG_Pie_Graph>();

		pieGraph.Init(); // Important this gets called before setting data

		pieGraph.sliceValues.SetList(testData);
		pieGraph.sliceLabels.SetList(testStrings);
	}
}
