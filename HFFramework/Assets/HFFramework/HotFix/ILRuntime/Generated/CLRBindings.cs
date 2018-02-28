using System;
using System.Collections.Generic;
using System.Reflection;

namespace ILRuntime.Runtime.Generated
{
    class CLRBindings
    {
        /// <summary>
        /// Initialize the CLR binding, please invoke this AFTER CLR Redirection registration
        /// </summary>
        public static void Initialize(ILRuntime.Runtime.Enviorment.AppDomain app)
        {
            UnityEngine_Debug_Binding.Register(app);
            System_Collections_Generic_Dictionary_2_Int32_ILTypeInstance_Binding.Register(app);
            System_Collections_Generic_Dictionary_2_Int32_Object_Binding.Register(app);
            UnityEngine_Object_Binding.Register(app);
            UnityEngine_GameObject_Binding.Register(app);
            UnityEngine_Transform_Binding.Register(app);
            UnityEngine_Component_Binding.Register(app);
            System_Collections_Generic_List_1_IEnumerator_Binding.Register(app);
            UnityEngine_Vector3_Binding.Register(app);
            DG_Tweening_ShortcutExtensions_Binding.Register(app);
            DG_Tweening_TweenSettingsExtensions_Binding.Register(app);
            HFFramework_NotificationCenter_Binding.Register(app);
            HFFramework_NotificationMessage_Binding.Register(app);
            HFFramework_AudioManager_Binding.Register(app);
            HFFramework_AudioPlayer_Binding.Register(app);
            System_Collections_Generic_Dictionary_2_Int32_ILTypeInstance_Binding_ValueCollection_Int32_ILTypeInstance_Binding.Register(app);
            System_Collections_Generic_Dictionary_2_Int32_ILTypeInstance_Binding_ValueCollection_Int32_ILTypeInstance_Binding_Enumerator_Int32_ILTypeInstance_Binding.Register(app);
            System_IDisposable_Binding.Register(app);
            System_Collections_Generic_Dictionary_2_Int32_Object_Binding_KeyCollection_Int32_Object_Binding.Register(app);
            System_Collections_Generic_Dictionary_2_Int32_Object_Binding_KeyCollection_Int32_Object_Binding_Enumerator_Int32_Object_Binding.Register(app);
            System_Collections_Generic_List_1_ILTypeInstance_Binding.Register(app);
            UnityEngine_UI_Button_Binding.Register(app);
            UnityEngine_Events_UnityEvent_Binding.Register(app);
            System_Collections_Generic_List_1_ILTypeInstance_Binding_Enumerator_ILTypeInstance_Binding.Register(app);
            UnityEngine_Behaviour_Binding.Register(app);
        }
    }
}
