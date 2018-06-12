using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ReflectionBehaviourMethod : MonoBehaviour
{
    void Awake() { } //Awake is called when the script instance is being loaded.
    void FixedUpdate() { } // This function is called every fixed framerate frame, if the MonoBehaviour is enabled.
    void LateUpdate() { } // LateUpdate is called every frame, if the Behaviour is enabled.
    void OnAnimatorIK() { } //   Callback for setting up animation IK(inverse kinematics).
    void OnAnimatorMove() { } //Callback for processing animation movements for modifying root motion.
    void OnApplicationFocus() { } //Sent to all GameObjects when the player gets or loses focus.
    void OnApplicationPause() { } // Sent to all GameObjects when the application pauses.
    void OnApplicationQuit() { } //Sent to all game objects before the application is quit.
    void OnAudioFilterRead(float[] data, int channels) { } // If OnAudioFilterRead is implemented, Unity will insert a custom filter into the audio DSP chain.
    void OnBecameInvisible() { } // OnBecameInvisible is called when the renderer is no longer visible by any camera.
    void OnBecameVisible() { } // OnBecameVisible is called when the renderer became visible by any camera.
    void OnCollisionEnter() { } // OnCollisionEnter is called when this collider / rigidbody has begun touching another rigidbody / collider.
    void OnCollisionEnter2D() { } //  Sent when an incoming collider makes contact with this object's collider (2D physics only).
    void OnCollisionExit() { } // OnCollisionExit is called when this collider / rigidbody has stopped touching another rigidbody / collider.
    void OnCollisionExit2D() { } //Sent when a collider on another object stops touching this object's collider (2D physics only).
    void OnCollisionStay() { } // OnCollisionStay is called once per frame for every collider / rigidbody that is touching rigidbody / collider.
    void OnCollisionStay2D() { } // Sent each frame where a collider on another object is touching this object's collider (2D physics only).
    void OnConnectedToServer() { } // Called on the client when you have successfully connected to a server.
    void OnControllerColliderHit() { } // OnControllerColliderHit is called when the controller hits a collider while performing a Move.
    void OnDestroy() { } //  This function is called when the MonoBehaviour will be destroyed.
    void OnDisable() { } //   This function is called when the behaviour becomes disabled() or inactive.
    void OnDisconnectedFromServer() { } //    Called on the client when the connection was lost or you disconnected from the server.
    void OnDrawGizmos() { } //   Implement OnDrawGizmos if you want to draw gizmos that are also pickable and always drawn.
    void OnDrawGizmosSelected() { } //   Implement OnDrawGizmosSelected to draw a gizmo if the object is selected.
    void OnEnable() { } //  This function is called when the object becomes enabled and active.
    void OnFailedToConnect() { } //Called on the client when a connection attempt fails for some reason.
    void OnFailedToConnectToMasterServer() { } // Called on clients or servers when there is a problem connecting to the MasterServer.
    void OnGUI() { } //  OnGUI is called for rendering and handling GUI events.
    void OnJointBreak() { } //  Called when a joint attached to the same game object broke.
    void OnJointBreak2D() { } // Called when a Joint2D attached to the same game object breaks.
    void OnMasterServerEvent() { } // Called on clients or servers when reporting events from the MasterServer.
    void OnMouseDown() { } //OnMouseDown is called when the user has pressed the mouse button while over the GUIElement or Collider.
    void OnMouseDrag() { } //OnMouseDrag is called when the user has clicked on a GUIElement or Collider and is still holding down the mouse.
    void OnMouseEnter() { } //   Called when the mouse enters the GUIElement or Collider.
    void OnMouseExit() { } //Called when the mouse is not any longer over the GUIElement or Collider.
    void OnMouseOver() { } //Called every frame while the mouse is over the GUIElement or Collider.
    void OnMouseUp() { } // OnMouseUp is called when the user has released the mouse button.
    void OnMouseUpAsButton() { } //  OnMouseUpAsButton is only called when the mouse is released over the same GUIElement or Collider as it was pressed.
    void OnNetworkInstantiate(NetworkMessageInfo info) { } //  Called on objects which have been network instantiated with Network.Instantiate.
    void OnParticleCollision() { } //OnParticleCollision is called when a particle hits a Collider.
    void OnParticleTrigger() { } //  OnParticleTrigger is called when any particles in a particle system meet the conditions in the trigger module.
    void OnPlayerConnected() { } //  Called on the server whenever a new player has successfully connected.
    void OnPlayerDisconnected() { } // Called on the server whenever a player disconnected from the server.
    void OnPostRender() { } //   OnPostRender is called after a camera finished rendering the scene.
    void OnPreCull() { } // OnPreCull is called before a camera culls the scene.
    void OnPreRender() { } //OnPreRender is called before a camera starts rendering the scene.
    void OnRenderImage(RenderTexture src, RenderTexture dest) { } //OnRenderImage is called after all rendering is complete to render image.
    void OnRenderObject() { } //OnRenderObject is called after camera has rendered the scene.
    void OnSerializeNetworkView(BitStream stream, NetworkMessageInfo info) { } //Used to customize synchronization of variables in a script watched by a network view.
    void OnServerInitialized() { } //Called on the server whenever a Network.InitializeServer was invoked and has completed.
    void OnTransformChildrenChanged() { } // This function is called when the list of children of the transform of the GameObject has changed.
    void OnTransformParentChanged() { } //  This function is called when the parent property of the transform of the GameObject has changed.
    void OnTriggerEnter() { } //OnTriggerEnter is called when the Collider other enters the trigger.
    void OnTriggerEnter2D() { } // Sent when another object enters a trigger collider attached to this object(2D physics only).
    void OnTriggerExit() { } //OnTriggerExit is called when the Collider other has stopped touching the trigger.
    void OnTriggerExit2D() { } //Sent when another object leaves a trigger collider attached to this object(2D physics only).
    void OnTriggerStay() { } //OnTriggerStay is called once per frame for every Collider other that is touching the trigger.
    void OnTriggerStay2D() { } //Sent each frame where another object is within a trigger collider attached to this object(2D physics only).
    void OnValidate() { } // This function is called when the script is loaded or a value is changed in the inspector(Called in the editor only).
    void OnWillRenderObject() { } //OnWillRenderObject is called for each camera if the object is visible.
    void Reset() { } // Reset to default values.
    void Start() { } //Start is called on the frame when a script is enabled just before any of the Update methods is called the first time.
    void Update() { } // Update is called every frame, if the MonoBehaviour is enabled.
}
