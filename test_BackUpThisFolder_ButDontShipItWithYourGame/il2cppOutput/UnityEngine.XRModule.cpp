﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Action`1<UnityEngine.XR.InputDevice>
struct Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC;
// System.Action`1<UnityEngine.XR.MeshGenerationResult>
struct Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<UnityEngine.XR.XRInputSubsystem>
struct Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A;
// System.Action`1<UnityEngine.XR.XRNodeState>
struct Action_1_t290119641EBA3C1EAC8AF78274C63CE01C3046D8;
// UnityEngine.IntegratedSubsystemDescriptor`1<System.Object>
struct IntegratedSubsystemDescriptor_1_t70BCBD395B99126866E0354041C8DCD1CE80A714;
// UnityEngine.IntegratedSubsystemDescriptor`1<UnityEngine.XR.XRDisplaySubsystem>
struct IntegratedSubsystemDescriptor_1_t7261AA0914165CB589AD41C4F9B463D44E333D7C;
// UnityEngine.IntegratedSubsystemDescriptor`1<UnityEngine.XR.XRInputSubsystem>
struct IntegratedSubsystemDescriptor_1_t440D086A98F968B9FC279854F552698F319A32F7;
// UnityEngine.IntegratedSubsystemDescriptor`1<UnityEngine.XR.XRMeshSubsystem>
struct IntegratedSubsystemDescriptor_1_tBFE1680F4FA360D4E9AB19FDE2CCBD959E436513;
// UnityEngine.IntegratedSubsystem`1<System.Object>
struct IntegratedSubsystem_1_t6CAFC4ADB928A1CB6A1BAA66C12250FB6C841842;
// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct IntegratedSubsystem_1_t8312865F01EEA1EDE4B24A973E47ADD526616848;
// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRInputSubsystemDescriptor>
struct IntegratedSubsystem_1_tF93BC76362E85BDD215312162457BE510FC76D3B;
// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRMeshSubsystemDescriptor>
struct IntegratedSubsystem_1_t3AB3A9BAB10A4D1420E63EEA50D40FEE65F41C03;
// System.Collections.Generic.List`1<System.UInt64>
struct List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>
struct List_1_t90832B88D7207769654164CC28440CF594CC397D;
// System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>
struct List_1_t8AE5A65CCFBC753343962D38B82C801F7BDE3C87;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.XR.XRNodeState[]
struct XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_tE12941E90BE7D41A61A8FF0507EC86D12F1C2ACC;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E;
// UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3;
// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_t2C6085B49D0BEB030B26D149806E40189CACCA6F;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshCollider
struct MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.XR.XRDisplaySubsystem
struct XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1;
// UnityEngine.XR.XRDisplaySubsystemDescriptor
struct XRDisplaySubsystemDescriptor_t72DD88EE9094488AE723A495F48884BA4EA8311A;
// UnityEngine.XR.XRInputSubsystem
struct XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34;
// UnityEngine.XR.XRInputSubsystemDescriptor
struct XRInputSubsystemDescriptor_t42088DD6542C0BDD27C2951B911E4F69DD1F917D;
// UnityEngine.XR.XRMeshSubsystem
struct XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2;
// UnityEngine.XR.XRMeshSubsystemDescriptor
struct XRMeshSubsystemDescriptor_tD9814661B8661C69D5A0DBB76C9AF61778B9CEC1;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Bone_t2558B1DD1E4F405EA4D76A3B8D5149CA16011975_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Eyes_t9FD3821575977E294F11E0EB92D2A4CA509ED8C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Hand_t67B90BC0D36CBC92DF7E38BD15463B925CB5912C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputDevices_t02B79FC19CEA9AC29A9945F5CDA6D790730FBF34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputTracking_tA4F34D4D5EC8E560B56ED295177C040D9C9815F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackingStateEventType_tB20EB5D5E27ACC8D551C965C01143C58A99AAC3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral03F95F266081C6100AE45DE907603B48AEA88377;
IL2CPP_EXTERN_C String_t* _stringLiteral227D9F9D7F0691964EAA2E30C2C2DC14C04A3D05;
IL2CPP_EXTERN_C String_t* _stringLiteral24B00BEE43751066E2697652F1D6D262C07E28BF;
IL2CPP_EXTERN_C String_t* _stringLiteral29578BD9C3867E5BD732AD2D6724DF8BBBC6ABF7;
IL2CPP_EXTERN_C String_t* _stringLiteral35D45FCF9796C71E0A4EF694D764079CDC76C5D3;
IL2CPP_EXTERN_C String_t* _stringLiteral38500B43596E22322F78E4DB6623115A6D7C5B24;
IL2CPP_EXTERN_C String_t* _stringLiteral3A5FEEEA6CC9DC4CE7D578724AB0F8A114AC32FC;
IL2CPP_EXTERN_C String_t* _stringLiteral48AE17AF47CEC5A825E7762BA0D99A995B7DAB44;
IL2CPP_EXTERN_C String_t* _stringLiteral52749A6319C3C338DB30E0EFAB91CE5AA5C6B174;
IL2CPP_EXTERN_C String_t* _stringLiteral549D4E1BD7FFA7F485E084D961369B26386BA2A5;
IL2CPP_EXTERN_C String_t* _stringLiteral604D4509D85720AAEB9398C90E5E88599306E2D4;
IL2CPP_EXTERN_C String_t* _stringLiteral61CF6DD5C950AF267302979E2305DF65E8D23BB5;
IL2CPP_EXTERN_C String_t* _stringLiteral6459CE8416F57A02AC1631C840005271AED9865A;
IL2CPP_EXTERN_C String_t* _stringLiteral6502625D04056D74ABF5B399CAE63C245B679772;
IL2CPP_EXTERN_C String_t* _stringLiteral66240DBC99CA039EAF0520B5272BD8DA371603A2;
IL2CPP_EXTERN_C String_t* _stringLiteral6E84C3C9CABFB9B7E1973C68615694836C689630;
IL2CPP_EXTERN_C String_t* _stringLiteral70BD96A9936A8229937A8E85846B5AE5657B701D;
IL2CPP_EXTERN_C String_t* _stringLiteral726E3C457BDB29067B179DDEF38C1A489A2A5459;
IL2CPP_EXTERN_C String_t* _stringLiteral754BC8CC289786CFBEFC86F613F47EEC45C9D500;
IL2CPP_EXTERN_C String_t* _stringLiteral84102F76CEAE29A2E33E4E0217B1E11BCDA39366;
IL2CPP_EXTERN_C String_t* _stringLiteral8AA65A41D8DDA3F1BCA101FADDADFF30771776BF;
IL2CPP_EXTERN_C String_t* _stringLiteral90778E65BEFB370548F8CFA394C23A045A0A07FF;
IL2CPP_EXTERN_C String_t* _stringLiteral93F25E58DBA8A557F895FF1B78AD81FA02E26332;
IL2CPP_EXTERN_C String_t* _stringLiteral95E9A1E3972FD2FE6576337B0060276E2CA5FFE3;
IL2CPP_EXTERN_C String_t* _stringLiteral9633378B6C362D31F3D20E2E4BF69E20C5556E0F;
IL2CPP_EXTERN_C String_t* _stringLiteral9879D0ADEAA390A85EDC93BFD5A45C84F5E628DC;
IL2CPP_EXTERN_C String_t* _stringLiteral98DA166FA9E38B239532901B25E8AB690CE4EC51;
IL2CPP_EXTERN_C String_t* _stringLiteral9946FBE46CDE07D85A1306BBD66ABF2744491441;
IL2CPP_EXTERN_C String_t* _stringLiteral9DC93EACCD7355C105755CBE57F415C879EBA48E;
IL2CPP_EXTERN_C String_t* _stringLiteralA236D1D85DBA0340D4B9D6DA4793F28122ABDB4B;
IL2CPP_EXTERN_C String_t* _stringLiteralA821A896CE6F42BB6E717BDB3EE86E19E73DBCA6;
IL2CPP_EXTERN_C String_t* _stringLiteralA832960DBF85D5B0B42A99FAFE6E782202201BEC;
IL2CPP_EXTERN_C String_t* _stringLiteralAA5D30BC4A4A248920FD5E69504B53056B14F7EC;
IL2CPP_EXTERN_C String_t* _stringLiteralAC10ECED701E479DB1EB99F71C7E143BF33BDB28;
IL2CPP_EXTERN_C String_t* _stringLiteralAC1362F1885AF603DF875FBCAAD403A8D46251A2;
IL2CPP_EXTERN_C String_t* _stringLiteralACCB271B3F087252B60BC604A75AEE43F78DA580;
IL2CPP_EXTERN_C String_t* _stringLiteralAE76E0A93C646A4D171FC6C55BF45E1F3B7C1B34;
IL2CPP_EXTERN_C String_t* _stringLiteralB0073BD5ACF886468B949EC07746EAA9F4153149;
IL2CPP_EXTERN_C String_t* _stringLiteralB387D42F0AFA94CE7B6979B587B90DD3FE6E03AE;
IL2CPP_EXTERN_C String_t* _stringLiteralB4FE860573CD6E03F0D1A4378C1F330A3820D8C9;
IL2CPP_EXTERN_C String_t* _stringLiteralB6F2679FF2ED335CED04DD9F20B320A9562207AC;
IL2CPP_EXTERN_C String_t* _stringLiteralB85E78C75EF1A6F636689BD88A9D6C2A3B2B0A1B;
IL2CPP_EXTERN_C String_t* _stringLiteralBC7F8151EEA0D66BB2B72D6025CBD04BE6673ED7;
IL2CPP_EXTERN_C String_t* _stringLiteralC0E30FBC86A20CADAC60192FFB6B9C72C65CCF0E;
IL2CPP_EXTERN_C String_t* _stringLiteralC5505A25CF2D095FDF8936A52047CE843140CE71;
IL2CPP_EXTERN_C String_t* _stringLiteralC8E4099C5B3BD54FEF6692054B61857D790EA02E;
IL2CPP_EXTERN_C String_t* _stringLiteralC8E762418D8614D739AB43D7D2C189A29AF1145F;
IL2CPP_EXTERN_C String_t* _stringLiteralCBE7365360EB45A9634579259D49C165CB873442;
IL2CPP_EXTERN_C String_t* _stringLiteralCD42F30283C4CE60465C4010C800AD9704733102;
IL2CPP_EXTERN_C String_t* _stringLiteralD8FEC942054577466215DA5251FB602E014D433B;
IL2CPP_EXTERN_C String_t* _stringLiteralD95E0F430871054A7F508E89236049195FE4C4B4;
IL2CPP_EXTERN_C String_t* _stringLiteralDAE5C8C7FC887DC7AC6D80AE8A8715E4DFB5462B;
IL2CPP_EXTERN_C String_t* _stringLiteralDCD1BF12664AC38299958513D10BAA016D22904B;
IL2CPP_EXTERN_C String_t* _stringLiteralDF0B09D3AC2B1A403AD50571DE6D02BADF994DF6;
IL2CPP_EXTERN_C String_t* _stringLiteralE4E6F213F1AEACB4233E3E6BBB9F569BEEBA7756;
IL2CPP_EXTERN_C String_t* _stringLiteralE86EACFED9F6FA05AD72CEB29F5D9BC7189FDBEE;
IL2CPP_EXTERN_C String_t* _stringLiteralE87E0289369699E3077923D9BD0365C6E47D2BCA;
IL2CPP_EXTERN_C String_t* _stringLiteralEC1F89EF78546399906890624140735FFFA3EFAA;
IL2CPP_EXTERN_C String_t* _stringLiteralECA2F6D5759EE143EA8C00BC3BFFCA73414785B8;
IL2CPP_EXTERN_C String_t* _stringLiteralF0339F2B8C23E97D992FC8EF5C3B1CAA3D72B0DF;
IL2CPP_EXTERN_C String_t* _stringLiteralF40999422A118C6EE66D1E75FEBC28A9B24DA371;
IL2CPP_EXTERN_C String_t* _stringLiteralF953F17BB91EBF78300169DEE55CE060B4F1C569;
IL2CPP_EXTERN_C String_t* _stringLiteralFAADF4A00DE209941E8563D4803C5546439877F3;
IL2CPP_EXTERN_C String_t* _stringLiteralFBAF124AB08242B7785EC2B6DBC3C6459CB98BC8;
IL2CPP_EXTERN_C String_t* _stringLiteralFDA1C52D0E58360F4E8FD608757CCD98D8772D4F;
IL2CPP_EXTERN_C const RuntimeMethod* InputDevice_CheckValidAndSetDefault_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mED7DBE29D514108C95BCEA0CC535A55DA2610366_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputDevice_CheckValidAndSetDefault_TisHapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211_m934C6F6EA462958748DD322AB87BE052078B1266_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputDevice_CheckValidAndSetDefault_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m96F459B8B37D981DFB1562207C2583F5A1653D85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputDevice_CheckValidAndSetDefault_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m291E714227B7B72A29CD867189748EA47B3990C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputDevice_CheckValidAndSetDefault_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mF1899A42AE87E04AE0FE6A7D7D92994B23389069_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputDevice_CheckValidAndSetDefault_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m3155C6BC58D0FF075C2D1A7CAD6E0E06BD33A00B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputDevice_SendHapticImpulse_m7166A784508F8E0F3AE5BD88863171C7A905BC1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_1__ctor_mDBC4B8D446064C4E1E9103B8235C1F69B86EE3D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_1__ctor_mDC36ADDA7F02BFE95F751942E9E183934C826593_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_1_get_name_m02343070D5E6423DE14E1538321C52506DEFA03F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_1_get_name_m2B2C882E3DBE25BF025C498BF14E9FFA7F91540E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_1_get_name_m37097D0219AFAD926E3787B28C95F9514D188D10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_1_get_name_mAD647CEB75F404E53F3A175DA334818A35738080_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_1_get_name_mB74B05F127FBD54D57BFCE959683F6A5C62142C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_1_get_name_mC56C726995711932766450754FB382B2DA52E105_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputTracking_GetNodeStates_mA2E8D154A47C817ED74AD42F6B38A9C906A57A67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputTracking_InvokeTrackingEvent_mA218CBE5D81A639B9C9A084A5360FEAD4625C42C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IntegratedSubsystemDescriptor_1__ctor_m1289BA32AAFA862973132927F7EA8FB1A9A169C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IntegratedSubsystemDescriptor_1__ctor_mBE55B2B969E5AEF4340234DB6B76F67C009DBB75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IntegratedSubsystemDescriptor_1__ctor_mF4354B29EF84B06E68C05D657260B044B123087C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IntegratedSubsystem_1__ctor_m0BE780FA80AAFE2DB1209D5731A5E72EFAB7051F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IntegratedSubsystem_1__ctor_m5A4E8498952FD1A7C4BFF13C388548CB97B060CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IntegratedSubsystem_1__ctor_m994BCD28C1C5A54986AB4DDA38E2578381CCA171_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m81D40B541187099D5EDD207395C9FC477BADEF03_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t98AB86DBD4B6990BFAA7E2230BDA19430302AC99 
{
};

// System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>
struct List_1_t8AE5A65CCFBC753343962D38B82C801F7BDE3C87  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8AE5A65CCFBC753343962D38B82C801F7BDE3C87_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// UnityEngine.XR.HashCodeHelper
struct HashCodeHelper_tC1D27B890F89E7B1158911DDBE91E869D2087387  : public RuntimeObject
{
};

// UnityEngine.XR.InputDevices
struct InputDevices_t02B79FC19CEA9AC29A9945F5CDA6D790730FBF34  : public RuntimeObject
{
};

struct InputDevices_t02B79FC19CEA9AC29A9945F5CDA6D790730FBF34_StaticFields
{
	// System.Action`1<UnityEngine.XR.InputDevice> UnityEngine.XR.InputDevices::deviceConnected
	Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC* ___deviceConnected_0;
	// System.Action`1<UnityEngine.XR.InputDevice> UnityEngine.XR.InputDevices::deviceDisconnected
	Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC* ___deviceDisconnected_1;
	// System.Action`1<UnityEngine.XR.InputDevice> UnityEngine.XR.InputDevices::deviceConfigChanged
	Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC* ___deviceConfigChanged_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputDevices
struct InputDevices_t02B79FC19CEA9AC29A9945F5CDA6D790730FBF34_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.XR.InputDevices
struct InputDevices_t02B79FC19CEA9AC29A9945F5CDA6D790730FBF34_marshaled_com
{
};

// UnityEngine.XR.InputTracking
struct InputTracking_tA4F34D4D5EC8E560B56ED295177C040D9C9815F1  : public RuntimeObject
{
};

struct InputTracking_tA4F34D4D5EC8E560B56ED295177C040D9C9815F1_StaticFields
{
	// System.Action`1<UnityEngine.XR.XRNodeState> UnityEngine.XR.InputTracking::trackingAcquired
	Action_1_t290119641EBA3C1EAC8AF78274C63CE01C3046D8* ___trackingAcquired_0;
	// System.Action`1<UnityEngine.XR.XRNodeState> UnityEngine.XR.InputTracking::trackingLost
	Action_1_t290119641EBA3C1EAC8AF78274C63CE01C3046D8* ___trackingLost_1;
	// System.Action`1<UnityEngine.XR.XRNodeState> UnityEngine.XR.InputTracking::nodeAdded
	Action_1_t290119641EBA3C1EAC8AF78274C63CE01C3046D8* ___nodeAdded_2;
	// System.Action`1<UnityEngine.XR.XRNodeState> UnityEngine.XR.InputTracking::nodeRemoved
	Action_1_t290119641EBA3C1EAC8AF78274C63CE01C3046D8* ___nodeRemoved_3;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.XR.InputFeatureUsage`1<System.Boolean>
struct InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 
{
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>
struct InputFeatureUsage_1_tD3FEDCAE0D7F51C7B42182162ACE726E68166B38 
{
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>
struct InputFeatureUsage_1_t64C1AA42D6E8BD57C54C7E891BD79A70A0F3A170 
{
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.InputTrackingState>
struct InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 
{
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>
struct InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D 
{
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<System.Single>
struct InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 
{
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<System.UInt32Enum>
struct InputFeatureUsage_1_t26D677E09A2D69C099167C381EE1EBFD5E8BDD48 
{
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>
struct InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C 
{
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>
struct InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 
{
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.Bone
struct Bone_t2558B1DD1E4F405EA4D76A3B8D5149CA16011975 
{
	// System.UInt64 UnityEngine.XR.Bone::m_DeviceId
	uint64_t ___m_DeviceId_0;
	// System.UInt32 UnityEngine.XR.Bone::m_FeatureIndex
	uint32_t ___m_FeatureIndex_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_tE12941E90BE7D41A61A8FF0507EC86D12F1C2ACC  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// UnityEngine.XR.Eyes
struct Eyes_t9FD3821575977E294F11E0EB92D2A4CA509ED8C7 
{
	// System.UInt64 UnityEngine.XR.Eyes::m_DeviceId
	uint64_t ___m_DeviceId_0;
	// System.UInt32 UnityEngine.XR.Eyes::m_FeatureIndex
	uint32_t ___m_FeatureIndex_1;
};

// UnityEngine.XR.Hand
struct Hand_t67B90BC0D36CBC92DF7E38BD15463B925CB5912C 
{
	// System.UInt64 UnityEngine.XR.Hand::m_DeviceId
	uint64_t ___m_DeviceId_0;
	// System.UInt32 UnityEngine.XR.Hand::m_FeatureIndex
	uint32_t ___m_FeatureIndex_1;
};

// UnityEngine.XR.HapticCapabilities
struct HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211 
{
	// System.UInt32 UnityEngine.XR.HapticCapabilities::m_NumChannels
	uint32_t ___m_NumChannels_0;
	// System.Boolean UnityEngine.XR.HapticCapabilities::m_SupportsImpulse
	bool ___m_SupportsImpulse_1;
	// System.Boolean UnityEngine.XR.HapticCapabilities::m_SupportsBuffer
	bool ___m_SupportsBuffer_2;
	// System.UInt32 UnityEngine.XR.HapticCapabilities::m_BufferFrequencyHz
	uint32_t ___m_BufferFrequencyHz_3;
	// System.UInt32 UnityEngine.XR.HapticCapabilities::m_BufferMaxSize
	uint32_t ___m_BufferMaxSize_4;
	// System.UInt32 UnityEngine.XR.HapticCapabilities::m_BufferOptimalSize
	uint32_t ___m_BufferOptimalSize_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.HapticCapabilities
struct HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211_marshaled_pinvoke
{
	uint32_t ___m_NumChannels_0;
	int32_t ___m_SupportsImpulse_1;
	int32_t ___m_SupportsBuffer_2;
	uint32_t ___m_BufferFrequencyHz_3;
	uint32_t ___m_BufferMaxSize_4;
	uint32_t ___m_BufferOptimalSize_5;
};
// Native definition for COM marshalling of UnityEngine.XR.HapticCapabilities
struct HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211_marshaled_com
{
	uint32_t ___m_NumChannels_0;
	int32_t ___m_SupportsImpulse_1;
	int32_t ___m_SupportsBuffer_2;
	uint32_t ___m_BufferFrequencyHz_3;
	uint32_t ___m_BufferMaxSize_4;
	uint32_t ___m_BufferOptimalSize_5;
};

// UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD 
{
	// System.UInt64 UnityEngine.XR.InputDevice::m_DeviceId
	uint64_t ___m_DeviceId_1;
	// System.Boolean UnityEngine.XR.InputDevice::m_Initialized
	bool ___m_Initialized_2;
};

struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.InputDevice::s_InputSubsystemCache
	List_1_t90832B88D7207769654164CC28440CF594CC397D* ___s_InputSubsystemCache_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshaled_pinvoke
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
};
// Native definition for COM marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshaled_com
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
};

// UnityEngine.XR.InputFeatureUsage
struct InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599 
{
	// System.String UnityEngine.XR.InputFeatureUsage::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.XR.InputFeatureType UnityEngine.XR.InputFeatureUsage::m_InternalType
	uint32_t ___m_InternalType_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage
struct InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599_marshaled_pinvoke
{
	char* ___m_Name_0;
	uint32_t ___m_InternalType_1;
};
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage
struct InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599_marshaled_com
{
	Il2CppChar* ___m_Name_0;
	uint32_t ___m_InternalType_1;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_t2C6085B49D0BEB030B26D149806E40189CACCA6F  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// UnityEngine.XR.MeshId
struct MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC 
{
	// System.UInt64 UnityEngine.XR.MeshId::m_SubId1
	uint64_t ___m_SubId1_1;
	// System.UInt64 UnityEngine.XR.MeshId::m_SubId2
	uint64_t ___m_SubId2_2;
};

struct MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC_StaticFields
{
	// UnityEngine.XR.MeshId UnityEngine.XR.MeshId::s_InvalidId
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___s_InvalidId_0;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.RenderTextureDescriptor
struct RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 
{
	// System.Int32 UnityEngine.RenderTextureDescriptor::<width>k__BackingField
	int32_t ___U3CwidthU3Ek__BackingField_0;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<height>k__BackingField
	int32_t ___U3CheightU3Ek__BackingField_1;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<msaaSamples>k__BackingField
	int32_t ___U3CmsaaSamplesU3Ek__BackingField_2;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<volumeDepth>k__BackingField
	int32_t ___U3CvolumeDepthU3Ek__BackingField_3;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<mipCount>k__BackingField
	int32_t ___U3CmipCountU3Ek__BackingField_4;
	// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTextureDescriptor::_graphicsFormat
	int32_t ____graphicsFormat_5;
	// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTextureDescriptor::<stencilFormat>k__BackingField
	int32_t ___U3CstencilFormatU3Ek__BackingField_6;
	// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTextureDescriptor::<depthStencilFormat>k__BackingField
	int32_t ___U3CdepthStencilFormatU3Ek__BackingField_7;
	// UnityEngine.Rendering.TextureDimension UnityEngine.RenderTextureDescriptor::<dimension>k__BackingField
	int32_t ___U3CdimensionU3Ek__BackingField_8;
	// UnityEngine.Rendering.ShadowSamplingMode UnityEngine.RenderTextureDescriptor::<shadowSamplingMode>k__BackingField
	int32_t ___U3CshadowSamplingModeU3Ek__BackingField_9;
	// UnityEngine.VRTextureUsage UnityEngine.RenderTextureDescriptor::<vrUsage>k__BackingField
	int32_t ___U3CvrUsageU3Ek__BackingField_10;
	// UnityEngine.RenderTextureCreationFlags UnityEngine.RenderTextureDescriptor::_flags
	int32_t ____flags_11;
	// UnityEngine.RenderTextureMemoryless UnityEngine.RenderTextureDescriptor::<memoryless>k__BackingField
	int32_t ___U3CmemorylessU3Ek__BackingField_12;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.XR.CommonUsages
struct CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1  : public RuntimeObject
{
};

struct CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields
{
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::isTracked
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___isTracked_0;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primaryButton
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___primaryButton_1;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primaryTouch
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___primaryTouch_2;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondaryButton
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___secondaryButton_3;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondaryTouch
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___secondaryTouch_4;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::gripButton
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___gripButton_5;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::triggerButton
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___triggerButton_6;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::menuButton
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___menuButton_7;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primary2DAxisClick
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___primary2DAxisClick_8;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primary2DAxisTouch
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___primary2DAxisTouch_9;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondary2DAxisClick
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___secondary2DAxisClick_10;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondary2DAxisTouch
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___secondary2DAxisTouch_11;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::userPresence
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___userPresence_12;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.InputTrackingState> UnityEngine.XR.CommonUsages::trackingState
	InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 ___trackingState_13;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::batteryLevel
	InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___batteryLevel_14;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::trigger
	InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___trigger_15;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::grip
	InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___grip_16;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2> UnityEngine.XR.CommonUsages::primary2DAxis
	InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C ___primary2DAxis_17;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2> UnityEngine.XR.CommonUsages::secondary2DAxis
	InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C ___secondary2DAxis_18;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::devicePosition
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___devicePosition_19;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyePosition
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___leftEyePosition_20;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyePosition
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___rightEyePosition_21;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyePosition
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___centerEyePosition_22;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraPosition
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___colorCameraPosition_23;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceVelocity
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___deviceVelocity_24;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceAngularVelocity
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___deviceAngularVelocity_25;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeVelocity
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___leftEyeVelocity_26;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeAngularVelocity
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___leftEyeAngularVelocity_27;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeVelocity
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___rightEyeVelocity_28;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeAngularVelocity
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___rightEyeAngularVelocity_29;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeVelocity
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___centerEyeVelocity_30;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeAngularVelocity
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___centerEyeAngularVelocity_31;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraVelocity
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___colorCameraVelocity_32;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraAngularVelocity
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___colorCameraAngularVelocity_33;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceAcceleration
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___deviceAcceleration_34;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceAngularAcceleration
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___deviceAngularAcceleration_35;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeAcceleration
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___leftEyeAcceleration_36;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeAngularAcceleration
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___leftEyeAngularAcceleration_37;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeAcceleration
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___rightEyeAcceleration_38;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeAngularAcceleration
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___rightEyeAngularAcceleration_39;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeAcceleration
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___centerEyeAcceleration_40;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeAngularAcceleration
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___centerEyeAngularAcceleration_41;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraAcceleration
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___colorCameraAcceleration_42;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraAngularAcceleration
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___colorCameraAngularAcceleration_43;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::deviceRotation
	InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D ___deviceRotation_44;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::leftEyeRotation
	InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D ___leftEyeRotation_45;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::rightEyeRotation
	InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D ___rightEyeRotation_46;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::centerEyeRotation
	InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D ___centerEyeRotation_47;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::colorCameraRotation
	InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D ___colorCameraRotation_48;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand> UnityEngine.XR.CommonUsages::handData
	InputFeatureUsage_1_t64C1AA42D6E8BD57C54C7E891BD79A70A0F3A170 ___handData_49;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes> UnityEngine.XR.CommonUsages::eyesData
	InputFeatureUsage_1_tD3FEDCAE0D7F51C7B42182162ACE726E68166B38 ___eyesData_50;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2> UnityEngine.XR.CommonUsages::dPad
	InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C ___dPad_51;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::indexFinger
	InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___indexFinger_52;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::middleFinger
	InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___middleFinger_53;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::ringFinger
	InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___ringFinger_54;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::pinkyFinger
	InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___pinkyFinger_55;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::thumbrest
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___thumbrest_56;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::indexTouch
	InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___indexTouch_57;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::thumbTouch
	InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___thumbTouch_58;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3  : public RuntimeObject
{
	// System.IntPtr UnityEngine.IntegratedSubsystem::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.ISubsystemDescriptor UnityEngine.IntegratedSubsystem::m_SubsystemDescriptor
	RuntimeObject* ___m_SubsystemDescriptor_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_marshaled_com
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};

// UnityEngine.IntegratedSubsystemDescriptor
struct IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D  : public RuntimeObject
{
	// System.IntPtr UnityEngine.IntegratedSubsystemDescriptor::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystemDescriptor
struct IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystemDescriptor
struct IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.XR.MeshGenerationResult
struct MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C 
{
	// UnityEngine.XR.MeshId UnityEngine.XR.MeshGenerationResult::<MeshId>k__BackingField
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___U3CMeshIdU3Ek__BackingField_0;
	// UnityEngine.Mesh UnityEngine.XR.MeshGenerationResult::<Mesh>k__BackingField
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___U3CMeshU3Ek__BackingField_1;
	// UnityEngine.MeshCollider UnityEngine.XR.MeshGenerationResult::<MeshCollider>k__BackingField
	MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* ___U3CMeshColliderU3Ek__BackingField_2;
	// UnityEngine.XR.MeshGenerationStatus UnityEngine.XR.MeshGenerationResult::<Status>k__BackingField
	int32_t ___U3CStatusU3Ek__BackingField_3;
	// UnityEngine.XR.MeshVertexAttributes UnityEngine.XR.MeshGenerationResult::<Attributes>k__BackingField
	int32_t ___U3CAttributesU3Ek__BackingField_4;
	// System.UInt64 UnityEngine.XR.MeshGenerationResult::<Timestamp>k__BackingField
	uint64_t ___U3CTimestampU3Ek__BackingField_5;
	// UnityEngine.Vector3 UnityEngine.XR.MeshGenerationResult::<Position>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPositionU3Ek__BackingField_6;
	// UnityEngine.Quaternion UnityEngine.XR.MeshGenerationResult::<Rotation>k__BackingField
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CRotationU3Ek__BackingField_7;
	// UnityEngine.Vector3 UnityEngine.XR.MeshGenerationResult::<Scale>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CScaleU3Ek__BackingField_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.MeshGenerationResult
struct MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C_marshaled_pinvoke
{
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___U3CMeshIdU3Ek__BackingField_0;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___U3CMeshU3Ek__BackingField_1;
	MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* ___U3CMeshColliderU3Ek__BackingField_2;
	int32_t ___U3CStatusU3Ek__BackingField_3;
	int32_t ___U3CAttributesU3Ek__BackingField_4;
	uint64_t ___U3CTimestampU3Ek__BackingField_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPositionU3Ek__BackingField_6;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CRotationU3Ek__BackingField_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CScaleU3Ek__BackingField_8;
};
// Native definition for COM marshalling of UnityEngine.XR.MeshGenerationResult
struct MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C_marshaled_com
{
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___U3CMeshIdU3Ek__BackingField_0;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___U3CMeshU3Ek__BackingField_1;
	MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* ___U3CMeshColliderU3Ek__BackingField_2;
	int32_t ___U3CStatusU3Ek__BackingField_3;
	int32_t ___U3CAttributesU3Ek__BackingField_4;
	uint64_t ___U3CTimestampU3Ek__BackingField_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPositionU3Ek__BackingField_6;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CRotationU3Ek__BackingField_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CScaleU3Ek__BackingField_8;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Rendering.RenderTargetIdentifier
struct RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B 
{
	// UnityEngine.Rendering.BuiltinRenderTextureType UnityEngine.Rendering.RenderTargetIdentifier::m_Type
	int32_t ___m_Type_0;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_NameID
	int32_t ___m_NameID_1;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_InstanceID
	int32_t ___m_InstanceID_2;
	// System.IntPtr UnityEngine.Rendering.RenderTargetIdentifier::m_BufferPointer
	intptr_t ___m_BufferPointer_3;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_MipLevel
	int32_t ___m_MipLevel_4;
	// UnityEngine.CubemapFace UnityEngine.Rendering.RenderTargetIdentifier::m_CubeFace
	int32_t ___m_CubeFace_5;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_DepthSlice
	int32_t ___m_DepthSlice_6;
};

// UnityEngine.XR.XRNodeState
struct XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A 
{
	// UnityEngine.XR.XRNode UnityEngine.XR.XRNodeState::m_Type
	int32_t ___m_Type_0;
	// UnityEngine.XR.AvailableTrackingData UnityEngine.XR.XRNodeState::m_AvailableFields
	int32_t ___m_AvailableFields_1;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_Position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Position_2;
	// UnityEngine.Quaternion UnityEngine.XR.XRNodeState::m_Rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_Rotation_3;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_Velocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Velocity_4;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_AngularVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AngularVelocity_5;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_Acceleration
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Acceleration_6;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_AngularAcceleration
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AngularAcceleration_7;
	// System.Int32 UnityEngine.XR.XRNodeState::m_Tracked
	int32_t ___m_Tracked_8;
	// System.UInt64 UnityEngine.XR.XRNodeState::m_UniqueID
	uint64_t ___m_UniqueID_9;
};

// UnityEngine.XR.XRDisplaySubsystem/XRMirrorViewBlitDesc
struct XRMirrorViewBlitDesc_tC913B2856BA2160BC3AD99F0C67293850E2162E0 
{
	// System.IntPtr UnityEngine.XR.XRDisplaySubsystem/XRMirrorViewBlitDesc::displaySubsystemInstance
	intptr_t ___displaySubsystemInstance_0;
	// System.Boolean UnityEngine.XR.XRDisplaySubsystem/XRMirrorViewBlitDesc::nativeBlitAvailable
	bool ___nativeBlitAvailable_1;
	// System.Boolean UnityEngine.XR.XRDisplaySubsystem/XRMirrorViewBlitDesc::nativeBlitInvalidStates
	bool ___nativeBlitInvalidStates_2;
	// System.Int32 UnityEngine.XR.XRDisplaySubsystem/XRMirrorViewBlitDesc::blitParamsCount
	int32_t ___blitParamsCount_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.XRDisplaySubsystem/XRMirrorViewBlitDesc
struct XRMirrorViewBlitDesc_tC913B2856BA2160BC3AD99F0C67293850E2162E0_marshaled_pinvoke
{
	intptr_t ___displaySubsystemInstance_0;
	int32_t ___nativeBlitAvailable_1;
	int32_t ___nativeBlitInvalidStates_2;
	int32_t ___blitParamsCount_3;
};
// Native definition for COM marshalling of UnityEngine.XR.XRDisplaySubsystem/XRMirrorViewBlitDesc
struct XRMirrorViewBlitDesc_tC913B2856BA2160BC3AD99F0C67293850E2162E0_marshaled_com
{
	intptr_t ___displaySubsystemInstance_0;
	int32_t ___nativeBlitAvailable_1;
	int32_t ___nativeBlitInvalidStates_2;
	int32_t ___blitParamsCount_3;
};

// UnityEngine.XR.XRMeshSubsystem/MeshTransformList
struct MeshTransformList_t761D725D4B30CFD7DDF57B3725004994FB3B561F 
{
	// System.IntPtr UnityEngine.XR.XRMeshSubsystem/MeshTransformList::m_Self
	intptr_t ___m_Self_0;
};

// UnityEngine.IntegratedSubsystemDescriptor`1<UnityEngine.XR.XRDisplaySubsystem>
struct IntegratedSubsystemDescriptor_1_t7261AA0914165CB589AD41C4F9B463D44E333D7C  : public IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D
{
};
// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystemDescriptor`1
#ifndef IntegratedSubsystemDescriptor_1_tC541D17A8306FA1C3A608A1328A6DBFDA3264671_marshaled_pinvoke_define
#define IntegratedSubsystemDescriptor_1_tC541D17A8306FA1C3A608A1328A6DBFDA3264671_marshaled_pinvoke_define
struct IntegratedSubsystemDescriptor_1_tC541D17A8306FA1C3A608A1328A6DBFDA3264671_marshaled_pinvoke : public IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D_marshaled_pinvoke
{
};
#endif
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystemDescriptor`1
#ifndef IntegratedSubsystemDescriptor_1_tC541D17A8306FA1C3A608A1328A6DBFDA3264671_marshaled_com_define
#define IntegratedSubsystemDescriptor_1_tC541D17A8306FA1C3A608A1328A6DBFDA3264671_marshaled_com_define
struct IntegratedSubsystemDescriptor_1_tC541D17A8306FA1C3A608A1328A6DBFDA3264671_marshaled_com : public IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D_marshaled_com
{
};
#endif

// UnityEngine.IntegratedSubsystemDescriptor`1<UnityEngine.XR.XRInputSubsystem>
struct IntegratedSubsystemDescriptor_1_t440D086A98F968B9FC279854F552698F319A32F7  : public IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D
{
};
// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystemDescriptor`1
#ifndef IntegratedSubsystemDescriptor_1_tC541D17A8306FA1C3A608A1328A6DBFDA3264671_marshaled_pinvoke_define
#define IntegratedSubsystemDescriptor_1_tC541D17A8306FA1C3A608A1328A6DBFDA3264671_marshaled_pinvoke_define
struct IntegratedSubsystemDescriptor_1_tC541D17A8306FA1C3A608A1328A6DBFDA3264671_marshaled_pinvoke : public IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D_marshaled_pinvoke
{
};
#endif
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystemDescriptor`1
#ifndef IntegratedSubsystemDescriptor_1_tC541D17A8306FA1C3A608A1328A6DBFDA3264671_marshaled_com_define
#define IntegratedSubsystemDescriptor_1_tC541D17A8306FA1C3A608A1328A6DBFDA3264671_marshaled_com_define
struct IntegratedSubsystemDescriptor_1_tC541D17A8306FA1C3A608A1328A6DBFDA3264671_marshaled_com : public IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D_marshaled_com
{
};
#endif

// UnityEngine.IntegratedSubsystemDescriptor`1<UnityEngine.XR.XRMeshSubsystem>
struct IntegratedSubsystemDescriptor_1_tBFE1680F4FA360D4E9AB19FDE2CCBD959E436513  : public IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D
{
};
// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystemDescriptor`1
#ifndef IntegratedSubsystemDescriptor_1_tC541D17A8306FA1C3A608A1328A6DBFDA3264671_marshaled_pinvoke_define
#define IntegratedSubsystemDescriptor_1_tC541D17A8306FA1C3A608A1328A6DBFDA3264671_marshaled_pinvoke_define
struct IntegratedSubsystemDescriptor_1_tC541D17A8306FA1C3A608A1328A6DBFDA3264671_marshaled_pinvoke : public IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D_marshaled_pinvoke
{
};
#endif
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystemDescriptor`1
#ifndef IntegratedSubsystemDescriptor_1_tC541D17A8306FA1C3A608A1328A6DBFDA3264671_marshaled_com_define
#define IntegratedSubsystemDescriptor_1_tC541D17A8306FA1C3A608A1328A6DBFDA3264671_marshaled_com_define
struct IntegratedSubsystemDescriptor_1_tC541D17A8306FA1C3A608A1328A6DBFDA3264671_marshaled_com : public IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D_marshaled_com
{
};
#endif

// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct IntegratedSubsystem_1_t8312865F01EEA1EDE4B24A973E47ADD526616848  : public IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3
{
};

// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRInputSubsystemDescriptor>
struct IntegratedSubsystem_1_tF93BC76362E85BDD215312162457BE510FC76D3B  : public IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3
{
};

// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRMeshSubsystemDescriptor>
struct IntegratedSubsystem_1_t3AB3A9BAB10A4D1420E63EEA50D40FEE65F41C03  : public IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.XR.XRDisplaySubsystem/XRRenderPass
struct XRRenderPass_t9E8711E8C69E3917AA39A0CA8304B604ED2838E8 
{
	// System.IntPtr UnityEngine.XR.XRDisplaySubsystem/XRRenderPass::displaySubsystemInstance
	intptr_t ___displaySubsystemInstance_0;
	// System.Int32 UnityEngine.XR.XRDisplaySubsystem/XRRenderPass::renderPassIndex
	int32_t ___renderPassIndex_1;
	// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.XR.XRDisplaySubsystem/XRRenderPass::renderTarget
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___renderTarget_2;
	// UnityEngine.RenderTextureDescriptor UnityEngine.XR.XRDisplaySubsystem/XRRenderPass::renderTargetDesc
	RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 ___renderTargetDesc_3;
	// System.Boolean UnityEngine.XR.XRDisplaySubsystem/XRRenderPass::hasMotionVectorPass
	bool ___hasMotionVectorPass_4;
	// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.XR.XRDisplaySubsystem/XRRenderPass::motionVectorRenderTarget
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___motionVectorRenderTarget_5;
	// UnityEngine.RenderTextureDescriptor UnityEngine.XR.XRDisplaySubsystem/XRRenderPass::motionVectorRenderTargetDesc
	RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 ___motionVectorRenderTargetDesc_6;
	// System.Boolean UnityEngine.XR.XRDisplaySubsystem/XRRenderPass::shouldFillOutDepth
	bool ___shouldFillOutDepth_7;
	// System.Int32 UnityEngine.XR.XRDisplaySubsystem/XRRenderPass::cullingPassIndex
	int32_t ___cullingPassIndex_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.XRDisplaySubsystem/XRRenderPass
struct XRRenderPass_t9E8711E8C69E3917AA39A0CA8304B604ED2838E8_marshaled_pinvoke
{
	intptr_t ___displaySubsystemInstance_0;
	int32_t ___renderPassIndex_1;
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___renderTarget_2;
	RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 ___renderTargetDesc_3;
	int32_t ___hasMotionVectorPass_4;
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___motionVectorRenderTarget_5;
	RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 ___motionVectorRenderTargetDesc_6;
	int32_t ___shouldFillOutDepth_7;
	int32_t ___cullingPassIndex_8;
};
// Native definition for COM marshalling of UnityEngine.XR.XRDisplaySubsystem/XRRenderPass
struct XRRenderPass_t9E8711E8C69E3917AA39A0CA8304B604ED2838E8_marshaled_com
{
	intptr_t ___displaySubsystemInstance_0;
	int32_t ___renderPassIndex_1;
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___renderTarget_2;
	RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 ___renderTargetDesc_3;
	int32_t ___hasMotionVectorPass_4;
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___motionVectorRenderTarget_5;
	RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 ___motionVectorRenderTargetDesc_6;
	int32_t ___shouldFillOutDepth_7;
	int32_t ___cullingPassIndex_8;
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.XR.InputDevice>
struct Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.XR.MeshGenerationResult>
struct Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.XR.XRInputSubsystem>
struct Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.XR.XRNodeState>
struct Action_1_t290119641EBA3C1EAC8AF78274C63CE01C3046D8  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.XR.XRDisplaySubsystem
struct XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1  : public IntegratedSubsystem_1_t8312865F01EEA1EDE4B24A973E47ADD526616848
{
	// System.Action`1<System.Boolean> UnityEngine.XR.XRDisplaySubsystem::displayFocusChanged
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___displayFocusChanged_2;
};

// UnityEngine.XR.XRDisplaySubsystemDescriptor
struct XRDisplaySubsystemDescriptor_t72DD88EE9094488AE723A495F48884BA4EA8311A  : public IntegratedSubsystemDescriptor_1_t7261AA0914165CB589AD41C4F9B463D44E333D7C
{
};

// UnityEngine.XR.XRInputSubsystem
struct XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34  : public IntegratedSubsystem_1_tF93BC76362E85BDD215312162457BE510FC76D3B
{
	// System.Action`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.XRInputSubsystem::trackingOriginUpdated
	Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A* ___trackingOriginUpdated_2;
	// System.Action`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.XRInputSubsystem::boundaryChanged
	Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A* ___boundaryChanged_3;
	// System.Collections.Generic.List`1<System.UInt64> UnityEngine.XR.XRInputSubsystem::m_DeviceIdsCache
	List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284* ___m_DeviceIdsCache_4;
};

// UnityEngine.XR.XRInputSubsystemDescriptor
struct XRInputSubsystemDescriptor_t42088DD6542C0BDD27C2951B911E4F69DD1F917D  : public IntegratedSubsystemDescriptor_1_t440D086A98F968B9FC279854F552698F319A32F7
{
};

// UnityEngine.XR.XRMeshSubsystem
struct XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2  : public IntegratedSubsystem_1_t3AB3A9BAB10A4D1420E63EEA50D40FEE65F41C03
{
};

// UnityEngine.XR.XRMeshSubsystemDescriptor
struct XRMeshSubsystemDescriptor_tD9814661B8661C69D5A0DBB76C9AF61778B9CEC1  : public IntegratedSubsystemDescriptor_1_tBFE1680F4FA360D4E9AB19FDE2CCBD959E436513
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// UnityEngine.MeshCollider
struct MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.XR.XRNodeState[]
struct XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845  : public RuntimeArray
{
	ALIGN_FIELD (8) XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A m_Items[1];

	inline XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Action`1<UnityEngine.XR.XRNodeState>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m0D1DB9EA639FC121D071208CB0B6240B4E12B7CC_gshared_inline (Action_1_t290119641EBA3C1EAC8AF78274C63CE01C3046D8* __this, XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A ___obj0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m81D40B541187099D5EDD207395C9FC477BADEF03_gshared_inline (List_1_t8AE5A65CCFBC753343962D38B82C801F7BDE3C87* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.Boolean>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_gshared (InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637* __this, String_t* ___usageName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.UInt32Enum>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_m328744E659539C22CA4AE68536AB2C68C2D7EA1C_gshared (InputFeatureUsage_1_t26D677E09A2D69C099167C381EE1EBFD5E8BDD48* __this, String_t* ___usageName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.Single>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_gshared (InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848* __this, String_t* ___usageName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_gshared (InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C* __this, String_t* ___usageName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_gshared (InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58* __this, String_t* ___usageName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_gshared (InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D* __this, String_t* ___usageName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_mDBC4B8D446064C4E1E9103B8235C1F69B86EE3D7_gshared (InputFeatureUsage_1_t64C1AA42D6E8BD57C54C7E891BD79A70A0F3A170* __this, String_t* ___usageName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_mDC36ADDA7F02BFE95F751942E9E183934C826593_gshared (InputFeatureUsage_1_tD3FEDCAE0D7F51C7B42182162ACE726E68166B38* __this, String_t* ___usageName0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.InputDevice::CheckValidAndSetDefault<UnityEngine.XR.HapticCapabilities>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_CheckValidAndSetDefault_TisHapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211_m934C6F6EA462958748DD322AB87BE052078B1266_gshared (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.InputDevice::CheckValidAndSetDefault<System.Boolean>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_CheckValidAndSetDefault_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mED7DBE29D514108C95BCEA0CC535A55DA2610366_gshared (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, bool* ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.XR.InputFeatureUsage`1<System.Boolean>::get_name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_mAD647CEB75F404E53F3A175DA334818A35738080_gshared_inline (InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.InputDevice::CheckValidAndSetDefault<System.Single>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_CheckValidAndSetDefault_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m291E714227B7B72A29CD867189748EA47B3990C7_gshared (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, float* ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.XR.InputFeatureUsage`1<System.Single>::get_name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_m2B2C882E3DBE25BF025C498BF14E9FFA7F91540E_gshared_inline (InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.InputDevice::CheckValidAndSetDefault<UnityEngine.Vector2>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_CheckValidAndSetDefault_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mF1899A42AE87E04AE0FE6A7D7D92994B23389069_gshared (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>::get_name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_mC56C726995711932766450754FB382B2DA52E105_gshared_inline (InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.InputDevice::CheckValidAndSetDefault<UnityEngine.Vector3>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_CheckValidAndSetDefault_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m3155C6BC58D0FF075C2D1A7CAD6E0E06BD33A00B_gshared (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>::get_name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_mB74B05F127FBD54D57BFCE959683F6A5C62142C5_gshared_inline (InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.InputDevice::CheckValidAndSetDefault<UnityEngine.Quaternion>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_CheckValidAndSetDefault_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m96F459B8B37D981DFB1562207C2583F5A1653D85_gshared (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>::get_name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_m02343070D5E6423DE14E1538321C52506DEFA03F_gshared_inline (InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.XR.InputFeatureUsage`1<System.UInt32Enum>::get_name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_m42686849B1959EB8C6C2F7497EC166379A6E4F17_gshared_inline (InputFeatureUsage_1_t26D677E09A2D69C099167C381EE1EBFD5E8BDD48* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.InputDevice>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m711ABCFDFDF3836EE35ED7CD7E5B3FAD04EAE649_gshared_inline (Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___obj0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Boolean>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.IntegratedSubsystem`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegratedSubsystem_1__ctor_mA130811A078A40712D15BFE67E73D0517AB0E989_gshared (IntegratedSubsystem_1_t6CAFC4ADB928A1CB6A1BAA66C12250FB6C841842* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.IntegratedSubsystemDescriptor`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegratedSubsystemDescriptor_1__ctor_m94FAA0F6D63A0144035D2645AAE00202B36BE7DC_gshared (IntegratedSubsystemDescriptor_1_t70BCBD395B99126866E0354041C8DCD1CE80A714* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.MeshGenerationResult>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mE959103AFF340DAE4FFA216861988A12A1F3C805_gshared_inline (Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8* __this, MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C ___obj0, const RuntimeMethod* method) ;

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.XRNodeState::set_uniqueID(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRNodeState_set_uniqueID_m1C42BE763CEB5BE66EECE54288DE28D30CCB085F (XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* __this, uint64_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.XRNodeState::set_nodeType(UnityEngine.XR.XRNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRNodeState_set_nodeType_m17D747D9C558277596BD29F59FD8FDEE1A892FF4 (XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.XRNodeState::set_tracked(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRNodeState_set_tracked_m5B448272E0E14001A16A150EE7B602ADE1D85A45 (XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* __this, bool ___value0, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.XRNodeState>::Invoke(T)
inline void Action_1_Invoke_m0D1DB9EA639FC121D071208CB0B6240B4E12B7CC_inline (Action_1_t290119641EBA3C1EAC8AF78274C63CE01C3046D8* __this, XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t290119641EBA3C1EAC8AF78274C63CE01C3046D8*, XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A, const RuntimeMethod*))Action_1_Invoke_m0D1DB9EA639FC121D071208CB0B6240B4E12B7CC_gshared_inline)(__this, ___obj0, method);
}
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>::Clear()
inline void List_1_Clear_m81D40B541187099D5EDD207395C9FC477BADEF03_inline (List_1_t8AE5A65CCFBC753343962D38B82C801F7BDE3C87* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8AE5A65CCFBC753343962D38B82C801F7BDE3C87*, const RuntimeMethod*))List_1_Clear_m81D40B541187099D5EDD207395C9FC477BADEF03_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.InputTracking::GetNodeStates_Internal(System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputTracking_GetNodeStates_Internal_m6E67CE5EC9C950ED633AEC42F8BD5B15EFE3B916 (List_1_t8AE5A65CCFBC753343962D38B82C801F7BDE3C87* ___nodeStates0, const RuntimeMethod* method) ;
// UnityEngine.XR.XRNode UnityEngine.XR.XRNodeState::get_nodeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRNodeState_get_nodeType_mFC49286B25FF7732CE6CAF231A1DE5C083C13932 (XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.XRNodeState::TryGet(UnityEngine.Vector3,UnityEngine.XR.AvailableTrackingData,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRNodeState_TryGet_m6C1D3FC5E773BC5E134F37815FB08839489F5630 (XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___inValue0, int32_t ___availabilityFlag1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___outValue2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.XRNodeState::TryGetPosition(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRNodeState_TryGetPosition_mC17C5DFEEA4062A6D91D7E252DD108829AC4E0A6 (XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___position0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.XRNodeState::TryGet(UnityEngine.Quaternion,UnityEngine.XR.AvailableTrackingData,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRNodeState_TryGet_m3EC1CBB3B6B823611B82073139949C041CE7C616 (XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___inValue0, int32_t ___availabilityFlag1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___outValue2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.XRNodeState::TryGetRotation(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRNodeState_TryGetRotation_mA7F9597BE3AFE747BF2F95BF491779520FEF7301 (XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// System.UInt32 UnityEngine.XR.HapticCapabilities::get_numChannels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t HapticCapabilities_get_numChannels_m23871C9860B4A1F6E22DE4579A7550A7A9382BA9 (HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.HapticCapabilities::get_supportsImpulse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HapticCapabilities_get_supportsImpulse_m855193672304BD935913E215B690B14952E0C59C (HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.HapticCapabilities::get_supportsBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HapticCapabilities_get_supportsBuffer_mE87BCD83AA4FEE3C89EE906EF2F1B6DFA9B7BA59 (HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211* __this, const RuntimeMethod* method) ;
// System.UInt32 UnityEngine.XR.HapticCapabilities::get_bufferFrequencyHz()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t HapticCapabilities_get_bufferFrequencyHz_m31270DBF2491B9FDC969D0082ABB5CF0F0DFDBAA (HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211* __this, const RuntimeMethod* method) ;
// System.UInt32 UnityEngine.XR.HapticCapabilities::get_bufferMaxSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t HapticCapabilities_get_bufferMaxSize_mAC7A86B40B716A2B9B17D4B3B26EE6B7D0346C7C (HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211* __this, const RuntimeMethod* method) ;
// System.UInt32 UnityEngine.XR.HapticCapabilities::get_bufferOptimalSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t HapticCapabilities_get_bufferOptimalSize_m166A6DD9882CD48F702FE7447E87C60AAF479407 (HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.HapticCapabilities::Equals(UnityEngine.XR.HapticCapabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HapticCapabilities_Equals_m4CD220F74171CB85C19D2CA75D3BC9933B699F0F (HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211* __this, HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211 ___other0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.HapticCapabilities::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HapticCapabilities_Equals_m87B9C608F4E14AE0052DA784111BA3FE74EF5B57 (HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Int32 System.UInt32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC (uint32_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.Boolean::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3 (bool* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.HapticCapabilities::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HapticCapabilities_GetHashCode_m7C7504CA0AADBD291E33540E08B00EFF47A2A2DB (HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.XR.InputFeatureUsage::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_get_name_mA51C7B42F66E87B3527CBD061D1E6944058FE085 (InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.InputFeatureType UnityEngine.XR.InputFeatureUsage::get_internalType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t InputFeatureUsage_get_internalType_m39EE9801AA983980676998D910C3A906191F8810 (InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.InputFeatureUsage::Equals(UnityEngine.XR.InputFeatureUsage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_Equals_m77BD3037164E49DCCFE7C912FD67B14D9A0A621D (InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599* __this, InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599 ___other0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.InputFeatureUsage::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_Equals_m490288B62FC8FB23746E66937C85D8600BC150C0 (InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.InputFeatureUsage::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputFeatureUsage_GetHashCode_m823C86783F2394534F08BF9F56F4A23656D8E34D (InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.Boolean>::.ctor(System.String)
inline void InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7 (InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637* __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637*, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_gshared)(__this, ___usageName0, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.InputTrackingState>::.ctor(System.String)
inline void InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55 (InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9* __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9*, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_m328744E659539C22CA4AE68536AB2C68C2D7EA1C_gshared)(__this, ___usageName0, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.Single>::.ctor(System.String)
inline void InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989 (InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848* __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848*, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_gshared)(__this, ___usageName0, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>::.ctor(System.String)
inline void InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A (InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C* __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C*, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_gshared)(__this, ___usageName0, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>::.ctor(System.String)
inline void InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA (InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58* __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58*, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_gshared)(__this, ___usageName0, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>::.ctor(System.String)
inline void InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08 (InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D* __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D*, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_gshared)(__this, ___usageName0, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>::.ctor(System.String)
inline void InputFeatureUsage_1__ctor_mDBC4B8D446064C4E1E9103B8235C1F69B86EE3D7 (InputFeatureUsage_1_t64C1AA42D6E8BD57C54C7E891BD79A70A0F3A170* __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t64C1AA42D6E8BD57C54C7E891BD79A70A0F3A170*, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_mDBC4B8D446064C4E1E9103B8235C1F69B86EE3D7_gshared)(__this, ___usageName0, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>::.ctor(System.String)
inline void InputFeatureUsage_1__ctor_mDC36ADDA7F02BFE95F751942E9E183934C826593 (InputFeatureUsage_1_tD3FEDCAE0D7F51C7B42182162ACE726E68166B38* __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_tD3FEDCAE0D7F51C7B42182162ACE726E68166B38*, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_mDC36ADDA7F02BFE95F751942E9E183934C826593_gshared)(__this, ___usageName0, method);
}
// System.Void UnityEngine.XR.InputDevice::.ctor(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDevice__ctor_mC7506750471891883425541E9DE3EB23D8FE4E34 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, uint64_t ___deviceId0, const RuntimeMethod* method) ;
// System.UInt64 UnityEngine.XR.InputDevice::get_deviceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t InputDevice_get_deviceId_mF3FFF56432109EF58AC2EE178FA343261E950A19 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.InputDevice::IsValidId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_IsValidId_m13527A66E7D03B0C9AA64C2FFCC4A2F3889756BB (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.InputDevices::IsDeviceValid(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevices_IsDeviceValid_m3A26291DCB7733D1538DF700E4638BE9DF9A994A (uint64_t ___deviceId0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.InputDevice::get_isValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_get_isValid_mA908CF8195CECA44FF457430AFF9198C3FEC0948 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.InputDevices::SendHapticImpulse(System.UInt64,System.UInt32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevices_SendHapticImpulse_mC965C7C6A20D28CD51EDFC5BE61E85D6505A74F7 (uint64_t ___deviceId0, uint32_t ___channel1, float ___amplitude2, float ___duration3, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.InputDevice::SendHapticImpulse(System.UInt32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_SendHapticImpulse_m7166A784508F8E0F3AE5BD88863171C7A905BC1B (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, uint32_t ___channel0, float ___amplitude1, float ___duration2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.InputDevice::CheckValidAndSetDefault<UnityEngine.XR.HapticCapabilities>(T&)
inline bool InputDevice_CheckValidAndSetDefault_TisHapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211_m934C6F6EA462958748DD322AB87BE052078B1266 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211* ___value0, const RuntimeMethod* method)
{
	return ((  bool (*) (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*, HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211*, const RuntimeMethod*))InputDevice_CheckValidAndSetDefault_TisHapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211_m934C6F6EA462958748DD322AB87BE052078B1266_gshared)(__this, ___value0, method);
}
// System.Boolean UnityEngine.XR.InputDevices::TryGetHapticCapabilities(System.UInt64,UnityEngine.XR.HapticCapabilities&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevices_TryGetHapticCapabilities_mBCEC7D1AE8C869608B3FF5D05EF2629729B91CA7 (uint64_t ___deviceId0, HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211* ___capabilities1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.InputDevice::TryGetHapticCapabilities(UnityEngine.XR.HapticCapabilities&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetHapticCapabilities_mC97EE9A231941988E8B6FA8AF0CB310EFE1B77A3 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211* ___capabilities0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.InputDevice::CheckValidAndSetDefault<System.Boolean>(T&)
inline bool InputDevice_CheckValidAndSetDefault_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mED7DBE29D514108C95BCEA0CC535A55DA2610366 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, bool* ___value0, const RuntimeMethod* method)
{
	return ((  bool (*) (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*, bool*, const RuntimeMethod*))InputDevice_CheckValidAndSetDefault_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mED7DBE29D514108C95BCEA0CC535A55DA2610366_gshared)(__this, ___value0, method);
}
// System.String UnityEngine.XR.InputFeatureUsage`1<System.Boolean>::get_name()
inline String_t* InputFeatureUsage_1_get_name_mAD647CEB75F404E53F3A175DA334818A35738080_inline (InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637*, const RuntimeMethod*))InputFeatureUsage_1_get_name_mAD647CEB75F404E53F3A175DA334818A35738080_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.InputDevices::TryGetFeatureValue_bool(System.UInt64,System.String,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevices_TryGetFeatureValue_bool_mD652BFAC63C19FFE34BA0E552A764C655402F0F2 (uint64_t ___deviceId0, String_t* ___usage1, bool* ___value2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<System.Boolean>,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___usage0, bool* ___value1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.InputDevice::CheckValidAndSetDefault<System.Single>(T&)
inline bool InputDevice_CheckValidAndSetDefault_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m291E714227B7B72A29CD867189748EA47B3990C7 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, float* ___value0, const RuntimeMethod* method)
{
	return ((  bool (*) (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*, float*, const RuntimeMethod*))InputDevice_CheckValidAndSetDefault_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m291E714227B7B72A29CD867189748EA47B3990C7_gshared)(__this, ___value0, method);
}
// System.String UnityEngine.XR.InputFeatureUsage`1<System.Single>::get_name()
inline String_t* InputFeatureUsage_1_get_name_m2B2C882E3DBE25BF025C498BF14E9FFA7F91540E_inline (InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848*, const RuntimeMethod*))InputFeatureUsage_1_get_name_m2B2C882E3DBE25BF025C498BF14E9FFA7F91540E_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.InputDevices::TryGetFeatureValue_float(System.UInt64,System.String,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevices_TryGetFeatureValue_float_m2F667629D89251CD719FF2752E644467DF5B7F7D (uint64_t ___deviceId0, String_t* ___usage1, float* ___value2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<System.Single>,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___usage0, float* ___value1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.InputDevice::CheckValidAndSetDefault<UnityEngine.Vector2>(T&)
inline bool InputDevice_CheckValidAndSetDefault_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mF1899A42AE87E04AE0FE6A7D7D92994B23389069 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___value0, const RuntimeMethod* method)
{
	return ((  bool (*) (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, const RuntimeMethod*))InputDevice_CheckValidAndSetDefault_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mF1899A42AE87E04AE0FE6A7D7D92994B23389069_gshared)(__this, ___value0, method);
}
// System.String UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>::get_name()
inline String_t* InputFeatureUsage_1_get_name_mC56C726995711932766450754FB382B2DA52E105_inline (InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C*, const RuntimeMethod*))InputFeatureUsage_1_get_name_mC56C726995711932766450754FB382B2DA52E105_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.InputDevices::TryGetFeatureValue_Vector2f(System.UInt64,System.String,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevices_TryGetFeatureValue_Vector2f_mF98BD89249A038E4D9EDA8D4E64CCEFAFB40E646 (uint64_t ___deviceId0, String_t* ___usage1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___value2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C ___usage0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___value1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.InputDevice::CheckValidAndSetDefault<UnityEngine.Vector3>(T&)
inline bool InputDevice_CheckValidAndSetDefault_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m3155C6BC58D0FF075C2D1A7CAD6E0E06BD33A00B (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___value0, const RuntimeMethod* method)
{
	return ((  bool (*) (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, const RuntimeMethod*))InputDevice_CheckValidAndSetDefault_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m3155C6BC58D0FF075C2D1A7CAD6E0E06BD33A00B_gshared)(__this, ___value0, method);
}
// System.String UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>::get_name()
inline String_t* InputFeatureUsage_1_get_name_mB74B05F127FBD54D57BFCE959683F6A5C62142C5_inline (InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58*, const RuntimeMethod*))InputFeatureUsage_1_get_name_mB74B05F127FBD54D57BFCE959683F6A5C62142C5_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.InputDevices::TryGetFeatureValue_Vector3f(System.UInt64,System.String,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevices_TryGetFeatureValue_Vector3f_m765F82CDF7B96A1F616753B9C14AF5144F71F9BB (uint64_t ___deviceId0, String_t* ___usage1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___value2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___usage0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___value1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.InputDevice::CheckValidAndSetDefault<UnityEngine.Quaternion>(T&)
inline bool InputDevice_CheckValidAndSetDefault_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m96F459B8B37D981DFB1562207C2583F5A1653D85 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___value0, const RuntimeMethod* method)
{
	return ((  bool (*) (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*, const RuntimeMethod*))InputDevice_CheckValidAndSetDefault_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m96F459B8B37D981DFB1562207C2583F5A1653D85_gshared)(__this, ___value0, method);
}
// System.String UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>::get_name()
inline String_t* InputFeatureUsage_1_get_name_m02343070D5E6423DE14E1538321C52506DEFA03F_inline (InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D*, const RuntimeMethod*))InputFeatureUsage_1_get_name_m02343070D5E6423DE14E1538321C52506DEFA03F_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.InputDevices::TryGetFeatureValue_Quaternionf(System.UInt64,System.String,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevices_TryGetFeatureValue_Quaternionf_m7E4BA3BCD07D23060BA8273A1018CD40EB41B1B4 (uint64_t ___deviceId0, String_t* ___usage1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___value2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m0C1A9761DD0D1C6D1EF4BAB2FAF1BC1A9541BB9F (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D ___usage0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___value1, const RuntimeMethod* method) ;
// System.String UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.InputTrackingState>::get_name()
inline String_t* InputFeatureUsage_1_get_name_m37097D0219AFAD926E3787B28C95F9514D188D10_inline (InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9*, const RuntimeMethod*))InputFeatureUsage_1_get_name_m42686849B1959EB8C6C2F7497EC166379A6E4F17_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.InputDevices::TryGetFeatureValue_UInt32(System.UInt64,System.String,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevices_TryGetFeatureValue_UInt32_m50BDA6D2D451E2032210DFF4CDA8FE7EDE3EE4D2 (uint64_t ___deviceId0, String_t* ___usage1, uint32_t* ___value2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.InputTrackingState>,UnityEngine.XR.InputTrackingState&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m8A01F07356DC85042F6BB7C6258A75C3EC3C4E11 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 ___usage0, uint32_t* ___value1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.InputDevice::Equals(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_Equals_mD6717F0B7B8605BB9F616947C1A3289C52ED41FC (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___other0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.InputDevice::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_Equals_m206193EDB0C7A69C0BDFC821CE87B887C7BE0CAC (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Int32 System.UInt64::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92 (uint64_t* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.InputDevice::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputDevice_GetHashCode_m4F8831F85A8646E52B12B5431BEC004AD1BAAD9D (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, const RuntimeMethod* method) ;
// System.UInt64 UnityEngine.XR.Hand::get_deviceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Hand_get_deviceId_m3FD7DC0BD8EBE55A433CBDB6F3D9486D6491714A (Hand_t67B90BC0D36CBC92DF7E38BD15463B925CB5912C* __this, const RuntimeMethod* method) ;
// System.UInt32 UnityEngine.XR.Hand::get_featureIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Hand_get_featureIndex_mD4AFCDFAEE8471B59400FF25F84328FA17229775 (Hand_t67B90BC0D36CBC92DF7E38BD15463B925CB5912C* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Hand::Equals(UnityEngine.XR.Hand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Hand_Equals_mA5FFEB3581A5E053717C0718AD68E596E801C864 (Hand_t67B90BC0D36CBC92DF7E38BD15463B925CB5912C* __this, Hand_t67B90BC0D36CBC92DF7E38BD15463B925CB5912C ___other0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Hand::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Hand_Equals_m2BEF7EF009B595519DA0ADBE1912C197CEAD2E06 (Hand_t67B90BC0D36CBC92DF7E38BD15463B925CB5912C* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.Hand::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Hand_GetHashCode_mC1EA0B4473AFA966324B32BAC552ADB9BA9D24EE (Hand_t67B90BC0D36CBC92DF7E38BD15463B925CB5912C* __this, const RuntimeMethod* method) ;
// System.UInt64 UnityEngine.XR.Eyes::get_deviceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Eyes_get_deviceId_m673FE292832DCAB360282083381923052944EBFD (Eyes_t9FD3821575977E294F11E0EB92D2A4CA509ED8C7* __this, const RuntimeMethod* method) ;
// System.UInt32 UnityEngine.XR.Eyes::get_featureIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Eyes_get_featureIndex_mC4D34E37C0C008A69E75136C501F8907BC4F2EE8 (Eyes_t9FD3821575977E294F11E0EB92D2A4CA509ED8C7* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Eyes::Equals(UnityEngine.XR.Eyes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Eyes_Equals_mE463ABC100B9BDB2790A18804BAD09FA1F289969 (Eyes_t9FD3821575977E294F11E0EB92D2A4CA509ED8C7* __this, Eyes_t9FD3821575977E294F11E0EB92D2A4CA509ED8C7 ___other0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Eyes::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Eyes_Equals_m4DC0E274FA64B59ED26E913BE0C95554476F228D (Eyes_t9FD3821575977E294F11E0EB92D2A4CA509ED8C7* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.Eyes::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Eyes_GetHashCode_m754EAF148F82A79A7DD39D5F0D294EC4ABC763C8 (Eyes_t9FD3821575977E294F11E0EB92D2A4CA509ED8C7* __this, const RuntimeMethod* method) ;
// System.UInt64 UnityEngine.XR.Bone::get_deviceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Bone_get_deviceId_mA75E5FA9A3288C5F5E4172D7632FE228487BE0F1 (Bone_t2558B1DD1E4F405EA4D76A3B8D5149CA16011975* __this, const RuntimeMethod* method) ;
// System.UInt32 UnityEngine.XR.Bone::get_featureIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Bone_get_featureIndex_mF108AEAE50FFD1B908846717BBD95C59665925BE (Bone_t2558B1DD1E4F405EA4D76A3B8D5149CA16011975* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Bone::Equals(UnityEngine.XR.Bone)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Bone_Equals_mB8585697810AA19D6DD257F9479F01993739020F (Bone_t2558B1DD1E4F405EA4D76A3B8D5149CA16011975* __this, Bone_t2558B1DD1E4F405EA4D76A3B8D5149CA16011975 ___other0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Bone::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Bone_Equals_mDC77AF51237B5937D83C048DF2734EB7162620F7 (Bone_t2558B1DD1E4F405EA4D76A3B8D5149CA16011975* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.Bone::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Bone_GetHashCode_mF14BB3AB7B7F52290CDF5D6A7C63AE11B3294F82 (Bone_t2558B1DD1E4F405EA4D76A3B8D5149CA16011975* __this, const RuntimeMethod* method) ;
// System.UInt64 UnityEngine.XR.InputTracking::GetDeviceIdAtXRNode(UnityEngine.XR.XRNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t InputTracking_GetDeviceIdAtXRNode_mF6AA8F79B81E685890712AE72FADC4D1113CDECC (int32_t ___node0, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.InputDevice>::Invoke(T)
inline void Action_1_Invoke_m711ABCFDFDF3836EE35ED7CD7E5B3FAD04EAE649_inline (Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC*, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD, const RuntimeMethod*))Action_1_Invoke_m711ABCFDFDF3836EE35ED7CD7E5B3FAD04EAE649_gshared_inline)(__this, ___obj0, method);
}
// System.Void System.Action`1<System.Boolean>::Invoke(T)
inline void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*, bool, const RuntimeMethod*))Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline)(__this, ___obj0, method);
}
// System.Void UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>::.ctor()
inline void IntegratedSubsystem_1__ctor_m0BE780FA80AAFE2DB1209D5731A5E72EFAB7051F (IntegratedSubsystem_1_t8312865F01EEA1EDE4B24A973E47ADD526616848* __this, const RuntimeMethod* method)
{
	((  void (*) (IntegratedSubsystem_1_t8312865F01EEA1EDE4B24A973E47ADD526616848*, const RuntimeMethod*))IntegratedSubsystem_1__ctor_mA130811A078A40712D15BFE67E73D0517AB0E989_gshared)(__this, method);
}
// System.Void UnityEngine.IntegratedSubsystemDescriptor`1<UnityEngine.XR.XRDisplaySubsystem>::.ctor()
inline void IntegratedSubsystemDescriptor_1__ctor_mBE55B2B969E5AEF4340234DB6B76F67C009DBB75 (IntegratedSubsystemDescriptor_1_t7261AA0914165CB589AD41C4F9B463D44E333D7C* __this, const RuntimeMethod* method)
{
	((  void (*) (IntegratedSubsystemDescriptor_1_t7261AA0914165CB589AD41C4F9B463D44E333D7C*, const RuntimeMethod*))IntegratedSubsystemDescriptor_1__ctor_m94FAA0F6D63A0144035D2645AAE00202B36BE7DC_gshared)(__this, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// UnityEngine.IntegratedSubsystem UnityEngine.SubsystemManager::GetIntegratedSubsystemByPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* SubsystemManager_GetIntegratedSubsystemByPtr_mC117FBE03DF764DB78D48B11AD5AC324F223BDE7 (intptr_t ___ptr0, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.XRInputSubsystem>::Invoke(T)
inline void Action_1_Invoke_m2ECF9A99D8C817638BD09EF00BC5CF84C03819AA_inline (Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A* __this, XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A*, XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRInputSubsystemDescriptor>::.ctor()
inline void IntegratedSubsystem_1__ctor_m5A4E8498952FD1A7C4BFF13C388548CB97B060CC (IntegratedSubsystem_1_tF93BC76362E85BDD215312162457BE510FC76D3B* __this, const RuntimeMethod* method)
{
	((  void (*) (IntegratedSubsystem_1_tF93BC76362E85BDD215312162457BE510FC76D3B*, const RuntimeMethod*))IntegratedSubsystem_1__ctor_mA130811A078A40712D15BFE67E73D0517AB0E989_gshared)(__this, method);
}
// System.Void UnityEngine.IntegratedSubsystemDescriptor`1<UnityEngine.XR.XRInputSubsystem>::.ctor()
inline void IntegratedSubsystemDescriptor_1__ctor_m1289BA32AAFA862973132927F7EA8FB1A9A169C3 (IntegratedSubsystemDescriptor_1_t440D086A98F968B9FC279854F552698F319A32F7* __this, const RuntimeMethod* method)
{
	((  void (*) (IntegratedSubsystemDescriptor_1_t440D086A98F968B9FC279854F552698F319A32F7*, const RuntimeMethod*))IntegratedSubsystemDescriptor_1__ctor_m94FAA0F6D63A0144035D2645AAE00202B36BE7DC_gshared)(__this, method);
}
// System.String System.UInt64::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680 (uint64_t* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.String UnityEngine.XR.MeshId::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MeshId_ToString_m8D2D9206A924A86FF28CF6499B7C66941FD0E7D4 (MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.MeshId::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MeshId_GetHashCode_mC6B6428EB5856505023C0D48879B92C2E3F062B0 (MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.MeshId::Equals(UnityEngine.XR.MeshId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MeshId_Equals_m3D0AC754FDC327819342797C38CF20C5F3D25818 (MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC* __this, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___other0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.MeshId::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MeshId_Equals_m1106B9A800E87442FE36125FD3EC3CB12FD778E9 (MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.HashCodeHelper::Combine(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCodeHelper_Combine_m2A63E4964D06338CC6F9DE17F5EFCCC348A6A1D7 (int32_t ___hash10, int32_t ___hash21, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.HashCodeHelper::Combine(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCodeHelper_Combine_mEDE733EC1ABDEA82040BBC18551FB975F3FAC322 (int32_t ___hash10, int32_t ___hash21, int32_t ___hash32, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.HashCodeHelper::Combine(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCodeHelper_Combine_mF867D2FAB545AD0A4832679FC73F7A2B289A37F7 (int32_t ___hash10, int32_t ___hash21, int32_t ___hash32, int32_t ___hash43, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.HashCodeHelper::Combine(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCodeHelper_Combine_mBE52BFDECDDA219A4A334421E8706078A4BE6680 (int32_t ___hash10, int32_t ___hash21, int32_t ___hash32, int32_t ___hash43, int32_t ___hash54, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.HashCodeHelper::Combine(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCodeHelper_Combine_m429AA1346C5A7ACFA6EC9A5D26250CEA4A1BAF89 (int32_t ___hash10, int32_t ___hash21, int32_t ___hash32, int32_t ___hash43, int32_t ___hash54, int32_t ___hash65, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.HashCodeHelper::Combine(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCodeHelper_Combine_m110C54CCBA83DD580295D7BA248976C50F6BF606 (int32_t ___hash10, int32_t ___hash21, int32_t ___hash32, int32_t ___hash43, int32_t ___hash54, int32_t ___hash65, int32_t ___hash76, const RuntimeMethod* method) ;
// UnityEngine.XR.MeshId UnityEngine.XR.MeshGenerationResult::get_MeshId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC MeshGenerationResult_get_MeshId_m2260BF3F7EB6ED4F2CF0A8F6BEFDD2CD82B6751D_inline (MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C* __this, const RuntimeMethod* method) ;
// UnityEngine.Mesh UnityEngine.XR.MeshGenerationResult::get_Mesh()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* MeshGenerationResult_get_Mesh_m95A022CCC5DDD8D0E8B9CEB3A2D3E06A0E7210F9_inline (MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C* __this, const RuntimeMethod* method) ;
// UnityEngine.MeshCollider UnityEngine.XR.MeshGenerationResult::get_MeshCollider()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* MeshGenerationResult_get_MeshCollider_m07210E3B1723B5BA535250E2012755AAC46FB180_inline (MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.MeshGenerationStatus UnityEngine.XR.MeshGenerationResult::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MeshGenerationResult_get_Status_m392754927B1E28DB2E6078A212F8FCC013AC10C0_inline (MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.MeshVertexAttributes UnityEngine.XR.MeshGenerationResult::get_Attributes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MeshGenerationResult_get_Attributes_m62E3E9EC74240C37D818481B1243B3EB40424C6B_inline (MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.XR.MeshGenerationResult::get_Position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MeshGenerationResult_get_Position_m72AE25CA3412AE3C653251095067B496CEC1617F_inline (MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.XR.MeshGenerationResult::get_Rotation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 MeshGenerationResult_get_Rotation_mC27F07EC357E8B3EED94DBEE5365B33154941EE3_inline (MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.XR.MeshGenerationResult::get_Scale()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MeshGenerationResult_get_Scale_mA3CEB3EA848509F5B1A5525F40A45AA9CB8BD5D3_inline (MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.MeshGenerationResult::Equals(UnityEngine.XR.MeshGenerationResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MeshGenerationResult_Equals_mE32D058EBA520E8CC77A08119D82AE735CE0ACAC (MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C* __this, MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C ___other0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.MeshGenerationResult::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MeshGenerationResult_Equals_m7A6C6A94553E313F74FB2B44326CF32FC94E122F (MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::Equals(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___other0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Quaternion::Equals(UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_Equals_m25B95D8412B79CC7F8B34062BFAE662BD99578BE_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___other0, const RuntimeMethod* method) ;
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector3::GetHashCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3_GetHashCode_mB08429DC931A85BD29CE11B9ABC77DE7E0E46327_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Quaternion::GetHashCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Quaternion_GetHashCode_m5F55C34C98E437376595E722BE4EB8A70434F049_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.HashCodeHelper::Combine(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCodeHelper_Combine_mBF383AC565B49ACFCB9A0046504C40A8997BAEFD (int32_t ___hash10, int32_t ___hash21, int32_t ___hash32, int32_t ___hash43, int32_t ___hash54, int32_t ___hash65, int32_t ___hash76, int32_t ___hash87, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.MeshGenerationResult::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MeshGenerationResult_GetHashCode_mA542C935FE2ABB8EC0A3CE001267176095F7DCBC (MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.MeshGenerationResult>::Invoke(T)
inline void Action_1_Invoke_mE959103AFF340DAE4FFA216861988A12A1F3C805_inline (Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8* __this, MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8*, MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C, const RuntimeMethod*))Action_1_Invoke_mE959103AFF340DAE4FFA216861988A12A1F3C805_gshared_inline)(__this, ___obj0, method);
}
// System.Void UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRMeshSubsystemDescriptor>::.ctor()
inline void IntegratedSubsystem_1__ctor_m994BCD28C1C5A54986AB4DDA38E2578381CCA171 (IntegratedSubsystem_1_t3AB3A9BAB10A4D1420E63EEA50D40FEE65F41C03* __this, const RuntimeMethod* method)
{
	((  void (*) (IntegratedSubsystem_1_t3AB3A9BAB10A4D1420E63EEA50D40FEE65F41C03*, const RuntimeMethod*))IntegratedSubsystem_1__ctor_mA130811A078A40712D15BFE67E73D0517AB0E989_gshared)(__this, method);
}
// System.Void UnityEngine.XR.XRMeshSubsystem/MeshTransformList::Dispose(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshTransformList_Dispose_m7655ACDE6BC605B30EF2BC387A7B9D0F4D9EED19 (intptr_t ___self0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.XRMeshSubsystem/MeshTransformList::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshTransformList_Dispose_m0F0B77B84E50F02EB1A48751831808F9C69E0636 (MeshTransformList_t761D725D4B30CFD7DDF57B3725004994FB3B561F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.IntegratedSubsystemDescriptor`1<UnityEngine.XR.XRMeshSubsystem>::.ctor()
inline void IntegratedSubsystemDescriptor_1__ctor_mF4354B29EF84B06E68C05D657260B044B123087C (IntegratedSubsystemDescriptor_1_tBFE1680F4FA360D4E9AB19FDE2CCBD959E436513* __this, const RuntimeMethod* method)
{
	((  void (*) (IntegratedSubsystemDescriptor_1_tBFE1680F4FA360D4E9AB19FDE2CCBD959E436513*, const RuntimeMethod*))IntegratedSubsystemDescriptor_1__ctor_m94FAA0F6D63A0144035D2645AAE00202B36BE7DC_gshared)(__this, method);
}
// System.Boolean System.Single::Equals(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9 (float* __this, float ___obj0, const RuntimeMethod* method) ;
// System.Int32 System.Single::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2 (float* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_m3FF623BFEE0DB7F6FD99E1EAFE20C5581224D314 (EmbeddedAttribute_tE12941E90BE7D41A61A8FF0507EC86D12F1C2ACC* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_m7C0ECD764E09B041BA7629AC5C020D9972AC8697 (IsReadOnlyAttribute_t2C6085B49D0BEB030B26D149806E40189CACCA6F* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.InputTracking::InvokeTrackingEvent(UnityEngine.XR.InputTracking/TrackingStateEventType,UnityEngine.XR.XRNode,System.Int64,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputTracking_InvokeTrackingEvent_mA218CBE5D81A639B9C9A084A5360FEAD4625C42C (int32_t ___eventType0, int32_t ___nodeType1, int64_t ___uniqueID2, bool ___tracked3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputTracking_tA4F34D4D5EC8E560B56ED295177C040D9C9815F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t290119641EBA3C1EAC8AF78274C63CE01C3046D8* V_0 = NULL;
	XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		V_0 = (Action_1_t290119641EBA3C1EAC8AF78274C63CE01C3046D8*)NULL;
		il2cpp_codegen_initobj((&V_1), sizeof(XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A));
		int64_t L_0 = ___uniqueID2;
		XRNodeState_set_uniqueID_m1C42BE763CEB5BE66EECE54288DE28D30CCB085F((&V_1), L_0, NULL);
		int32_t L_1 = ___nodeType1;
		XRNodeState_set_nodeType_m17D747D9C558277596BD29F59FD8FDEE1A892FF4((&V_1), L_1, NULL);
		bool L_2 = ___tracked3;
		XRNodeState_set_tracked_m5B448272E0E14001A16A150EE7B602ADE1D85A45((&V_1), L_2, NULL);
		int32_t L_3 = ___eventType0;
		V_3 = L_3;
		int32_t L_4 = V_3;
		V_2 = L_4;
		int32_t L_5 = V_2;
		switch (L_5)
		{
			case 0:
			{
				goto IL_0052;
			}
			case 1:
			{
				goto IL_005a;
			}
			case 2:
			{
				goto IL_0042;
			}
			case 3:
			{
				goto IL_004a;
			}
		}
	}
	{
		goto IL_0062;
	}

IL_0042:
	{
		Action_1_t290119641EBA3C1EAC8AF78274C63CE01C3046D8* L_6 = ((InputTracking_tA4F34D4D5EC8E560B56ED295177C040D9C9815F1_StaticFields*)il2cpp_codegen_static_fields_for(InputTracking_tA4F34D4D5EC8E560B56ED295177C040D9C9815F1_il2cpp_TypeInfo_var))->___trackingAcquired_0;
		V_0 = L_6;
		goto IL_007f;
	}

IL_004a:
	{
		Action_1_t290119641EBA3C1EAC8AF78274C63CE01C3046D8* L_7 = ((InputTracking_tA4F34D4D5EC8E560B56ED295177C040D9C9815F1_StaticFields*)il2cpp_codegen_static_fields_for(InputTracking_tA4F34D4D5EC8E560B56ED295177C040D9C9815F1_il2cpp_TypeInfo_var))->___trackingLost_1;
		V_0 = L_7;
		goto IL_007f;
	}

IL_0052:
	{
		Action_1_t290119641EBA3C1EAC8AF78274C63CE01C3046D8* L_8 = ((InputTracking_tA4F34D4D5EC8E560B56ED295177C040D9C9815F1_StaticFields*)il2cpp_codegen_static_fields_for(InputTracking_tA4F34D4D5EC8E560B56ED295177C040D9C9815F1_il2cpp_TypeInfo_var))->___nodeAdded_2;
		V_0 = L_8;
		goto IL_007f;
	}

IL_005a:
	{
		Action_1_t290119641EBA3C1EAC8AF78274C63CE01C3046D8* L_9 = ((InputTracking_tA4F34D4D5EC8E560B56ED295177C040D9C9815F1_StaticFields*)il2cpp_codegen_static_fields_for(InputTracking_tA4F34D4D5EC8E560B56ED295177C040D9C9815F1_il2cpp_TypeInfo_var))->___nodeRemoved_3;
		V_0 = L_9;
		goto IL_007f;
	}

IL_0062:
	{
		Il2CppFakeBox<int32_t> L_10(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TrackingStateEventType_tB20EB5D5E27ACC8D551C965C01143C58A99AAC3F_il2cpp_TypeInfo_var)), (&___eventType0));
		String_t* L_11;
		L_11 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_10), NULL);
		String_t* L_12;
		L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF953F17BB91EBF78300169DEE55CE060B4F1C569)), L_11, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InputTracking_InvokeTrackingEvent_mA218CBE5D81A639B9C9A084A5360FEAD4625C42C_RuntimeMethod_var)));
	}

IL_007f:
	{
		Action_1_t290119641EBA3C1EAC8AF78274C63CE01C3046D8* L_14 = V_0;
		V_4 = (bool)((!(((RuntimeObject*)(Action_1_t290119641EBA3C1EAC8AF78274C63CE01C3046D8*)L_14) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0093;
		}
	}
	{
		Action_1_t290119641EBA3C1EAC8AF78274C63CE01C3046D8* L_16 = V_0;
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A L_17 = V_1;
		NullCheck(L_16);
		Action_1_Invoke_m0D1DB9EA639FC121D071208CB0B6240B4E12B7CC_inline(L_16, L_17, NULL);
	}

IL_0093:
	{
		return;
	}
}
// System.Void UnityEngine.XR.InputTracking::GetNodeStates(System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputTracking_GetNodeStates_mA2E8D154A47C817ED74AD42F6B38A9C906A57A67 (List_1_t8AE5A65CCFBC753343962D38B82C801F7BDE3C87* ___nodeStates0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m81D40B541187099D5EDD207395C9FC477BADEF03_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		List_1_t8AE5A65CCFBC753343962D38B82C801F7BDE3C87* L_0 = ___nodeStates0;
		V_0 = (bool)((((RuntimeObject*)(List_1_t8AE5A65CCFBC753343962D38B82C801F7BDE3C87*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC7F8151EEA0D66BB2B72D6025CBD04BE6673ED7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InputTracking_GetNodeStates_mA2E8D154A47C817ED74AD42F6B38A9C906A57A67_RuntimeMethod_var)));
	}

IL_0014:
	{
		List_1_t8AE5A65CCFBC753343962D38B82C801F7BDE3C87* L_3 = ___nodeStates0;
		NullCheck(L_3);
		List_1_Clear_m81D40B541187099D5EDD207395C9FC477BADEF03_inline(L_3, List_1_Clear_m81D40B541187099D5EDD207395C9FC477BADEF03_RuntimeMethod_var);
		List_1_t8AE5A65CCFBC753343962D38B82C801F7BDE3C87* L_4 = ___nodeStates0;
		InputTracking_GetNodeStates_Internal_m6E67CE5EC9C950ED633AEC42F8BD5B15EFE3B916(L_4, NULL);
		return;
	}
}
// System.Void UnityEngine.XR.InputTracking::GetNodeStates_Internal(System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputTracking_GetNodeStates_Internal_m6E67CE5EC9C950ED633AEC42F8BD5B15EFE3B916 (List_1_t8AE5A65CCFBC753343962D38B82C801F7BDE3C87* ___nodeStates0, const RuntimeMethod* method) 
{
	typedef void (*InputTracking_GetNodeStates_Internal_m6E67CE5EC9C950ED633AEC42F8BD5B15EFE3B916_ftn) (List_1_t8AE5A65CCFBC753343962D38B82C801F7BDE3C87*);
	static InputTracking_GetNodeStates_Internal_m6E67CE5EC9C950ED633AEC42F8BD5B15EFE3B916_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (InputTracking_GetNodeStates_Internal_m6E67CE5EC9C950ED633AEC42F8BD5B15EFE3B916_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.InputTracking::GetNodeStates_Internal(System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>)");
	_il2cpp_icall_func(___nodeStates0);
}
// System.UInt64 UnityEngine.XR.InputTracking::GetDeviceIdAtXRNode(UnityEngine.XR.XRNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t InputTracking_GetDeviceIdAtXRNode_mF6AA8F79B81E685890712AE72FADC4D1113CDECC (int32_t ___node0, const RuntimeMethod* method) 
{
	typedef uint64_t (*InputTracking_GetDeviceIdAtXRNode_mF6AA8F79B81E685890712AE72FADC4D1113CDECC_ftn) (int32_t);
	static InputTracking_GetDeviceIdAtXRNode_mF6AA8F79B81E685890712AE72FADC4D1113CDECC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (InputTracking_GetDeviceIdAtXRNode_mF6AA8F79B81E685890712AE72FADC4D1113CDECC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.InputTracking::GetDeviceIdAtXRNode(UnityEngine.XR.XRNode)");
	uint64_t icallRetVal = _il2cpp_icall_func(___node0);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.XRNodeState::set_uniqueID(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRNodeState_set_uniqueID_m1C42BE763CEB5BE66EECE54288DE28D30CCB085F (XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* __this, uint64_t ___value0, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___value0;
		__this->___m_UniqueID_9 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void XRNodeState_set_uniqueID_m1C42BE763CEB5BE66EECE54288DE28D30CCB085F_AdjustorThunk (RuntimeObject* __this, uint64_t ___value0, const RuntimeMethod* method)
{
	XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A*>(__this + _offset);
	XRNodeState_set_uniqueID_m1C42BE763CEB5BE66EECE54288DE28D30CCB085F(_thisAdjusted, ___value0, method);
}
// UnityEngine.XR.XRNode UnityEngine.XR.XRNodeState::get_nodeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRNodeState_get_nodeType_mFC49286B25FF7732CE6CAF231A1DE5C083C13932 (XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Type_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t XRNodeState_get_nodeType_mFC49286B25FF7732CE6CAF231A1DE5C083C13932_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XRNodeState_get_nodeType_mFC49286B25FF7732CE6CAF231A1DE5C083C13932(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.XRNodeState::set_nodeType(UnityEngine.XR.XRNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRNodeState_set_nodeType_m17D747D9C558277596BD29F59FD8FDEE1A892FF4 (XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___m_Type_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void XRNodeState_set_nodeType_m17D747D9C558277596BD29F59FD8FDEE1A892FF4_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A*>(__this + _offset);
	XRNodeState_set_nodeType_m17D747D9C558277596BD29F59FD8FDEE1A892FF4(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.XRNodeState::set_tracked(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRNodeState_set_tracked_m5B448272E0E14001A16A150EE7B602ADE1D85A45 (XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* __this, bool ___value0, const RuntimeMethod* method) 
{
	XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* G_B2_0 = NULL;
	XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* G_B3_1 = NULL;
	{
		bool L_0 = ___value0;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0008;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0009;
	}

IL_0008:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0009:
	{
		G_B3_1->___m_Tracked_8 = G_B3_0;
		return;
	}
}
IL2CPP_EXTERN_C  void XRNodeState_set_tracked_m5B448272E0E14001A16A150EE7B602ADE1D85A45_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A*>(__this + _offset);
	XRNodeState_set_tracked_m5B448272E0E14001A16A150EE7B602ADE1D85A45(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.XRNodeState::TryGetPosition(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRNodeState_TryGetPosition_mC17C5DFEEA4062A6D91D7E252DD108829AC4E0A6 (XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___position0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_Position_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = ___position0;
		bool L_2;
		L_2 = XRNodeState_TryGet_m6C1D3FC5E773BC5E134F37815FB08839489F5630(__this, L_0, 1, L_1, NULL);
		V_0 = L_2;
		goto IL_0012;
	}

IL_0012:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool XRNodeState_TryGetPosition_mC17C5DFEEA4062A6D91D7E252DD108829AC4E0A6_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___position0, const RuntimeMethod* method)
{
	XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A*>(__this + _offset);
	bool _returnValue;
	_returnValue = XRNodeState_TryGetPosition_mC17C5DFEEA4062A6D91D7E252DD108829AC4E0A6(_thisAdjusted, ___position0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.XRNodeState::TryGetRotation(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRNodeState_TryGetRotation_mA7F9597BE3AFE747BF2F95BF491779520FEF7301 (XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___rotation0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->___m_Rotation_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_1 = ___rotation0;
		bool L_2;
		L_2 = XRNodeState_TryGet_m3EC1CBB3B6B823611B82073139949C041CE7C616(__this, L_0, 2, L_1, NULL);
		V_0 = L_2;
		goto IL_0012;
	}

IL_0012:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool XRNodeState_TryGetRotation_mA7F9597BE3AFE747BF2F95BF491779520FEF7301_AdjustorThunk (RuntimeObject* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___rotation0, const RuntimeMethod* method)
{
	XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A*>(__this + _offset);
	bool _returnValue;
	_returnValue = XRNodeState_TryGetRotation_mA7F9597BE3AFE747BF2F95BF491779520FEF7301(_thisAdjusted, ___rotation0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.XRNodeState::TryGet(UnityEngine.Vector3,UnityEngine.XR.AvailableTrackingData,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRNodeState_TryGet_m6C1D3FC5E773BC5E134F37815FB08839489F5630 (XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___inValue0, int32_t ___availabilityFlag1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___outValue2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		int32_t L_0 = __this->___m_AvailableFields_1;
		int32_t L_1 = ___availabilityFlag1;
		V_0 = (bool)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)L_1))) > ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = ___outValue2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___inValue0;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_3 = L_4;
		V_1 = (bool)1;
		goto IL_002c;
	}

IL_001c:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = ___outValue2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_5 = L_6;
		V_1 = (bool)0;
		goto IL_002c;
	}

IL_002c:
	{
		bool L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C  bool XRNodeState_TryGet_m6C1D3FC5E773BC5E134F37815FB08839489F5630_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___inValue0, int32_t ___availabilityFlag1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___outValue2, const RuntimeMethod* method)
{
	XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A*>(__this + _offset);
	bool _returnValue;
	_returnValue = XRNodeState_TryGet_m6C1D3FC5E773BC5E134F37815FB08839489F5630(_thisAdjusted, ___inValue0, ___availabilityFlag1, ___outValue2, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.XRNodeState::TryGet(UnityEngine.Quaternion,UnityEngine.XR.AvailableTrackingData,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRNodeState_TryGet_m3EC1CBB3B6B823611B82073139949C041CE7C616 (XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___inValue0, int32_t ___availabilityFlag1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___outValue2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		int32_t L_0 = __this->___m_AvailableFields_1;
		int32_t L_1 = ___availabilityFlag1;
		V_0 = (bool)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)L_1))) > ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_3 = ___outValue2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___inValue0;
		*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)L_3 = L_4;
		V_1 = (bool)1;
		goto IL_002c;
	}

IL_001c:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_5 = ___outValue2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)L_5 = L_6;
		V_1 = (bool)0;
		goto IL_002c;
	}

IL_002c:
	{
		bool L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C  bool XRNodeState_TryGet_m3EC1CBB3B6B823611B82073139949C041CE7C616_AdjustorThunk (RuntimeObject* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___inValue0, int32_t ___availabilityFlag1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___outValue2, const RuntimeMethod* method)
{
	XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A*>(__this + _offset);
	bool _returnValue;
	_returnValue = XRNodeState_TryGet_m3EC1CBB3B6B823611B82073139949C041CE7C616(_thisAdjusted, ___inValue0, ___availabilityFlag1, ___outValue2, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.XR.HapticCapabilities
IL2CPP_EXTERN_C void HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211_marshal_pinvoke(const HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211& unmarshaled, HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211_marshaled_pinvoke& marshaled)
{
	marshaled.___m_NumChannels_0 = unmarshaled.___m_NumChannels_0;
	marshaled.___m_SupportsImpulse_1 = static_cast<int32_t>(unmarshaled.___m_SupportsImpulse_1);
	marshaled.___m_SupportsBuffer_2 = static_cast<int32_t>(unmarshaled.___m_SupportsBuffer_2);
	marshaled.___m_BufferFrequencyHz_3 = unmarshaled.___m_BufferFrequencyHz_3;
	marshaled.___m_BufferMaxSize_4 = unmarshaled.___m_BufferMaxSize_4;
	marshaled.___m_BufferOptimalSize_5 = unmarshaled.___m_BufferOptimalSize_5;
}
IL2CPP_EXTERN_C void HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211_marshal_pinvoke_back(const HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211_marshaled_pinvoke& marshaled, HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211& unmarshaled)
{
	uint32_t unmarshaledm_NumChannels_temp_0 = 0;
	unmarshaledm_NumChannels_temp_0 = marshaled.___m_NumChannels_0;
	unmarshaled.___m_NumChannels_0 = unmarshaledm_NumChannels_temp_0;
	bool unmarshaledm_SupportsImpulse_temp_1 = false;
	unmarshaledm_SupportsImpulse_temp_1 = static_cast<bool>(marshaled.___m_SupportsImpulse_1);
	unmarshaled.___m_SupportsImpulse_1 = unmarshaledm_SupportsImpulse_temp_1;
	bool unmarshaledm_SupportsBuffer_temp_2 = false;
	unmarshaledm_SupportsBuffer_temp_2 = static_cast<bool>(marshaled.___m_SupportsBuffer_2);
	unmarshaled.___m_SupportsBuffer_2 = unmarshaledm_SupportsBuffer_temp_2;
	uint32_t unmarshaledm_BufferFrequencyHz_temp_3 = 0;
	unmarshaledm_BufferFrequencyHz_temp_3 = marshaled.___m_BufferFrequencyHz_3;
	unmarshaled.___m_BufferFrequencyHz_3 = unmarshaledm_BufferFrequencyHz_temp_3;
	uint32_t unmarshaledm_BufferMaxSize_temp_4 = 0;
	unmarshaledm_BufferMaxSize_temp_4 = marshaled.___m_BufferMaxSize_4;
	unmarshaled.___m_BufferMaxSize_4 = unmarshaledm_BufferMaxSize_temp_4;
	uint32_t unmarshaledm_BufferOptimalSize_temp_5 = 0;
	unmarshaledm_BufferOptimalSize_temp_5 = marshaled.___m_BufferOptimalSize_5;
	unmarshaled.___m_BufferOptimalSize_5 = unmarshaledm_BufferOptimalSize_temp_5;
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.HapticCapabilities
IL2CPP_EXTERN_C void HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211_marshal_pinvoke_cleanup(HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.HapticCapabilities
IL2CPP_EXTERN_C void HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211_marshal_com(const HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211& unmarshaled, HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211_marshaled_com& marshaled)
{
	marshaled.___m_NumChannels_0 = unmarshaled.___m_NumChannels_0;
	marshaled.___m_SupportsImpulse_1 = static_cast<int32_t>(unmarshaled.___m_SupportsImpulse_1);
	marshaled.___m_SupportsBuffer_2 = static_cast<int32_t>(unmarshaled.___m_SupportsBuffer_2);
	marshaled.___m_BufferFrequencyHz_3 = unmarshaled.___m_BufferFrequencyHz_3;
	marshaled.___m_BufferMaxSize_4 = unmarshaled.___m_BufferMaxSize_4;
	marshaled.___m_BufferOptimalSize_5 = unmarshaled.___m_BufferOptimalSize_5;
}
IL2CPP_EXTERN_C void HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211_marshal_com_back(const HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211_marshaled_com& marshaled, HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211& unmarshaled)
{
	uint32_t unmarshaledm_NumChannels_temp_0 = 0;
	unmarshaledm_NumChannels_temp_0 = marshaled.___m_NumChannels_0;
	unmarshaled.___m_NumChannels_0 = unmarshaledm_NumChannels_temp_0;
	bool unmarshaledm_SupportsImpulse_temp_1 = false;
	unmarshaledm_SupportsImpulse_temp_1 = static_cast<bool>(marshaled.___m_SupportsImpulse_1);
	unmarshaled.___m_SupportsImpulse_1 = unmarshaledm_SupportsImpulse_temp_1;
	bool unmarshaledm_SupportsBuffer_temp_2 = false;
	unmarshaledm_SupportsBuffer_temp_2 = static_cast<bool>(marshaled.___m_SupportsBuffer_2);
	unmarshaled.___m_SupportsBuffer_2 = unmarshaledm_SupportsBuffer_temp_2;
	uint32_t unmarshaledm_BufferFrequencyHz_temp_3 = 0;
	unmarshaledm_BufferFrequencyHz_temp_3 = marshaled.___m_BufferFrequencyHz_3;
	unmarshaled.___m_BufferFrequencyHz_3 = unmarshaledm_BufferFrequencyHz_temp_3;
	uint32_t unmarshaledm_BufferMaxSize_temp_4 = 0;
	unmarshaledm_BufferMaxSize_temp_4 = marshaled.___m_BufferMaxSize_4;
	unmarshaled.___m_BufferMaxSize_4 = unmarshaledm_BufferMaxSize_temp_4;
	uint32_t unmarshaledm_BufferOptimalSize_temp_5 = 0;
	unmarshaledm_BufferOptimalSize_temp_5 = marshaled.___m_BufferOptimalSize_5;
	unmarshaled.___m_BufferOptimalSize_5 = unmarshaledm_BufferOptimalSize_temp_5;
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.HapticCapabilities
IL2CPP_EXTERN_C void HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211_marshal_com_cleanup(HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211_marshaled_com& marshaled)
{
}
// System.UInt32 UnityEngine.XR.HapticCapabilities::get_numChannels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t HapticCapabilities_get_numChannels_m23871C9860B4A1F6E22DE4579A7550A7A9382BA9 (HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->___m_NumChannels_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  uint32_t HapticCapabilities_get_numChannels_m23871C9860B4A1F6E22DE4579A7550A7A9382BA9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211*>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = HapticCapabilities_get_numChannels_m23871C9860B4A1F6E22DE4579A7550A7A9382BA9(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.HapticCapabilities::get_supportsImpulse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HapticCapabilities_get_supportsImpulse_m855193672304BD935913E215B690B14952E0C59C (HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0 = __this->___m_SupportsImpulse_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool HapticCapabilities_get_supportsImpulse_m855193672304BD935913E215B690B14952E0C59C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211*>(__this + _offset);
	bool _returnValue;
	_returnValue = HapticCapabilities_get_supportsImpulse_m855193672304BD935913E215B690B14952E0C59C(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.HapticCapabilities::get_supportsBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HapticCapabilities_get_supportsBuffer_mE87BCD83AA4FEE3C89EE906EF2F1B6DFA9B7BA59 (HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0 = __this->___m_SupportsBuffer_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool HapticCapabilities_get_supportsBuffer_mE87BCD83AA4FEE3C89EE906EF2F1B6DFA9B7BA59_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211*>(__this + _offset);
	bool _returnValue;
	_returnValue = HapticCapabilities_get_supportsBuffer_mE87BCD83AA4FEE3C89EE906EF2F1B6DFA9B7BA59(_thisAdjusted, method);
	return _returnValue;
}
// System.UInt32 UnityEngine.XR.HapticCapabilities::get_bufferFrequencyHz()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t HapticCapabilities_get_bufferFrequencyHz_m31270DBF2491B9FDC969D0082ABB5CF0F0DFDBAA (HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->___m_BufferFrequencyHz_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  uint32_t HapticCapabilities_get_bufferFrequencyHz_m31270DBF2491B9FDC969D0082ABB5CF0F0DFDBAA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211*>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = HapticCapabilities_get_bufferFrequencyHz_m31270DBF2491B9FDC969D0082ABB5CF0F0DFDBAA(_thisAdjusted, method);
	return _returnValue;
}
// System.UInt32 UnityEngine.XR.HapticCapabilities::get_bufferMaxSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t HapticCapabilities_get_bufferMaxSize_mAC7A86B40B716A2B9B17D4B3B26EE6B7D0346C7C (HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->___m_BufferMaxSize_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  uint32_t HapticCapabilities_get_bufferMaxSize_mAC7A86B40B716A2B9B17D4B3B26EE6B7D0346C7C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211*>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = HapticCapabilities_get_bufferMaxSize_mAC7A86B40B716A2B9B17D4B3B26EE6B7D0346C7C(_thisAdjusted, method);
	return _returnValue;
}
// System.UInt32 UnityEngine.XR.HapticCapabilities::get_bufferOptimalSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t HapticCapabilities_get_bufferOptimalSize_m166A6DD9882CD48F702FE7447E87C60AAF479407 (HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->___m_BufferOptimalSize_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  uint32_t HapticCapabilities_get_bufferOptimalSize_m166A6DD9882CD48F702FE7447E87C60AAF479407_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211*>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = HapticCapabilities_get_bufferOptimalSize_m166A6DD9882CD48F702FE7447E87C60AAF479407(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.HapticCapabilities::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HapticCapabilities_Equals_m87B9C608F4E14AE0052DA784111BA3FE74EF5B57 (HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___obj0;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___obj0;
		bool L_3;
		L_3 = HapticCapabilities_Equals_m4CD220F74171CB85C19D2CA75D3BC9933B699F0F(__this, ((*(HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211*)((HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211*)(HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211*)UnBox(L_2, HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211_il2cpp_TypeInfo_var)))), NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool HapticCapabilities_Equals_m87B9C608F4E14AE0052DA784111BA3FE74EF5B57_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211*>(__this + _offset);
	bool _returnValue;
	_returnValue = HapticCapabilities_Equals_m87B9C608F4E14AE0052DA784111BA3FE74EF5B57(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.HapticCapabilities::Equals(UnityEngine.XR.HapticCapabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HapticCapabilities_Equals_m4CD220F74171CB85C19D2CA75D3BC9933B699F0F (HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211* __this, HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211 ___other0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B7_0 = 0;
	{
		uint32_t L_0;
		L_0 = HapticCapabilities_get_numChannels_m23871C9860B4A1F6E22DE4579A7550A7A9382BA9(__this, NULL);
		uint32_t L_1;
		L_1 = HapticCapabilities_get_numChannels_m23871C9860B4A1F6E22DE4579A7550A7A9382BA9((&___other0), NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_005d;
		}
	}
	{
		bool L_2;
		L_2 = HapticCapabilities_get_supportsImpulse_m855193672304BD935913E215B690B14952E0C59C(__this, NULL);
		bool L_3;
		L_3 = HapticCapabilities_get_supportsImpulse_m855193672304BD935913E215B690B14952E0C59C((&___other0), NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_005d;
		}
	}
	{
		bool L_4;
		L_4 = HapticCapabilities_get_supportsBuffer_mE87BCD83AA4FEE3C89EE906EF2F1B6DFA9B7BA59(__this, NULL);
		bool L_5;
		L_5 = HapticCapabilities_get_supportsBuffer_mE87BCD83AA4FEE3C89EE906EF2F1B6DFA9B7BA59((&___other0), NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_005d;
		}
	}
	{
		uint32_t L_6;
		L_6 = HapticCapabilities_get_bufferFrequencyHz_m31270DBF2491B9FDC969D0082ABB5CF0F0DFDBAA(__this, NULL);
		uint32_t L_7;
		L_7 = HapticCapabilities_get_bufferFrequencyHz_m31270DBF2491B9FDC969D0082ABB5CF0F0DFDBAA((&___other0), NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_005d;
		}
	}
	{
		uint32_t L_8;
		L_8 = HapticCapabilities_get_bufferMaxSize_mAC7A86B40B716A2B9B17D4B3B26EE6B7D0346C7C(__this, NULL);
		uint32_t L_9;
		L_9 = HapticCapabilities_get_bufferMaxSize_mAC7A86B40B716A2B9B17D4B3B26EE6B7D0346C7C((&___other0), NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_005d;
		}
	}
	{
		uint32_t L_10;
		L_10 = HapticCapabilities_get_bufferOptimalSize_m166A6DD9882CD48F702FE7447E87C60AAF479407(__this, NULL);
		uint32_t L_11;
		L_11 = HapticCapabilities_get_bufferOptimalSize_m166A6DD9882CD48F702FE7447E87C60AAF479407((&___other0), NULL);
		G_B7_0 = ((((int32_t)L_10) == ((int32_t)L_11))? 1 : 0);
		goto IL_005e;
	}

IL_005d:
	{
		G_B7_0 = 0;
	}

IL_005e:
	{
		V_0 = (bool)G_B7_0;
		goto IL_0061;
	}

IL_0061:
	{
		bool L_12 = V_0;
		return L_12;
	}
}
IL2CPP_EXTERN_C  bool HapticCapabilities_Equals_m4CD220F74171CB85C19D2CA75D3BC9933B699F0F_AdjustorThunk (RuntimeObject* __this, HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211 ___other0, const RuntimeMethod* method)
{
	HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211*>(__this + _offset);
	bool _returnValue;
	_returnValue = HapticCapabilities_Equals_m4CD220F74171CB85C19D2CA75D3BC9933B699F0F(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.HapticCapabilities::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HapticCapabilities_GetHashCode_m7C7504CA0AADBD291E33540E08B00EFF47A2A2DB (HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		uint32_t L_0;
		L_0 = HapticCapabilities_get_numChannels_m23871C9860B4A1F6E22DE4579A7550A7A9382BA9(__this, NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((&V_0), NULL);
		bool L_2;
		L_2 = HapticCapabilities_get_supportsImpulse_m855193672304BD935913E215B690B14952E0C59C(__this, NULL);
		V_1 = L_2;
		int32_t L_3;
		L_3 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_1), NULL);
		bool L_4;
		L_4 = HapticCapabilities_get_supportsBuffer_mE87BCD83AA4FEE3C89EE906EF2F1B6DFA9B7BA59(__this, NULL);
		V_1 = L_4;
		int32_t L_5;
		L_5 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_1), NULL);
		uint32_t L_6;
		L_6 = HapticCapabilities_get_bufferFrequencyHz_m31270DBF2491B9FDC969D0082ABB5CF0F0DFDBAA(__this, NULL);
		V_0 = L_6;
		int32_t L_7;
		L_7 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((&V_0), NULL);
		uint32_t L_8;
		L_8 = HapticCapabilities_get_bufferMaxSize_mAC7A86B40B716A2B9B17D4B3B26EE6B7D0346C7C(__this, NULL);
		V_0 = L_8;
		int32_t L_9;
		L_9 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((&V_0), NULL);
		uint32_t L_10;
		L_10 = HapticCapabilities_get_bufferOptimalSize_m166A6DD9882CD48F702FE7447E87C60AAF479407(__this, NULL);
		V_0 = L_10;
		int32_t L_11;
		L_11 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((&V_0), NULL);
		V_2 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(L_1^((int32_t)(L_3<<1))))^((int32_t)(L_5>>1))))^((int32_t)(L_7<<2))))^((int32_t)(L_9>>2))))^((int32_t)(L_11<<3))));
		goto IL_0067;
	}

IL_0067:
	{
		int32_t L_12 = V_2;
		return L_12;
	}
}
IL2CPP_EXTERN_C  int32_t HapticCapabilities_GetHashCode_m7C7504CA0AADBD291E33540E08B00EFF47A2A2DB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = HapticCapabilities_GetHashCode_m7C7504CA0AADBD291E33540E08B00EFF47A2A2DB(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.XR.InputFeatureUsage
IL2CPP_EXTERN_C void InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599_marshal_pinvoke(const InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599& unmarshaled, InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Name_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_Name_0);
	marshaled.___m_InternalType_1 = unmarshaled.___m_InternalType_1;
}
IL2CPP_EXTERN_C void InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599_marshal_pinvoke_back(const InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599_marshaled_pinvoke& marshaled, InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599& unmarshaled)
{
	unmarshaled.___m_Name_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_Name_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_Name_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___m_Name_0));
	uint32_t unmarshaledm_InternalType_temp_1 = 0;
	unmarshaledm_InternalType_temp_1 = marshaled.___m_InternalType_1;
	unmarshaled.___m_InternalType_1 = unmarshaledm_InternalType_temp_1;
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.InputFeatureUsage
IL2CPP_EXTERN_C void InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599_marshal_pinvoke_cleanup(InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Name_0);
	marshaled.___m_Name_0 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.XR.InputFeatureUsage
IL2CPP_EXTERN_C void InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599_marshal_com(const InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599& unmarshaled, InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599_marshaled_com& marshaled)
{
	marshaled.___m_Name_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___m_Name_0);
	marshaled.___m_InternalType_1 = unmarshaled.___m_InternalType_1;
}
IL2CPP_EXTERN_C void InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599_marshal_com_back(const InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599_marshaled_com& marshaled, InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599& unmarshaled)
{
	unmarshaled.___m_Name_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___m_Name_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_Name_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___m_Name_0));
	uint32_t unmarshaledm_InternalType_temp_1 = 0;
	unmarshaledm_InternalType_temp_1 = marshaled.___m_InternalType_1;
	unmarshaled.___m_InternalType_1 = unmarshaledm_InternalType_temp_1;
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.InputFeatureUsage
IL2CPP_EXTERN_C void InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599_marshal_com_cleanup(InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_Name_0);
	marshaled.___m_Name_0 = NULL;
}
// System.String UnityEngine.XR.InputFeatureUsage::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_get_name_mA51C7B42F66E87B3527CBD061D1E6944058FE085 (InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___m_Name_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* InputFeatureUsage_get_name_mA51C7B42F66E87B3527CBD061D1E6944058FE085_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = InputFeatureUsage_get_name_mA51C7B42F66E87B3527CBD061D1E6944058FE085(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.XR.InputFeatureType UnityEngine.XR.InputFeatureUsage::get_internalType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t InputFeatureUsage_get_internalType_m39EE9801AA983980676998D910C3A906191F8810 (InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->___m_InternalType_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  uint32_t InputFeatureUsage_get_internalType_m39EE9801AA983980676998D910C3A906191F8810_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599*>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = InputFeatureUsage_get_internalType_m39EE9801AA983980676998D910C3A906191F8810(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.InputFeatureUsage::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_Equals_m490288B62FC8FB23746E66937C85D8600BC150C0 (InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___obj0;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___obj0;
		bool L_3;
		L_3 = InputFeatureUsage_Equals_m77BD3037164E49DCCFE7C912FD67B14D9A0A621D(__this, ((*(InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599*)((InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599*)(InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599*)UnBox(L_2, InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599_il2cpp_TypeInfo_var)))), NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool InputFeatureUsage_Equals_m490288B62FC8FB23746E66937C85D8600BC150C0_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599*>(__this + _offset);
	bool _returnValue;
	_returnValue = InputFeatureUsage_Equals_m490288B62FC8FB23746E66937C85D8600BC150C0(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.InputFeatureUsage::Equals(UnityEngine.XR.InputFeatureUsage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_Equals_m77BD3037164E49DCCFE7C912FD67B14D9A0A621D (InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599* __this, InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599 ___other0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		String_t* L_0;
		L_0 = InputFeatureUsage_get_name_mA51C7B42F66E87B3527CBD061D1E6944058FE085(__this, NULL);
		String_t* L_1;
		L_1 = InputFeatureUsage_get_name_mA51C7B42F66E87B3527CBD061D1E6944058FE085((&___other0), NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		uint32_t L_3;
		L_3 = InputFeatureUsage_get_internalType_m39EE9801AA983980676998D910C3A906191F8810(__this, NULL);
		uint32_t L_4;
		L_4 = InputFeatureUsage_get_internalType_m39EE9801AA983980676998D910C3A906191F8810((&___other0), NULL);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)L_4))? 1 : 0);
		goto IL_0027;
	}

IL_0026:
	{
		G_B3_0 = 0;
	}

IL_0027:
	{
		V_0 = (bool)G_B3_0;
		goto IL_002a;
	}

IL_002a:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool InputFeatureUsage_Equals_m77BD3037164E49DCCFE7C912FD67B14D9A0A621D_AdjustorThunk (RuntimeObject* __this, InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599 ___other0, const RuntimeMethod* method)
{
	InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599*>(__this + _offset);
	bool _returnValue;
	_returnValue = InputFeatureUsage_Equals_m77BD3037164E49DCCFE7C912FD67B14D9A0A621D(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.InputFeatureUsage::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputFeatureUsage_GetHashCode_m823C86783F2394534F08BF9F56F4A23656D8E34D (InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0;
		L_0 = InputFeatureUsage_get_name_mA51C7B42F66E87B3527CBD061D1E6944058FE085(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		uint32_t L_2;
		L_2 = InputFeatureUsage_get_internalType_m39EE9801AA983980676998D910C3A906191F8810(__this, NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((uint32_t*)(&V_0), NULL);
		V_1 = ((int32_t)(L_1^((int32_t)(L_3<<1))));
		goto IL_0026;
	}

IL_0026:
	{
		int32_t L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t InputFeatureUsage_GetHashCode_m823C86783F2394534F08BF9F56F4A23656D8E34D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = InputFeatureUsage_GetHashCode_m823C86783F2394534F08BF9F56F4A23656D8E34D(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.CommonUsages::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonUsages__cctor_mC385C864BC1092A2B00B21E9AA6A7F079B195B9C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_mDBC4B8D446064C4E1E9103B8235C1F69B86EE3D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_mDC36ADDA7F02BFE95F751942E9E183934C826593_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03F95F266081C6100AE45DE907603B48AEA88377);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227D9F9D7F0691964EAA2E30C2C2DC14C04A3D05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24B00BEE43751066E2697652F1D6D262C07E28BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29578BD9C3867E5BD732AD2D6724DF8BBBC6ABF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35D45FCF9796C71E0A4EF694D764079CDC76C5D3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38500B43596E22322F78E4DB6623115A6D7C5B24);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A5FEEEA6CC9DC4CE7D578724AB0F8A114AC32FC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48AE17AF47CEC5A825E7762BA0D99A995B7DAB44);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52749A6319C3C338DB30E0EFAB91CE5AA5C6B174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral549D4E1BD7FFA7F485E084D961369B26386BA2A5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61CF6DD5C950AF267302979E2305DF65E8D23BB5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6459CE8416F57A02AC1631C840005271AED9865A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6502625D04056D74ABF5B399CAE63C245B679772);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66240DBC99CA039EAF0520B5272BD8DA371603A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E84C3C9CABFB9B7E1973C68615694836C689630);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70BD96A9936A8229937A8E85846B5AE5657B701D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral726E3C457BDB29067B179DDEF38C1A489A2A5459);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral754BC8CC289786CFBEFC86F613F47EEC45C9D500);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84102F76CEAE29A2E33E4E0217B1E11BCDA39366);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AA65A41D8DDA3F1BCA101FADDADFF30771776BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90778E65BEFB370548F8CFA394C23A045A0A07FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93F25E58DBA8A557F895FF1B78AD81FA02E26332);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95E9A1E3972FD2FE6576337B0060276E2CA5FFE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9633378B6C362D31F3D20E2E4BF69E20C5556E0F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9879D0ADEAA390A85EDC93BFD5A45C84F5E628DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9946FBE46CDE07D85A1306BBD66ABF2744491441);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9DC93EACCD7355C105755CBE57F415C879EBA48E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA236D1D85DBA0340D4B9D6DA4793F28122ABDB4B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA821A896CE6F42BB6E717BDB3EE86E19E73DBCA6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA832960DBF85D5B0B42A99FAFE6E782202201BEC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA5D30BC4A4A248920FD5E69504B53056B14F7EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC10ECED701E479DB1EB99F71C7E143BF33BDB28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC1362F1885AF603DF875FBCAAD403A8D46251A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralACCB271B3F087252B60BC604A75AEE43F78DA580);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE76E0A93C646A4D171FC6C55BF45E1F3B7C1B34);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0073BD5ACF886468B949EC07746EAA9F4153149);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB387D42F0AFA94CE7B6979B587B90DD3FE6E03AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4FE860573CD6E03F0D1A4378C1F330A3820D8C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6F2679FF2ED335CED04DD9F20B320A9562207AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB85E78C75EF1A6F636689BD88A9D6C2A3B2B0A1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0E30FBC86A20CADAC60192FFB6B9C72C65CCF0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5505A25CF2D095FDF8936A52047CE843140CE71);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8E4099C5B3BD54FEF6692054B61857D790EA02E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8E762418D8614D739AB43D7D2C189A29AF1145F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBE7365360EB45A9634579259D49C165CB873442);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD42F30283C4CE60465C4010C800AD9704733102);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8FEC942054577466215DA5251FB602E014D433B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD95E0F430871054A7F508E89236049195FE4C4B4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAE5C8C7FC887DC7AC6D80AE8A8715E4DFB5462B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCD1BF12664AC38299958513D10BAA016D22904B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF0B09D3AC2B1A403AD50571DE6D02BADF994DF6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE4E6F213F1AEACB4233E3E6BBB9F569BEEBA7756);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE86EACFED9F6FA05AD72CEB29F5D9BC7189FDBEE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE87E0289369699E3077923D9BD0365C6E47D2BCA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC1F89EF78546399906890624140735FFFA3EFAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECA2F6D5759EE143EA8C00BC3BFFCA73414785B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0339F2B8C23E97D992FC8EF5C3B1CAA3D72B0DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF40999422A118C6EE66D1E75FEBC28A9B24DA371);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFAADF4A00DE209941E8563D4803C5546439877F3);
		s_Il2CppMethodInitialized = true;
	}
	{
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_0;
		memset((&L_0), 0, sizeof(L_0));
		InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7((&L_0), _stringLiteral9879D0ADEAA390A85EDC93BFD5A45C84F5E628DC, /*hidden argument*/InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___isTracked_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___isTracked_0))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_1;
		memset((&L_1), 0, sizeof(L_1));
		InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7((&L_1), _stringLiteralAC10ECED701E479DB1EB99F71C7E143BF33BDB28, /*hidden argument*/InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___primaryButton_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___primaryButton_1))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_2;
		memset((&L_2), 0, sizeof(L_2));
		InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7((&L_2), _stringLiteralE87E0289369699E3077923D9BD0365C6E47D2BCA, /*hidden argument*/InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___primaryTouch_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___primaryTouch_2))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_3;
		memset((&L_3), 0, sizeof(L_3));
		InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7((&L_3), _stringLiteralDF0B09D3AC2B1A403AD50571DE6D02BADF994DF6, /*hidden argument*/InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___secondaryButton_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___secondaryButton_3))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7((&L_4), _stringLiteral70BD96A9936A8229937A8E85846B5AE5657B701D, /*hidden argument*/InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___secondaryTouch_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___secondaryTouch_4))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_5;
		memset((&L_5), 0, sizeof(L_5));
		InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7((&L_5), _stringLiteralACCB271B3F087252B60BC604A75AEE43F78DA580, /*hidden argument*/InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___gripButton_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___gripButton_5))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_6;
		memset((&L_6), 0, sizeof(L_6));
		InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7((&L_6), _stringLiteral9946FBE46CDE07D85A1306BBD66ABF2744491441, /*hidden argument*/InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___triggerButton_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___triggerButton_6))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_7;
		memset((&L_7), 0, sizeof(L_7));
		InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7((&L_7), _stringLiteralC5505A25CF2D095FDF8936A52047CE843140CE71, /*hidden argument*/InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___menuButton_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___menuButton_7))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_8;
		memset((&L_8), 0, sizeof(L_8));
		InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7((&L_8), _stringLiteralC8E762418D8614D739AB43D7D2C189A29AF1145F, /*hidden argument*/InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___primary2DAxisClick_8 = L_8;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___primary2DAxisClick_8))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_9;
		memset((&L_9), 0, sizeof(L_9));
		InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7((&L_9), _stringLiteralD8FEC942054577466215DA5251FB602E014D433B, /*hidden argument*/InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___primary2DAxisTouch_9 = L_9;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___primary2DAxisTouch_9))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_10;
		memset((&L_10), 0, sizeof(L_10));
		InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7((&L_10), _stringLiteral24B00BEE43751066E2697652F1D6D262C07E28BF, /*hidden argument*/InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___secondary2DAxisClick_10 = L_10;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___secondary2DAxisClick_10))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_11;
		memset((&L_11), 0, sizeof(L_11));
		InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7((&L_11), _stringLiteral38500B43596E22322F78E4DB6623115A6D7C5B24, /*hidden argument*/InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___secondary2DAxisTouch_11 = L_11;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___secondary2DAxisTouch_11))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_12;
		memset((&L_12), 0, sizeof(L_12));
		InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7((&L_12), _stringLiteral6502625D04056D74ABF5B399CAE63C245B679772, /*hidden argument*/InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___userPresence_12 = L_12;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___userPresence_12))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 L_13;
		memset((&L_13), 0, sizeof(L_13));
		InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55((&L_13), _stringLiteral61CF6DD5C950AF267302979E2305DF65E8D23BB5, /*hidden argument*/InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var);
		((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___trackingState_13 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___trackingState_13))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_14;
		memset((&L_14), 0, sizeof(L_14));
		InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989((&L_14), _stringLiteral35D45FCF9796C71E0A4EF694D764079CDC76C5D3, /*hidden argument*/InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___batteryLevel_14 = L_14;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___batteryLevel_14))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_15;
		memset((&L_15), 0, sizeof(L_15));
		InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989((&L_15), _stringLiteralB85E78C75EF1A6F636689BD88A9D6C2A3B2B0A1B, /*hidden argument*/InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___trigger_15 = L_15;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___trigger_15))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_16;
		memset((&L_16), 0, sizeof(L_16));
		InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989((&L_16), _stringLiteralB4FE860573CD6E03F0D1A4378C1F330A3820D8C9, /*hidden argument*/InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___grip_16 = L_16;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___grip_16))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C L_17;
		memset((&L_17), 0, sizeof(L_17));
		InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A((&L_17), _stringLiteral754BC8CC289786CFBEFC86F613F47EEC45C9D500, /*hidden argument*/InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var);
		((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___primary2DAxis_17 = L_17;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___primary2DAxis_17))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C L_18;
		memset((&L_18), 0, sizeof(L_18));
		InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A((&L_18), _stringLiteralB387D42F0AFA94CE7B6979B587B90DD3FE6E03AE, /*hidden argument*/InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var);
		((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___secondary2DAxis_18 = L_18;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___secondary2DAxis_18))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_19;
		memset((&L_19), 0, sizeof(L_19));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_19), _stringLiteral84102F76CEAE29A2E33E4E0217B1E11BCDA39366, /*hidden argument*/InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___devicePosition_19 = L_19;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___devicePosition_19))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_20;
		memset((&L_20), 0, sizeof(L_20));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_20), _stringLiteral29578BD9C3867E5BD732AD2D6724DF8BBBC6ABF7, /*hidden argument*/InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___leftEyePosition_20 = L_20;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___leftEyePosition_20))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_21;
		memset((&L_21), 0, sizeof(L_21));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_21), _stringLiteralAA5D30BC4A4A248920FD5E69504B53056B14F7EC, /*hidden argument*/InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___rightEyePosition_21 = L_21;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___rightEyePosition_21))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_22;
		memset((&L_22), 0, sizeof(L_22));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_22), _stringLiteralECA2F6D5759EE143EA8C00BC3BFFCA73414785B8, /*hidden argument*/InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___centerEyePosition_22 = L_22;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___centerEyePosition_22))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_23;
		memset((&L_23), 0, sizeof(L_23));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_23), _stringLiteral03F95F266081C6100AE45DE907603B48AEA88377, /*hidden argument*/InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___colorCameraPosition_23 = L_23;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___colorCameraPosition_23))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_24;
		memset((&L_24), 0, sizeof(L_24));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_24), _stringLiteral9633378B6C362D31F3D20E2E4BF69E20C5556E0F, /*hidden argument*/InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___deviceVelocity_24 = L_24;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___deviceVelocity_24))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_25;
		memset((&L_25), 0, sizeof(L_25));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_25), _stringLiteralE4E6F213F1AEACB4233E3E6BBB9F569BEEBA7756, /*hidden argument*/InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___deviceAngularVelocity_25 = L_25;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___deviceAngularVelocity_25))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_26;
		memset((&L_26), 0, sizeof(L_26));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_26), _stringLiteralC8E4099C5B3BD54FEF6692054B61857D790EA02E, /*hidden argument*/InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___leftEyeVelocity_26 = L_26;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___leftEyeVelocity_26))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_27;
		memset((&L_27), 0, sizeof(L_27));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_27), _stringLiteral9DC93EACCD7355C105755CBE57F415C879EBA48E, /*hidden argument*/InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___leftEyeAngularVelocity_27 = L_27;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___leftEyeAngularVelocity_27))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_28;
		memset((&L_28), 0, sizeof(L_28));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_28), _stringLiteral227D9F9D7F0691964EAA2E30C2C2DC14C04A3D05, /*hidden argument*/InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___rightEyeVelocity_28 = L_28;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___rightEyeVelocity_28))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_29;
		memset((&L_29), 0, sizeof(L_29));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_29), _stringLiteral95E9A1E3972FD2FE6576337B0060276E2CA5FFE3, /*hidden argument*/InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___rightEyeAngularVelocity_29 = L_29;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___rightEyeAngularVelocity_29))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_30;
		memset((&L_30), 0, sizeof(L_30));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_30), _stringLiteralC0E30FBC86A20CADAC60192FFB6B9C72C65CCF0E, /*hidden argument*/InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___centerEyeVelocity_30 = L_30;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___centerEyeVelocity_30))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_31;
		memset((&L_31), 0, sizeof(L_31));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_31), _stringLiteralE86EACFED9F6FA05AD72CEB29F5D9BC7189FDBEE, /*hidden argument*/InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___centerEyeAngularVelocity_31 = L_31;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___centerEyeAngularVelocity_31))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_32;
		memset((&L_32), 0, sizeof(L_32));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_32), _stringLiteralB6F2679FF2ED335CED04DD9F20B320A9562207AC, /*hidden argument*/InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___colorCameraVelocity_32 = L_32;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___colorCameraVelocity_32))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_33;
		memset((&L_33), 0, sizeof(L_33));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_33), _stringLiteralB0073BD5ACF886468B949EC07746EAA9F4153149, /*hidden argument*/InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___colorCameraAngularVelocity_33 = L_33;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___colorCameraAngularVelocity_33))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_34;
		memset((&L_34), 0, sizeof(L_34));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_34), _stringLiteralEC1F89EF78546399906890624140735FFFA3EFAA, /*hidden argument*/InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___deviceAcceleration_34 = L_34;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___deviceAcceleration_34))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_35;
		memset((&L_35), 0, sizeof(L_35));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_35), _stringLiteral90778E65BEFB370548F8CFA394C23A045A0A07FF, /*hidden argument*/InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___deviceAngularAcceleration_35 = L_35;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___deviceAngularAcceleration_35))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_36;
		memset((&L_36), 0, sizeof(L_36));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_36), _stringLiteralDAE5C8C7FC887DC7AC6D80AE8A8715E4DFB5462B, /*hidden argument*/InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___leftEyeAcceleration_36 = L_36;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___leftEyeAcceleration_36))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_37;
		memset((&L_37), 0, sizeof(L_37));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_37), _stringLiteralA832960DBF85D5B0B42A99FAFE6E782202201BEC, /*hidden argument*/InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___leftEyeAngularAcceleration_37 = L_37;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___leftEyeAngularAcceleration_37))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_38;
		memset((&L_38), 0, sizeof(L_38));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_38), _stringLiteralA821A896CE6F42BB6E717BDB3EE86E19E73DBCA6, /*hidden argument*/InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___rightEyeAcceleration_38 = L_38;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___rightEyeAcceleration_38))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_39;
		memset((&L_39), 0, sizeof(L_39));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_39), _stringLiteral8AA65A41D8DDA3F1BCA101FADDADFF30771776BF, /*hidden argument*/InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___rightEyeAngularAcceleration_39 = L_39;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___rightEyeAngularAcceleration_39))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_40;
		memset((&L_40), 0, sizeof(L_40));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_40), _stringLiteralF0339F2B8C23E97D992FC8EF5C3B1CAA3D72B0DF, /*hidden argument*/InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___centerEyeAcceleration_40 = L_40;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___centerEyeAcceleration_40))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_41;
		memset((&L_41), 0, sizeof(L_41));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_41), _stringLiteral6459CE8416F57A02AC1631C840005271AED9865A, /*hidden argument*/InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___centerEyeAngularAcceleration_41 = L_41;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___centerEyeAngularAcceleration_41))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_42;
		memset((&L_42), 0, sizeof(L_42));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_42), _stringLiteralD95E0F430871054A7F508E89236049195FE4C4B4, /*hidden argument*/InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___colorCameraAcceleration_42 = L_42;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___colorCameraAcceleration_42))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_43;
		memset((&L_43), 0, sizeof(L_43));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_43), _stringLiteral93F25E58DBA8A557F895FF1B78AD81FA02E26332, /*hidden argument*/InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___colorCameraAngularAcceleration_43 = L_43;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___colorCameraAngularAcceleration_43))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D L_44;
		memset((&L_44), 0, sizeof(L_44));
		InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08((&L_44), _stringLiteral48AE17AF47CEC5A825E7762BA0D99A995B7DAB44, /*hidden argument*/InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___deviceRotation_44 = L_44;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___deviceRotation_44))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D L_45;
		memset((&L_45), 0, sizeof(L_45));
		InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08((&L_45), _stringLiteralA236D1D85DBA0340D4B9D6DA4793F28122ABDB4B, /*hidden argument*/InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___leftEyeRotation_45 = L_45;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___leftEyeRotation_45))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D L_46;
		memset((&L_46), 0, sizeof(L_46));
		InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08((&L_46), _stringLiteral6E84C3C9CABFB9B7E1973C68615694836C689630, /*hidden argument*/InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___rightEyeRotation_46 = L_46;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___rightEyeRotation_46))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D L_47;
		memset((&L_47), 0, sizeof(L_47));
		InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08((&L_47), _stringLiteralFAADF4A00DE209941E8563D4803C5546439877F3, /*hidden argument*/InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___centerEyeRotation_47 = L_47;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___centerEyeRotation_47))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D L_48;
		memset((&L_48), 0, sizeof(L_48));
		InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08((&L_48), _stringLiteralAE76E0A93C646A4D171FC6C55BF45E1F3B7C1B34, /*hidden argument*/InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___colorCameraRotation_48 = L_48;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___colorCameraRotation_48))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		InputFeatureUsage_1_t64C1AA42D6E8BD57C54C7E891BD79A70A0F3A170 L_49;
		memset((&L_49), 0, sizeof(L_49));
		InputFeatureUsage_1__ctor_mDBC4B8D446064C4E1E9103B8235C1F69B86EE3D7((&L_49), _stringLiteral3A5FEEEA6CC9DC4CE7D578724AB0F8A114AC32FC, /*hidden argument*/InputFeatureUsage_1__ctor_mDBC4B8D446064C4E1E9103B8235C1F69B86EE3D7_RuntimeMethod_var);
		((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___handData_49 = L_49;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___handData_49))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		InputFeatureUsage_1_tD3FEDCAE0D7F51C7B42182162ACE726E68166B38 L_50;
		memset((&L_50), 0, sizeof(L_50));
		InputFeatureUsage_1__ctor_mDC36ADDA7F02BFE95F751942E9E183934C826593((&L_50), _stringLiteralCBE7365360EB45A9634579259D49C165CB873442, /*hidden argument*/InputFeatureUsage_1__ctor_mDC36ADDA7F02BFE95F751942E9E183934C826593_RuntimeMethod_var);
		((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___eyesData_50 = L_50;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___eyesData_50))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C L_51;
		memset((&L_51), 0, sizeof(L_51));
		InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A((&L_51), _stringLiteral52749A6319C3C338DB30E0EFAB91CE5AA5C6B174, /*hidden argument*/InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var);
		((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___dPad_51 = L_51;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___dPad_51))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_52;
		memset((&L_52), 0, sizeof(L_52));
		InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989((&L_52), _stringLiteralF40999422A118C6EE66D1E75FEBC28A9B24DA371, /*hidden argument*/InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___indexFinger_52 = L_52;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___indexFinger_52))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_53;
		memset((&L_53), 0, sizeof(L_53));
		InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989((&L_53), _stringLiteralAC1362F1885AF603DF875FBCAAD403A8D46251A2, /*hidden argument*/InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___middleFinger_53 = L_53;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___middleFinger_53))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_54;
		memset((&L_54), 0, sizeof(L_54));
		InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989((&L_54), _stringLiteral726E3C457BDB29067B179DDEF38C1A489A2A5459, /*hidden argument*/InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___ringFinger_54 = L_54;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___ringFinger_54))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_55;
		memset((&L_55), 0, sizeof(L_55));
		InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989((&L_55), _stringLiteral66240DBC99CA039EAF0520B5272BD8DA371603A2, /*hidden argument*/InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___pinkyFinger_55 = L_55;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___pinkyFinger_55))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_56;
		memset((&L_56), 0, sizeof(L_56));
		InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7((&L_56), _stringLiteralCD42F30283C4CE60465C4010C800AD9704733102, /*hidden argument*/InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___thumbrest_56 = L_56;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___thumbrest_56))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_57;
		memset((&L_57), 0, sizeof(L_57));
		InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989((&L_57), _stringLiteral549D4E1BD7FFA7F485E084D961369B26386BA2A5, /*hidden argument*/InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___indexTouch_57 = L_57;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___indexTouch_57))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_58;
		memset((&L_58), 0, sizeof(L_58));
		InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989((&L_58), _stringLiteralDCD1BF12664AC38299958513D10BAA016D22904B, /*hidden argument*/InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___thumbTouch_58 = L_58;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___thumbTouch_58))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.XR.InputDevice
IL2CPP_EXTERN_C void InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshal_pinvoke(const InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD& unmarshaled, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshaled_pinvoke& marshaled)
{
	marshaled.___m_DeviceId_1 = unmarshaled.___m_DeviceId_1;
	marshaled.___m_Initialized_2 = static_cast<int32_t>(unmarshaled.___m_Initialized_2);
}
IL2CPP_EXTERN_C void InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshal_pinvoke_back(const InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshaled_pinvoke& marshaled, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD& unmarshaled)
{
	uint64_t unmarshaledm_DeviceId_temp_0 = 0;
	unmarshaledm_DeviceId_temp_0 = marshaled.___m_DeviceId_1;
	unmarshaled.___m_DeviceId_1 = unmarshaledm_DeviceId_temp_0;
	bool unmarshaledm_Initialized_temp_1 = false;
	unmarshaledm_Initialized_temp_1 = static_cast<bool>(marshaled.___m_Initialized_2);
	unmarshaled.___m_Initialized_2 = unmarshaledm_Initialized_temp_1;
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.InputDevice
IL2CPP_EXTERN_C void InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshal_pinvoke_cleanup(InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.InputDevice
IL2CPP_EXTERN_C void InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshal_com(const InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD& unmarshaled, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshaled_com& marshaled)
{
	marshaled.___m_DeviceId_1 = unmarshaled.___m_DeviceId_1;
	marshaled.___m_Initialized_2 = static_cast<int32_t>(unmarshaled.___m_Initialized_2);
}
IL2CPP_EXTERN_C void InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshal_com_back(const InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshaled_com& marshaled, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD& unmarshaled)
{
	uint64_t unmarshaledm_DeviceId_temp_0 = 0;
	unmarshaledm_DeviceId_temp_0 = marshaled.___m_DeviceId_1;
	unmarshaled.___m_DeviceId_1 = unmarshaledm_DeviceId_temp_0;
	bool unmarshaledm_Initialized_temp_1 = false;
	unmarshaledm_Initialized_temp_1 = static_cast<bool>(marshaled.___m_Initialized_2);
	unmarshaled.___m_Initialized_2 = unmarshaledm_Initialized_temp_1;
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.InputDevice
IL2CPP_EXTERN_C void InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshal_com_cleanup(InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.XR.InputDevice::.ctor(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDevice__ctor_mC7506750471891883425541E9DE3EB23D8FE4E34 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, uint64_t ___deviceId0, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___deviceId0;
		__this->___m_DeviceId_1 = L_0;
		__this->___m_Initialized_2 = (bool)1;
		return;
	}
}
IL2CPP_EXTERN_C  void InputDevice__ctor_mC7506750471891883425541E9DE3EB23D8FE4E34_AdjustorThunk (RuntimeObject* __this, uint64_t ___deviceId0, const RuntimeMethod* method)
{
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*>(__this + _offset);
	InputDevice__ctor_mC7506750471891883425541E9DE3EB23D8FE4E34(_thisAdjusted, ___deviceId0, method);
}
// System.UInt64 UnityEngine.XR.InputDevice::get_deviceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t InputDevice_get_deviceId_mF3FFF56432109EF58AC2EE178FA343261E950A19 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t G_B3_0 = 0;
	{
		bool L_0 = __this->___m_Initialized_2;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		G_B3_0 = ((uint64_t)(((int64_t)(-1))));
		goto IL_0013;
	}

IL_000d:
	{
		uint64_t L_1 = __this->___m_DeviceId_1;
		G_B3_0 = L_1;
	}

IL_0013:
	{
		V_0 = G_B3_0;
		goto IL_0016;
	}

IL_0016:
	{
		uint64_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  uint64_t InputDevice_get_deviceId_mF3FFF56432109EF58AC2EE178FA343261E950A19_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*>(__this + _offset);
	uint64_t _returnValue;
	_returnValue = InputDevice_get_deviceId_mF3FFF56432109EF58AC2EE178FA343261E950A19(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.InputDevice::get_isValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_get_isValid_mA908CF8195CECA44FF457430AFF9198C3FEC0948 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		bool L_0;
		L_0 = InputDevice_IsValidId_m13527A66E7D03B0C9AA64C2FFCC4A2F3889756BB(__this, NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		uint64_t L_1 = __this->___m_DeviceId_1;
		bool L_2;
		L_2 = InputDevices_IsDeviceValid_m3A26291DCB7733D1538DF700E4638BE9DF9A994A(L_1, NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 0;
	}

IL_0017:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool InputDevice_get_isValid_mA908CF8195CECA44FF457430AFF9198C3FEC0948_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*>(__this + _offset);
	bool _returnValue;
	_returnValue = InputDevice_get_isValid_mA908CF8195CECA44FF457430AFF9198C3FEC0948(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.InputDevice::IsValidId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_IsValidId_m13527A66E7D03B0C9AA64C2FFCC4A2F3889756BB (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		uint64_t L_0;
		L_0 = InputDevice_get_deviceId_mF3FFF56432109EF58AC2EE178FA343261E950A19(__this, NULL);
		V_0 = (bool)((((int32_t)((((int64_t)L_0) == ((int64_t)((int64_t)(-1))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0011;
	}

IL_0011:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool InputDevice_IsValidId_m13527A66E7D03B0C9AA64C2FFCC4A2F3889756BB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*>(__this + _offset);
	bool _returnValue;
	_returnValue = InputDevice_IsValidId_m13527A66E7D03B0C9AA64C2FFCC4A2F3889756BB(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.InputDevice::SendHapticImpulse(System.UInt32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_SendHapticImpulse_m7166A784508F8E0F3AE5BD88863171C7A905BC1B (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, uint32_t ___channel0, float ___amplitude1, float ___duration2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		bool L_0;
		L_0 = InputDevice_IsValidId_m13527A66E7D03B0C9AA64C2FFCC4A2F3889756BB(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0051;
	}

IL_0012:
	{
		float L_2 = ___amplitude1;
		V_2 = (bool)((((float)L_2) < ((float)(0.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral604D4509D85720AAEB9398C90E5E88599306E2D4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InputDevice_SendHapticImpulse_m7166A784508F8E0F3AE5BD88863171C7A905BC1B_RuntimeMethod_var)));
	}

IL_0029:
	{
		float L_5 = ___duration2;
		V_3 = (bool)((((float)L_5) < ((float)(0.0f)))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral98DA166FA9E38B239532901B25E8AB690CE4EC51)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InputDevice_SendHapticImpulse_m7166A784508F8E0F3AE5BD88863171C7A905BC1B_RuntimeMethod_var)));
	}

IL_0040:
	{
		uint64_t L_8 = __this->___m_DeviceId_1;
		uint32_t L_9 = ___channel0;
		float L_10 = ___amplitude1;
		float L_11 = ___duration2;
		bool L_12;
		L_12 = InputDevices_SendHapticImpulse_mC965C7C6A20D28CD51EDFC5BE61E85D6505A74F7(L_8, L_9, L_10, L_11, NULL);
		V_1 = L_12;
		goto IL_0051;
	}

IL_0051:
	{
		bool L_13 = V_1;
		return L_13;
	}
}
IL2CPP_EXTERN_C  bool InputDevice_SendHapticImpulse_m7166A784508F8E0F3AE5BD88863171C7A905BC1B_AdjustorThunk (RuntimeObject* __this, uint32_t ___channel0, float ___amplitude1, float ___duration2, const RuntimeMethod* method)
{
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*>(__this + _offset);
	bool _returnValue;
	_returnValue = InputDevice_SendHapticImpulse_m7166A784508F8E0F3AE5BD88863171C7A905BC1B(_thisAdjusted, ___channel0, ___amplitude1, ___duration2, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.InputDevice::TryGetHapticCapabilities(UnityEngine.XR.HapticCapabilities&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetHapticCapabilities_mC97EE9A231941988E8B6FA8AF0CB310EFE1B77A3 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211* ___capabilities0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputDevice_CheckValidAndSetDefault_TisHapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211_m934C6F6EA462958748DD322AB87BE052078B1266_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211* L_0 = ___capabilities0;
		bool L_1;
		L_1 = InputDevice_CheckValidAndSetDefault_TisHapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211_m934C6F6EA462958748DD322AB87BE052078B1266(__this, L_0, InputDevice_CheckValidAndSetDefault_TisHapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211_m934C6F6EA462958748DD322AB87BE052078B1266_RuntimeMethod_var);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		uint64_t L_3 = __this->___m_DeviceId_1;
		HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211* L_4 = ___capabilities0;
		bool L_5;
		L_5 = InputDevices_TryGetHapticCapabilities_mBCEC7D1AE8C869608B3FF5D05EF2629729B91CA7(L_3, L_4, NULL);
		V_1 = L_5;
		goto IL_001f;
	}

IL_001b:
	{
		V_1 = (bool)0;
		goto IL_001f;
	}

IL_001f:
	{
		bool L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C  bool InputDevice_TryGetHapticCapabilities_mC97EE9A231941988E8B6FA8AF0CB310EFE1B77A3_AdjustorThunk (RuntimeObject* __this, HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211* ___capabilities0, const RuntimeMethod* method)
{
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*>(__this + _offset);
	bool _returnValue;
	_returnValue = InputDevice_TryGetHapticCapabilities_mC97EE9A231941988E8B6FA8AF0CB310EFE1B77A3(_thisAdjusted, ___capabilities0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<System.Boolean>,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___usage0, bool* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputDevice_CheckValidAndSetDefault_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mED7DBE29D514108C95BCEA0CC535A55DA2610366_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1_get_name_mAD647CEB75F404E53F3A175DA334818A35738080_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool* L_0 = ___value1;
		bool L_1;
		L_1 = InputDevice_CheckValidAndSetDefault_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mED7DBE29D514108C95BCEA0CC535A55DA2610366(__this, L_0, InputDevice_CheckValidAndSetDefault_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mED7DBE29D514108C95BCEA0CC535A55DA2610366_RuntimeMethod_var);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		uint64_t L_3 = __this->___m_DeviceId_1;
		String_t* L_4;
		L_4 = InputFeatureUsage_1_get_name_mAD647CEB75F404E53F3A175DA334818A35738080_inline((&___usage0), InputFeatureUsage_1_get_name_mAD647CEB75F404E53F3A175DA334818A35738080_RuntimeMethod_var);
		bool* L_5 = ___value1;
		bool L_6;
		L_6 = InputDevices_TryGetFeatureValue_bool_mD652BFAC63C19FFE34BA0E552A764C655402F0F2(L_3, L_4, L_5, NULL);
		V_1 = L_6;
		goto IL_0026;
	}

IL_0022:
	{
		V_1 = (bool)0;
		goto IL_0026;
	}

IL_0026:
	{
		bool L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C  bool InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884_AdjustorThunk (RuntimeObject* __this, InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___usage0, bool* ___value1, const RuntimeMethod* method)
{
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*>(__this + _offset);
	bool _returnValue;
	_returnValue = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884(_thisAdjusted, ___usage0, ___value1, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<System.Single>,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___usage0, float* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputDevice_CheckValidAndSetDefault_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m291E714227B7B72A29CD867189748EA47B3990C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1_get_name_m2B2C882E3DBE25BF025C498BF14E9FFA7F91540E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		float* L_0 = ___value1;
		bool L_1;
		L_1 = InputDevice_CheckValidAndSetDefault_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m291E714227B7B72A29CD867189748EA47B3990C7(__this, L_0, InputDevice_CheckValidAndSetDefault_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m291E714227B7B72A29CD867189748EA47B3990C7_RuntimeMethod_var);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		uint64_t L_3 = __this->___m_DeviceId_1;
		String_t* L_4;
		L_4 = InputFeatureUsage_1_get_name_m2B2C882E3DBE25BF025C498BF14E9FFA7F91540E_inline((&___usage0), InputFeatureUsage_1_get_name_m2B2C882E3DBE25BF025C498BF14E9FFA7F91540E_RuntimeMethod_var);
		float* L_5 = ___value1;
		bool L_6;
		L_6 = InputDevices_TryGetFeatureValue_float_m2F667629D89251CD719FF2752E644467DF5B7F7D(L_3, L_4, L_5, NULL);
		V_1 = L_6;
		goto IL_0026;
	}

IL_0022:
	{
		V_1 = (bool)0;
		goto IL_0026;
	}

IL_0026:
	{
		bool L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C  bool InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081_AdjustorThunk (RuntimeObject* __this, InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___usage0, float* ___value1, const RuntimeMethod* method)
{
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*>(__this + _offset);
	bool _returnValue;
	_returnValue = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081(_thisAdjusted, ___usage0, ___value1, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C ___usage0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputDevice_CheckValidAndSetDefault_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mF1899A42AE87E04AE0FE6A7D7D92994B23389069_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1_get_name_mC56C726995711932766450754FB382B2DA52E105_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = ___value1;
		bool L_1;
		L_1 = InputDevice_CheckValidAndSetDefault_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mF1899A42AE87E04AE0FE6A7D7D92994B23389069(__this, L_0, InputDevice_CheckValidAndSetDefault_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mF1899A42AE87E04AE0FE6A7D7D92994B23389069_RuntimeMethod_var);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		uint64_t L_3 = __this->___m_DeviceId_1;
		String_t* L_4;
		L_4 = InputFeatureUsage_1_get_name_mC56C726995711932766450754FB382B2DA52E105_inline((&___usage0), InputFeatureUsage_1_get_name_mC56C726995711932766450754FB382B2DA52E105_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = ___value1;
		bool L_6;
		L_6 = InputDevices_TryGetFeatureValue_Vector2f_mF98BD89249A038E4D9EDA8D4E64CCEFAFB40E646(L_3, L_4, L_5, NULL);
		V_1 = L_6;
		goto IL_0026;
	}

IL_0022:
	{
		V_1 = (bool)0;
		goto IL_0026;
	}

IL_0026:
	{
		bool L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C  bool InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA_AdjustorThunk (RuntimeObject* __this, InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C ___usage0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___value1, const RuntimeMethod* method)
{
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*>(__this + _offset);
	bool _returnValue;
	_returnValue = InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA(_thisAdjusted, ___usage0, ___value1, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___usage0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputDevice_CheckValidAndSetDefault_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m3155C6BC58D0FF075C2D1A7CAD6E0E06BD33A00B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1_get_name_mB74B05F127FBD54D57BFCE959683F6A5C62142C5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___value1;
		bool L_1;
		L_1 = InputDevice_CheckValidAndSetDefault_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m3155C6BC58D0FF075C2D1A7CAD6E0E06BD33A00B(__this, L_0, InputDevice_CheckValidAndSetDefault_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m3155C6BC58D0FF075C2D1A7CAD6E0E06BD33A00B_RuntimeMethod_var);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		uint64_t L_3 = __this->___m_DeviceId_1;
		String_t* L_4;
		L_4 = InputFeatureUsage_1_get_name_mB74B05F127FBD54D57BFCE959683F6A5C62142C5_inline((&___usage0), InputFeatureUsage_1_get_name_mB74B05F127FBD54D57BFCE959683F6A5C62142C5_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = ___value1;
		bool L_6;
		L_6 = InputDevices_TryGetFeatureValue_Vector3f_m765F82CDF7B96A1F616753B9C14AF5144F71F9BB(L_3, L_4, L_5, NULL);
		V_1 = L_6;
		goto IL_0026;
	}

IL_0022:
	{
		V_1 = (bool)0;
		goto IL_0026;
	}

IL_0026:
	{
		bool L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C  bool InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167_AdjustorThunk (RuntimeObject* __this, InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___usage0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___value1, const RuntimeMethod* method)
{
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*>(__this + _offset);
	bool _returnValue;
	_returnValue = InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167(_thisAdjusted, ___usage0, ___value1, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m0C1A9761DD0D1C6D1EF4BAB2FAF1BC1A9541BB9F (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D ___usage0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputDevice_CheckValidAndSetDefault_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m96F459B8B37D981DFB1562207C2583F5A1653D85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1_get_name_m02343070D5E6423DE14E1538321C52506DEFA03F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_0 = ___value1;
		bool L_1;
		L_1 = InputDevice_CheckValidAndSetDefault_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m96F459B8B37D981DFB1562207C2583F5A1653D85(__this, L_0, InputDevice_CheckValidAndSetDefault_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m96F459B8B37D981DFB1562207C2583F5A1653D85_RuntimeMethod_var);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		uint64_t L_3 = __this->___m_DeviceId_1;
		String_t* L_4;
		L_4 = InputFeatureUsage_1_get_name_m02343070D5E6423DE14E1538321C52506DEFA03F_inline((&___usage0), InputFeatureUsage_1_get_name_m02343070D5E6423DE14E1538321C52506DEFA03F_RuntimeMethod_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_5 = ___value1;
		bool L_6;
		L_6 = InputDevices_TryGetFeatureValue_Quaternionf_m7E4BA3BCD07D23060BA8273A1018CD40EB41B1B4(L_3, L_4, L_5, NULL);
		V_1 = L_6;
		goto IL_0026;
	}

IL_0022:
	{
		V_1 = (bool)0;
		goto IL_0026;
	}

IL_0026:
	{
		bool L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C  bool InputDevice_TryGetFeatureValue_m0C1A9761DD0D1C6D1EF4BAB2FAF1BC1A9541BB9F_AdjustorThunk (RuntimeObject* __this, InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D ___usage0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___value1, const RuntimeMethod* method)
{
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*>(__this + _offset);
	bool _returnValue;
	_returnValue = InputDevice_TryGetFeatureValue_m0C1A9761DD0D1C6D1EF4BAB2FAF1BC1A9541BB9F(_thisAdjusted, ___usage0, ___value1, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.InputTrackingState>,UnityEngine.XR.InputTrackingState&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m8A01F07356DC85042F6BB7C6258A75C3EC3C4E11 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 ___usage0, uint32_t* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1_get_name_m37097D0219AFAD926E3787B28C95F9514D188D10_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	uint32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		bool L_0;
		L_0 = InputDevice_IsValidId_m13527A66E7D03B0C9AA64C2FFCC4A2F3889756BB(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		V_1 = 0;
		uint64_t L_2 = __this->___m_DeviceId_1;
		String_t* L_3;
		L_3 = InputFeatureUsage_1_get_name_m37097D0219AFAD926E3787B28C95F9514D188D10_inline((&___usage0), InputFeatureUsage_1_get_name_m37097D0219AFAD926E3787B28C95F9514D188D10_RuntimeMethod_var);
		bool L_4;
		L_4 = InputDevices_TryGetFeatureValue_UInt32_m50BDA6D2D451E2032210DFF4CDA8FE7EDE3EE4D2(L_2, L_3, (&V_1), NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		uint32_t* L_6 = ___value1;
		uint32_t L_7 = V_1;
		*((int32_t*)L_6) = (int32_t)L_7;
		V_3 = (bool)1;
		goto IL_0036;
	}

IL_002e:
	{
	}

IL_002f:
	{
		uint32_t* L_8 = ___value1;
		*((int32_t*)L_8) = (int32_t)0;
		V_3 = (bool)0;
		goto IL_0036;
	}

IL_0036:
	{
		bool L_9 = V_3;
		return L_9;
	}
}
IL2CPP_EXTERN_C  bool InputDevice_TryGetFeatureValue_m8A01F07356DC85042F6BB7C6258A75C3EC3C4E11_AdjustorThunk (RuntimeObject* __this, InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 ___usage0, uint32_t* ___value1, const RuntimeMethod* method)
{
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*>(__this + _offset);
	bool _returnValue;
	_returnValue = InputDevice_TryGetFeatureValue_m8A01F07356DC85042F6BB7C6258A75C3EC3C4E11(_thisAdjusted, ___usage0, ___value1, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.InputDevice::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_Equals_m206193EDB0C7A69C0BDFC821CE87B887C7BE0CAC (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___obj0;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___obj0;
		bool L_3;
		L_3 = InputDevice_Equals_mD6717F0B7B8605BB9F616947C1A3289C52ED41FC(__this, ((*(InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)((InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)UnBox(L_2, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_il2cpp_TypeInfo_var)))), NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool InputDevice_Equals_m206193EDB0C7A69C0BDFC821CE87B887C7BE0CAC_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*>(__this + _offset);
	bool _returnValue;
	_returnValue = InputDevice_Equals_m206193EDB0C7A69C0BDFC821CE87B887C7BE0CAC(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.InputDevice::Equals(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_Equals_mD6717F0B7B8605BB9F616947C1A3289C52ED41FC (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___other0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		uint64_t L_0;
		L_0 = InputDevice_get_deviceId_mF3FFF56432109EF58AC2EE178FA343261E950A19(__this, NULL);
		uint64_t L_1;
		L_1 = InputDevice_get_deviceId_mF3FFF56432109EF58AC2EE178FA343261E950A19((&___other0), NULL);
		V_0 = (bool)((((int64_t)L_0) == ((int64_t)L_1))? 1 : 0);
		goto IL_0013;
	}

IL_0013:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool InputDevice_Equals_mD6717F0B7B8605BB9F616947C1A3289C52ED41FC_AdjustorThunk (RuntimeObject* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___other0, const RuntimeMethod* method)
{
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*>(__this + _offset);
	bool _returnValue;
	_returnValue = InputDevice_Equals_mD6717F0B7B8605BB9F616947C1A3289C52ED41FC(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.InputDevice::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputDevice_GetHashCode_m4F8831F85A8646E52B12B5431BEC004AD1BAAD9D (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	int32_t V_1 = 0;
	{
		uint64_t L_0;
		L_0 = InputDevice_get_deviceId_mF3FFF56432109EF58AC2EE178FA343261E950A19(__this, NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&V_0), NULL);
		V_1 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		int32_t L_2 = V_1;
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t InputDevice_GetHashCode_m4F8831F85A8646E52B12B5431BEC004AD1BAAD9D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = InputDevice_GetHashCode_m4F8831F85A8646E52B12B5431BEC004AD1BAAD9D(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt64 UnityEngine.XR.Hand::get_deviceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Hand_get_deviceId_m3FD7DC0BD8EBE55A433CBDB6F3D9486D6491714A (Hand_t67B90BC0D36CBC92DF7E38BD15463B925CB5912C* __this, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		uint64_t L_0 = __this->___m_DeviceId_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  uint64_t Hand_get_deviceId_m3FD7DC0BD8EBE55A433CBDB6F3D9486D6491714A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Hand_t67B90BC0D36CBC92DF7E38BD15463B925CB5912C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Hand_t67B90BC0D36CBC92DF7E38BD15463B925CB5912C*>(__this + _offset);
	uint64_t _returnValue;
	_returnValue = Hand_get_deviceId_m3FD7DC0BD8EBE55A433CBDB6F3D9486D6491714A(_thisAdjusted, method);
	return _returnValue;
}
// System.UInt32 UnityEngine.XR.Hand::get_featureIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Hand_get_featureIndex_mD4AFCDFAEE8471B59400FF25F84328FA17229775 (Hand_t67B90BC0D36CBC92DF7E38BD15463B925CB5912C* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->___m_FeatureIndex_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  uint32_t Hand_get_featureIndex_mD4AFCDFAEE8471B59400FF25F84328FA17229775_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Hand_t67B90BC0D36CBC92DF7E38BD15463B925CB5912C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Hand_t67B90BC0D36CBC92DF7E38BD15463B925CB5912C*>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = Hand_get_featureIndex_mD4AFCDFAEE8471B59400FF25F84328FA17229775(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.Hand::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Hand_Equals_m2BEF7EF009B595519DA0ADBE1912C197CEAD2E06 (Hand_t67B90BC0D36CBC92DF7E38BD15463B925CB5912C* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hand_t67B90BC0D36CBC92DF7E38BD15463B925CB5912C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___obj0;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Hand_t67B90BC0D36CBC92DF7E38BD15463B925CB5912C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___obj0;
		bool L_3;
		L_3 = Hand_Equals_mA5FFEB3581A5E053717C0718AD68E596E801C864(__this, ((*(Hand_t67B90BC0D36CBC92DF7E38BD15463B925CB5912C*)((Hand_t67B90BC0D36CBC92DF7E38BD15463B925CB5912C*)(Hand_t67B90BC0D36CBC92DF7E38BD15463B925CB5912C*)UnBox(L_2, Hand_t67B90BC0D36CBC92DF7E38BD15463B925CB5912C_il2cpp_TypeInfo_var)))), NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool Hand_Equals_m2BEF7EF009B595519DA0ADBE1912C197CEAD2E06_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	Hand_t67B90BC0D36CBC92DF7E38BD15463B925CB5912C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Hand_t67B90BC0D36CBC92DF7E38BD15463B925CB5912C*>(__this + _offset);
	bool _returnValue;
	_returnValue = Hand_Equals_m2BEF7EF009B595519DA0ADBE1912C197CEAD2E06(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.Hand::Equals(UnityEngine.XR.Hand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Hand_Equals_mA5FFEB3581A5E053717C0718AD68E596E801C864 (Hand_t67B90BC0D36CBC92DF7E38BD15463B925CB5912C* __this, Hand_t67B90BC0D36CBC92DF7E38BD15463B925CB5912C ___other0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		uint64_t L_0;
		L_0 = Hand_get_deviceId_m3FD7DC0BD8EBE55A433CBDB6F3D9486D6491714A(__this, NULL);
		uint64_t L_1;
		L_1 = Hand_get_deviceId_m3FD7DC0BD8EBE55A433CBDB6F3D9486D6491714A((&___other0), NULL);
		if ((!(((uint64_t)L_0) == ((uint64_t)L_1))))
		{
			goto IL_0021;
		}
	}
	{
		uint32_t L_2;
		L_2 = Hand_get_featureIndex_mD4AFCDFAEE8471B59400FF25F84328FA17229775(__this, NULL);
		uint32_t L_3;
		L_3 = Hand_get_featureIndex_mD4AFCDFAEE8471B59400FF25F84328FA17229775((&___other0), NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0025;
	}

IL_0025:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool Hand_Equals_mA5FFEB3581A5E053717C0718AD68E596E801C864_AdjustorThunk (RuntimeObject* __this, Hand_t67B90BC0D36CBC92DF7E38BD15463B925CB5912C ___other0, const RuntimeMethod* method)
{
	Hand_t67B90BC0D36CBC92DF7E38BD15463B925CB5912C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Hand_t67B90BC0D36CBC92DF7E38BD15463B925CB5912C*>(__this + _offset);
	bool _returnValue;
	_returnValue = Hand_Equals_mA5FFEB3581A5E053717C0718AD68E596E801C864(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.Hand::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Hand_GetHashCode_mC1EA0B4473AFA966324B32BAC552ADB9BA9D24EE (Hand_t67B90BC0D36CBC92DF7E38BD15463B925CB5912C* __this, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		uint64_t L_0;
		L_0 = Hand_get_deviceId_m3FD7DC0BD8EBE55A433CBDB6F3D9486D6491714A(__this, NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&V_0), NULL);
		uint32_t L_2;
		L_2 = Hand_get_featureIndex_mD4AFCDFAEE8471B59400FF25F84328FA17229775(__this, NULL);
		V_1 = L_2;
		int32_t L_3;
		L_3 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((&V_1), NULL);
		V_2 = ((int32_t)(L_1^((int32_t)(L_3<<1))));
		goto IL_0023;
	}

IL_0023:
	{
		int32_t L_4 = V_2;
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t Hand_GetHashCode_mC1EA0B4473AFA966324B32BAC552ADB9BA9D24EE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Hand_t67B90BC0D36CBC92DF7E38BD15463B925CB5912C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Hand_t67B90BC0D36CBC92DF7E38BD15463B925CB5912C*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Hand_GetHashCode_mC1EA0B4473AFA966324B32BAC552ADB9BA9D24EE(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt64 UnityEngine.XR.Eyes::get_deviceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Eyes_get_deviceId_m673FE292832DCAB360282083381923052944EBFD (Eyes_t9FD3821575977E294F11E0EB92D2A4CA509ED8C7* __this, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		uint64_t L_0 = __this->___m_DeviceId_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  uint64_t Eyes_get_deviceId_m673FE292832DCAB360282083381923052944EBFD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Eyes_t9FD3821575977E294F11E0EB92D2A4CA509ED8C7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Eyes_t9FD3821575977E294F11E0EB92D2A4CA509ED8C7*>(__this + _offset);
	uint64_t _returnValue;
	_returnValue = Eyes_get_deviceId_m673FE292832DCAB360282083381923052944EBFD(_thisAdjusted, method);
	return _returnValue;
}
// System.UInt32 UnityEngine.XR.Eyes::get_featureIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Eyes_get_featureIndex_mC4D34E37C0C008A69E75136C501F8907BC4F2EE8 (Eyes_t9FD3821575977E294F11E0EB92D2A4CA509ED8C7* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->___m_FeatureIndex_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  uint32_t Eyes_get_featureIndex_mC4D34E37C0C008A69E75136C501F8907BC4F2EE8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Eyes_t9FD3821575977E294F11E0EB92D2A4CA509ED8C7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Eyes_t9FD3821575977E294F11E0EB92D2A4CA509ED8C7*>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = Eyes_get_featureIndex_mC4D34E37C0C008A69E75136C501F8907BC4F2EE8(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.Eyes::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Eyes_Equals_m4DC0E274FA64B59ED26E913BE0C95554476F228D (Eyes_t9FD3821575977E294F11E0EB92D2A4CA509ED8C7* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Eyes_t9FD3821575977E294F11E0EB92D2A4CA509ED8C7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___obj0;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Eyes_t9FD3821575977E294F11E0EB92D2A4CA509ED8C7_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___obj0;
		bool L_3;
		L_3 = Eyes_Equals_mE463ABC100B9BDB2790A18804BAD09FA1F289969(__this, ((*(Eyes_t9FD3821575977E294F11E0EB92D2A4CA509ED8C7*)((Eyes_t9FD3821575977E294F11E0EB92D2A4CA509ED8C7*)(Eyes_t9FD3821575977E294F11E0EB92D2A4CA509ED8C7*)UnBox(L_2, Eyes_t9FD3821575977E294F11E0EB92D2A4CA509ED8C7_il2cpp_TypeInfo_var)))), NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool Eyes_Equals_m4DC0E274FA64B59ED26E913BE0C95554476F228D_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	Eyes_t9FD3821575977E294F11E0EB92D2A4CA509ED8C7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Eyes_t9FD3821575977E294F11E0EB92D2A4CA509ED8C7*>(__this + _offset);
	bool _returnValue;
	_returnValue = Eyes_Equals_m4DC0E274FA64B59ED26E913BE0C95554476F228D(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.Eyes::Equals(UnityEngine.XR.Eyes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Eyes_Equals_mE463ABC100B9BDB2790A18804BAD09FA1F289969 (Eyes_t9FD3821575977E294F11E0EB92D2A4CA509ED8C7* __this, Eyes_t9FD3821575977E294F11E0EB92D2A4CA509ED8C7 ___other0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		uint64_t L_0;
		L_0 = Eyes_get_deviceId_m673FE292832DCAB360282083381923052944EBFD(__this, NULL);
		uint64_t L_1;
		L_1 = Eyes_get_deviceId_m673FE292832DCAB360282083381923052944EBFD((&___other0), NULL);
		if ((!(((uint64_t)L_0) == ((uint64_t)L_1))))
		{
			goto IL_0021;
		}
	}
	{
		uint32_t L_2;
		L_2 = Eyes_get_featureIndex_mC4D34E37C0C008A69E75136C501F8907BC4F2EE8(__this, NULL);
		uint32_t L_3;
		L_3 = Eyes_get_featureIndex_mC4D34E37C0C008A69E75136C501F8907BC4F2EE8((&___other0), NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0025;
	}

IL_0025:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool Eyes_Equals_mE463ABC100B9BDB2790A18804BAD09FA1F289969_AdjustorThunk (RuntimeObject* __this, Eyes_t9FD3821575977E294F11E0EB92D2A4CA509ED8C7 ___other0, const RuntimeMethod* method)
{
	Eyes_t9FD3821575977E294F11E0EB92D2A4CA509ED8C7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Eyes_t9FD3821575977E294F11E0EB92D2A4CA509ED8C7*>(__this + _offset);
	bool _returnValue;
	_returnValue = Eyes_Equals_mE463ABC100B9BDB2790A18804BAD09FA1F289969(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.Eyes::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Eyes_GetHashCode_m754EAF148F82A79A7DD39D5F0D294EC4ABC763C8 (Eyes_t9FD3821575977E294F11E0EB92D2A4CA509ED8C7* __this, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		uint64_t L_0;
		L_0 = Eyes_get_deviceId_m673FE292832DCAB360282083381923052944EBFD(__this, NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&V_0), NULL);
		uint32_t L_2;
		L_2 = Eyes_get_featureIndex_mC4D34E37C0C008A69E75136C501F8907BC4F2EE8(__this, NULL);
		V_1 = L_2;
		int32_t L_3;
		L_3 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((&V_1), NULL);
		V_2 = ((int32_t)(L_1^((int32_t)(L_3<<1))));
		goto IL_0023;
	}

IL_0023:
	{
		int32_t L_4 = V_2;
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t Eyes_GetHashCode_m754EAF148F82A79A7DD39D5F0D294EC4ABC763C8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Eyes_t9FD3821575977E294F11E0EB92D2A4CA509ED8C7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Eyes_t9FD3821575977E294F11E0EB92D2A4CA509ED8C7*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Eyes_GetHashCode_m754EAF148F82A79A7DD39D5F0D294EC4ABC763C8(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt64 UnityEngine.XR.Bone::get_deviceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Bone_get_deviceId_mA75E5FA9A3288C5F5E4172D7632FE228487BE0F1 (Bone_t2558B1DD1E4F405EA4D76A3B8D5149CA16011975* __this, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		uint64_t L_0 = __this->___m_DeviceId_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  uint64_t Bone_get_deviceId_mA75E5FA9A3288C5F5E4172D7632FE228487BE0F1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Bone_t2558B1DD1E4F405EA4D76A3B8D5149CA16011975* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Bone_t2558B1DD1E4F405EA4D76A3B8D5149CA16011975*>(__this + _offset);
	uint64_t _returnValue;
	_returnValue = Bone_get_deviceId_mA75E5FA9A3288C5F5E4172D7632FE228487BE0F1(_thisAdjusted, method);
	return _returnValue;
}
// System.UInt32 UnityEngine.XR.Bone::get_featureIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Bone_get_featureIndex_mF108AEAE50FFD1B908846717BBD95C59665925BE (Bone_t2558B1DD1E4F405EA4D76A3B8D5149CA16011975* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->___m_FeatureIndex_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  uint32_t Bone_get_featureIndex_mF108AEAE50FFD1B908846717BBD95C59665925BE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Bone_t2558B1DD1E4F405EA4D76A3B8D5149CA16011975* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Bone_t2558B1DD1E4F405EA4D76A3B8D5149CA16011975*>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = Bone_get_featureIndex_mF108AEAE50FFD1B908846717BBD95C59665925BE(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.Bone::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Bone_Equals_mDC77AF51237B5937D83C048DF2734EB7162620F7 (Bone_t2558B1DD1E4F405EA4D76A3B8D5149CA16011975* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Bone_t2558B1DD1E4F405EA4D76A3B8D5149CA16011975_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___obj0;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Bone_t2558B1DD1E4F405EA4D76A3B8D5149CA16011975_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___obj0;
		bool L_3;
		L_3 = Bone_Equals_mB8585697810AA19D6DD257F9479F01993739020F(__this, ((*(Bone_t2558B1DD1E4F405EA4D76A3B8D5149CA16011975*)((Bone_t2558B1DD1E4F405EA4D76A3B8D5149CA16011975*)(Bone_t2558B1DD1E4F405EA4D76A3B8D5149CA16011975*)UnBox(L_2, Bone_t2558B1DD1E4F405EA4D76A3B8D5149CA16011975_il2cpp_TypeInfo_var)))), NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool Bone_Equals_mDC77AF51237B5937D83C048DF2734EB7162620F7_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	Bone_t2558B1DD1E4F405EA4D76A3B8D5149CA16011975* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Bone_t2558B1DD1E4F405EA4D76A3B8D5149CA16011975*>(__this + _offset);
	bool _returnValue;
	_returnValue = Bone_Equals_mDC77AF51237B5937D83C048DF2734EB7162620F7(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.Bone::Equals(UnityEngine.XR.Bone)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Bone_Equals_mB8585697810AA19D6DD257F9479F01993739020F (Bone_t2558B1DD1E4F405EA4D76A3B8D5149CA16011975* __this, Bone_t2558B1DD1E4F405EA4D76A3B8D5149CA16011975 ___other0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		uint64_t L_0;
		L_0 = Bone_get_deviceId_mA75E5FA9A3288C5F5E4172D7632FE228487BE0F1(__this, NULL);
		uint64_t L_1;
		L_1 = Bone_get_deviceId_mA75E5FA9A3288C5F5E4172D7632FE228487BE0F1((&___other0), NULL);
		if ((!(((uint64_t)L_0) == ((uint64_t)L_1))))
		{
			goto IL_0021;
		}
	}
	{
		uint32_t L_2;
		L_2 = Bone_get_featureIndex_mF108AEAE50FFD1B908846717BBD95C59665925BE(__this, NULL);
		uint32_t L_3;
		L_3 = Bone_get_featureIndex_mF108AEAE50FFD1B908846717BBD95C59665925BE((&___other0), NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0025;
	}

IL_0025:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool Bone_Equals_mB8585697810AA19D6DD257F9479F01993739020F_AdjustorThunk (RuntimeObject* __this, Bone_t2558B1DD1E4F405EA4D76A3B8D5149CA16011975 ___other0, const RuntimeMethod* method)
{
	Bone_t2558B1DD1E4F405EA4D76A3B8D5149CA16011975* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Bone_t2558B1DD1E4F405EA4D76A3B8D5149CA16011975*>(__this + _offset);
	bool _returnValue;
	_returnValue = Bone_Equals_mB8585697810AA19D6DD257F9479F01993739020F(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.Bone::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Bone_GetHashCode_mF14BB3AB7B7F52290CDF5D6A7C63AE11B3294F82 (Bone_t2558B1DD1E4F405EA4D76A3B8D5149CA16011975* __this, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		uint64_t L_0;
		L_0 = Bone_get_deviceId_mA75E5FA9A3288C5F5E4172D7632FE228487BE0F1(__this, NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&V_0), NULL);
		uint32_t L_2;
		L_2 = Bone_get_featureIndex_mF108AEAE50FFD1B908846717BBD95C59665925BE(__this, NULL);
		V_1 = L_2;
		int32_t L_3;
		L_3 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((&V_1), NULL);
		V_2 = ((int32_t)(L_1^((int32_t)(L_3<<1))));
		goto IL_0023;
	}

IL_0023:
	{
		int32_t L_4 = V_2;
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t Bone_GetHashCode_mF14BB3AB7B7F52290CDF5D6A7C63AE11B3294F82_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Bone_t2558B1DD1E4F405EA4D76A3B8D5149CA16011975* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Bone_t2558B1DD1E4F405EA4D76A3B8D5149CA16011975*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Bone_GetHashCode_mF14BB3AB7B7F52290CDF5D6A7C63AE11B3294F82(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.XR.InputDevices
IL2CPP_EXTERN_C void InputDevices_t02B79FC19CEA9AC29A9945F5CDA6D790730FBF34_marshal_pinvoke(const InputDevices_t02B79FC19CEA9AC29A9945F5CDA6D790730FBF34& unmarshaled, InputDevices_t02B79FC19CEA9AC29A9945F5CDA6D790730FBF34_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void InputDevices_t02B79FC19CEA9AC29A9945F5CDA6D790730FBF34_marshal_pinvoke_back(const InputDevices_t02B79FC19CEA9AC29A9945F5CDA6D790730FBF34_marshaled_pinvoke& marshaled, InputDevices_t02B79FC19CEA9AC29A9945F5CDA6D790730FBF34& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.InputDevices
IL2CPP_EXTERN_C void InputDevices_t02B79FC19CEA9AC29A9945F5CDA6D790730FBF34_marshal_pinvoke_cleanup(InputDevices_t02B79FC19CEA9AC29A9945F5CDA6D790730FBF34_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.InputDevices
IL2CPP_EXTERN_C void InputDevices_t02B79FC19CEA9AC29A9945F5CDA6D790730FBF34_marshal_com(const InputDevices_t02B79FC19CEA9AC29A9945F5CDA6D790730FBF34& unmarshaled, InputDevices_t02B79FC19CEA9AC29A9945F5CDA6D790730FBF34_marshaled_com& marshaled)
{
}
IL2CPP_EXTERN_C void InputDevices_t02B79FC19CEA9AC29A9945F5CDA6D790730FBF34_marshal_com_back(const InputDevices_t02B79FC19CEA9AC29A9945F5CDA6D790730FBF34_marshaled_com& marshaled, InputDevices_t02B79FC19CEA9AC29A9945F5CDA6D790730FBF34& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.InputDevices
IL2CPP_EXTERN_C void InputDevices_t02B79FC19CEA9AC29A9945F5CDA6D790730FBF34_marshal_com_cleanup(InputDevices_t02B79FC19CEA9AC29A9945F5CDA6D790730FBF34_marshaled_com& marshaled)
{
}
// UnityEngine.XR.InputDevice UnityEngine.XR.InputDevices::GetDeviceAtXRNode(UnityEngine.XR.XRNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD InputDevices_GetDeviceAtXRNode_m3D322E7D1FFDA9C4D53E6B944E636C39B7A9592B (int32_t ___node0, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ___node0;
		uint64_t L_1;
		L_1 = InputTracking_GetDeviceIdAtXRNode_mF6AA8F79B81E685890712AE72FADC4D1113CDECC(L_0, NULL);
		V_0 = L_1;
		uint64_t L_2 = V_0;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_3;
		memset((&L_3), 0, sizeof(L_3));
		InputDevice__ctor_mC7506750471891883425541E9DE3EB23D8FE4E34((&L_3), L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_4 = V_1;
		return L_4;
	}
}
// System.Void UnityEngine.XR.InputDevices::InvokeConnectionEvent(System.UInt64,UnityEngine.XR.ConnectionChangeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDevices_InvokeConnectionEvent_m10F62F8E2E197247E88668345C22114268233B1A (uint64_t ___deviceId0, uint32_t ___change1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputDevices_t02B79FC19CEA9AC29A9945F5CDA6D790730FBF34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		uint32_t L_0 = ___change1;
		V_1 = L_0;
		uint32_t L_1 = V_1;
		V_0 = L_1;
		uint32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0019;
			}
			case 1:
			{
				goto IL_0039;
			}
			case 2:
			{
				goto IL_0059;
			}
		}
	}
	{
		goto IL_007b;
	}

IL_0019:
	{
		Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC* L_3 = ((InputDevices_t02B79FC19CEA9AC29A9945F5CDA6D790730FBF34_StaticFields*)il2cpp_codegen_static_fields_for(InputDevices_t02B79FC19CEA9AC29A9945F5CDA6D790730FBF34_il2cpp_TypeInfo_var))->___deviceConnected_0;
		V_2 = (bool)((!(((RuntimeObject*)(Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC* L_5 = ((InputDevices_t02B79FC19CEA9AC29A9945F5CDA6D790730FBF34_StaticFields*)il2cpp_codegen_static_fields_for(InputDevices_t02B79FC19CEA9AC29A9945F5CDA6D790730FBF34_il2cpp_TypeInfo_var))->___deviceConnected_0;
		uint64_t L_6 = ___deviceId0;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_7;
		memset((&L_7), 0, sizeof(L_7));
		InputDevice__ctor_mC7506750471891883425541E9DE3EB23D8FE4E34((&L_7), L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		Action_1_Invoke_m711ABCFDFDF3836EE35ED7CD7E5B3FAD04EAE649_inline(L_5, L_7, NULL);
	}

IL_0037:
	{
		goto IL_007b;
	}

IL_0039:
	{
		Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC* L_8 = ((InputDevices_t02B79FC19CEA9AC29A9945F5CDA6D790730FBF34_StaticFields*)il2cpp_codegen_static_fields_for(InputDevices_t02B79FC19CEA9AC29A9945F5CDA6D790730FBF34_il2cpp_TypeInfo_var))->___deviceDisconnected_1;
		V_3 = (bool)((!(((RuntimeObject*)(Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC*)L_8) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0057;
		}
	}
	{
		Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC* L_10 = ((InputDevices_t02B79FC19CEA9AC29A9945F5CDA6D790730FBF34_StaticFields*)il2cpp_codegen_static_fields_for(InputDevices_t02B79FC19CEA9AC29A9945F5CDA6D790730FBF34_il2cpp_TypeInfo_var))->___deviceDisconnected_1;
		uint64_t L_11 = ___deviceId0;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_12;
		memset((&L_12), 0, sizeof(L_12));
		InputDevice__ctor_mC7506750471891883425541E9DE3EB23D8FE4E34((&L_12), L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		Action_1_Invoke_m711ABCFDFDF3836EE35ED7CD7E5B3FAD04EAE649_inline(L_10, L_12, NULL);
	}

IL_0057:
	{
		goto IL_007b;
	}

IL_0059:
	{
		Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC* L_13 = ((InputDevices_t02B79FC19CEA9AC29A9945F5CDA6D790730FBF34_StaticFields*)il2cpp_codegen_static_fields_for(InputDevices_t02B79FC19CEA9AC29A9945F5CDA6D790730FBF34_il2cpp_TypeInfo_var))->___deviceConfigChanged_2;
		V_4 = (bool)((!(((RuntimeObject*)(Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC*)L_13) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_0079;
		}
	}
	{
		Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC* L_15 = ((InputDevices_t02B79FC19CEA9AC29A9945F5CDA6D790730FBF34_StaticFields*)il2cpp_codegen_static_fields_for(InputDevices_t02B79FC19CEA9AC29A9945F5CDA6D790730FBF34_il2cpp_TypeInfo_var))->___deviceConfigChanged_2;
		uint64_t L_16 = ___deviceId0;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_17;
		memset((&L_17), 0, sizeof(L_17));
		InputDevice__ctor_mC7506750471891883425541E9DE3EB23D8FE4E34((&L_17), L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		Action_1_Invoke_m711ABCFDFDF3836EE35ED7CD7E5B3FAD04EAE649_inline(L_15, L_17, NULL);
	}

IL_0079:
	{
		goto IL_007b;
	}

IL_007b:
	{
		return;
	}
}
// System.Boolean UnityEngine.XR.InputDevices::SendHapticImpulse(System.UInt64,System.UInt32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevices_SendHapticImpulse_mC965C7C6A20D28CD51EDFC5BE61E85D6505A74F7 (uint64_t ___deviceId0, uint32_t ___channel1, float ___amplitude2, float ___duration3, const RuntimeMethod* method) 
{
	typedef bool (*InputDevices_SendHapticImpulse_mC965C7C6A20D28CD51EDFC5BE61E85D6505A74F7_ftn) (uint64_t, uint32_t, float, float);
	static InputDevices_SendHapticImpulse_mC965C7C6A20D28CD51EDFC5BE61E85D6505A74F7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (InputDevices_SendHapticImpulse_mC965C7C6A20D28CD51EDFC5BE61E85D6505A74F7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.InputDevices::SendHapticImpulse(System.UInt64,System.UInt32,System.Single,System.Single)");
	bool icallRetVal = _il2cpp_icall_func(___deviceId0, ___channel1, ___amplitude2, ___duration3);
	return icallRetVal;
}
// System.Boolean UnityEngine.XR.InputDevices::TryGetHapticCapabilities(System.UInt64,UnityEngine.XR.HapticCapabilities&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevices_TryGetHapticCapabilities_mBCEC7D1AE8C869608B3FF5D05EF2629729B91CA7 (uint64_t ___deviceId0, HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211* ___capabilities1, const RuntimeMethod* method) 
{
	typedef bool (*InputDevices_TryGetHapticCapabilities_mBCEC7D1AE8C869608B3FF5D05EF2629729B91CA7_ftn) (uint64_t, HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211*);
	static InputDevices_TryGetHapticCapabilities_mBCEC7D1AE8C869608B3FF5D05EF2629729B91CA7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (InputDevices_TryGetHapticCapabilities_mBCEC7D1AE8C869608B3FF5D05EF2629729B91CA7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.InputDevices::TryGetHapticCapabilities(System.UInt64,UnityEngine.XR.HapticCapabilities&)");
	bool icallRetVal = _il2cpp_icall_func(___deviceId0, ___capabilities1);
	return icallRetVal;
}
// System.Boolean UnityEngine.XR.InputDevices::TryGetFeatureValue_bool(System.UInt64,System.String,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevices_TryGetFeatureValue_bool_mD652BFAC63C19FFE34BA0E552A764C655402F0F2 (uint64_t ___deviceId0, String_t* ___usage1, bool* ___value2, const RuntimeMethod* method) 
{
	typedef bool (*InputDevices_TryGetFeatureValue_bool_mD652BFAC63C19FFE34BA0E552A764C655402F0F2_ftn) (uint64_t, String_t*, bool*);
	static InputDevices_TryGetFeatureValue_bool_mD652BFAC63C19FFE34BA0E552A764C655402F0F2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (InputDevices_TryGetFeatureValue_bool_mD652BFAC63C19FFE34BA0E552A764C655402F0F2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.InputDevices::TryGetFeatureValue_bool(System.UInt64,System.String,System.Boolean&)");
	bool icallRetVal = _il2cpp_icall_func(___deviceId0, ___usage1, ___value2);
	return icallRetVal;
}
// System.Boolean UnityEngine.XR.InputDevices::TryGetFeatureValue_UInt32(System.UInt64,System.String,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevices_TryGetFeatureValue_UInt32_m50BDA6D2D451E2032210DFF4CDA8FE7EDE3EE4D2 (uint64_t ___deviceId0, String_t* ___usage1, uint32_t* ___value2, const RuntimeMethod* method) 
{
	typedef bool (*InputDevices_TryGetFeatureValue_UInt32_m50BDA6D2D451E2032210DFF4CDA8FE7EDE3EE4D2_ftn) (uint64_t, String_t*, uint32_t*);
	static InputDevices_TryGetFeatureValue_UInt32_m50BDA6D2D451E2032210DFF4CDA8FE7EDE3EE4D2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (InputDevices_TryGetFeatureValue_UInt32_m50BDA6D2D451E2032210DFF4CDA8FE7EDE3EE4D2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.InputDevices::TryGetFeatureValue_UInt32(System.UInt64,System.String,System.UInt32&)");
	bool icallRetVal = _il2cpp_icall_func(___deviceId0, ___usage1, ___value2);
	return icallRetVal;
}
// System.Boolean UnityEngine.XR.InputDevices::TryGetFeatureValue_float(System.UInt64,System.String,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevices_TryGetFeatureValue_float_m2F667629D89251CD719FF2752E644467DF5B7F7D (uint64_t ___deviceId0, String_t* ___usage1, float* ___value2, const RuntimeMethod* method) 
{
	typedef bool (*InputDevices_TryGetFeatureValue_float_m2F667629D89251CD719FF2752E644467DF5B7F7D_ftn) (uint64_t, String_t*, float*);
	static InputDevices_TryGetFeatureValue_float_m2F667629D89251CD719FF2752E644467DF5B7F7D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (InputDevices_TryGetFeatureValue_float_m2F667629D89251CD719FF2752E644467DF5B7F7D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.InputDevices::TryGetFeatureValue_float(System.UInt64,System.String,System.Single&)");
	bool icallRetVal = _il2cpp_icall_func(___deviceId0, ___usage1, ___value2);
	return icallRetVal;
}
// System.Boolean UnityEngine.XR.InputDevices::TryGetFeatureValue_Vector2f(System.UInt64,System.String,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevices_TryGetFeatureValue_Vector2f_mF98BD89249A038E4D9EDA8D4E64CCEFAFB40E646 (uint64_t ___deviceId0, String_t* ___usage1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___value2, const RuntimeMethod* method) 
{
	typedef bool (*InputDevices_TryGetFeatureValue_Vector2f_mF98BD89249A038E4D9EDA8D4E64CCEFAFB40E646_ftn) (uint64_t, String_t*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*);
	static InputDevices_TryGetFeatureValue_Vector2f_mF98BD89249A038E4D9EDA8D4E64CCEFAFB40E646_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (InputDevices_TryGetFeatureValue_Vector2f_mF98BD89249A038E4D9EDA8D4E64CCEFAFB40E646_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.InputDevices::TryGetFeatureValue_Vector2f(System.UInt64,System.String,UnityEngine.Vector2&)");
	bool icallRetVal = _il2cpp_icall_func(___deviceId0, ___usage1, ___value2);
	return icallRetVal;
}
// System.Boolean UnityEngine.XR.InputDevices::TryGetFeatureValue_Vector3f(System.UInt64,System.String,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevices_TryGetFeatureValue_Vector3f_m765F82CDF7B96A1F616753B9C14AF5144F71F9BB (uint64_t ___deviceId0, String_t* ___usage1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___value2, const RuntimeMethod* method) 
{
	typedef bool (*InputDevices_TryGetFeatureValue_Vector3f_m765F82CDF7B96A1F616753B9C14AF5144F71F9BB_ftn) (uint64_t, String_t*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static InputDevices_TryGetFeatureValue_Vector3f_m765F82CDF7B96A1F616753B9C14AF5144F71F9BB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (InputDevices_TryGetFeatureValue_Vector3f_m765F82CDF7B96A1F616753B9C14AF5144F71F9BB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.InputDevices::TryGetFeatureValue_Vector3f(System.UInt64,System.String,UnityEngine.Vector3&)");
	bool icallRetVal = _il2cpp_icall_func(___deviceId0, ___usage1, ___value2);
	return icallRetVal;
}
// System.Boolean UnityEngine.XR.InputDevices::TryGetFeatureValue_Quaternionf(System.UInt64,System.String,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevices_TryGetFeatureValue_Quaternionf_m7E4BA3BCD07D23060BA8273A1018CD40EB41B1B4 (uint64_t ___deviceId0, String_t* ___usage1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___value2, const RuntimeMethod* method) 
{
	typedef bool (*InputDevices_TryGetFeatureValue_Quaternionf_m7E4BA3BCD07D23060BA8273A1018CD40EB41B1B4_ftn) (uint64_t, String_t*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*);
	static InputDevices_TryGetFeatureValue_Quaternionf_m7E4BA3BCD07D23060BA8273A1018CD40EB41B1B4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (InputDevices_TryGetFeatureValue_Quaternionf_m7E4BA3BCD07D23060BA8273A1018CD40EB41B1B4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.InputDevices::TryGetFeatureValue_Quaternionf(System.UInt64,System.String,UnityEngine.Quaternion&)");
	bool icallRetVal = _il2cpp_icall_func(___deviceId0, ___usage1, ___value2);
	return icallRetVal;
}
// System.Boolean UnityEngine.XR.InputDevices::IsDeviceValid(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevices_IsDeviceValid_m3A26291DCB7733D1538DF700E4638BE9DF9A994A (uint64_t ___deviceId0, const RuntimeMethod* method) 
{
	typedef bool (*InputDevices_IsDeviceValid_m3A26291DCB7733D1538DF700E4638BE9DF9A994A_ftn) (uint64_t);
	static InputDevices_IsDeviceValid_m3A26291DCB7733D1538DF700E4638BE9DF9A994A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (InputDevices_IsDeviceValid_m3A26291DCB7733D1538DF700E4638BE9DF9A994A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.InputDevices::IsDeviceValid(System.UInt64)");
	bool icallRetVal = _il2cpp_icall_func(___deviceId0);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.XRDisplaySubsystem::InvokeDisplayFocusChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDisplaySubsystem_InvokeDisplayFocusChanged_m57036DB43BB9F6BF12AADC268AC47D190378BE56 (XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* __this, bool ___focus0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = __this->___displayFocusChanged_2;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = __this->___displayFocusChanged_2;
		bool L_3 = ___focus0;
		NullCheck(L_2);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_2, L_3, NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void UnityEngine.XR.XRDisplaySubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDisplaySubsystem__ctor_m5DA92849F107C6A802BF584D5E328FF2DB971B01 (XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntegratedSubsystem_1__ctor_m0BE780FA80AAFE2DB1209D5731A5E72EFAB7051F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IntegratedSubsystem_1__ctor_m0BE780FA80AAFE2DB1209D5731A5E72EFAB7051F(__this, IntegratedSubsystem_1__ctor_m0BE780FA80AAFE2DB1209D5731A5E72EFAB7051F_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.XR.XRDisplaySubsystem/XRRenderPass
IL2CPP_EXTERN_C void XRRenderPass_t9E8711E8C69E3917AA39A0CA8304B604ED2838E8_marshal_pinvoke(const XRRenderPass_t9E8711E8C69E3917AA39A0CA8304B604ED2838E8& unmarshaled, XRRenderPass_t9E8711E8C69E3917AA39A0CA8304B604ED2838E8_marshaled_pinvoke& marshaled)
{
	marshaled.___displaySubsystemInstance_0 = unmarshaled.___displaySubsystemInstance_0;
	marshaled.___renderPassIndex_1 = unmarshaled.___renderPassIndex_1;
	marshaled.___renderTarget_2 = unmarshaled.___renderTarget_2;
	marshaled.___renderTargetDesc_3 = unmarshaled.___renderTargetDesc_3;
	marshaled.___hasMotionVectorPass_4 = static_cast<int32_t>(unmarshaled.___hasMotionVectorPass_4);
	marshaled.___motionVectorRenderTarget_5 = unmarshaled.___motionVectorRenderTarget_5;
	marshaled.___motionVectorRenderTargetDesc_6 = unmarshaled.___motionVectorRenderTargetDesc_6;
	marshaled.___shouldFillOutDepth_7 = static_cast<int32_t>(unmarshaled.___shouldFillOutDepth_7);
	marshaled.___cullingPassIndex_8 = unmarshaled.___cullingPassIndex_8;
}
IL2CPP_EXTERN_C void XRRenderPass_t9E8711E8C69E3917AA39A0CA8304B604ED2838E8_marshal_pinvoke_back(const XRRenderPass_t9E8711E8C69E3917AA39A0CA8304B604ED2838E8_marshaled_pinvoke& marshaled, XRRenderPass_t9E8711E8C69E3917AA39A0CA8304B604ED2838E8& unmarshaled)
{
	intptr_t unmarshaleddisplaySubsystemInstance_temp_0;
	memset((&unmarshaleddisplaySubsystemInstance_temp_0), 0, sizeof(unmarshaleddisplaySubsystemInstance_temp_0));
	unmarshaleddisplaySubsystemInstance_temp_0 = marshaled.___displaySubsystemInstance_0;
	unmarshaled.___displaySubsystemInstance_0 = unmarshaleddisplaySubsystemInstance_temp_0;
	int32_t unmarshaledrenderPassIndex_temp_1 = 0;
	unmarshaledrenderPassIndex_temp_1 = marshaled.___renderPassIndex_1;
	unmarshaled.___renderPassIndex_1 = unmarshaledrenderPassIndex_temp_1;
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B unmarshaledrenderTarget_temp_2;
	memset((&unmarshaledrenderTarget_temp_2), 0, sizeof(unmarshaledrenderTarget_temp_2));
	unmarshaledrenderTarget_temp_2 = marshaled.___renderTarget_2;
	unmarshaled.___renderTarget_2 = unmarshaledrenderTarget_temp_2;
	RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 unmarshaledrenderTargetDesc_temp_3;
	memset((&unmarshaledrenderTargetDesc_temp_3), 0, sizeof(unmarshaledrenderTargetDesc_temp_3));
	unmarshaledrenderTargetDesc_temp_3 = marshaled.___renderTargetDesc_3;
	unmarshaled.___renderTargetDesc_3 = unmarshaledrenderTargetDesc_temp_3;
	bool unmarshaledhasMotionVectorPass_temp_4 = false;
	unmarshaledhasMotionVectorPass_temp_4 = static_cast<bool>(marshaled.___hasMotionVectorPass_4);
	unmarshaled.___hasMotionVectorPass_4 = unmarshaledhasMotionVectorPass_temp_4;
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B unmarshaledmotionVectorRenderTarget_temp_5;
	memset((&unmarshaledmotionVectorRenderTarget_temp_5), 0, sizeof(unmarshaledmotionVectorRenderTarget_temp_5));
	unmarshaledmotionVectorRenderTarget_temp_5 = marshaled.___motionVectorRenderTarget_5;
	unmarshaled.___motionVectorRenderTarget_5 = unmarshaledmotionVectorRenderTarget_temp_5;
	RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 unmarshaledmotionVectorRenderTargetDesc_temp_6;
	memset((&unmarshaledmotionVectorRenderTargetDesc_temp_6), 0, sizeof(unmarshaledmotionVectorRenderTargetDesc_temp_6));
	unmarshaledmotionVectorRenderTargetDesc_temp_6 = marshaled.___motionVectorRenderTargetDesc_6;
	unmarshaled.___motionVectorRenderTargetDesc_6 = unmarshaledmotionVectorRenderTargetDesc_temp_6;
	bool unmarshaledshouldFillOutDepth_temp_7 = false;
	unmarshaledshouldFillOutDepth_temp_7 = static_cast<bool>(marshaled.___shouldFillOutDepth_7);
	unmarshaled.___shouldFillOutDepth_7 = unmarshaledshouldFillOutDepth_temp_7;
	int32_t unmarshaledcullingPassIndex_temp_8 = 0;
	unmarshaledcullingPassIndex_temp_8 = marshaled.___cullingPassIndex_8;
	unmarshaled.___cullingPassIndex_8 = unmarshaledcullingPassIndex_temp_8;
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.XRDisplaySubsystem/XRRenderPass
IL2CPP_EXTERN_C void XRRenderPass_t9E8711E8C69E3917AA39A0CA8304B604ED2838E8_marshal_pinvoke_cleanup(XRRenderPass_t9E8711E8C69E3917AA39A0CA8304B604ED2838E8_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.XRDisplaySubsystem/XRRenderPass
IL2CPP_EXTERN_C void XRRenderPass_t9E8711E8C69E3917AA39A0CA8304B604ED2838E8_marshal_com(const XRRenderPass_t9E8711E8C69E3917AA39A0CA8304B604ED2838E8& unmarshaled, XRRenderPass_t9E8711E8C69E3917AA39A0CA8304B604ED2838E8_marshaled_com& marshaled)
{
	marshaled.___displaySubsystemInstance_0 = unmarshaled.___displaySubsystemInstance_0;
	marshaled.___renderPassIndex_1 = unmarshaled.___renderPassIndex_1;
	marshaled.___renderTarget_2 = unmarshaled.___renderTarget_2;
	marshaled.___renderTargetDesc_3 = unmarshaled.___renderTargetDesc_3;
	marshaled.___hasMotionVectorPass_4 = static_cast<int32_t>(unmarshaled.___hasMotionVectorPass_4);
	marshaled.___motionVectorRenderTarget_5 = unmarshaled.___motionVectorRenderTarget_5;
	marshaled.___motionVectorRenderTargetDesc_6 = unmarshaled.___motionVectorRenderTargetDesc_6;
	marshaled.___shouldFillOutDepth_7 = static_cast<int32_t>(unmarshaled.___shouldFillOutDepth_7);
	marshaled.___cullingPassIndex_8 = unmarshaled.___cullingPassIndex_8;
}
IL2CPP_EXTERN_C void XRRenderPass_t9E8711E8C69E3917AA39A0CA8304B604ED2838E8_marshal_com_back(const XRRenderPass_t9E8711E8C69E3917AA39A0CA8304B604ED2838E8_marshaled_com& marshaled, XRRenderPass_t9E8711E8C69E3917AA39A0CA8304B604ED2838E8& unmarshaled)
{
	intptr_t unmarshaleddisplaySubsystemInstance_temp_0;
	memset((&unmarshaleddisplaySubsystemInstance_temp_0), 0, sizeof(unmarshaleddisplaySubsystemInstance_temp_0));
	unmarshaleddisplaySubsystemInstance_temp_0 = marshaled.___displaySubsystemInstance_0;
	unmarshaled.___displaySubsystemInstance_0 = unmarshaleddisplaySubsystemInstance_temp_0;
	int32_t unmarshaledrenderPassIndex_temp_1 = 0;
	unmarshaledrenderPassIndex_temp_1 = marshaled.___renderPassIndex_1;
	unmarshaled.___renderPassIndex_1 = unmarshaledrenderPassIndex_temp_1;
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B unmarshaledrenderTarget_temp_2;
	memset((&unmarshaledrenderTarget_temp_2), 0, sizeof(unmarshaledrenderTarget_temp_2));
	unmarshaledrenderTarget_temp_2 = marshaled.___renderTarget_2;
	unmarshaled.___renderTarget_2 = unmarshaledrenderTarget_temp_2;
	RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 unmarshaledrenderTargetDesc_temp_3;
	memset((&unmarshaledrenderTargetDesc_temp_3), 0, sizeof(unmarshaledrenderTargetDesc_temp_3));
	unmarshaledrenderTargetDesc_temp_3 = marshaled.___renderTargetDesc_3;
	unmarshaled.___renderTargetDesc_3 = unmarshaledrenderTargetDesc_temp_3;
	bool unmarshaledhasMotionVectorPass_temp_4 = false;
	unmarshaledhasMotionVectorPass_temp_4 = static_cast<bool>(marshaled.___hasMotionVectorPass_4);
	unmarshaled.___hasMotionVectorPass_4 = unmarshaledhasMotionVectorPass_temp_4;
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B unmarshaledmotionVectorRenderTarget_temp_5;
	memset((&unmarshaledmotionVectorRenderTarget_temp_5), 0, sizeof(unmarshaledmotionVectorRenderTarget_temp_5));
	unmarshaledmotionVectorRenderTarget_temp_5 = marshaled.___motionVectorRenderTarget_5;
	unmarshaled.___motionVectorRenderTarget_5 = unmarshaledmotionVectorRenderTarget_temp_5;
	RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 unmarshaledmotionVectorRenderTargetDesc_temp_6;
	memset((&unmarshaledmotionVectorRenderTargetDesc_temp_6), 0, sizeof(unmarshaledmotionVectorRenderTargetDesc_temp_6));
	unmarshaledmotionVectorRenderTargetDesc_temp_6 = marshaled.___motionVectorRenderTargetDesc_6;
	unmarshaled.___motionVectorRenderTargetDesc_6 = unmarshaledmotionVectorRenderTargetDesc_temp_6;
	bool unmarshaledshouldFillOutDepth_temp_7 = false;
	unmarshaledshouldFillOutDepth_temp_7 = static_cast<bool>(marshaled.___shouldFillOutDepth_7);
	unmarshaled.___shouldFillOutDepth_7 = unmarshaledshouldFillOutDepth_temp_7;
	int32_t unmarshaledcullingPassIndex_temp_8 = 0;
	unmarshaledcullingPassIndex_temp_8 = marshaled.___cullingPassIndex_8;
	unmarshaled.___cullingPassIndex_8 = unmarshaledcullingPassIndex_temp_8;
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.XRDisplaySubsystem/XRRenderPass
IL2CPP_EXTERN_C void XRRenderPass_t9E8711E8C69E3917AA39A0CA8304B604ED2838E8_marshal_com_cleanup(XRRenderPass_t9E8711E8C69E3917AA39A0CA8304B604ED2838E8_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.XR.XRDisplaySubsystem/XRMirrorViewBlitDesc
IL2CPP_EXTERN_C void XRMirrorViewBlitDesc_tC913B2856BA2160BC3AD99F0C67293850E2162E0_marshal_pinvoke(const XRMirrorViewBlitDesc_tC913B2856BA2160BC3AD99F0C67293850E2162E0& unmarshaled, XRMirrorViewBlitDesc_tC913B2856BA2160BC3AD99F0C67293850E2162E0_marshaled_pinvoke& marshaled)
{
	marshaled.___displaySubsystemInstance_0 = unmarshaled.___displaySubsystemInstance_0;
	marshaled.___nativeBlitAvailable_1 = static_cast<int32_t>(unmarshaled.___nativeBlitAvailable_1);
	marshaled.___nativeBlitInvalidStates_2 = static_cast<int32_t>(unmarshaled.___nativeBlitInvalidStates_2);
	marshaled.___blitParamsCount_3 = unmarshaled.___blitParamsCount_3;
}
IL2CPP_EXTERN_C void XRMirrorViewBlitDesc_tC913B2856BA2160BC3AD99F0C67293850E2162E0_marshal_pinvoke_back(const XRMirrorViewBlitDesc_tC913B2856BA2160BC3AD99F0C67293850E2162E0_marshaled_pinvoke& marshaled, XRMirrorViewBlitDesc_tC913B2856BA2160BC3AD99F0C67293850E2162E0& unmarshaled)
{
	intptr_t unmarshaleddisplaySubsystemInstance_temp_0;
	memset((&unmarshaleddisplaySubsystemInstance_temp_0), 0, sizeof(unmarshaleddisplaySubsystemInstance_temp_0));
	unmarshaleddisplaySubsystemInstance_temp_0 = marshaled.___displaySubsystemInstance_0;
	unmarshaled.___displaySubsystemInstance_0 = unmarshaleddisplaySubsystemInstance_temp_0;
	bool unmarshalednativeBlitAvailable_temp_1 = false;
	unmarshalednativeBlitAvailable_temp_1 = static_cast<bool>(marshaled.___nativeBlitAvailable_1);
	unmarshaled.___nativeBlitAvailable_1 = unmarshalednativeBlitAvailable_temp_1;
	bool unmarshalednativeBlitInvalidStates_temp_2 = false;
	unmarshalednativeBlitInvalidStates_temp_2 = static_cast<bool>(marshaled.___nativeBlitInvalidStates_2);
	unmarshaled.___nativeBlitInvalidStates_2 = unmarshalednativeBlitInvalidStates_temp_2;
	int32_t unmarshaledblitParamsCount_temp_3 = 0;
	unmarshaledblitParamsCount_temp_3 = marshaled.___blitParamsCount_3;
	unmarshaled.___blitParamsCount_3 = unmarshaledblitParamsCount_temp_3;
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.XRDisplaySubsystem/XRMirrorViewBlitDesc
IL2CPP_EXTERN_C void XRMirrorViewBlitDesc_tC913B2856BA2160BC3AD99F0C67293850E2162E0_marshal_pinvoke_cleanup(XRMirrorViewBlitDesc_tC913B2856BA2160BC3AD99F0C67293850E2162E0_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.XRDisplaySubsystem/XRMirrorViewBlitDesc
IL2CPP_EXTERN_C void XRMirrorViewBlitDesc_tC913B2856BA2160BC3AD99F0C67293850E2162E0_marshal_com(const XRMirrorViewBlitDesc_tC913B2856BA2160BC3AD99F0C67293850E2162E0& unmarshaled, XRMirrorViewBlitDesc_tC913B2856BA2160BC3AD99F0C67293850E2162E0_marshaled_com& marshaled)
{
	marshaled.___displaySubsystemInstance_0 = unmarshaled.___displaySubsystemInstance_0;
	marshaled.___nativeBlitAvailable_1 = static_cast<int32_t>(unmarshaled.___nativeBlitAvailable_1);
	marshaled.___nativeBlitInvalidStates_2 = static_cast<int32_t>(unmarshaled.___nativeBlitInvalidStates_2);
	marshaled.___blitParamsCount_3 = unmarshaled.___blitParamsCount_3;
}
IL2CPP_EXTERN_C void XRMirrorViewBlitDesc_tC913B2856BA2160BC3AD99F0C67293850E2162E0_marshal_com_back(const XRMirrorViewBlitDesc_tC913B2856BA2160BC3AD99F0C67293850E2162E0_marshaled_com& marshaled, XRMirrorViewBlitDesc_tC913B2856BA2160BC3AD99F0C67293850E2162E0& unmarshaled)
{
	intptr_t unmarshaleddisplaySubsystemInstance_temp_0;
	memset((&unmarshaleddisplaySubsystemInstance_temp_0), 0, sizeof(unmarshaleddisplaySubsystemInstance_temp_0));
	unmarshaleddisplaySubsystemInstance_temp_0 = marshaled.___displaySubsystemInstance_0;
	unmarshaled.___displaySubsystemInstance_0 = unmarshaleddisplaySubsystemInstance_temp_0;
	bool unmarshalednativeBlitAvailable_temp_1 = false;
	unmarshalednativeBlitAvailable_temp_1 = static_cast<bool>(marshaled.___nativeBlitAvailable_1);
	unmarshaled.___nativeBlitAvailable_1 = unmarshalednativeBlitAvailable_temp_1;
	bool unmarshalednativeBlitInvalidStates_temp_2 = false;
	unmarshalednativeBlitInvalidStates_temp_2 = static_cast<bool>(marshaled.___nativeBlitInvalidStates_2);
	unmarshaled.___nativeBlitInvalidStates_2 = unmarshalednativeBlitInvalidStates_temp_2;
	int32_t unmarshaledblitParamsCount_temp_3 = 0;
	unmarshaledblitParamsCount_temp_3 = marshaled.___blitParamsCount_3;
	unmarshaled.___blitParamsCount_3 = unmarshaledblitParamsCount_temp_3;
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.XRDisplaySubsystem/XRMirrorViewBlitDesc
IL2CPP_EXTERN_C void XRMirrorViewBlitDesc_tC913B2856BA2160BC3AD99F0C67293850E2162E0_marshal_com_cleanup(XRMirrorViewBlitDesc_tC913B2856BA2160BC3AD99F0C67293850E2162E0_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.XRDisplaySubsystemDescriptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDisplaySubsystemDescriptor__ctor_mB9B2993D74FFC580731C03B390C764260458FAA6 (XRDisplaySubsystemDescriptor_t72DD88EE9094488AE723A495F48884BA4EA8311A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntegratedSubsystemDescriptor_1__ctor_mBE55B2B969E5AEF4340234DB6B76F67C009DBB75_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IntegratedSubsystemDescriptor_1__ctor_mBE55B2B969E5AEF4340234DB6B76F67C009DBB75(__this, IntegratedSubsystemDescriptor_1__ctor_mBE55B2B969E5AEF4340234DB6B76F67C009DBB75_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.XR.XRInputSubsystem::TryRecenter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputSubsystem_TryRecenter_m4F8888E40ED79139DCB81D56A67C03B4D931A6BB (XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* __this, const RuntimeMethod* method) 
{
	typedef bool (*XRInputSubsystem_TryRecenter_m4F8888E40ED79139DCB81D56A67C03B4D931A6BB_ftn) (XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34*);
	static XRInputSubsystem_TryRecenter_m4F8888E40ED79139DCB81D56A67C03B4D931A6BB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRInputSubsystem_TryRecenter_m4F8888E40ED79139DCB81D56A67C03B4D931A6BB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.XRInputSubsystem::TryRecenter()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.XR.XRInputSubsystem::TrySetTrackingOriginMode(UnityEngine.XR.TrackingOriginModeFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputSubsystem_TrySetTrackingOriginMode_m132C190CEAE4403A381BF1C1C4B5FF349F2A3FA7 (XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* __this, int32_t ___origin0, const RuntimeMethod* method) 
{
	typedef bool (*XRInputSubsystem_TrySetTrackingOriginMode_m132C190CEAE4403A381BF1C1C4B5FF349F2A3FA7_ftn) (XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34*, int32_t);
	static XRInputSubsystem_TrySetTrackingOriginMode_m132C190CEAE4403A381BF1C1C4B5FF349F2A3FA7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRInputSubsystem_TrySetTrackingOriginMode_m132C190CEAE4403A381BF1C1C4B5FF349F2A3FA7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.XRInputSubsystem::TrySetTrackingOriginMode(UnityEngine.XR.TrackingOriginModeFlags)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___origin0);
	return icallRetVal;
}
// UnityEngine.XR.TrackingOriginModeFlags UnityEngine.XR.XRInputSubsystem::GetTrackingOriginMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRInputSubsystem_GetTrackingOriginMode_mBAFED615F74039A681825BB956AD3C8FA7DE45F2 (XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*XRInputSubsystem_GetTrackingOriginMode_mBAFED615F74039A681825BB956AD3C8FA7DE45F2_ftn) (XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34*);
	static XRInputSubsystem_GetTrackingOriginMode_mBAFED615F74039A681825BB956AD3C8FA7DE45F2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRInputSubsystem_GetTrackingOriginMode_mBAFED615F74039A681825BB956AD3C8FA7DE45F2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.XRInputSubsystem::GetTrackingOriginMode()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// UnityEngine.XR.TrackingOriginModeFlags UnityEngine.XR.XRInputSubsystem::GetSupportedTrackingOriginModes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRInputSubsystem_GetSupportedTrackingOriginModes_mBA7190E84E6BB4F251C232B97565E228AECB3018 (XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*XRInputSubsystem_GetSupportedTrackingOriginModes_mBA7190E84E6BB4F251C232B97565E228AECB3018_ftn) (XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34*);
	static XRInputSubsystem_GetSupportedTrackingOriginModes_mBA7190E84E6BB4F251C232B97565E228AECB3018_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRInputSubsystem_GetSupportedTrackingOriginModes_mBA7190E84E6BB4F251C232B97565E228AECB3018_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.XRInputSubsystem::GetSupportedTrackingOriginModes()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.XR.XRInputSubsystem::add_trackingOriginUpdated(System.Action`1<UnityEngine.XR.XRInputSubsystem>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputSubsystem_add_trackingOriginUpdated_mA5E69767B6E8D505BE73804A4B4EA738A27F675E (XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* __this, Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A* V_0 = NULL;
	Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A* V_1 = NULL;
	Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A* V_2 = NULL;
	{
		Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A* L_0 = __this->___trackingOriginUpdated_2;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A* L_1 = V_0;
		V_1 = L_1;
		Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A* L_2 = V_1;
		Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A*)Castclass((RuntimeObject*)L_4, Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A_il2cpp_TypeInfo_var));
		Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A** L_5 = (&__this->___trackingOriginUpdated_2);
		Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A* L_6 = V_2;
		Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A* L_7 = V_1;
		Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A* L_9 = V_0;
		Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A*)L_9) == ((RuntimeObject*)(Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.XRInputSubsystem::remove_trackingOriginUpdated(System.Action`1<UnityEngine.XR.XRInputSubsystem>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputSubsystem_remove_trackingOriginUpdated_m6A04D2813F1D4A37C013BA00EBC862D1EEA7473E (XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* __this, Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A* V_0 = NULL;
	Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A* V_1 = NULL;
	Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A* V_2 = NULL;
	{
		Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A* L_0 = __this->___trackingOriginUpdated_2;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A* L_1 = V_0;
		V_1 = L_1;
		Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A* L_2 = V_1;
		Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A*)Castclass((RuntimeObject*)L_4, Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A_il2cpp_TypeInfo_var));
		Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A** L_5 = (&__this->___trackingOriginUpdated_2);
		Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A* L_6 = V_2;
		Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A* L_7 = V_1;
		Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A* L_9 = V_0;
		Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A*)L_9) == ((RuntimeObject*)(Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.XRInputSubsystem::InvokeTrackingOriginUpdatedEvent(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputSubsystem_InvokeTrackingOriginUpdatedEvent_mD9F93C1B2F0BCDE37190DC500F9D93B273362EEB (intptr_t ___internalPtr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* V_0 = NULL;
	XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* V_1 = NULL;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		intptr_t L_0 = ___internalPtr0;
		il2cpp_codegen_runtime_class_init_inline(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* L_1;
		L_1 = SubsystemManager_GetIntegratedSubsystemByPtr_mC117FBE03DF764DB78D48B11AD5AC324F223BDE7(L_0, NULL);
		V_0 = L_1;
		IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* L_2 = V_0;
		V_1 = ((XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34*)IsInstClass((RuntimeObject*)L_2, XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_il2cpp_TypeInfo_var));
		XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* L_3 = V_1;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* L_4 = V_1;
		NullCheck(L_4);
		Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A* L_5 = L_4->___trackingOriginUpdated_2;
		G_B3_0 = ((!(((RuntimeObject*)(Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		V_2 = (bool)G_B3_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_002f;
		}
	}
	{
		XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* L_7 = V_1;
		NullCheck(L_7);
		Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A* L_8 = L_7->___trackingOriginUpdated_2;
		XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* L_9 = V_1;
		NullCheck(L_8);
		Action_1_Invoke_m2ECF9A99D8C817638BD09EF00BC5CF84C03819AA_inline(L_8, L_9, NULL);
	}

IL_002f:
	{
		return;
	}
}
// System.Void UnityEngine.XR.XRInputSubsystem::InvokeBoundaryChangedEvent(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputSubsystem_InvokeBoundaryChangedEvent_m5BAE59235BADE518D0E32B8D420A0572B63C68C2 (intptr_t ___internalPtr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* V_0 = NULL;
	XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* V_1 = NULL;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		intptr_t L_0 = ___internalPtr0;
		il2cpp_codegen_runtime_class_init_inline(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* L_1;
		L_1 = SubsystemManager_GetIntegratedSubsystemByPtr_mC117FBE03DF764DB78D48B11AD5AC324F223BDE7(L_0, NULL);
		V_0 = L_1;
		IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* L_2 = V_0;
		V_1 = ((XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34*)IsInstClass((RuntimeObject*)L_2, XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_il2cpp_TypeInfo_var));
		XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* L_3 = V_1;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* L_4 = V_1;
		NullCheck(L_4);
		Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A* L_5 = L_4->___boundaryChanged_3;
		G_B3_0 = ((!(((RuntimeObject*)(Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		V_2 = (bool)G_B3_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_002f;
		}
	}
	{
		XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* L_7 = V_1;
		NullCheck(L_7);
		Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A* L_8 = L_7->___boundaryChanged_3;
		XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* L_9 = V_1;
		NullCheck(L_8);
		Action_1_Invoke_m2ECF9A99D8C817638BD09EF00BC5CF84C03819AA_inline(L_8, L_9, NULL);
	}

IL_002f:
	{
		return;
	}
}
// System.Void UnityEngine.XR.XRInputSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputSubsystem__ctor_mD0260427CD99745155B171BB6D03862B3CE303E4 (XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntegratedSubsystem_1__ctor_m5A4E8498952FD1A7C4BFF13C388548CB97B060CC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IntegratedSubsystem_1__ctor_m5A4E8498952FD1A7C4BFF13C388548CB97B060CC(__this, IntegratedSubsystem_1__ctor_m5A4E8498952FD1A7C4BFF13C388548CB97B060CC_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.XRInputSubsystemDescriptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputSubsystemDescriptor__ctor_m7DFAE8F8670A5721F02B0AE27BB47389BA0F8DFB (XRInputSubsystemDescriptor_t42088DD6542C0BDD27C2951B911E4F69DD1F917D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntegratedSubsystemDescriptor_1__ctor_m1289BA32AAFA862973132927F7EA8FB1A9A169C3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IntegratedSubsystemDescriptor_1__ctor_m1289BA32AAFA862973132927F7EA8FB1A9A169C3(__this, IntegratedSubsystemDescriptor_1__ctor_m1289BA32AAFA862973132927F7EA8FB1A9A169C3_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String UnityEngine.XR.MeshId::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MeshId_ToString_m8D2D9206A924A86FF28CF6499B7C66941FD0E7D4 (MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBAF124AB08242B7785EC2B6DBC3C6459CB98BC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDA1C52D0E58360F4E8FD608757CCD98D8772D4F);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		uint64_t* L_0 = (&__this->___m_SubId1_1);
		String_t* L_1;
		L_1 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_0, _stringLiteralFDA1C52D0E58360F4E8FD608757CCD98D8772D4F, NULL);
		uint64_t* L_2 = (&__this->___m_SubId2_2);
		String_t* L_3;
		L_3 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_2, _stringLiteralFDA1C52D0E58360F4E8FD608757CCD98D8772D4F, NULL);
		String_t* L_4;
		L_4 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralFBAF124AB08242B7785EC2B6DBC3C6459CB98BC8, L_1, L_3, NULL);
		V_0 = L_4;
		goto IL_002e;
	}

IL_002e:
	{
		String_t* L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  String_t* MeshId_ToString_m8D2D9206A924A86FF28CF6499B7C66941FD0E7D4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = MeshId_ToString_m8D2D9206A924A86FF28CF6499B7C66941FD0E7D4(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.MeshId::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MeshId_GetHashCode_mC6B6428EB5856505023C0D48879B92C2E3F062B0 (MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint64_t* L_0 = (&__this->___m_SubId1_1);
		int32_t L_1;
		L_1 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(L_0, NULL);
		uint64_t* L_2 = (&__this->___m_SubId2_2);
		int32_t L_3;
		L_3 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(L_2, NULL);
		V_0 = ((int32_t)(L_1^L_3));
		goto IL_001b;
	}

IL_001b:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t MeshId_GetHashCode_mC6B6428EB5856505023C0D48879B92C2E3F062B0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MeshId_GetHashCode_mC6B6428EB5856505023C0D48879B92C2E3F062B0(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.MeshId::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MeshId_Equals_m1106B9A800E87442FE36125FD3EC3CB12FD778E9 (MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = ___obj0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___obj0;
		bool L_2;
		L_2 = MeshId_Equals_m3D0AC754FDC327819342797C38CF20C5F3D25818(__this, ((*(MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC*)((MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC*)(MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC*)UnBox(L_1, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC_il2cpp_TypeInfo_var)))), NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001b;
	}

IL_001b:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool MeshId_Equals_m1106B9A800E87442FE36125FD3EC3CB12FD778E9_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC*>(__this + _offset);
	bool _returnValue;
	_returnValue = MeshId_Equals_m1106B9A800E87442FE36125FD3EC3CB12FD778E9(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.MeshId::Equals(UnityEngine.XR.MeshId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MeshId_Equals_m3D0AC754FDC327819342797C38CF20C5F3D25818 (MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC* __this, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___other0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		uint64_t L_0 = __this->___m_SubId1_1;
		MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_1 = ___other0;
		uint64_t L_2 = L_1.___m_SubId1_1;
		if ((!(((uint64_t)L_0) == ((uint64_t)L_2))))
		{
			goto IL_001f;
		}
	}
	{
		uint64_t L_3 = __this->___m_SubId2_2;
		MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_4 = ___other0;
		uint64_t L_5 = L_4.___m_SubId2_2;
		G_B3_0 = ((((int64_t)L_3) == ((int64_t)L_5))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C  bool MeshId_Equals_m3D0AC754FDC327819342797C38CF20C5F3D25818_AdjustorThunk (RuntimeObject* __this, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___other0, const RuntimeMethod* method)
{
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC*>(__this + _offset);
	bool _returnValue;
	_returnValue = MeshId_Equals_m3D0AC754FDC327819342797C38CF20C5F3D25818(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.MeshId::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshId__cctor_mE4556EF31E7F96397E4C9E7C3DF80A3C129D431D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_initobj((&((MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC_StaticFields*)il2cpp_codegen_static_fields_for(MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC_il2cpp_TypeInfo_var))->___s_InvalidId_0), sizeof(MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.XR.HashCodeHelper::Combine(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCodeHelper_Combine_m2A63E4964D06338CC6F9DE17F5EFCCC348A6A1D7 (int32_t ___hash10, int32_t ___hash21, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___hash10;
		int32_t L_1 = ___hash21;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)486187739))), L_1));
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 UnityEngine.XR.HashCodeHelper::Combine(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCodeHelper_Combine_mEDE733EC1ABDEA82040BBC18551FB975F3FAC322 (int32_t ___hash10, int32_t ___hash21, int32_t ___hash32, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___hash10;
		int32_t L_1 = ___hash21;
		int32_t L_2;
		L_2 = HashCodeHelper_Combine_m2A63E4964D06338CC6F9DE17F5EFCCC348A6A1D7(L_0, L_1, NULL);
		int32_t L_3 = ___hash32;
		int32_t L_4;
		L_4 = HashCodeHelper_Combine_m2A63E4964D06338CC6F9DE17F5EFCCC348A6A1D7(L_2, L_3, NULL);
		return L_4;
	}
}
// System.Int32 UnityEngine.XR.HashCodeHelper::Combine(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCodeHelper_Combine_mF867D2FAB545AD0A4832679FC73F7A2B289A37F7 (int32_t ___hash10, int32_t ___hash21, int32_t ___hash32, int32_t ___hash43, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___hash10;
		int32_t L_1 = ___hash21;
		int32_t L_2 = ___hash32;
		int32_t L_3;
		L_3 = HashCodeHelper_Combine_mEDE733EC1ABDEA82040BBC18551FB975F3FAC322(L_0, L_1, L_2, NULL);
		int32_t L_4 = ___hash43;
		int32_t L_5;
		L_5 = HashCodeHelper_Combine_m2A63E4964D06338CC6F9DE17F5EFCCC348A6A1D7(L_3, L_4, NULL);
		return L_5;
	}
}
// System.Int32 UnityEngine.XR.HashCodeHelper::Combine(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCodeHelper_Combine_mBE52BFDECDDA219A4A334421E8706078A4BE6680 (int32_t ___hash10, int32_t ___hash21, int32_t ___hash32, int32_t ___hash43, int32_t ___hash54, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___hash10;
		int32_t L_1 = ___hash21;
		int32_t L_2 = ___hash32;
		int32_t L_3 = ___hash43;
		int32_t L_4;
		L_4 = HashCodeHelper_Combine_mF867D2FAB545AD0A4832679FC73F7A2B289A37F7(L_0, L_1, L_2, L_3, NULL);
		int32_t L_5 = ___hash54;
		int32_t L_6;
		L_6 = HashCodeHelper_Combine_m2A63E4964D06338CC6F9DE17F5EFCCC348A6A1D7(L_4, L_5, NULL);
		return L_6;
	}
}
// System.Int32 UnityEngine.XR.HashCodeHelper::Combine(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCodeHelper_Combine_m429AA1346C5A7ACFA6EC9A5D26250CEA4A1BAF89 (int32_t ___hash10, int32_t ___hash21, int32_t ___hash32, int32_t ___hash43, int32_t ___hash54, int32_t ___hash65, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___hash10;
		int32_t L_1 = ___hash21;
		int32_t L_2 = ___hash32;
		int32_t L_3 = ___hash43;
		int32_t L_4 = ___hash54;
		int32_t L_5;
		L_5 = HashCodeHelper_Combine_mBE52BFDECDDA219A4A334421E8706078A4BE6680(L_0, L_1, L_2, L_3, L_4, NULL);
		int32_t L_6 = ___hash65;
		int32_t L_7;
		L_7 = HashCodeHelper_Combine_m2A63E4964D06338CC6F9DE17F5EFCCC348A6A1D7(L_5, L_6, NULL);
		return L_7;
	}
}
// System.Int32 UnityEngine.XR.HashCodeHelper::Combine(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCodeHelper_Combine_m110C54CCBA83DD580295D7BA248976C50F6BF606 (int32_t ___hash10, int32_t ___hash21, int32_t ___hash32, int32_t ___hash43, int32_t ___hash54, int32_t ___hash65, int32_t ___hash76, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___hash10;
		int32_t L_1 = ___hash21;
		int32_t L_2 = ___hash32;
		int32_t L_3 = ___hash43;
		int32_t L_4 = ___hash54;
		int32_t L_5 = ___hash65;
		int32_t L_6;
		L_6 = HashCodeHelper_Combine_m429AA1346C5A7ACFA6EC9A5D26250CEA4A1BAF89(L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		int32_t L_7 = ___hash76;
		int32_t L_8;
		L_8 = HashCodeHelper_Combine_m2A63E4964D06338CC6F9DE17F5EFCCC348A6A1D7(L_6, L_7, NULL);
		return L_8;
	}
}
// System.Int32 UnityEngine.XR.HashCodeHelper::Combine(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCodeHelper_Combine_mBF383AC565B49ACFCB9A0046504C40A8997BAEFD (int32_t ___hash10, int32_t ___hash21, int32_t ___hash32, int32_t ___hash43, int32_t ___hash54, int32_t ___hash65, int32_t ___hash76, int32_t ___hash87, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___hash10;
		int32_t L_1 = ___hash21;
		int32_t L_2 = ___hash32;
		int32_t L_3 = ___hash43;
		int32_t L_4 = ___hash54;
		int32_t L_5 = ___hash65;
		int32_t L_6 = ___hash76;
		int32_t L_7;
		L_7 = HashCodeHelper_Combine_m110C54CCBA83DD580295D7BA248976C50F6BF606(L_0, L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		int32_t L_8 = ___hash87;
		int32_t L_9;
		L_9 = HashCodeHelper_Combine_m2A63E4964D06338CC6F9DE17F5EFCCC348A6A1D7(L_7, L_8, NULL);
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.XR.MeshGenerationResult
IL2CPP_EXTERN_C void MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C_marshal_pinvoke(const MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C& unmarshaled, MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CMeshU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Mesh>k__BackingField' of type 'MeshGenerationResult': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CMeshU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C_marshal_pinvoke_back(const MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C_marshaled_pinvoke& marshaled, MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C& unmarshaled)
{
	Exception_t* ___U3CMeshU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Mesh>k__BackingField' of type 'MeshGenerationResult': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CMeshU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.MeshGenerationResult
IL2CPP_EXTERN_C void MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C_marshal_pinvoke_cleanup(MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.MeshGenerationResult
IL2CPP_EXTERN_C void MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C_marshal_com(const MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C& unmarshaled, MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C_marshaled_com& marshaled)
{
	Exception_t* ___U3CMeshU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Mesh>k__BackingField' of type 'MeshGenerationResult': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CMeshU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C_marshal_com_back(const MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C_marshaled_com& marshaled, MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C& unmarshaled)
{
	Exception_t* ___U3CMeshU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Mesh>k__BackingField' of type 'MeshGenerationResult': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CMeshU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.MeshGenerationResult
IL2CPP_EXTERN_C void MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C_marshal_com_cleanup(MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C_marshaled_com& marshaled)
{
}
// UnityEngine.XR.MeshId UnityEngine.XR.MeshGenerationResult::get_MeshId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC MeshGenerationResult_get_MeshId_m2260BF3F7EB6ED4F2CF0A8F6BEFDD2CD82B6751D (MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C* __this, const RuntimeMethod* method) 
{
	{
		MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_0 = __this->___U3CMeshIdU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC MeshGenerationResult_get_MeshId_m2260BF3F7EB6ED4F2CF0A8F6BEFDD2CD82B6751D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C*>(__this + _offset);
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC _returnValue;
	_returnValue = MeshGenerationResult_get_MeshId_m2260BF3F7EB6ED4F2CF0A8F6BEFDD2CD82B6751D_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Mesh UnityEngine.XR.MeshGenerationResult::get_Mesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* MeshGenerationResult_get_Mesh_m95A022CCC5DDD8D0E8B9CEB3A2D3E06A0E7210F9 (MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C* __this, const RuntimeMethod* method) 
{
	{
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = __this->___U3CMeshU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* MeshGenerationResult_get_Mesh_m95A022CCC5DDD8D0E8B9CEB3A2D3E06A0E7210F9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C*>(__this + _offset);
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* _returnValue;
	_returnValue = MeshGenerationResult_get_Mesh_m95A022CCC5DDD8D0E8B9CEB3A2D3E06A0E7210F9_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.MeshCollider UnityEngine.XR.MeshGenerationResult::get_MeshCollider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* MeshGenerationResult_get_MeshCollider_m07210E3B1723B5BA535250E2012755AAC46FB180 (MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C* __this, const RuntimeMethod* method) 
{
	{
		MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_0 = __this->___U3CMeshColliderU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* MeshGenerationResult_get_MeshCollider_m07210E3B1723B5BA535250E2012755AAC46FB180_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C*>(__this + _offset);
	MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* _returnValue;
	_returnValue = MeshGenerationResult_get_MeshCollider_m07210E3B1723B5BA535250E2012755AAC46FB180_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.XR.MeshGenerationStatus UnityEngine.XR.MeshGenerationResult::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MeshGenerationResult_get_Status_m392754927B1E28DB2E6078A212F8FCC013AC10C0 (MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CStatusU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t MeshGenerationResult_get_Status_m392754927B1E28DB2E6078A212F8FCC013AC10C0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MeshGenerationResult_get_Status_m392754927B1E28DB2E6078A212F8FCC013AC10C0_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.XR.MeshVertexAttributes UnityEngine.XR.MeshGenerationResult::get_Attributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MeshGenerationResult_get_Attributes_m62E3E9EC74240C37D818481B1243B3EB40424C6B (MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CAttributesU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t MeshGenerationResult_get_Attributes_m62E3E9EC74240C37D818481B1243B3EB40424C6B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MeshGenerationResult_get_Attributes_m62E3E9EC74240C37D818481B1243B3EB40424C6B_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector3 UnityEngine.XR.MeshGenerationResult::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MeshGenerationResult_get_Position_m72AE25CA3412AE3C653251095067B496CEC1617F (MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C* __this, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CPositionU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MeshGenerationResult_get_Position_m72AE25CA3412AE3C653251095067B496CEC1617F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = MeshGenerationResult_get_Position_m72AE25CA3412AE3C653251095067B496CEC1617F_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Quaternion UnityEngine.XR.MeshGenerationResult::get_Rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 MeshGenerationResult_get_Rotation_mC27F07EC357E8B3EED94DBEE5365B33154941EE3 (MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C* __this, const RuntimeMethod* method) 
{
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->___U3CRotationU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 MeshGenerationResult_get_Rotation_mC27F07EC357E8B3EED94DBEE5365B33154941EE3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C*>(__this + _offset);
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 _returnValue;
	_returnValue = MeshGenerationResult_get_Rotation_mC27F07EC357E8B3EED94DBEE5365B33154941EE3_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector3 UnityEngine.XR.MeshGenerationResult::get_Scale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MeshGenerationResult_get_Scale_mA3CEB3EA848509F5B1A5525F40A45AA9CB8BD5D3 (MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C* __this, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CScaleU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MeshGenerationResult_get_Scale_mA3CEB3EA848509F5B1A5525F40A45AA9CB8BD5D3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = MeshGenerationResult_get_Scale_mA3CEB3EA848509F5B1A5525F40A45AA9CB8BD5D3_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.MeshGenerationResult::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MeshGenerationResult_Equals_m7A6C6A94553E313F74FB2B44326CF32FC94E122F (MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___obj0;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___obj0;
		bool L_3;
		L_3 = MeshGenerationResult_Equals_mE32D058EBA520E8CC77A08119D82AE735CE0ACAC(__this, ((*(MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C*)((MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C*)(MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C*)UnBox(L_2, MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C_il2cpp_TypeInfo_var)))), NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool MeshGenerationResult_Equals_m7A6C6A94553E313F74FB2B44326CF32FC94E122F_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C*>(__this + _offset);
	bool _returnValue;
	_returnValue = MeshGenerationResult_Equals_m7A6C6A94553E313F74FB2B44326CF32FC94E122F(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.MeshGenerationResult::Equals(UnityEngine.XR.MeshGenerationResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MeshGenerationResult_Equals_mE32D058EBA520E8CC77A08119D82AE735CE0ACAC (MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C* __this, MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C ___other0, const RuntimeMethod* method) 
{
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	int32_t G_B9_0 = 0;
	{
		MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_0;
		L_0 = MeshGenerationResult_get_MeshId_m2260BF3F7EB6ED4F2CF0A8F6BEFDD2CD82B6751D_inline(__this, NULL);
		V_0 = L_0;
		MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_1;
		L_1 = MeshGenerationResult_get_MeshId_m2260BF3F7EB6ED4F2CF0A8F6BEFDD2CD82B6751D_inline((&___other0), NULL);
		bool L_2;
		L_2 = MeshId_Equals_m3D0AC754FDC327819342797C38CF20C5F3D25818((&V_0), L_1, NULL);
		if (!L_2)
		{
			goto IL_00a6;
		}
	}
	{
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_3;
		L_3 = MeshGenerationResult_get_Mesh_m95A022CCC5DDD8D0E8B9CEB3A2D3E06A0E7210F9_inline(__this, NULL);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_4;
		L_4 = MeshGenerationResult_get_Mesh_m95A022CCC5DDD8D0E8B9CEB3A2D3E06A0E7210F9_inline((&___other0), NULL);
		NullCheck(L_3);
		bool L_5;
		L_5 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_3, L_4);
		if (!L_5)
		{
			goto IL_00a6;
		}
	}
	{
		MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_6;
		L_6 = MeshGenerationResult_get_MeshCollider_m07210E3B1723B5BA535250E2012755AAC46FB180_inline(__this, NULL);
		MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_7;
		L_7 = MeshGenerationResult_get_MeshCollider_m07210E3B1723B5BA535250E2012755AAC46FB180_inline((&___other0), NULL);
		NullCheck(L_6);
		bool L_8;
		L_8 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_6, L_7);
		if (!L_8)
		{
			goto IL_00a6;
		}
	}
	{
		int32_t L_9;
		L_9 = MeshGenerationResult_get_Status_m392754927B1E28DB2E6078A212F8FCC013AC10C0_inline(__this, NULL);
		int32_t L_10;
		L_10 = MeshGenerationResult_get_Status_m392754927B1E28DB2E6078A212F8FCC013AC10C0_inline((&___other0), NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_00a6;
		}
	}
	{
		int32_t L_11;
		L_11 = MeshGenerationResult_get_Attributes_m62E3E9EC74240C37D818481B1243B3EB40424C6B_inline(__this, NULL);
		int32_t L_12;
		L_12 = MeshGenerationResult_get_Attributes_m62E3E9EC74240C37D818481B1243B3EB40424C6B_inline((&___other0), NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_00a6;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = MeshGenerationResult_get_Position_m72AE25CA3412AE3C653251095067B496CEC1617F_inline(__this, NULL);
		V_1 = L_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = MeshGenerationResult_get_Position_m72AE25CA3412AE3C653251095067B496CEC1617F_inline((&___other0), NULL);
		bool L_15;
		L_15 = Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline((&V_1), L_14, NULL);
		if (!L_15)
		{
			goto IL_00a6;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = MeshGenerationResult_get_Rotation_mC27F07EC357E8B3EED94DBEE5365B33154941EE3_inline(__this, NULL);
		V_2 = L_16;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = MeshGenerationResult_get_Rotation_mC27F07EC357E8B3EED94DBEE5365B33154941EE3_inline((&___other0), NULL);
		bool L_18;
		L_18 = Quaternion_Equals_m25B95D8412B79CC7F8B34062BFAE662BD99578BE_inline((&V_2), L_17, NULL);
		if (!L_18)
		{
			goto IL_00a6;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = MeshGenerationResult_get_Scale_mA3CEB3EA848509F5B1A5525F40A45AA9CB8BD5D3_inline(__this, NULL);
		V_1 = L_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = MeshGenerationResult_get_Scale_mA3CEB3EA848509F5B1A5525F40A45AA9CB8BD5D3_inline((&___other0), NULL);
		bool L_21;
		L_21 = Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline((&V_1), L_20, NULL);
		G_B9_0 = ((int32_t)(L_21));
		goto IL_00a7;
	}

IL_00a6:
	{
		G_B9_0 = 0;
	}

IL_00a7:
	{
		V_3 = (bool)G_B9_0;
		goto IL_00aa;
	}

IL_00aa:
	{
		bool L_22 = V_3;
		return L_22;
	}
}
IL2CPP_EXTERN_C  bool MeshGenerationResult_Equals_mE32D058EBA520E8CC77A08119D82AE735CE0ACAC_AdjustorThunk (RuntimeObject* __this, MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C ___other0, const RuntimeMethod* method)
{
	MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C*>(__this + _offset);
	bool _returnValue;
	_returnValue = MeshGenerationResult_Equals_mE32D058EBA520E8CC77A08119D82AE735CE0ACAC(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.MeshGenerationResult::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MeshGenerationResult_GetHashCode_mA542C935FE2ABB8EC0A3CE001267176095F7DCBC (MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C* __this, const RuntimeMethod* method) 
{
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	{
		MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_0;
		L_0 = MeshGenerationResult_get_MeshId_m2260BF3F7EB6ED4F2CF0A8F6BEFDD2CD82B6751D_inline(__this, NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = MeshId_GetHashCode_mC6B6428EB5856505023C0D48879B92C2E3F062B0((&V_0), NULL);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_2;
		L_2 = MeshGenerationResult_get_Mesh_m95A022CCC5DDD8D0E8B9CEB3A2D3E06A0E7210F9_inline(__this, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_4;
		L_4 = MeshGenerationResult_get_MeshCollider_m07210E3B1723B5BA535250E2012755AAC46FB180_inline(__this, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_4);
		int32_t L_6;
		L_6 = MeshGenerationResult_get_Status_m392754927B1E28DB2E6078A212F8FCC013AC10C0_inline(__this, NULL);
		V_1 = L_6;
		int32_t L_7;
		L_7 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_1), NULL);
		int32_t L_8;
		L_8 = MeshGenerationResult_get_Attributes_m62E3E9EC74240C37D818481B1243B3EB40424C6B_inline(__this, NULL);
		V_1 = L_8;
		int32_t L_9;
		L_9 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = MeshGenerationResult_get_Position_m72AE25CA3412AE3C653251095067B496CEC1617F_inline(__this, NULL);
		V_2 = L_10;
		int32_t L_11;
		L_11 = Vector3_GetHashCode_mB08429DC931A85BD29CE11B9ABC77DE7E0E46327_inline((&V_2), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = MeshGenerationResult_get_Rotation_mC27F07EC357E8B3EED94DBEE5365B33154941EE3_inline(__this, NULL);
		V_3 = L_12;
		int32_t L_13;
		L_13 = Quaternion_GetHashCode_m5F55C34C98E437376595E722BE4EB8A70434F049_inline((&V_3), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = MeshGenerationResult_get_Scale_mA3CEB3EA848509F5B1A5525F40A45AA9CB8BD5D3_inline(__this, NULL);
		V_2 = L_14;
		int32_t L_15;
		L_15 = Vector3_GetHashCode_mB08429DC931A85BD29CE11B9ABC77DE7E0E46327_inline((&V_2), NULL);
		int32_t L_16;
		L_16 = HashCodeHelper_Combine_mBF383AC565B49ACFCB9A0046504C40A8997BAEFD(L_1, L_3, L_5, L_7, L_9, L_11, L_13, L_15, NULL);
		V_4 = L_16;
		goto IL_008c;
	}

IL_008c:
	{
		int32_t L_17 = V_4;
		return L_17;
	}
}
IL2CPP_EXTERN_C  int32_t MeshGenerationResult_GetHashCode_mA542C935FE2ABB8EC0A3CE001267176095F7DCBC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MeshGenerationResult_GetHashCode_mA542C935FE2ABB8EC0A3CE001267176095F7DCBC(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.XRMeshSubsystem::InvokeMeshReadyDelegate(UnityEngine.XR.MeshGenerationResult,System.Action`1<UnityEngine.XR.MeshGenerationResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMeshSubsystem_InvokeMeshReadyDelegate_m495A42DE7C44B760CB7D41244A9314F860EA6C53 (XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* __this, MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C ___result0, Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8* ___onMeshGenerationComplete1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8* L_0 = ___onMeshGenerationComplete1;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8* L_2 = ___onMeshGenerationComplete1;
		MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C L_3 = ___result0;
		NullCheck(L_2);
		Action_1_Invoke_mE959103AFF340DAE4FFA216861988A12A1F3C805_inline(L_2, L_3, NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void UnityEngine.XR.XRMeshSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMeshSubsystem__ctor_mA9C27A31A690B9023F70B628A9D9F5E3F5ED2AEA (XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntegratedSubsystem_1__ctor_m994BCD28C1C5A54986AB4DDA38E2578381CCA171_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IntegratedSubsystem_1__ctor_m994BCD28C1C5A54986AB4DDA38E2578381CCA171(__this, IntegratedSubsystem_1__ctor_m994BCD28C1C5A54986AB4DDA38E2578381CCA171_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.XRMeshSubsystem/MeshTransformList::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshTransformList_Dispose_m0F0B77B84E50F02EB1A48751831808F9C69E0636 (MeshTransformList_t761D725D4B30CFD7DDF57B3725004994FB3B561F* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___m_Self_0;
		MeshTransformList_Dispose_m7655ACDE6BC605B30EF2BC387A7B9D0F4D9EED19(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void MeshTransformList_Dispose_m0F0B77B84E50F02EB1A48751831808F9C69E0636_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MeshTransformList_t761D725D4B30CFD7DDF57B3725004994FB3B561F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MeshTransformList_t761D725D4B30CFD7DDF57B3725004994FB3B561F*>(__this + _offset);
	MeshTransformList_Dispose_m0F0B77B84E50F02EB1A48751831808F9C69E0636(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.XRMeshSubsystem/MeshTransformList::Dispose(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshTransformList_Dispose_m7655ACDE6BC605B30EF2BC387A7B9D0F4D9EED19 (intptr_t ___self0, const RuntimeMethod* method) 
{
	typedef void (*MeshTransformList_Dispose_m7655ACDE6BC605B30EF2BC387A7B9D0F4D9EED19_ftn) (intptr_t);
	static MeshTransformList_Dispose_m7655ACDE6BC605B30EF2BC387A7B9D0F4D9EED19_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MeshTransformList_Dispose_m7655ACDE6BC605B30EF2BC387A7B9D0F4D9EED19_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.XRMeshSubsystem/MeshTransformList::Dispose(System.IntPtr)");
	_il2cpp_icall_func(___self0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.XRMeshSubsystemDescriptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMeshSubsystemDescriptor__ctor_mFD056F69A8BECE56819411D4CD84653B3B735A1B (XRMeshSubsystemDescriptor_tD9814661B8661C69D5A0DBB76C9AF61778B9CEC1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntegratedSubsystemDescriptor_1__ctor_mF4354B29EF84B06E68C05D657260B044B123087C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IntegratedSubsystemDescriptor_1__ctor_mF4354B29EF84B06E68C05D657260B044B123087C(__this, IntegratedSubsystemDescriptor_1__ctor_mF4354B29EF84B06E68C05D657260B044B123087C_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC MeshGenerationResult_get_MeshId_m2260BF3F7EB6ED4F2CF0A8F6BEFDD2CD82B6751D_inline (MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C* __this, const RuntimeMethod* method) 
{
	{
		MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_0 = __this->___U3CMeshIdU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* MeshGenerationResult_get_Mesh_m95A022CCC5DDD8D0E8B9CEB3A2D3E06A0E7210F9_inline (MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C* __this, const RuntimeMethod* method) 
{
	{
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = __this->___U3CMeshU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* MeshGenerationResult_get_MeshCollider_m07210E3B1723B5BA535250E2012755AAC46FB180_inline (MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C* __this, const RuntimeMethod* method) 
{
	{
		MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_0 = __this->___U3CMeshColliderU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MeshGenerationResult_get_Status_m392754927B1E28DB2E6078A212F8FCC013AC10C0_inline (MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CStatusU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MeshGenerationResult_get_Attributes_m62E3E9EC74240C37D818481B1243B3EB40424C6B_inline (MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CAttributesU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MeshGenerationResult_get_Position_m72AE25CA3412AE3C653251095067B496CEC1617F_inline (MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C* __this, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CPositionU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 MeshGenerationResult_get_Rotation_mC27F07EC357E8B3EED94DBEE5365B33154941EE3_inline (MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C* __this, const RuntimeMethod* method) 
{
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->___U3CRotationU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MeshGenerationResult_get_Scale_mA3CEB3EA848509F5B1A5525F40A45AA9CB8BD5D3_inline (MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C* __this, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CScaleU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___other0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		float L_0 = __this->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___other0;
		float L_2 = L_1.___x_2;
		if ((!(((float)L_0) == ((float)L_2))))
		{
			goto IL_002d;
		}
	}
	{
		float L_3 = __this->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___other0;
		float L_5 = L_4.___y_3;
		if ((!(((float)L_3) == ((float)L_5))))
		{
			goto IL_002d;
		}
	}
	{
		float L_6 = __this->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___other0;
		float L_8 = L_7.___z_4;
		G_B4_0 = ((((float)L_6) == ((float)L_8))? 1 : 0);
		goto IL_002e;
	}

IL_002d:
	{
		G_B4_0 = 0;
	}

IL_002e:
	{
		V_0 = (bool)G_B4_0;
		goto IL_0031;
	}

IL_0031:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_Equals_m25B95D8412B79CC7F8B34062BFAE662BD99578BE_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___other0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		float* L_0 = (&__this->___x_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___other0;
		float L_2 = L_1.___x_0;
		bool L_3;
		L_3 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_004d;
		}
	}
	{
		float* L_4 = (&__this->___y_1);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = ___other0;
		float L_6 = L_5.___y_1;
		bool L_7;
		L_7 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		float* L_8 = (&__this->___z_2);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = ___other0;
		float L_10 = L_9.___z_2;
		bool L_11;
		L_11 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_004d;
		}
	}
	{
		float* L_12 = (&__this->___w_3);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13 = ___other0;
		float L_14 = L_13.___w_3;
		bool L_15;
		L_15 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_12, L_14, NULL);
		G_B5_0 = ((int32_t)(L_15));
		goto IL_004e;
	}

IL_004d:
	{
		G_B5_0 = 0;
	}

IL_004e:
	{
		V_0 = (bool)G_B5_0;
		goto IL_0051;
	}

IL_0051:
	{
		bool L_16 = V_0;
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3_GetHashCode_mB08429DC931A85BD29CE11B9ABC77DE7E0E46327_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		float* L_0 = (&__this->___x_2);
		int32_t L_1;
		L_1 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_0, NULL);
		float* L_2 = (&__this->___y_3);
		int32_t L_3;
		L_3 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_2, NULL);
		float* L_4 = (&__this->___z_4);
		int32_t L_5;
		L_5 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_4, NULL);
		V_0 = ((int32_t)(((int32_t)(L_1^((int32_t)(L_3<<2))))^((int32_t)(L_5>>2))));
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Quaternion_GetHashCode_m5F55C34C98E437376595E722BE4EB8A70434F049_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		float* L_0 = (&__this->___x_0);
		int32_t L_1;
		L_1 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_0, NULL);
		float* L_2 = (&__this->___y_1);
		int32_t L_3;
		L_3 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_2, NULL);
		float* L_4 = (&__this->___z_2);
		int32_t L_5;
		L_5 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_4, NULL);
		float* L_6 = (&__this->___w_3);
		int32_t L_7;
		L_7 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_6, NULL);
		V_0 = ((int32_t)(((int32_t)(((int32_t)(L_1^((int32_t)(L_3<<2))))^((int32_t)(L_5>>2))))^((int32_t)(L_7>>1))));
		goto IL_0039;
	}

IL_0039:
	{
		int32_t L_8 = V_0;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m0D1DB9EA639FC121D071208CB0B6240B4E12B7CC_gshared_inline (Action_1_t290119641EBA3C1EAC8AF78274C63CE01C3046D8* __this, XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m81D40B541187099D5EDD207395C9FC477BADEF03_gshared_inline (List_1_t8AE5A65CCFBC753343962D38B82C801F7BDE3C87* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!false)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845* L_3 = (XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_mAD647CEB75F404E53F3A175DA334818A35738080_gshared_inline (InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = (String_t*)__this->___U3CnameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_m2B2C882E3DBE25BF025C498BF14E9FFA7F91540E_gshared_inline (InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = (String_t*)__this->___U3CnameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_mC56C726995711932766450754FB382B2DA52E105_gshared_inline (InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = (String_t*)__this->___U3CnameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_mB74B05F127FBD54D57BFCE959683F6A5C62142C5_gshared_inline (InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = (String_t*)__this->___U3CnameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_m02343070D5E6423DE14E1538321C52506DEFA03F_gshared_inline (InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = (String_t*)__this->___U3CnameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_m42686849B1959EB8C6C2F7497EC166379A6E4F17_gshared_inline (InputFeatureUsage_1_t26D677E09A2D69C099167C381EE1EBFD5E8BDD48* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = (String_t*)__this->___U3CnameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m711ABCFDFDF3836EE35ED7CD7E5B3FAD04EAE649_gshared_inline (Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mE959103AFF340DAE4FFA216861988A12A1F3C805_gshared_inline (Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8* __this, MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
