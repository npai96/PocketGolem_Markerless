using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ElementalController : MonoBehaviour {

    public Animator AnimatorObj;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
        AnimatorObj = GetComponent<Animator>();
	}

    /* This triggers animations */
    public void ElementalActions(string Commands) {

        /* Sends keywords to animator */
        switch (Commands) 
        {
            case "lean":
                AnimatorObj.Play("lean", -1, 0f);
                break;

            case "block":
                AnimatorObj.Play("block", -1, 0f);
                break;

            case "magic":
                AnimatorObj.Play("magic", -1, 0f);
                break;

            case "fire":
                AnimatorObj.Play("fire", -1, 0f);
                break;

            case "punch":
                AnimatorObj.Play("punch", -1, 0f);
                break;

            case "run":
                AnimatorObj.Play("run", -1, 0f);
                break;

            default:
                AnimatorObj.Play("idle", -1, 0f);
                break;
        }

        //if (Commands == "lean") {
        //    AnimatorObj.Play("lean", -1, 0f);
        //} else if (Commands == "block") {
        //    AnimatorObj.Play("block", -1, 0f);
        //} else if (Commands == "magic") {
        //    AnimatorObj.Play("magic", -1, 0f);
        //} else if (Commands == "fire") {
        //    AnimatorObj.Play("fire", -1, 0f);
        //} else if (Commands == "punch") {
        //    AnimatorObj.Play("punch", -1, 0f);
        //} else if (Commands == "run") {
        //    AnimatorObj.Play("run", -1, 0f);
        //} else {
        //    AnimatorObj.Play("idle", -1, 0f);
        //}
    }
}
