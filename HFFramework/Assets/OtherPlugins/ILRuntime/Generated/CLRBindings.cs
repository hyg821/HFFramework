using System;
using System.Collections.Generic;
using System.Reflection;

namespace ILRuntime.Runtime.Generated
{
    class CLRBindings
    {

        internal static ILRuntime.Runtime.Enviorment.ValueTypeBinder<UnityEngine.Vector3> s_UnityEngine_Vector3_Binding_Binder = null;
        internal static ILRuntime.Runtime.Enviorment.ValueTypeBinder<UnityEngine.Quaternion> s_UnityEngine_Quaternion_Binding_Binder = null;
        internal static ILRuntime.Runtime.Enviorment.ValueTypeBinder<UnityEngine.Vector2> s_UnityEngine_Vector2_Binding_Binder = null;

        /// <summary>
        /// Initialize the CLR binding, please invoke this AFTER CLR Redirection registration
        /// </summary>
        public static void Initialize(ILRuntime.Runtime.Enviorment.AppDomain app)
        {
            UnityEngine_Debug_Binding.Register(app);
            System_String_Binding.Register(app);
            HFFramework_HFLog_Binding.Register(app);
            HFFramework_IDGenerator_Binding.Register(app);
            UnityEngine_Object_Binding.Register(app);
            UnityEngine_GameObject_Binding.Register(app);
            System_Collections_Generic_List_1_ILTypeInstance_Binding.Register(app);
            Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Binding.Register(app);
            UnityEngine_Transform_Binding.Register(app);
            UnityEngine_Component_Binding.Register(app);
            HFFramework_NotificationMessage_Binding.Register(app);
            HFFramework_NotificationCenter_Binding.Register(app);
            System_Collections_Generic_HashSet_1_UInt64_Binding.Register(app);
            System_Collections_Generic_HashSet_1_UInt64_Binding_Enumerator_Binding.Register(app);
            System_IDisposable_Binding.Register(app);
            System_Object_Binding.Register(app);
            System_Reflection_MemberInfo_Binding.Register(app);
            HFFramework_ResourceManager_Binding.Register(app);
            Cysharp_Threading_Tasks_UniTask_1_GameObject_Binding.Register(app);
            Cysharp_Threading_Tasks_UniTask_1_GameObject_Binding_Awaiter_Binding.Register(app);
            UnityEngine_Time_Binding.Register(app);
            HFFramework_GameLooper_Binding.Register(app);
            UnityEngine_MonoBehaviour_Binding.Register(app);
            System_Type_Binding.Register(app);
            System_Activator_Binding.Register(app);
            HFFramework_GameFactory_Binding.Register(app);

            ILRuntime.CLR.TypeSystem.CLRType __clrType = null;
            __clrType = (ILRuntime.CLR.TypeSystem.CLRType)app.GetType (typeof(UnityEngine.Vector3));
            s_UnityEngine_Vector3_Binding_Binder = __clrType.ValueTypeBinder as ILRuntime.Runtime.Enviorment.ValueTypeBinder<UnityEngine.Vector3>;
            __clrType = (ILRuntime.CLR.TypeSystem.CLRType)app.GetType (typeof(UnityEngine.Quaternion));
            s_UnityEngine_Quaternion_Binding_Binder = __clrType.ValueTypeBinder as ILRuntime.Runtime.Enviorment.ValueTypeBinder<UnityEngine.Quaternion>;
            __clrType = (ILRuntime.CLR.TypeSystem.CLRType)app.GetType (typeof(UnityEngine.Vector2));
            s_UnityEngine_Vector2_Binding_Binder = __clrType.ValueTypeBinder as ILRuntime.Runtime.Enviorment.ValueTypeBinder<UnityEngine.Vector2>;
        }

        /// <summary>
        /// Release the CLR binding, please invoke this BEFORE ILRuntime Appdomain destroy
        /// </summary>
        public static void Shutdown(ILRuntime.Runtime.Enviorment.AppDomain app)
        {
            s_UnityEngine_Vector3_Binding_Binder = null;
            s_UnityEngine_Quaternion_Binding_Binder = null;
            s_UnityEngine_Vector2_Binding_Binder = null;
        }
    }
}
