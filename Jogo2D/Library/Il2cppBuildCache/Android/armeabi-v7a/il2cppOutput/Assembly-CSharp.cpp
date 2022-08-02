#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// ChangeScene
struct ChangeScene_t911C7BF5D7321A9752D54B4F7A49C0BC816EA919;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// IA
struct IA_t37E9F0EE50E613F15F58C8643EB18FC26D05179F;
// IAF
struct IAF_tC97F4B56E49A82BCDD041082B055C9166B076C00;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// SpawnInimigo
struct SpawnInimigo_t4C391F586F5AD89124C10A94345B34271F38339B;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// botao
struct botao_t1CB711FD8DD10D426863ECD16B3B020975E33AE8;
// camera
struct camera_t35DE2139B547B353CFA724AB7439D7A92165C646;
// comida
struct comida_t8CD81A84A41C7949873CD91FF7B8A8B14B1A5821;
// controleInimigo
struct controleInimigo_t8F3139EC1A39F3D59509FE5EBB87412892A6E31F;
// correr
struct correr_tA4AD10A5423F50C9A44988FBDB23B535552569EB;
// dano
struct dano_tADF61C6163271C8DE6E9F9BFDEC48F5606218EE6;
// danoControle
struct danoControle_tD0F8CB9F186BA35EEB6254F5FC421C72F668BBE5;
// dialogo
struct dialogo_t1F4C50918565CE949A74FB80A4EBACA98B53A2F7;
// dialogoControl
struct dialogoControl_t440084F0ACFD90A29D2BB0234775F6C1E1735E30;
// girolli
struct girolli_t4FF8990132F80C1701133AF443D7F698E3CFB765;
// inimigo
struct inimigo_t10762E03F1068A96AF3A69F01DA0769FDFAB2221;
// joystick
struct joystick_t4BBF6FBF7FA9B64D60EC36D3378931F4865C4F05;
// mute
struct mute_t7CD6D915FDA58DF86E7E8A8AF8C1CD3549A45B2D;
// pause
struct pause_tF478C7B117ADB28997D31868F88A52290C950A85;
// player
struct player_tA80E0022C279849EE513BB6A4017ED62943ADC71;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;
// dialogoControl/<TempoEspera>d__8
struct U3CTempoEsperaU3Ed__8_tCFCDE1937A367F835BB0E4EA589FBA4C3CCED77F;
// player/<Dano>d__25
struct U3CDanoU3Ed__25_t1E12314488E95B21A2AFE6668BAA216100E02D7A;

IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDanoU3Ed__25_t1E12314488E95B21A2AFE6668BAA216100E02D7A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTempoEsperaU3Ed__8_tCFCDE1937A367F835BB0E4EA589FBA4C3CCED77F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0BB5AC567A3F8D5B260105CB84455E041A89B701;
IL2CPP_EXTERN_C String_t* _stringLiteral0C6CF51CF8BAD537B14CDE88DED6FEEAF0A449F0;
IL2CPP_EXTERN_C String_t* _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7;
IL2CPP_EXTERN_C String_t* _stringLiteral3ED090523FD5C78225D0A93F4097810779371070;
IL2CPP_EXTERN_C String_t* _stringLiteral472B6F59562698ABC7D76F207DBC55B1CEAF77E8;
IL2CPP_EXTERN_C String_t* _stringLiteral5DAF755BFA5483A2ED4660390AE32F2F637B57A9;
IL2CPP_EXTERN_C String_t* _stringLiteral5F79CFD08C1EC74EAAF3D9F7CBDAB04E99B9FA44;
IL2CPP_EXTERN_C String_t* _stringLiteral633F98D0711EDB34EB34FB388B58E499D227233A;
IL2CPP_EXTERN_C String_t* _stringLiteral63EAC2512395039C5CF7CB1BBA7C97C9360435BC;
IL2CPP_EXTERN_C String_t* _stringLiteral69CD5A2E7873D79C4235066C833604B2EB3F337B;
IL2CPP_EXTERN_C String_t* _stringLiteral6C0145291B25951D608D28FC915FD0641A2B8110;
IL2CPP_EXTERN_C String_t* _stringLiteral7DBE3D7D87DE325F504F11C089B92BDA1BB3A4F5;
IL2CPP_EXTERN_C String_t* _stringLiteral8D21BF85458E3D4A9D207E12F9E13E00784FF2DC;
IL2CPP_EXTERN_C String_t* _stringLiteral8FFBFC89B34DDAABDC06D52A3EDB69ED14935550;
IL2CPP_EXTERN_C String_t* _stringLiteral98DB3279546DC1517BC787A274DEB6AFF078148C;
IL2CPP_EXTERN_C String_t* _stringLiteralA8ADB5958AA40B204567C4F58A6DC9688E27F331;
IL2CPP_EXTERN_C String_t* _stringLiteralAB750E274D88AEC9F379EBCB3B34B3E5AFC4B3A8;
IL2CPP_EXTERN_C String_t* _stringLiteralAFFA7150A513E0B66D5D49097D9919A0CE9AEFA9;
IL2CPP_EXTERN_C String_t* _stringLiteralB36B09C1C71F835615D243517A2078AB35B92775;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralD743EFEE8BB0821F9EDC0333CA4B4C86940F70C4;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m66FA849561D4B37151172353F62FE31D3F863A08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_mF86B79BED8570481BDFC54EAEF1F692E0508BA38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m26E35B19637B4682494A4299BBD06748D17133B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m521C787DAC1426E4C5736B5FF65980D6444B9249_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m1B327975BFAB070F4A1332784FFE80A1EECFBF00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mFA486713E3FCA2B8B812AE64A4EE9D9928632DA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_Tisplayer_tA80E0022C279849EE513BB6A4017ED62943ADC71_m0697638C371A3C624D3003D829B9C6461AB27039_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisdialogoControl_t440084F0ACFD90A29D2BB0234775F6C1E1735E30_m161ACA3F8E9EADD931CF4E14D295F42FDAAD7ADB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDanoU3Ed__25_System_Collections_IEnumerator_Reset_m841CAE7522CAE84B99BED1A07FC416DDDED0E4C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTempoEsperaU3Ed__8_System_Collections_IEnumerator_Reset_m6A23BABB8B9FFA55BCDECFD107ED7161D4DE5257_RuntimeMethod_var;
struct ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 ;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// dialogoControl/<TempoEspera>d__8
struct U3CTempoEsperaU3Ed__8_tCFCDE1937A367F835BB0E4EA589FBA4C3CCED77F  : public RuntimeObject
{
public:
	// System.Int32 dialogoControl/<TempoEspera>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object dialogoControl/<TempoEspera>d__8::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// dialogoControl dialogoControl/<TempoEspera>d__8::<>4__this
	dialogoControl_t440084F0ACFD90A29D2BB0234775F6C1E1735E30 * ___U3CU3E4__this_2;
	// System.Char[] dialogoControl/<TempoEspera>d__8::<>7__wrap1
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___U3CU3E7__wrap1_3;
	// System.Int32 dialogoControl/<TempoEspera>d__8::<>7__wrap2
	int32_t ___U3CU3E7__wrap2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTempoEsperaU3Ed__8_tCFCDE1937A367F835BB0E4EA589FBA4C3CCED77F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CTempoEsperaU3Ed__8_tCFCDE1937A367F835BB0E4EA589FBA4C3CCED77F, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CTempoEsperaU3Ed__8_tCFCDE1937A367F835BB0E4EA589FBA4C3CCED77F, ___U3CU3E4__this_2)); }
	inline dialogoControl_t440084F0ACFD90A29D2BB0234775F6C1E1735E30 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline dialogoControl_t440084F0ACFD90A29D2BB0234775F6C1E1735E30 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(dialogoControl_t440084F0ACFD90A29D2BB0234775F6C1E1735E30 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_3() { return static_cast<int32_t>(offsetof(U3CTempoEsperaU3Ed__8_tCFCDE1937A367F835BB0E4EA589FBA4C3CCED77F, ___U3CU3E7__wrap1_3)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_U3CU3E7__wrap1_3() const { return ___U3CU3E7__wrap1_3; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_U3CU3E7__wrap1_3() { return &___U3CU3E7__wrap1_3; }
	inline void set_U3CU3E7__wrap1_3(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___U3CU3E7__wrap1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_4() { return static_cast<int32_t>(offsetof(U3CTempoEsperaU3Ed__8_tCFCDE1937A367F835BB0E4EA589FBA4C3CCED77F, ___U3CU3E7__wrap2_4)); }
	inline int32_t get_U3CU3E7__wrap2_4() const { return ___U3CU3E7__wrap2_4; }
	inline int32_t* get_address_of_U3CU3E7__wrap2_4() { return &___U3CU3E7__wrap2_4; }
	inline void set_U3CU3E7__wrap2_4(int32_t value)
	{
		___U3CU3E7__wrap2_4 = value;
	}
};


// player/<Dano>d__25
struct U3CDanoU3Ed__25_t1E12314488E95B21A2AFE6668BAA216100E02D7A  : public RuntimeObject
{
public:
	// System.Int32 player/<Dano>d__25::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object player/<Dano>d__25::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// player player/<Dano>d__25::<>4__this
	player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * ___U3CU3E4__this_2;
	// System.Single player/<Dano>d__25::<i>5__2
	float ___U3CiU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDanoU3Ed__25_t1E12314488E95B21A2AFE6668BAA216100E02D7A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDanoU3Ed__25_t1E12314488E95B21A2AFE6668BAA216100E02D7A, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDanoU3Ed__25_t1E12314488E95B21A2AFE6668BAA216100E02D7A, ___U3CU3E4__this_2)); }
	inline player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline player_tA80E0022C279849EE513BB6A4017ED62943ADC71 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CDanoU3Ed__25_t1E12314488E95B21A2AFE6668BAA216100E02D7A, ___U3CiU3E5__2_3)); }
	inline float get_U3CiU3E5__2_3() const { return ___U3CiU3E5__2_3; }
	inline float* get_address_of_U3CiU3E5__2_3() { return &___U3CiU3E5__2_3; }
	inline void set_U3CiU3E5__2_3(float value)
	{
		___U3CiU3E5__2_3 = value;
	}
};


// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E  : public AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E, ___m_EventSystem_1)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.LayerMask
struct LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* ___m_LegacyContacts_8;

public:
	inline static int32_t get_offset_of_m_Collider_0() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Collider_0)); }
	inline int32_t get_m_Collider_0() const { return ___m_Collider_0; }
	inline int32_t* get_address_of_m_Collider_0() { return &___m_Collider_0; }
	inline void set_m_Collider_0(int32_t value)
	{
		___m_Collider_0 = value;
	}

	inline static int32_t get_offset_of_m_OtherCollider_1() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_OtherCollider_1)); }
	inline int32_t get_m_OtherCollider_1() const { return ___m_OtherCollider_1; }
	inline int32_t* get_address_of_m_OtherCollider_1() { return &___m_OtherCollider_1; }
	inline void set_m_OtherCollider_1(int32_t value)
	{
		___m_OtherCollider_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Rigidbody_2)); }
	inline int32_t get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline int32_t* get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(int32_t value)
	{
		___m_Rigidbody_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherRigidbody_3() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_OtherRigidbody_3)); }
	inline int32_t get_m_OtherRigidbody_3() const { return ___m_OtherRigidbody_3; }
	inline int32_t* get_address_of_m_OtherRigidbody_3() { return &___m_OtherRigidbody_3; }
	inline void set_m_OtherRigidbody_3(int32_t value)
	{
		___m_OtherRigidbody_3 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_4() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_RelativeVelocity_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RelativeVelocity_4() const { return ___m_RelativeVelocity_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RelativeVelocity_4() { return &___m_RelativeVelocity_4; }
	inline void set_m_RelativeVelocity_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RelativeVelocity_4 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_5() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Enabled_5)); }
	inline int32_t get_m_Enabled_5() const { return ___m_Enabled_5; }
	inline int32_t* get_address_of_m_Enabled_5() { return &___m_Enabled_5; }
	inline void set_m_Enabled_5(int32_t value)
	{
		___m_Enabled_5 = value;
	}

	inline static int32_t get_offset_of_m_ContactCount_6() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_ContactCount_6)); }
	inline int32_t get_m_ContactCount_6() const { return ___m_ContactCount_6; }
	inline int32_t* get_address_of_m_ContactCount_6() { return &___m_ContactCount_6; }
	inline void set_m_ContactCount_6(int32_t value)
	{
		___m_ContactCount_6 = value;
	}

	inline static int32_t get_offset_of_m_ReusedContacts_7() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_ReusedContacts_7)); }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* get_m_ReusedContacts_7() const { return ___m_ReusedContacts_7; }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277** get_address_of_m_ReusedContacts_7() { return &___m_ReusedContacts_7; }
	inline void set_m_ReusedContacts_7(ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* value)
	{
		___m_ReusedContacts_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReusedContacts_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyContacts_8() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_LegacyContacts_8)); }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* get_m_LegacyContacts_8() const { return ___m_LegacyContacts_8; }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277** get_address_of_m_LegacyContacts_8() { return &___m_LegacyContacts_8; }
	inline void set_m_LegacyContacts_8(ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* value)
	{
		___m_LegacyContacts_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyContacts_8), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_ReusedContacts_7;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_ReusedContacts_7;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_LegacyContacts_8;
};

// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___m_GameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___module_1)); }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldPosition_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldNormal_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___screenPosition_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___screenPosition_9 = value;
	}

	inline static int32_t get_offset_of_displayIndex_10() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___displayIndex_10)); }
	inline int32_t get_displayIndex_10() const { return ___displayIndex_10; }
	inline int32_t* get_address_of_displayIndex_10() { return &___displayIndex_10; }
	inline void set_displayIndex_10(int32_t value)
	{
		___displayIndex_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_pinvoke
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_com
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.PointerEventData/InputButton
struct InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954  : public BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CradiusVarianceU3Ek__BackingField_30;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerEnterU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___m_PointerPress_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerPress_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastPressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrawPointerPressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerDragU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerClickU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerClickU3Ek__BackingField_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerClickU3Ek__BackingField_7() const { return ___U3CpointerClickU3Ek__BackingField_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerClickU3Ek__BackingField_7() { return &___U3CpointerClickU3Ek__BackingField_7; }
	inline void set_U3CpointerClickU3Ek__BackingField_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerClickU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerClickU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerCurrentRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerCurrentRaycastU3Ek__BackingField_8() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_8(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerPressRaycastU3Ek__BackingField_9)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerPressRaycastU3Ek__BackingField_9() const { return ___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return &___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_9(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_hovered_10() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___hovered_10)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_hovered_10() const { return ___hovered_10; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_hovered_10() { return &___hovered_10; }
	inline void set_hovered_10(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___hovered_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hovered_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CeligibleForClickU3Ek__BackingField_11)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_11() const { return ___U3CeligibleForClickU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_11() { return &___U3CeligibleForClickU3Ek__BackingField_11; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_11(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerIdU3Ek__BackingField_12)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_12() const { return ___U3CpointerIdU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_12() { return &___U3CpointerIdU3Ek__BackingField_12; }
	inline void set_U3CpointerIdU3Ek__BackingField_12(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpositionU3Ek__BackingField_13)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpositionU3Ek__BackingField_13() const { return ___U3CpositionU3Ek__BackingField_13; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpositionU3Ek__BackingField_13() { return &___U3CpositionU3Ek__BackingField_13; }
	inline void set_U3CpositionU3Ek__BackingField_13(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpositionU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdeltaU3Ek__BackingField_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CdeltaU3Ek__BackingField_14() const { return ___U3CdeltaU3Ek__BackingField_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CdeltaU3Ek__BackingField_14() { return &___U3CdeltaU3Ek__BackingField_14; }
	inline void set_U3CdeltaU3Ek__BackingField_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CdeltaU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpressPositionU3Ek__BackingField_15)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpressPositionU3Ek__BackingField_15() const { return ___U3CpressPositionU3Ek__BackingField_15; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpressPositionU3Ek__BackingField_15() { return &___U3CpressPositionU3Ek__BackingField_15; }
	inline void set_U3CpressPositionU3Ek__BackingField_15(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpressPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldPositionU3Ek__BackingField_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldPositionU3Ek__BackingField_16() const { return ___U3CworldPositionU3Ek__BackingField_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldPositionU3Ek__BackingField_16() { return &___U3CworldPositionU3Ek__BackingField_16; }
	inline void set_U3CworldPositionU3Ek__BackingField_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldPositionU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldNormalU3Ek__BackingField_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldNormalU3Ek__BackingField_17() const { return ___U3CworldNormalU3Ek__BackingField_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldNormalU3Ek__BackingField_17() { return &___U3CworldNormalU3Ek__BackingField_17; }
	inline void set_U3CworldNormalU3Ek__BackingField_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldNormalU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickTimeU3Ek__BackingField_18)); }
	inline float get_U3CclickTimeU3Ek__BackingField_18() const { return ___U3CclickTimeU3Ek__BackingField_18; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_18() { return &___U3CclickTimeU3Ek__BackingField_18; }
	inline void set_U3CclickTimeU3Ek__BackingField_18(float value)
	{
		___U3CclickTimeU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickCountU3Ek__BackingField_19)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_19() const { return ___U3CclickCountU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_19() { return &___U3CclickCountU3Ek__BackingField_19; }
	inline void set_U3CclickCountU3Ek__BackingField_19(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CscrollDeltaU3Ek__BackingField_20)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CscrollDeltaU3Ek__BackingField_20() const { return ___U3CscrollDeltaU3Ek__BackingField_20; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CscrollDeltaU3Ek__BackingField_20() { return &___U3CscrollDeltaU3Ek__BackingField_20; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_20(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CuseDragThresholdU3Ek__BackingField_21)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_21() const { return ___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_21() { return &___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_21(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdraggingU3Ek__BackingField_22)); }
	inline bool get_U3CdraggingU3Ek__BackingField_22() const { return ___U3CdraggingU3Ek__BackingField_22; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_22() { return &___U3CdraggingU3Ek__BackingField_22; }
	inline void set_U3CdraggingU3Ek__BackingField_22(bool value)
	{
		___U3CdraggingU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CbuttonU3Ek__BackingField_23)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_23() const { return ___U3CbuttonU3Ek__BackingField_23; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_23() { return &___U3CbuttonU3Ek__BackingField_23; }
	inline void set_U3CbuttonU3Ek__BackingField_23(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3CpressureU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpressureU3Ek__BackingField_24)); }
	inline float get_U3CpressureU3Ek__BackingField_24() const { return ___U3CpressureU3Ek__BackingField_24; }
	inline float* get_address_of_U3CpressureU3Ek__BackingField_24() { return &___U3CpressureU3Ek__BackingField_24; }
	inline void set_U3CpressureU3Ek__BackingField_24(float value)
	{
		___U3CpressureU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_U3CtangentialPressureU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CtangentialPressureU3Ek__BackingField_25)); }
	inline float get_U3CtangentialPressureU3Ek__BackingField_25() const { return ___U3CtangentialPressureU3Ek__BackingField_25; }
	inline float* get_address_of_U3CtangentialPressureU3Ek__BackingField_25() { return &___U3CtangentialPressureU3Ek__BackingField_25; }
	inline void set_U3CtangentialPressureU3Ek__BackingField_25(float value)
	{
		___U3CtangentialPressureU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_U3CaltitudeAngleU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CaltitudeAngleU3Ek__BackingField_26)); }
	inline float get_U3CaltitudeAngleU3Ek__BackingField_26() const { return ___U3CaltitudeAngleU3Ek__BackingField_26; }
	inline float* get_address_of_U3CaltitudeAngleU3Ek__BackingField_26() { return &___U3CaltitudeAngleU3Ek__BackingField_26; }
	inline void set_U3CaltitudeAngleU3Ek__BackingField_26(float value)
	{
		___U3CaltitudeAngleU3Ek__BackingField_26 = value;
	}

	inline static int32_t get_offset_of_U3CazimuthAngleU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CazimuthAngleU3Ek__BackingField_27)); }
	inline float get_U3CazimuthAngleU3Ek__BackingField_27() const { return ___U3CazimuthAngleU3Ek__BackingField_27; }
	inline float* get_address_of_U3CazimuthAngleU3Ek__BackingField_27() { return &___U3CazimuthAngleU3Ek__BackingField_27; }
	inline void set_U3CazimuthAngleU3Ek__BackingField_27(float value)
	{
		___U3CazimuthAngleU3Ek__BackingField_27 = value;
	}

	inline static int32_t get_offset_of_U3CtwistU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CtwistU3Ek__BackingField_28)); }
	inline float get_U3CtwistU3Ek__BackingField_28() const { return ___U3CtwistU3Ek__BackingField_28; }
	inline float* get_address_of_U3CtwistU3Ek__BackingField_28() { return &___U3CtwistU3Ek__BackingField_28; }
	inline void set_U3CtwistU3Ek__BackingField_28(float value)
	{
		___U3CtwistU3Ek__BackingField_28 = value;
	}

	inline static int32_t get_offset_of_U3CradiusU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CradiusU3Ek__BackingField_29)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CradiusU3Ek__BackingField_29() const { return ___U3CradiusU3Ek__BackingField_29; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CradiusU3Ek__BackingField_29() { return &___U3CradiusU3Ek__BackingField_29; }
	inline void set_U3CradiusU3Ek__BackingField_29(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CradiusU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_U3CradiusVarianceU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CradiusVarianceU3Ek__BackingField_30)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CradiusVarianceU3Ek__BackingField_30() const { return ___U3CradiusVarianceU3Ek__BackingField_30; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CradiusVarianceU3Ek__BackingField_30() { return &___U3CradiusVarianceU3Ek__BackingField_30; }
	inline void set_U3CradiusVarianceU3Ek__BackingField_30(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CradiusVarianceU3Ek__BackingField_30 = value;
	}
};


// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072  : public Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
{
public:

public:
};

struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// ChangeScene
struct ChangeScene_t911C7BF5D7321A9752D54B4F7A49C0BC816EA919  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String ChangeScene::Cena
	String_t* ___Cena_4;

public:
	inline static int32_t get_offset_of_Cena_4() { return static_cast<int32_t>(offsetof(ChangeScene_t911C7BF5D7321A9752D54B4F7A49C0BC816EA919, ___Cena_4)); }
	inline String_t* get_Cena_4() const { return ___Cena_4; }
	inline String_t** get_address_of_Cena_4() { return &___Cena_4; }
	inline void set_Cena_4(String_t* value)
	{
		___Cena_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Cena_4), (void*)value);
	}
};


// IAF
struct IAF_tC97F4B56E49A82BCDD041082B055C9166B076C00  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single IAF::velocidade
	float ___velocidade_4;
	// UnityEngine.Transform[] IAF::posicao
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ___posicao_5;
	// System.Single IAF::tempoEspera
	float ___tempoEspera_6;
	// System.Int32 IAF::randomica
	int32_t ___randomica_7;
	// System.Single IAF::tempo
	float ___tempo_8;

public:
	inline static int32_t get_offset_of_velocidade_4() { return static_cast<int32_t>(offsetof(IAF_tC97F4B56E49A82BCDD041082B055C9166B076C00, ___velocidade_4)); }
	inline float get_velocidade_4() const { return ___velocidade_4; }
	inline float* get_address_of_velocidade_4() { return &___velocidade_4; }
	inline void set_velocidade_4(float value)
	{
		___velocidade_4 = value;
	}

	inline static int32_t get_offset_of_posicao_5() { return static_cast<int32_t>(offsetof(IAF_tC97F4B56E49A82BCDD041082B055C9166B076C00, ___posicao_5)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get_posicao_5() const { return ___posicao_5; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of_posicao_5() { return &___posicao_5; }
	inline void set_posicao_5(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		___posicao_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___posicao_5), (void*)value);
	}

	inline static int32_t get_offset_of_tempoEspera_6() { return static_cast<int32_t>(offsetof(IAF_tC97F4B56E49A82BCDD041082B055C9166B076C00, ___tempoEspera_6)); }
	inline float get_tempoEspera_6() const { return ___tempoEspera_6; }
	inline float* get_address_of_tempoEspera_6() { return &___tempoEspera_6; }
	inline void set_tempoEspera_6(float value)
	{
		___tempoEspera_6 = value;
	}

	inline static int32_t get_offset_of_randomica_7() { return static_cast<int32_t>(offsetof(IAF_tC97F4B56E49A82BCDD041082B055C9166B076C00, ___randomica_7)); }
	inline int32_t get_randomica_7() const { return ___randomica_7; }
	inline int32_t* get_address_of_randomica_7() { return &___randomica_7; }
	inline void set_randomica_7(int32_t value)
	{
		___randomica_7 = value;
	}

	inline static int32_t get_offset_of_tempo_8() { return static_cast<int32_t>(offsetof(IAF_tC97F4B56E49A82BCDD041082B055C9166B076C00, ___tempo_8)); }
	inline float get_tempo_8() const { return ___tempo_8; }
	inline float* get_address_of_tempo_8() { return &___tempo_8; }
	inline void set_tempo_8(float value)
	{
		___tempo_8 = value;
	}
};


// SpawnInimigo
struct SpawnInimigo_t4C391F586F5AD89124C10A94345B34271F38339B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// botao
struct botao_t1CB711FD8DD10D426863ECD16B3B020975E33AE8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single botao::input
	float ___input_4;
	// System.Single botao::sensibilidade
	float ___sensibilidade_5;
	// System.Boolean botao::pressionando
	bool ___pressionando_6;

public:
	inline static int32_t get_offset_of_input_4() { return static_cast<int32_t>(offsetof(botao_t1CB711FD8DD10D426863ECD16B3B020975E33AE8, ___input_4)); }
	inline float get_input_4() const { return ___input_4; }
	inline float* get_address_of_input_4() { return &___input_4; }
	inline void set_input_4(float value)
	{
		___input_4 = value;
	}

	inline static int32_t get_offset_of_sensibilidade_5() { return static_cast<int32_t>(offsetof(botao_t1CB711FD8DD10D426863ECD16B3B020975E33AE8, ___sensibilidade_5)); }
	inline float get_sensibilidade_5() const { return ___sensibilidade_5; }
	inline float* get_address_of_sensibilidade_5() { return &___sensibilidade_5; }
	inline void set_sensibilidade_5(float value)
	{
		___sensibilidade_5 = value;
	}

	inline static int32_t get_offset_of_pressionando_6() { return static_cast<int32_t>(offsetof(botao_t1CB711FD8DD10D426863ECD16B3B020975E33AE8, ___pressionando_6)); }
	inline bool get_pressionando_6() const { return ___pressionando_6; }
	inline bool* get_address_of_pressionando_6() { return &___pressionando_6; }
	inline void set_pressionando_6(bool value)
	{
		___pressionando_6 = value;
	}
};


// camera
struct camera_t35DE2139B547B353CFA724AB7439D7A92165C646  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform camera::player
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___player_4;

public:
	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(camera_t35DE2139B547B353CFA724AB7439D7A92165C646, ___player_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_player_4() const { return ___player_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_4), (void*)value);
	}
};


// comida
struct comida_t8CD81A84A41C7949873CD91FF7B8A8B14B1A5821  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// player comida::player
	player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * ___player_4;
	// UnityEngine.GameObject comida::cachorroQ1
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___cachorroQ1_5;
	// UnityEngine.GameObject comida::pastel1
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___pastel1_6;

public:
	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(comida_t8CD81A84A41C7949873CD91FF7B8A8B14B1A5821, ___player_4)); }
	inline player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * get_player_4() const { return ___player_4; }
	inline player_tA80E0022C279849EE513BB6A4017ED62943ADC71 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_4), (void*)value);
	}

	inline static int32_t get_offset_of_cachorroQ1_5() { return static_cast<int32_t>(offsetof(comida_t8CD81A84A41C7949873CD91FF7B8A8B14B1A5821, ___cachorroQ1_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_cachorroQ1_5() const { return ___cachorroQ1_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_cachorroQ1_5() { return &___cachorroQ1_5; }
	inline void set_cachorroQ1_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___cachorroQ1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cachorroQ1_5), (void*)value);
	}

	inline static int32_t get_offset_of_pastel1_6() { return static_cast<int32_t>(offsetof(comida_t8CD81A84A41C7949873CD91FF7B8A8B14B1A5821, ___pastel1_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_pastel1_6() const { return ___pastel1_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_pastel1_6() { return &___pastel1_6; }
	inline void set_pastel1_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___pastel1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pastel1_6), (void*)value);
	}
};


// controleInimigo
struct controleInimigo_t8F3139EC1A39F3D59509FE5EBB87412892A6E31F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 controleInimigo::speed
	int32_t ___speed_4;
	// System.Boolean controleInimigo::estaMovendo
	bool ___estaMovendo_5;
	// UnityEngine.Rigidbody2D controleInimigo::rb2d
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rb2d_6;
	// UnityEngine.Animator controleInimigo::animacao
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animacao_7;
	// UnityEngine.Transform controleInimigo::jogador
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___jogador_8;
	// UnityEngine.SpriteRenderer controleInimigo::sprite
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___sprite_9;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(controleInimigo_t8F3139EC1A39F3D59509FE5EBB87412892A6E31F, ___speed_4)); }
	inline int32_t get_speed_4() const { return ___speed_4; }
	inline int32_t* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(int32_t value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_estaMovendo_5() { return static_cast<int32_t>(offsetof(controleInimigo_t8F3139EC1A39F3D59509FE5EBB87412892A6E31F, ___estaMovendo_5)); }
	inline bool get_estaMovendo_5() const { return ___estaMovendo_5; }
	inline bool* get_address_of_estaMovendo_5() { return &___estaMovendo_5; }
	inline void set_estaMovendo_5(bool value)
	{
		___estaMovendo_5 = value;
	}

	inline static int32_t get_offset_of_rb2d_6() { return static_cast<int32_t>(offsetof(controleInimigo_t8F3139EC1A39F3D59509FE5EBB87412892A6E31F, ___rb2d_6)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rb2d_6() const { return ___rb2d_6; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rb2d_6() { return &___rb2d_6; }
	inline void set_rb2d_6(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rb2d_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb2d_6), (void*)value);
	}

	inline static int32_t get_offset_of_animacao_7() { return static_cast<int32_t>(offsetof(controleInimigo_t8F3139EC1A39F3D59509FE5EBB87412892A6E31F, ___animacao_7)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animacao_7() const { return ___animacao_7; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animacao_7() { return &___animacao_7; }
	inline void set_animacao_7(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animacao_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animacao_7), (void*)value);
	}

	inline static int32_t get_offset_of_jogador_8() { return static_cast<int32_t>(offsetof(controleInimigo_t8F3139EC1A39F3D59509FE5EBB87412892A6E31F, ___jogador_8)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_jogador_8() const { return ___jogador_8; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_jogador_8() { return &___jogador_8; }
	inline void set_jogador_8(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___jogador_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jogador_8), (void*)value);
	}

	inline static int32_t get_offset_of_sprite_9() { return static_cast<int32_t>(offsetof(controleInimigo_t8F3139EC1A39F3D59509FE5EBB87412892A6E31F, ___sprite_9)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_sprite_9() const { return ___sprite_9; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_sprite_9() { return &___sprite_9; }
	inline void set_sprite_9(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___sprite_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sprite_9), (void*)value);
	}
};


// correr
struct correr_tA4AD10A5423F50C9A44988FBDB23B535552569EB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// botao correr::bot
	botao_t1CB711FD8DD10D426863ECD16B3B020975E33AE8 * ___bot_4;
	// System.Single correr::speedCorrida
	float ___speedCorrida_5;
	// System.Single correr::speedNormal
	float ___speedNormal_6;
	// player correr::player
	player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * ___player_7;

public:
	inline static int32_t get_offset_of_bot_4() { return static_cast<int32_t>(offsetof(correr_tA4AD10A5423F50C9A44988FBDB23B535552569EB, ___bot_4)); }
	inline botao_t1CB711FD8DD10D426863ECD16B3B020975E33AE8 * get_bot_4() const { return ___bot_4; }
	inline botao_t1CB711FD8DD10D426863ECD16B3B020975E33AE8 ** get_address_of_bot_4() { return &___bot_4; }
	inline void set_bot_4(botao_t1CB711FD8DD10D426863ECD16B3B020975E33AE8 * value)
	{
		___bot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bot_4), (void*)value);
	}

	inline static int32_t get_offset_of_speedCorrida_5() { return static_cast<int32_t>(offsetof(correr_tA4AD10A5423F50C9A44988FBDB23B535552569EB, ___speedCorrida_5)); }
	inline float get_speedCorrida_5() const { return ___speedCorrida_5; }
	inline float* get_address_of_speedCorrida_5() { return &___speedCorrida_5; }
	inline void set_speedCorrida_5(float value)
	{
		___speedCorrida_5 = value;
	}

	inline static int32_t get_offset_of_speedNormal_6() { return static_cast<int32_t>(offsetof(correr_tA4AD10A5423F50C9A44988FBDB23B535552569EB, ___speedNormal_6)); }
	inline float get_speedNormal_6() const { return ___speedNormal_6; }
	inline float* get_address_of_speedNormal_6() { return &___speedNormal_6; }
	inline void set_speedNormal_6(float value)
	{
		___speedNormal_6 = value;
	}

	inline static int32_t get_offset_of_player_7() { return static_cast<int32_t>(offsetof(correr_tA4AD10A5423F50C9A44988FBDB23B535552569EB, ___player_7)); }
	inline player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * get_player_7() const { return ___player_7; }
	inline player_tA80E0022C279849EE513BB6A4017ED62943ADC71 ** get_address_of_player_7() { return &___player_7; }
	inline void set_player_7(player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * value)
	{
		___player_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_7), (void*)value);
	}
};


// dano
struct dano_tADF61C6163271C8DE6E9F9BFDEC48F5606218EE6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// danoControle
struct danoControle_tD0F8CB9F186BA35EEB6254F5FC421C72F668BBE5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// player danoControle::player
	player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * ___player_4;
	// UnityEngine.AudioSource danoControle::som
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___som_5;

public:
	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(danoControle_tD0F8CB9F186BA35EEB6254F5FC421C72F668BBE5, ___player_4)); }
	inline player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * get_player_4() const { return ___player_4; }
	inline player_tA80E0022C279849EE513BB6A4017ED62943ADC71 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_4), (void*)value);
	}

	inline static int32_t get_offset_of_som_5() { return static_cast<int32_t>(offsetof(danoControle_tD0F8CB9F186BA35EEB6254F5FC421C72F668BBE5, ___som_5)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_som_5() const { return ___som_5; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_som_5() { return &___som_5; }
	inline void set_som_5(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___som_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___som_5), (void*)value);
	}
};


// dialogo
struct dialogo_t1F4C50918565CE949A74FB80A4EBACA98B53A2F7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Sprite dialogo::personagem
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___personagem_4;
	// System.String[] dialogo::fala
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___fala_5;
	// System.String dialogo::nomePersonagem
	String_t* ___nomePersonagem_6;
	// UnityEngine.LayerMask dialogo::playerLayer
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___playerLayer_7;
	// System.Single dialogo::raio
	float ___raio_8;
	// System.Boolean dialogo::dentroRaio
	bool ___dentroRaio_9;
	// dialogoControl dialogo::dialogoControl
	dialogoControl_t440084F0ACFD90A29D2BB0234775F6C1E1735E30 * ___dialogoControl_10;

public:
	inline static int32_t get_offset_of_personagem_4() { return static_cast<int32_t>(offsetof(dialogo_t1F4C50918565CE949A74FB80A4EBACA98B53A2F7, ___personagem_4)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_personagem_4() const { return ___personagem_4; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_personagem_4() { return &___personagem_4; }
	inline void set_personagem_4(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___personagem_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___personagem_4), (void*)value);
	}

	inline static int32_t get_offset_of_fala_5() { return static_cast<int32_t>(offsetof(dialogo_t1F4C50918565CE949A74FB80A4EBACA98B53A2F7, ___fala_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_fala_5() const { return ___fala_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_fala_5() { return &___fala_5; }
	inline void set_fala_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___fala_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fala_5), (void*)value);
	}

	inline static int32_t get_offset_of_nomePersonagem_6() { return static_cast<int32_t>(offsetof(dialogo_t1F4C50918565CE949A74FB80A4EBACA98B53A2F7, ___nomePersonagem_6)); }
	inline String_t* get_nomePersonagem_6() const { return ___nomePersonagem_6; }
	inline String_t** get_address_of_nomePersonagem_6() { return &___nomePersonagem_6; }
	inline void set_nomePersonagem_6(String_t* value)
	{
		___nomePersonagem_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nomePersonagem_6), (void*)value);
	}

	inline static int32_t get_offset_of_playerLayer_7() { return static_cast<int32_t>(offsetof(dialogo_t1F4C50918565CE949A74FB80A4EBACA98B53A2F7, ___playerLayer_7)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_playerLayer_7() const { return ___playerLayer_7; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_playerLayer_7() { return &___playerLayer_7; }
	inline void set_playerLayer_7(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___playerLayer_7 = value;
	}

	inline static int32_t get_offset_of_raio_8() { return static_cast<int32_t>(offsetof(dialogo_t1F4C50918565CE949A74FB80A4EBACA98B53A2F7, ___raio_8)); }
	inline float get_raio_8() const { return ___raio_8; }
	inline float* get_address_of_raio_8() { return &___raio_8; }
	inline void set_raio_8(float value)
	{
		___raio_8 = value;
	}

	inline static int32_t get_offset_of_dentroRaio_9() { return static_cast<int32_t>(offsetof(dialogo_t1F4C50918565CE949A74FB80A4EBACA98B53A2F7, ___dentroRaio_9)); }
	inline bool get_dentroRaio_9() const { return ___dentroRaio_9; }
	inline bool* get_address_of_dentroRaio_9() { return &___dentroRaio_9; }
	inline void set_dentroRaio_9(bool value)
	{
		___dentroRaio_9 = value;
	}

	inline static int32_t get_offset_of_dialogoControl_10() { return static_cast<int32_t>(offsetof(dialogo_t1F4C50918565CE949A74FB80A4EBACA98B53A2F7, ___dialogoControl_10)); }
	inline dialogoControl_t440084F0ACFD90A29D2BB0234775F6C1E1735E30 * get_dialogoControl_10() const { return ___dialogoControl_10; }
	inline dialogoControl_t440084F0ACFD90A29D2BB0234775F6C1E1735E30 ** get_address_of_dialogoControl_10() { return &___dialogoControl_10; }
	inline void set_dialogoControl_10(dialogoControl_t440084F0ACFD90A29D2BB0234775F6C1E1735E30 * value)
	{
		___dialogoControl_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dialogoControl_10), (void*)value);
	}
};


// dialogoControl
struct dialogoControl_t440084F0ACFD90A29D2BB0234775F6C1E1735E30  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject dialogoControl::Dialogo
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Dialogo_4;
	// UnityEngine.UI.Image dialogoControl::perfil
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___perfil_5;
	// UnityEngine.UI.Text dialogoControl::Falas
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___Falas_6;
	// UnityEngine.UI.Text dialogoControl::nomePersonagem
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___nomePersonagem_7;
	// System.Single dialogoControl::velocidade
	float ___velocidade_8;
	// System.String[] dialogoControl::sentencas
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___sentencas_9;
	// System.Int32 dialogoControl::index
	int32_t ___index_10;

public:
	inline static int32_t get_offset_of_Dialogo_4() { return static_cast<int32_t>(offsetof(dialogoControl_t440084F0ACFD90A29D2BB0234775F6C1E1735E30, ___Dialogo_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Dialogo_4() const { return ___Dialogo_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Dialogo_4() { return &___Dialogo_4; }
	inline void set_Dialogo_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Dialogo_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Dialogo_4), (void*)value);
	}

	inline static int32_t get_offset_of_perfil_5() { return static_cast<int32_t>(offsetof(dialogoControl_t440084F0ACFD90A29D2BB0234775F6C1E1735E30, ___perfil_5)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_perfil_5() const { return ___perfil_5; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_perfil_5() { return &___perfil_5; }
	inline void set_perfil_5(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___perfil_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___perfil_5), (void*)value);
	}

	inline static int32_t get_offset_of_Falas_6() { return static_cast<int32_t>(offsetof(dialogoControl_t440084F0ACFD90A29D2BB0234775F6C1E1735E30, ___Falas_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_Falas_6() const { return ___Falas_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_Falas_6() { return &___Falas_6; }
	inline void set_Falas_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___Falas_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Falas_6), (void*)value);
	}

	inline static int32_t get_offset_of_nomePersonagem_7() { return static_cast<int32_t>(offsetof(dialogoControl_t440084F0ACFD90A29D2BB0234775F6C1E1735E30, ___nomePersonagem_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_nomePersonagem_7() const { return ___nomePersonagem_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_nomePersonagem_7() { return &___nomePersonagem_7; }
	inline void set_nomePersonagem_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___nomePersonagem_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nomePersonagem_7), (void*)value);
	}

	inline static int32_t get_offset_of_velocidade_8() { return static_cast<int32_t>(offsetof(dialogoControl_t440084F0ACFD90A29D2BB0234775F6C1E1735E30, ___velocidade_8)); }
	inline float get_velocidade_8() const { return ___velocidade_8; }
	inline float* get_address_of_velocidade_8() { return &___velocidade_8; }
	inline void set_velocidade_8(float value)
	{
		___velocidade_8 = value;
	}

	inline static int32_t get_offset_of_sentencas_9() { return static_cast<int32_t>(offsetof(dialogoControl_t440084F0ACFD90A29D2BB0234775F6C1E1735E30, ___sentencas_9)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_sentencas_9() const { return ___sentencas_9; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_sentencas_9() { return &___sentencas_9; }
	inline void set_sentencas_9(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___sentencas_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sentencas_9), (void*)value);
	}

	inline static int32_t get_offset_of_index_10() { return static_cast<int32_t>(offsetof(dialogoControl_t440084F0ACFD90A29D2BB0234775F6C1E1735E30, ___index_10)); }
	inline int32_t get_index_10() const { return ___index_10; }
	inline int32_t* get_address_of_index_10() { return &___index_10; }
	inline void set_index_10(int32_t value)
	{
		___index_10 = value;
	}
};


// girolli
struct girolli_t4FF8990132F80C1701133AF443D7F698E3CFB765  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform girolli::jogador
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___jogador_4;
	// UnityEngine.SpriteRenderer girolli::sprite
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___sprite_5;

public:
	inline static int32_t get_offset_of_jogador_4() { return static_cast<int32_t>(offsetof(girolli_t4FF8990132F80C1701133AF443D7F698E3CFB765, ___jogador_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_jogador_4() const { return ___jogador_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_jogador_4() { return &___jogador_4; }
	inline void set_jogador_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___jogador_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jogador_4), (void*)value);
	}

	inline static int32_t get_offset_of_sprite_5() { return static_cast<int32_t>(offsetof(girolli_t4FF8990132F80C1701133AF443D7F698E3CFB765, ___sprite_5)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_sprite_5() const { return ___sprite_5; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_sprite_5() { return &___sprite_5; }
	inline void set_sprite_5(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___sprite_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sprite_5), (void*)value);
	}
};


// inimigo
struct inimigo_t10762E03F1068A96AF3A69F01DA0769FDFAB2221  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single inimigo::distanciaAtaque
	float ___distanciaAtaque_4;
	// System.Int32 inimigo::velocidade
	int32_t ___velocidade_5;
	// System.Boolean inimigo::vivo
	bool ___vivo_6;
	// UnityEngine.Rigidbody2D inimigo::rb2d
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rb2d_7;
	// UnityEngine.Transform inimigo::jogador
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___jogador_8;
	// UnityEngine.Animator inimigo::animacao
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animacao_9;
	// UnityEngine.SpriteRenderer inimigo::sprite
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___sprite_10;
	// UnityEngine.GameObject inimigo::fantasma
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___fantasma_11;

public:
	inline static int32_t get_offset_of_distanciaAtaque_4() { return static_cast<int32_t>(offsetof(inimigo_t10762E03F1068A96AF3A69F01DA0769FDFAB2221, ___distanciaAtaque_4)); }
	inline float get_distanciaAtaque_4() const { return ___distanciaAtaque_4; }
	inline float* get_address_of_distanciaAtaque_4() { return &___distanciaAtaque_4; }
	inline void set_distanciaAtaque_4(float value)
	{
		___distanciaAtaque_4 = value;
	}

	inline static int32_t get_offset_of_velocidade_5() { return static_cast<int32_t>(offsetof(inimigo_t10762E03F1068A96AF3A69F01DA0769FDFAB2221, ___velocidade_5)); }
	inline int32_t get_velocidade_5() const { return ___velocidade_5; }
	inline int32_t* get_address_of_velocidade_5() { return &___velocidade_5; }
	inline void set_velocidade_5(int32_t value)
	{
		___velocidade_5 = value;
	}

	inline static int32_t get_offset_of_vivo_6() { return static_cast<int32_t>(offsetof(inimigo_t10762E03F1068A96AF3A69F01DA0769FDFAB2221, ___vivo_6)); }
	inline bool get_vivo_6() const { return ___vivo_6; }
	inline bool* get_address_of_vivo_6() { return &___vivo_6; }
	inline void set_vivo_6(bool value)
	{
		___vivo_6 = value;
	}

	inline static int32_t get_offset_of_rb2d_7() { return static_cast<int32_t>(offsetof(inimigo_t10762E03F1068A96AF3A69F01DA0769FDFAB2221, ___rb2d_7)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rb2d_7() const { return ___rb2d_7; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rb2d_7() { return &___rb2d_7; }
	inline void set_rb2d_7(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rb2d_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb2d_7), (void*)value);
	}

	inline static int32_t get_offset_of_jogador_8() { return static_cast<int32_t>(offsetof(inimigo_t10762E03F1068A96AF3A69F01DA0769FDFAB2221, ___jogador_8)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_jogador_8() const { return ___jogador_8; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_jogador_8() { return &___jogador_8; }
	inline void set_jogador_8(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___jogador_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jogador_8), (void*)value);
	}

	inline static int32_t get_offset_of_animacao_9() { return static_cast<int32_t>(offsetof(inimigo_t10762E03F1068A96AF3A69F01DA0769FDFAB2221, ___animacao_9)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animacao_9() const { return ___animacao_9; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animacao_9() { return &___animacao_9; }
	inline void set_animacao_9(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animacao_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animacao_9), (void*)value);
	}

	inline static int32_t get_offset_of_sprite_10() { return static_cast<int32_t>(offsetof(inimigo_t10762E03F1068A96AF3A69F01DA0769FDFAB2221, ___sprite_10)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_sprite_10() const { return ___sprite_10; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_sprite_10() { return &___sprite_10; }
	inline void set_sprite_10(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___sprite_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sprite_10), (void*)value);
	}

	inline static int32_t get_offset_of_fantasma_11() { return static_cast<int32_t>(offsetof(inimigo_t10762E03F1068A96AF3A69F01DA0769FDFAB2221, ___fantasma_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_fantasma_11() const { return ___fantasma_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_fantasma_11() { return &___fantasma_11; }
	inline void set_fantasma_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___fantasma_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fantasma_11), (void*)value);
	}
};


// joystick
struct joystick_t4BBF6FBF7FA9B64D60EC36D3378931F4865C4F05  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject joystick::joys
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___joys_4;
	// UnityEngine.GameObject joystick::joysFundo
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___joysFundo_5;
	// UnityEngine.Vector2 joystick::joysVec
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___joysVec_6;
	// UnityEngine.Vector2 joystick::joysPosTouch
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___joysPosTouch_7;
	// UnityEngine.Vector2 joystick::joysPosOiginal
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___joysPosOiginal_8;
	// System.Single joystick::joysRaio
	float ___joysRaio_9;

public:
	inline static int32_t get_offset_of_joys_4() { return static_cast<int32_t>(offsetof(joystick_t4BBF6FBF7FA9B64D60EC36D3378931F4865C4F05, ___joys_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_joys_4() const { return ___joys_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_joys_4() { return &___joys_4; }
	inline void set_joys_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___joys_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___joys_4), (void*)value);
	}

	inline static int32_t get_offset_of_joysFundo_5() { return static_cast<int32_t>(offsetof(joystick_t4BBF6FBF7FA9B64D60EC36D3378931F4865C4F05, ___joysFundo_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_joysFundo_5() const { return ___joysFundo_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_joysFundo_5() { return &___joysFundo_5; }
	inline void set_joysFundo_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___joysFundo_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___joysFundo_5), (void*)value);
	}

	inline static int32_t get_offset_of_joysVec_6() { return static_cast<int32_t>(offsetof(joystick_t4BBF6FBF7FA9B64D60EC36D3378931F4865C4F05, ___joysVec_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_joysVec_6() const { return ___joysVec_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_joysVec_6() { return &___joysVec_6; }
	inline void set_joysVec_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___joysVec_6 = value;
	}

	inline static int32_t get_offset_of_joysPosTouch_7() { return static_cast<int32_t>(offsetof(joystick_t4BBF6FBF7FA9B64D60EC36D3378931F4865C4F05, ___joysPosTouch_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_joysPosTouch_7() const { return ___joysPosTouch_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_joysPosTouch_7() { return &___joysPosTouch_7; }
	inline void set_joysPosTouch_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___joysPosTouch_7 = value;
	}

	inline static int32_t get_offset_of_joysPosOiginal_8() { return static_cast<int32_t>(offsetof(joystick_t4BBF6FBF7FA9B64D60EC36D3378931F4865C4F05, ___joysPosOiginal_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_joysPosOiginal_8() const { return ___joysPosOiginal_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_joysPosOiginal_8() { return &___joysPosOiginal_8; }
	inline void set_joysPosOiginal_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___joysPosOiginal_8 = value;
	}

	inline static int32_t get_offset_of_joysRaio_9() { return static_cast<int32_t>(offsetof(joystick_t4BBF6FBF7FA9B64D60EC36D3378931F4865C4F05, ___joysRaio_9)); }
	inline float get_joysRaio_9() const { return ___joysRaio_9; }
	inline float* get_address_of_joysRaio_9() { return &___joysRaio_9; }
	inline void set_joysRaio_9(float value)
	{
		___joysRaio_9 = value;
	}
};


// mute
struct mute_t7CD6D915FDA58DF86E7E8A8AF8C1CD3549A45B2D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AudioSource mute::girolli
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___girolli_4;
	// UnityEngine.GameObject mute::desmute
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___desmute_5;
	// UnityEngine.GameObject mute::mutar
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___mutar_6;

public:
	inline static int32_t get_offset_of_girolli_4() { return static_cast<int32_t>(offsetof(mute_t7CD6D915FDA58DF86E7E8A8AF8C1CD3549A45B2D, ___girolli_4)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_girolli_4() const { return ___girolli_4; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_girolli_4() { return &___girolli_4; }
	inline void set_girolli_4(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___girolli_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___girolli_4), (void*)value);
	}

	inline static int32_t get_offset_of_desmute_5() { return static_cast<int32_t>(offsetof(mute_t7CD6D915FDA58DF86E7E8A8AF8C1CD3549A45B2D, ___desmute_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_desmute_5() const { return ___desmute_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_desmute_5() { return &___desmute_5; }
	inline void set_desmute_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___desmute_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___desmute_5), (void*)value);
	}

	inline static int32_t get_offset_of_mutar_6() { return static_cast<int32_t>(offsetof(mute_t7CD6D915FDA58DF86E7E8A8AF8C1CD3549A45B2D, ___mutar_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_mutar_6() const { return ___mutar_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_mutar_6() { return &___mutar_6; }
	inline void set_mutar_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___mutar_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mutar_6), (void*)value);
	}
};


// pause
struct pause_tF478C7B117ADB28997D31868F88A52290C950A85  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject pause::pauseMenu
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___pauseMenu_4;
	// System.String pause::Menu
	String_t* ___Menu_5;

public:
	inline static int32_t get_offset_of_pauseMenu_4() { return static_cast<int32_t>(offsetof(pause_tF478C7B117ADB28997D31868F88A52290C950A85, ___pauseMenu_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_pauseMenu_4() const { return ___pauseMenu_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_pauseMenu_4() { return &___pauseMenu_4; }
	inline void set_pauseMenu_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___pauseMenu_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pauseMenu_4), (void*)value);
	}

	inline static int32_t get_offset_of_Menu_5() { return static_cast<int32_t>(offsetof(pause_tF478C7B117ADB28997D31868F88A52290C950A85, ___Menu_5)); }
	inline String_t* get_Menu_5() const { return ___Menu_5; }
	inline String_t** get_address_of_Menu_5() { return &___Menu_5; }
	inline void set_Menu_5(String_t* value)
	{
		___Menu_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Menu_5), (void*)value);
	}
};


// player
struct player_tA80E0022C279849EE513BB6A4017ED62943ADC71  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// joystick player::joystick
	joystick_t4BBF6FBF7FA9B64D60EC36D3378931F4865C4F05 * ___joystick_4;
	// System.Single player::playerSpeed
	float ___playerSpeed_5;
	// UnityEngine.Rigidbody2D player::rb2d
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rb2d_6;
	// UnityEngine.SpriteRenderer player::sprite
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___sprite_7;
	// UnityEngine.Animator player::animacao
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animacao_8;
	// System.Single player::direcao
	float ___direcao_9;
	// System.Boolean player::vivo
	bool ___vivo_10;
	// System.Int32 player::vidaMax
	int32_t ___vidaMax_11;
	// System.Int32 player::vidaAtual
	int32_t ___vidaAtual_12;
	// System.Boolean player::invencivel
	bool ___invencivel_13;
	// UnityEngine.GameObject player::vida3
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___vida3_14;
	// UnityEngine.GameObject player::vida2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___vida2_15;
	// UnityEngine.GameObject player::vida1
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___vida1_16;

public:
	inline static int32_t get_offset_of_joystick_4() { return static_cast<int32_t>(offsetof(player_tA80E0022C279849EE513BB6A4017ED62943ADC71, ___joystick_4)); }
	inline joystick_t4BBF6FBF7FA9B64D60EC36D3378931F4865C4F05 * get_joystick_4() const { return ___joystick_4; }
	inline joystick_t4BBF6FBF7FA9B64D60EC36D3378931F4865C4F05 ** get_address_of_joystick_4() { return &___joystick_4; }
	inline void set_joystick_4(joystick_t4BBF6FBF7FA9B64D60EC36D3378931F4865C4F05 * value)
	{
		___joystick_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___joystick_4), (void*)value);
	}

	inline static int32_t get_offset_of_playerSpeed_5() { return static_cast<int32_t>(offsetof(player_tA80E0022C279849EE513BB6A4017ED62943ADC71, ___playerSpeed_5)); }
	inline float get_playerSpeed_5() const { return ___playerSpeed_5; }
	inline float* get_address_of_playerSpeed_5() { return &___playerSpeed_5; }
	inline void set_playerSpeed_5(float value)
	{
		___playerSpeed_5 = value;
	}

	inline static int32_t get_offset_of_rb2d_6() { return static_cast<int32_t>(offsetof(player_tA80E0022C279849EE513BB6A4017ED62943ADC71, ___rb2d_6)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rb2d_6() const { return ___rb2d_6; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rb2d_6() { return &___rb2d_6; }
	inline void set_rb2d_6(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rb2d_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb2d_6), (void*)value);
	}

	inline static int32_t get_offset_of_sprite_7() { return static_cast<int32_t>(offsetof(player_tA80E0022C279849EE513BB6A4017ED62943ADC71, ___sprite_7)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_sprite_7() const { return ___sprite_7; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_sprite_7() { return &___sprite_7; }
	inline void set_sprite_7(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___sprite_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sprite_7), (void*)value);
	}

	inline static int32_t get_offset_of_animacao_8() { return static_cast<int32_t>(offsetof(player_tA80E0022C279849EE513BB6A4017ED62943ADC71, ___animacao_8)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animacao_8() const { return ___animacao_8; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animacao_8() { return &___animacao_8; }
	inline void set_animacao_8(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animacao_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animacao_8), (void*)value);
	}

	inline static int32_t get_offset_of_direcao_9() { return static_cast<int32_t>(offsetof(player_tA80E0022C279849EE513BB6A4017ED62943ADC71, ___direcao_9)); }
	inline float get_direcao_9() const { return ___direcao_9; }
	inline float* get_address_of_direcao_9() { return &___direcao_9; }
	inline void set_direcao_9(float value)
	{
		___direcao_9 = value;
	}

	inline static int32_t get_offset_of_vivo_10() { return static_cast<int32_t>(offsetof(player_tA80E0022C279849EE513BB6A4017ED62943ADC71, ___vivo_10)); }
	inline bool get_vivo_10() const { return ___vivo_10; }
	inline bool* get_address_of_vivo_10() { return &___vivo_10; }
	inline void set_vivo_10(bool value)
	{
		___vivo_10 = value;
	}

	inline static int32_t get_offset_of_vidaMax_11() { return static_cast<int32_t>(offsetof(player_tA80E0022C279849EE513BB6A4017ED62943ADC71, ___vidaMax_11)); }
	inline int32_t get_vidaMax_11() const { return ___vidaMax_11; }
	inline int32_t* get_address_of_vidaMax_11() { return &___vidaMax_11; }
	inline void set_vidaMax_11(int32_t value)
	{
		___vidaMax_11 = value;
	}

	inline static int32_t get_offset_of_vidaAtual_12() { return static_cast<int32_t>(offsetof(player_tA80E0022C279849EE513BB6A4017ED62943ADC71, ___vidaAtual_12)); }
	inline int32_t get_vidaAtual_12() const { return ___vidaAtual_12; }
	inline int32_t* get_address_of_vidaAtual_12() { return &___vidaAtual_12; }
	inline void set_vidaAtual_12(int32_t value)
	{
		___vidaAtual_12 = value;
	}

	inline static int32_t get_offset_of_invencivel_13() { return static_cast<int32_t>(offsetof(player_tA80E0022C279849EE513BB6A4017ED62943ADC71, ___invencivel_13)); }
	inline bool get_invencivel_13() const { return ___invencivel_13; }
	inline bool* get_address_of_invencivel_13() { return &___invencivel_13; }
	inline void set_invencivel_13(bool value)
	{
		___invencivel_13 = value;
	}

	inline static int32_t get_offset_of_vida3_14() { return static_cast<int32_t>(offsetof(player_tA80E0022C279849EE513BB6A4017ED62943ADC71, ___vida3_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_vida3_14() const { return ___vida3_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_vida3_14() { return &___vida3_14; }
	inline void set_vida3_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___vida3_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vida3_14), (void*)value);
	}

	inline static int32_t get_offset_of_vida2_15() { return static_cast<int32_t>(offsetof(player_tA80E0022C279849EE513BB6A4017ED62943ADC71, ___vida2_15)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_vida2_15() const { return ___vida2_15; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_vida2_15() { return &___vida2_15; }
	inline void set_vida2_15(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___vida2_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vida2_15), (void*)value);
	}

	inline static int32_t get_offset_of_vida1_16() { return static_cast<int32_t>(offsetof(player_tA80E0022C279849EE513BB6A4017ED62943ADC71, ___vida1_16)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_vida1_16() const { return ___vida1_16; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_vida1_16() { return &___vida1_16; }
	inline void set_vida1_16(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___vida1_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vida1_16), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// IA
struct IA_t37E9F0EE50E613F15F58C8643EB18FC26D05179F  : public inimigo_t10762E03F1068A96AF3A69F01DA0769FDFAB2221
{
public:
	// System.Single IA::distancia
	float ___distancia_12;
	// System.Single IA::tempoEspera
	float ___tempoEspera_13;
	// System.Single IA::distanciaJ
	float ___distanciaJ_14;
	// UnityEngine.Transform[] IA::posicao
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ___posicao_15;
	// UnityEngine.Transform IA::posicaoSpawn
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___posicaoSpawn_16;
	// System.Int32 IA::aleatorio
	int32_t ___aleatorio_17;
	// System.Single IA::tempo
	float ___tempo_18;

public:
	inline static int32_t get_offset_of_distancia_12() { return static_cast<int32_t>(offsetof(IA_t37E9F0EE50E613F15F58C8643EB18FC26D05179F, ___distancia_12)); }
	inline float get_distancia_12() const { return ___distancia_12; }
	inline float* get_address_of_distancia_12() { return &___distancia_12; }
	inline void set_distancia_12(float value)
	{
		___distancia_12 = value;
	}

	inline static int32_t get_offset_of_tempoEspera_13() { return static_cast<int32_t>(offsetof(IA_t37E9F0EE50E613F15F58C8643EB18FC26D05179F, ___tempoEspera_13)); }
	inline float get_tempoEspera_13() const { return ___tempoEspera_13; }
	inline float* get_address_of_tempoEspera_13() { return &___tempoEspera_13; }
	inline void set_tempoEspera_13(float value)
	{
		___tempoEspera_13 = value;
	}

	inline static int32_t get_offset_of_distanciaJ_14() { return static_cast<int32_t>(offsetof(IA_t37E9F0EE50E613F15F58C8643EB18FC26D05179F, ___distanciaJ_14)); }
	inline float get_distanciaJ_14() const { return ___distanciaJ_14; }
	inline float* get_address_of_distanciaJ_14() { return &___distanciaJ_14; }
	inline void set_distanciaJ_14(float value)
	{
		___distanciaJ_14 = value;
	}

	inline static int32_t get_offset_of_posicao_15() { return static_cast<int32_t>(offsetof(IA_t37E9F0EE50E613F15F58C8643EB18FC26D05179F, ___posicao_15)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get_posicao_15() const { return ___posicao_15; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of_posicao_15() { return &___posicao_15; }
	inline void set_posicao_15(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		___posicao_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___posicao_15), (void*)value);
	}

	inline static int32_t get_offset_of_posicaoSpawn_16() { return static_cast<int32_t>(offsetof(IA_t37E9F0EE50E613F15F58C8643EB18FC26D05179F, ___posicaoSpawn_16)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_posicaoSpawn_16() const { return ___posicaoSpawn_16; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_posicaoSpawn_16() { return &___posicaoSpawn_16; }
	inline void set_posicaoSpawn_16(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___posicaoSpawn_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___posicaoSpawn_16), (void*)value);
	}

	inline static int32_t get_offset_of_aleatorio_17() { return static_cast<int32_t>(offsetof(IA_t37E9F0EE50E613F15F58C8643EB18FC26D05179F, ___aleatorio_17)); }
	inline int32_t get_aleatorio_17() const { return ___aleatorio_17; }
	inline int32_t* get_address_of_aleatorio_17() { return &___aleatorio_17; }
	inline void set_aleatorio_17(int32_t value)
	{
		___aleatorio_17 = value;
	}

	inline static int32_t get_offset_of_tempo_18() { return static_cast<int32_t>(offsetof(IA_t37E9F0EE50E613F15F58C8643EB18FC26D05179F, ___tempo_18)); }
	inline float get_tempo_18() const { return ___tempo_18; }
	inline float* get_address_of_tempo_18() { return &___tempo_18; }
	inline void set_tempo_18(float value)
	{
		___tempo_18 = value;
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * m_Items[1];

public:
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m533C28B362284747FD5138B02D183642545146E8_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_mDC2250CC3F24F6FE45660AF6153056ABDA5ED60F_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_mBE0814B07DA8DDD57407CC2F0C8051AEC27D34BC_gshared (const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInChildren_TisRuntimeObject_m2D53662347629A70E2A610B61ACC705D63F22D34_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.Single inimigo::distanciaJogador()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float inimigo_distanciaJogador_mDC1A089C2D031DFC0BCED8F474A8837DC967E429 (inimigo_t10762E03F1068A96AF3A69F01DA0769FDFAB2221 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::MoveTowards(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_MoveTowards_m1EC393CAB6ACD04D7A7856F02169D22FD61CDB89 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___current0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::Distance(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_Distance_m7DFAD110E57AF0E903DDC47BDBD99D1CC62EA03F (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void inimigo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void inimigo__ctor_m1200DB4392677DBD01914D0A4839EA767ECFB651 (inimigo_t10762E03F1068A96AF3A69F01DA0769FDFAB2221 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::Lerp(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_Lerp_mC9A8AB816281F4447B7B62264595C16751ED355B_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<player>()
inline player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * GameObject_GetComponent_Tisplayer_tA80E0022C279849EE513BB6A4017ED62943ADC71_m0697638C371A3C624D3003D829B9C6461AB27039 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m533C28B362284747FD5138B02D183642545146E8_gshared)(__this, method);
}
// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, String_t* ___tag0, const RuntimeMethod* method);
// System.Void player::Comendo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void player_Comendo_m6B9492FF8228E4C964A0DEA41674CF9FAF322B06 (player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m26E35B19637B4682494A4299BBD06748D17133B1 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_mDC2250CC3F24F6FE45660AF6153056ABDA5ED60F_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_mF86B79BED8570481BDFC54EAEF1F692E0508BA38 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_mDC2250CC3F24F6FE45660AF6153056ABDA5ED60F_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Transform>()
inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mFA486713E3FCA2B8B812AE64A4EE9D9928632DA5 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m533C28B362284747FD5138B02D183642545146E8_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m521C787DAC1426E4C5736B5FF65980D6444B9249 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_mDC2250CC3F24F6FE45660AF6153056ABDA5ED60F_gshared)(__this, method);
}
// System.Boolean UnityEngine.SpriteRenderer::get_flipX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpriteRenderer_get_flipX_mCB73CAF5724B925903C9D9805D3F7B8AD0C509F5 (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_flipX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_flipX_mD3AB83CC6D742A69F1B52376D1636CAA2E44B67E (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, bool ___value0, const RuntimeMethod* method);
// System.Single controleInimigo::DistanciaPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float controleInimigo_DistanciaPlayer_m7ACEB7C568DB40E35BE8FAD1300DE7E3A977D8AB (controleInimigo_t8F3139EC1A39F3D59509FE5EBB87412892A6E31F * __this, const RuntimeMethod* method);
// System.Void controleInimigo::Flip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controleInimigo_Flip_mA25B857A99D3C8D1940B5B5813FD701CEB711F90 (controleInimigo_t8F3139EC1A39F3D59509FE5EBB87412892A6E31F * __this, const RuntimeMethod* method);
// System.Void player::DanoPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void player_DanoPlayer_mB488EEAC225A9EA1B1D839063D21C83A0F5261EC (player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<dialogoControl>()
inline dialogoControl_t440084F0ACFD90A29D2BB0234775F6C1E1735E30 * Object_FindObjectOfType_TisdialogoControl_t440084F0ACFD90A29D2BB0234775F6C1E1735E30_m161ACA3F8E9EADD931CF4E14D295F42FDAAD7ADB (const RuntimeMethod* method)
{
	return ((  dialogoControl_t440084F0ACFD90A29D2BB0234775F6C1E1735E30 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_mBE0814B07DA8DDD57407CC2F0C8051AEC27D34BC_gshared)(method);
}
// System.Void dialogo::Intera??o()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dialogo_InteraUE7UE3o_m4B9E042EF46F2429F0952A13A3B165DC3A62C83B (dialogo_t1F4C50918565CE949A74FB80A4EBACA98B53A2F7 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0 (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___mask0, const RuntimeMethod* method);
// UnityEngine.Collider2D UnityEngine.Physics2D::OverlapCircle(UnityEngine.Vector2,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * Physics2D_OverlapCircle_mA13E0B8B40964C93CD1E8BB9B4FE32B19B52BC07 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___point0, float ___radius1, int32_t ___layerMask2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void dialogoControl::Fala(UnityEngine.Sprite,System.String[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dialogoControl_Fala_mA2A1AF98338F84A86275A11C728119B9BDBABB7A (dialogoControl_t440084F0ACFD90A29D2BB0234775F6C1E1735E30 * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___p0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___txt1, String_t* ___personagemNome2, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4 (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// System.Collections.IEnumerator dialogoControl::TempoEspera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* dialogoControl_TempoEspera_mE5DA4FFF4FFCA094491D4294CDE2364C604AA024 (dialogoControl_t440084F0ACFD90A29D2BB0234775F6C1E1735E30 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void dialogoControl/<TempoEspera>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTempoEsperaU3Ed__8__ctor_m7C4F6227DD80B8EF4C85BF57F1541B202943E7D3 (U3CTempoEsperaU3Ed__8_tCFCDE1937A367F835BB0E4EA589FBA4C3CCED77F * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.Animator>()
inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * Component_GetComponentInChildren_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m66FA849561D4B37151172353F62FE31D3F863A08 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_m2D53662347629A70E2A610B61ACC705D63F22D34_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m1B327975BFAB070F4A1332784FFE80A1EECFBF00 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m533C28B362284747FD5138B02D183642545146E8_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  PointerEventData_get_position_mE65C1CF448C935678F7C2A6265B4F3906FD9D651_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_normalized_m1F7F7AA3B7AC2414F245395C3785880B847BF7F5 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828 (const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Pause_mC4F9932A77B6AA2CC3FB720721B7837CF57B675D (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_timeScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_timeScale_m082A05928ED5917AA986FAA6106E79D8446A26F4 (const RuntimeMethod* method);
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA (float ___value0, const RuntimeMethod* method);
// System.Void player::MudarDirecao()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void player_MudarDirecao_m8711D44FFEB3A51B6E74BA8B69AE4573916CA4E4 (player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * __this, const RuntimeMethod* method);
// System.Void player::Vida()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void player_Vida_mD8786244C8695A5980768135CAB4B743247172CD (player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * __this, const RuntimeMethod* method);
// System.Void player::RecebendoComida()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void player_RecebendoComida_mEC4E87D3B18AD43EB87C534E0DF18ED6D069E5CD (player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F (Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___tag0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4 (const RuntimeMethod* method);
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Void player/<Dano>d__25::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDanoU3Ed__25__ctor_m03870593C2B40440C80B657FC5575BEDD49D4DAF (U3CDanoU3Ed__25_t1E12314488E95B21A2AFE6668BAA216100E02D7A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.IEnumerator player::Dano()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* player_Dano_m3659DAC9B6D2F032C9D457670BC726361340D498 (player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Char[] System.String::ToCharArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* String_ToCharArray_m33E93AEB7086CBEBDFA5730EAAC49686F144089C (String_t* __this, const RuntimeMethod* method);
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8 (Il2CppChar* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
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
// System.Void ChangeScene::CarregarCena()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeScene_CarregarCena_m42CD64F499A3D4C31F425038D70A132D2807F4DD (ChangeScene_t911C7BF5D7321A9752D54B4F7A49C0BC816EA919 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(Cena);
		String_t* L_0 = __this->get_Cena_4();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ChangeScene::Sair()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeScene_Sair_m63D1D708A19C67E7872B7DB7E6220FD468DE8E92 (ChangeScene_t911C7BF5D7321A9752D54B4F7A49C0BC816EA919 * __this, const RuntimeMethod* method)
{
	{
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ChangeScene::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeScene__ctor_m4B5E6457BC8ADD899516038BA745E96E48F2C9E0 (ChangeScene_t911C7BF5D7321A9752D54B4F7A49C0BC816EA919 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void IA::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IA_Start_mE2E3D7EA031A19781200E2C0B7C4867271522E9F (IA_t37E9F0EE50E613F15F58C8643EB18FC26D05179F * __this, const RuntimeMethod* method)
{
	{
		// aleatorio = Random.Range(0, posicao.Length);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_0 = __this->get_posicao_15();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))), /*hidden argument*/NULL);
		__this->set_aleatorio_17(L_1);
		// tempo = tempoEspera;
		float L_2 = __this->get_tempoEspera_13();
		__this->set_tempo_18(L_2);
		// }
		return;
	}
}
// System.Void IA::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IA_Update_mAB4F3DF5435ABB1EB7E81A551ADF9B931564E4E1 (IA_t37E9F0EE50E613F15F58C8643EB18FC26D05179F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3ED090523FD5C78225D0A93F4097810779371070);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral472B6F59562698ABC7D76F207DBC55B1CEAF77E8);
		s_Il2CppMethodInitialized = true;
	}
	float G_B9_0 = 0.0f;
	float G_B8_0 = 0.0f;
	float G_B10_0 = 0.0f;
	float G_B12_0 = 0.0f;
	float G_B11_0 = 0.0f;
	float G_B13_0 = 0.0f;
	{
		// distanciaJ = distanciaJogador();
		float L_0;
		L_0 = inimigo_distanciaJogador_mDC1A089C2D031DFC0BCED8F474A8837DC967E429(__this, /*hidden argument*/NULL);
		__this->set_distanciaJ_14(L_0);
		// vivo = (distancia <= distanciaAtaque);
		float L_1 = __this->get_distancia_12();
		float L_2 = ((inimigo_t10762E03F1068A96AF3A69F01DA0769FDFAB2221 *)__this)->get_distanciaAtaque_4();
		((inimigo_t10762E03F1068A96AF3A69F01DA0769FDFAB2221 *)__this)->set_vivo_6((bool)((((int32_t)((!(((float)L_1) <= ((float)L_2)))? 1 : 0)) == ((int32_t)0))? 1 : 0));
		// posicaoSpawn = posicao[aleatorio];
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_3 = __this->get_posicao_15();
		int32_t L_4 = __this->get_aleatorio_17();
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		__this->set_posicaoSpawn_16(L_6);
		// if (distanciaJ <= distancia)
		float L_7 = __this->get_distanciaJ_14();
		float L_8 = __this->get_distancia_12();
		if ((!(((float)L_7) <= ((float)L_8))))
		{
			goto IL_011a;
		}
	}
	{
		// transform.position = Vector2.MoveTowards(transform.position, jogador.transform.position, velocidade * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12;
		L_12 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_11, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13 = ((inimigo_t10762E03F1068A96AF3A69F01DA0769FDFAB2221 *)__this)->get_jogador_8();
		NullCheck(L_13);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16;
		L_16 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_15, /*hidden argument*/NULL);
		int32_t L_17 = ((inimigo_t10762E03F1068A96AF3A69F01DA0769FDFAB2221 *)__this)->get_velocidade_5();
		float L_18;
		L_18 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19;
		L_19 = Vector2_MoveTowards_m1EC393CAB6ACD04D7A7856F02169D22FD61CDB89(L_12, L_16, ((float)il2cpp_codegen_multiply((float)((float)((float)L_17)), (float)L_18)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_19, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_9, L_20, /*hidden argument*/NULL);
		// if (jogador.position.x > transform.position.x)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21 = ((inimigo_t10762E03F1068A96AF3A69F01DA0769FDFAB2221 *)__this)->get_jogador_8();
		NullCheck(L_21);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_21, /*hidden argument*/NULL);
		float L_23 = L_22.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_24, /*hidden argument*/NULL);
		float L_26 = L_25.get_x_2();
		if ((!(((float)L_23) > ((float)L_26))))
		{
			goto IL_00c3;
		}
	}
	{
		// animacao.SetBool("andandoD", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_27 = ((inimigo_t10762E03F1068A96AF3A69F01DA0769FDFAB2221 *)__this)->get_animacao_9();
		NullCheck(L_27);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_27, _stringLiteral472B6F59562698ABC7D76F207DBC55B1CEAF77E8, (bool)1, /*hidden argument*/NULL);
		// }
		goto IL_00d4;
	}

IL_00c3:
	{
		// animacao.SetBool("andandoD", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_28 = ((inimigo_t10762E03F1068A96AF3A69F01DA0769FDFAB2221 *)__this)->get_animacao_9();
		NullCheck(L_28);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_28, _stringLiteral472B6F59562698ABC7D76F207DBC55B1CEAF77E8, (bool)0, /*hidden argument*/NULL);
	}

IL_00d4:
	{
		// if (jogador.position.x < transform.position.x)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29 = ((inimigo_t10762E03F1068A96AF3A69F01DA0769FDFAB2221 *)__this)->get_jogador_8();
		NullCheck(L_29);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_29, /*hidden argument*/NULL);
		float L_31 = L_30.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_32);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_32, /*hidden argument*/NULL);
		float L_34 = L_33.get_x_2();
		if ((!(((float)L_31) < ((float)L_34))))
		{
			goto IL_0108;
		}
	}
	{
		// animacao.SetBool("andandoE", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_35 = ((inimigo_t10762E03F1068A96AF3A69F01DA0769FDFAB2221 *)__this)->get_animacao_9();
		NullCheck(L_35);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_35, _stringLiteral3ED090523FD5C78225D0A93F4097810779371070, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0108:
	{
		// animacao.SetBool("andandoE", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_36 = ((inimigo_t10762E03F1068A96AF3A69F01DA0769FDFAB2221 *)__this)->get_animacao_9();
		NullCheck(L_36);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_36, _stringLiteral3ED090523FD5C78225D0A93F4097810779371070, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_011a:
	{
		// transform.position = Vector2.MoveTowards(transform.position, posicao[aleatorio].position, velocidade * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37;
		L_37 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_38;
		L_38 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_38);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		L_39 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_38, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_40;
		L_40 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_39, /*hidden argument*/NULL);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_41 = __this->get_posicao_15();
		int32_t L_42 = __this->get_aleatorio_17();
		NullCheck(L_41);
		int32_t L_43 = L_42;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		NullCheck(L_44);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		L_45 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_44, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_46;
		L_46 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_45, /*hidden argument*/NULL);
		int32_t L_47 = ((inimigo_t10762E03F1068A96AF3A69F01DA0769FDFAB2221 *)__this)->get_velocidade_5();
		float L_48;
		L_48 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_49;
		L_49 = Vector2_MoveTowards_m1EC393CAB6ACD04D7A7856F02169D22FD61CDB89(L_40, L_46, ((float)il2cpp_codegen_multiply((float)((float)((float)L_47)), (float)L_48)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50;
		L_50 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_49, /*hidden argument*/NULL);
		NullCheck(L_37);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_37, L_50, /*hidden argument*/NULL);
		// float _dist = Vector2.Distance(transform.position, posicao[aleatorio].position);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_51;
		L_51 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_51);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52;
		L_52 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_51, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_53;
		L_53 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_52, /*hidden argument*/NULL);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_54 = __this->get_posicao_15();
		int32_t L_55 = __this->get_aleatorio_17();
		NullCheck(L_54);
		int32_t L_56 = L_55;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		NullCheck(L_57);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_58;
		L_58 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_57, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_59;
		L_59 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_58, /*hidden argument*/NULL);
		float L_60;
		L_60 = Vector2_Distance_m7DFAD110E57AF0E903DDC47BDBD99D1CC62EA03F(L_53, L_59, /*hidden argument*/NULL);
		// if (posicaoSpawn.position.x > transform.position.x)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_61 = __this->get_posicaoSpawn_16();
		NullCheck(L_61);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_62;
		L_62 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_61, /*hidden argument*/NULL);
		float L_63 = L_62.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_64;
		L_64 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_64);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_65;
		L_65 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_64, /*hidden argument*/NULL);
		float L_66 = L_65.get_x_2();
		G_B8_0 = L_60;
		if ((!(((float)L_63) > ((float)L_66))))
		{
			G_B9_0 = L_60;
			goto IL_01c4;
		}
	}
	{
		// animacao.SetBool("andandoD", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_67 = ((inimigo_t10762E03F1068A96AF3A69F01DA0769FDFAB2221 *)__this)->get_animacao_9();
		NullCheck(L_67);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_67, _stringLiteral472B6F59562698ABC7D76F207DBC55B1CEAF77E8, (bool)1, /*hidden argument*/NULL);
		// }
		G_B10_0 = G_B8_0;
		goto IL_01d5;
	}

IL_01c4:
	{
		// animacao.SetBool("andandoD", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_68 = ((inimigo_t10762E03F1068A96AF3A69F01DA0769FDFAB2221 *)__this)->get_animacao_9();
		NullCheck(L_68);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_68, _stringLiteral472B6F59562698ABC7D76F207DBC55B1CEAF77E8, (bool)0, /*hidden argument*/NULL);
		G_B10_0 = G_B9_0;
	}

IL_01d5:
	{
		// if (posicaoSpawn.position.x < transform.position.x)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_69 = __this->get_posicaoSpawn_16();
		NullCheck(L_69);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_70;
		L_70 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_69, /*hidden argument*/NULL);
		float L_71 = L_70.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_72;
		L_72 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_72);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_73;
		L_73 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_72, /*hidden argument*/NULL);
		float L_74 = L_73.get_x_2();
		G_B11_0 = G_B10_0;
		if ((!(((float)L_71) < ((float)L_74))))
		{
			G_B12_0 = G_B10_0;
			goto IL_020a;
		}
	}
	{
		// animacao.SetBool("andandoE", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_75 = ((inimigo_t10762E03F1068A96AF3A69F01DA0769FDFAB2221 *)__this)->get_animacao_9();
		NullCheck(L_75);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_75, _stringLiteral3ED090523FD5C78225D0A93F4097810779371070, (bool)1, /*hidden argument*/NULL);
		// }
		G_B13_0 = G_B11_0;
		goto IL_021b;
	}

IL_020a:
	{
		// animacao.SetBool("andandoE", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_76 = ((inimigo_t10762E03F1068A96AF3A69F01DA0769FDFAB2221 *)__this)->get_animacao_9();
		NullCheck(L_76);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_76, _stringLiteral3ED090523FD5C78225D0A93F4097810779371070, (bool)0, /*hidden argument*/NULL);
		G_B13_0 = G_B12_0;
	}

IL_021b:
	{
		// if (_dist <= .2f)
		if ((!(((float)G_B13_0) <= ((float)(0.200000003f)))))
		{
			goto IL_0262;
		}
	}
	{
		// if (tempo <= 0)
		float L_77 = __this->get_tempo_18();
		if ((!(((float)L_77) <= ((float)(0.0f)))))
		{
			goto IL_0250;
		}
	}
	{
		// aleatorio = Random.Range(0, posicao.Length);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_78 = __this->get_posicao_15();
		NullCheck(L_78);
		int32_t L_79;
		L_79 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_78)->max_length))), /*hidden argument*/NULL);
		__this->set_aleatorio_17(L_79);
		// tempo = tempoEspera;
		float L_80 = __this->get_tempoEspera_13();
		__this->set_tempo_18(L_80);
		// }
		return;
	}

IL_0250:
	{
		// tempo -= Time.deltaTime;
		float L_81 = __this->get_tempo_18();
		float L_82;
		L_82 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_tempo_18(((float)il2cpp_codegen_subtract((float)L_81, (float)L_82)));
	}

IL_0262:
	{
		// }
		return;
	}
}
// System.Void IA::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IA_FixedUpdate_m5BF36A6C7D5AFA90ECD1CEBC463FF266A56D173D (IA_t37E9F0EE50E613F15F58C8643EB18FC26D05179F * __this, const RuntimeMethod* method)
{
	{
		// if (vivo)
		bool L_0 = ((inimigo_t10762E03F1068A96AF3A69F01DA0769FDFAB2221 *)__this)->get_vivo_6();
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		// rb2d.velocity = new Vector2(velocidade, rb2d.velocity.y);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_1 = ((inimigo_t10762E03F1068A96AF3A69F01DA0769FDFAB2221 *)__this)->get_rb2d_7();
		int32_t L_2 = ((inimigo_t10762E03F1068A96AF3A69F01DA0769FDFAB2221 *)__this)->get_velocidade_5();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_3 = ((inimigo_t10762E03F1068A96AF3A69F01DA0769FDFAB2221 *)__this)->get_rb2d_7();
		NullCheck(L_3);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)((float)L_2)), L_5, /*hidden argument*/NULL);
		NullCheck(L_1);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_1, L_6, /*hidden argument*/NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void IA::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IA__ctor_m032BFC792E56DB5D965FCB2068C2783D4276662E (IA_t37E9F0EE50E613F15F58C8643EB18FC26D05179F * __this, const RuntimeMethod* method)
{
	{
		inimigo__ctor_m1200DB4392677DBD01914D0A4839EA767ECFB651(__this, /*hidden argument*/NULL);
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
// System.Void IAF::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAF_Start_mBEE58FDE006CD120ADEF7D68B812104CE698A872 (IAF_tC97F4B56E49A82BCDD041082B055C9166B076C00 * __this, const RuntimeMethod* method)
{
	{
		// randomica = Random.Range(0, posicao.Length);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_0 = __this->get_posicao_5();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))), /*hidden argument*/NULL);
		__this->set_randomica_7(L_1);
		// tempo = tempoEspera;
		float L_2 = __this->get_tempoEspera_6();
		__this->set_tempo_8(L_2);
		// }
		return;
	}
}
// System.Void IAF::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAF_Update_m54EABFACDD0DAADA5B1F0F9E7115138FD17FA89B (IAF_tC97F4B56E49A82BCDD041082B055C9166B076C00 * __this, const RuntimeMethod* method)
{
	{
		// transform.position = Vector2.MoveTowards(transform.position, posicao[randomica].position, velocidade * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_2, /*hidden argument*/NULL);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_4 = __this->get_posicao_5();
		int32_t L_5 = __this->get_randomica_7();
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		L_9 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_8, /*hidden argument*/NULL);
		float L_10 = __this->get_velocidade_4();
		float L_11;
		L_11 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12;
		L_12 = Vector2_MoveTowards_m1EC393CAB6ACD04D7A7856F02169D22FD61CDB89(L_3, L_9, ((float)il2cpp_codegen_multiply((float)L_10, (float)L_11)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_12, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_0, L_13, /*hidden argument*/NULL);
		// float _dist = Vector2.Distance(transform.position, posicao[randomica].position);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16;
		L_16 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_15, /*hidden argument*/NULL);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_17 = __this->get_posicao_5();
		int32_t L_18 = __this->get_randomica_7();
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_20, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_22;
		L_22 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_21, /*hidden argument*/NULL);
		float L_23;
		L_23 = Vector2_Distance_m7DFAD110E57AF0E903DDC47BDBD99D1CC62EA03F(L_16, L_22, /*hidden argument*/NULL);
		// if(_dist <= .2f)
		if ((!(((float)L_23) <= ((float)(0.200000003f)))))
		{
			goto IL_00bb;
		}
	}
	{
		// if(tempo <= 0)
		float L_24 = __this->get_tempo_8();
		if ((!(((float)L_24) <= ((float)(0.0f)))))
		{
			goto IL_00a9;
		}
	}
	{
		// randomica = Random.Range(0, posicao.Length);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_25 = __this->get_posicao_5();
		NullCheck(L_25);
		int32_t L_26;
		L_26 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length))), /*hidden argument*/NULL);
		__this->set_randomica_7(L_26);
		// tempo = tempoEspera;
		float L_27 = __this->get_tempoEspera_6();
		__this->set_tempo_8(L_27);
		// }
		return;
	}

IL_00a9:
	{
		// tempo -= Time.deltaTime;
		float L_28 = __this->get_tempo_8();
		float L_29;
		L_29 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_tempo_8(((float)il2cpp_codegen_subtract((float)L_28, (float)L_29)));
	}

IL_00bb:
	{
		// }
		return;
	}
}
// System.Void IAF::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAF__ctor_m01B9261E3C3F75A9DBA215D187D8B19D6A7E7D71 (IAF_tC97F4B56E49A82BCDD041082B055C9166B076C00 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void SpawnInimigo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnInimigo__ctor_m124FE8E9084091AE44F9048D653DCFD9B18DE83F (SpawnInimigo_t4C391F586F5AD89124C10A94345B34271F38339B * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void botao::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void botao_OnPointerDown_m387493A3AAF23504A30A79895B3A98F64C7D08CE (botao_t1CB711FD8DD10D426863ECD16B3B020975E33AE8 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___dataEnvento0, const RuntimeMethod* method)
{
	{
		// pressionando = true;
		__this->set_pressionando_6((bool)1);
		// }
		return;
	}
}
// System.Void botao::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void botao_OnPointerUp_m964F5330DF35B6D15D50C068B9B1ACD923DEB5DB (botao_t1CB711FD8DD10D426863ECD16B3B020975E33AE8 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___dataEnvento0, const RuntimeMethod* method)
{
	{
		// pressionando = false;
		__this->set_pressionando_6((bool)0);
		// }
		return;
	}
}
// System.Void botao::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void botao_Update_m8B3B8389F150D4DABDCDED8AD8A4245542CDF252 (botao_t1CB711FD8DD10D426863ECD16B3B020975E33AE8 * __this, const RuntimeMethod* method)
{
	{
		// if (pressionando)
		bool L_0 = __this->get_pressionando_6();
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		// input += Time.deltaTime * sensibilidade;
		float L_1 = __this->get_input_4();
		float L_2;
		L_2 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_3 = __this->get_sensibilidade_5();
		__this->set_input_4(((float)il2cpp_codegen_add((float)L_1, (float)((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)))));
		// }
		goto IL_003c;
	}

IL_0023:
	{
		// input -= Time.deltaTime * sensibilidade;
		float L_4 = __this->get_input_4();
		float L_5;
		L_5 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_6 = __this->get_sensibilidade_5();
		__this->set_input_4(((float)il2cpp_codegen_subtract((float)L_4, (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_6)))));
	}

IL_003c:
	{
		// input = Mathf.Clamp(input, 0, 1);
		float L_7 = __this->get_input_4();
		float L_8;
		L_8 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_7, (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_input_4(L_8);
		// }
		return;
	}
}
// System.Void botao::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void botao__ctor_m17EC124B43A861B9098F984E5FB9E98F361E7F60 (botao_t1CB711FD8DD10D426863ECD16B3B020975E33AE8 * __this, const RuntimeMethod* method)
{
	{
		// public float sensibilidade = 3;
		__this->set_sensibilidade_5((3.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void camera::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void camera_Update_m1007B366F99CE7DEEE8DD6F5678B7BF8681A478D (camera_t35DE2139B547B353CFA724AB7439D7A92165C646 * __this, const RuntimeMethod* method)
{
	{
		// transform.position = Vector2.Lerp(transform.position, player.position, 0.5f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_2, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = __this->get_player_4();
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		L_6 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_5, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = Vector2_Lerp_mC9A8AB816281F4447B7B62264595C16751ED355B_inline(L_3, L_6, (0.5f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_7, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_0, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void camera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void camera__ctor_m22FDB3F503469B62CFDE8A72B79A83839BDBC566 (camera_t35DE2139B547B353CFA724AB7439D7A92165C646 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void comida::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void comida_Start_m44689BA7046B6EC680B9754E015F3D2B99B911DB (comida_t8CD81A84A41C7949873CD91FF7B8A8B14B1A5821 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_Tisplayer_tA80E0022C279849EE513BB6A4017ED62943ADC71_m0697638C371A3C624D3003D829B9C6461AB27039_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player = GameObject.Find("Player").GetComponent<player>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		NullCheck(L_0);
		player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * L_1;
		L_1 = GameObject_GetComponent_Tisplayer_tA80E0022C279849EE513BB6A4017ED62943ADC71_m0697638C371A3C624D3003D829B9C6461AB27039(L_0, /*hidden argument*/GameObject_GetComponent_Tisplayer_tA80E0022C279849EE513BB6A4017ED62943ADC71_m0697638C371A3C624D3003D829B9C6461AB27039_RuntimeMethod_var);
		__this->set_player_4(L_1);
		// }
		return;
	}
}
// System.Void comida::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void comida_OnTriggerEnter2D_m6379813A076C0FC1FE30578FE7D81BF09B47A95F (comida_t8CD81A84A41C7949873CD91FF7B8A8B14B1A5821 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C6CF51CF8BAD537B14CDE88DED6FEEAF0A449F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D21BF85458E3D4A9D207E12F9E13E00784FF2DC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.CompareTag("comida"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_0, _stringLiteral8D21BF85458E3D4A9D207E12F9E13E00784FF2DC, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// player.Comendo();
		player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * L_2 = __this->get_player_4();
		NullCheck(L_2);
		player_Comendo_m6B9492FF8228E4C964A0DEA41674CF9FAF322B06(L_2, /*hidden argument*/NULL);
		// cachorroQ1.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_cachorroQ1_5();
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
	}

IL_0024:
	{
		// if (collision.CompareTag("pastel"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_4 = ___collision0;
		NullCheck(L_4);
		bool L_5;
		L_5 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_4, _stringLiteral0C6CF51CF8BAD537B14CDE88DED6FEEAF0A449F0, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0048;
		}
	}
	{
		// player.Comendo();
		player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * L_6 = __this->get_player_4();
		NullCheck(L_6);
		player_Comendo_m6B9492FF8228E4C964A0DEA41674CF9FAF322B06(L_6, /*hidden argument*/NULL);
		// pastel1.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_pastel1_6();
		NullCheck(L_7);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)0, /*hidden argument*/NULL);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void comida::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void comida__ctor_m6100528F5837E8E2769E0AAF43D3E729CB2D4366 (comida_t8CD81A84A41C7949873CD91FF7B8A8B14B1A5821 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void controleInimigo::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controleInimigo_Awake_m1BE948D38AE3F8FAB7B09DF181C5F8DFE558F680 (controleInimigo_t8F3139EC1A39F3D59509FE5EBB87412892A6E31F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_mF86B79BED8570481BDFC54EAEF1F692E0508BA38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m26E35B19637B4682494A4299BBD06748D17133B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m521C787DAC1426E4C5736B5FF65980D6444B9249_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mFA486713E3FCA2B8B812AE64A4EE9D9928632DA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb2d = GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m26E35B19637B4682494A4299BBD06748D17133B1(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m26E35B19637B4682494A4299BBD06748D17133B1_RuntimeMethod_var);
		__this->set_rb2d_6(L_0);
		// animacao = GetComponent<Animator>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1;
		L_1 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_mF86B79BED8570481BDFC54EAEF1F692E0508BA38(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_mF86B79BED8570481BDFC54EAEF1F692E0508BA38_RuntimeMethod_var);
		__this->set_animacao_7(L_1);
		// jogador = GameObject.Find("Player").GetComponent<Transform>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mFA486713E3FCA2B8B812AE64A4EE9D9928632DA5(L_2, /*hidden argument*/GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mFA486713E3FCA2B8B812AE64A4EE9D9928632DA5_RuntimeMethod_var);
		__this->set_jogador_8(L_3);
		// sprite = GetComponent<SpriteRenderer>();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_4;
		L_4 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m521C787DAC1426E4C5736B5FF65980D6444B9249(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m521C787DAC1426E4C5736B5FF65980D6444B9249_RuntimeMethod_var);
		__this->set_sprite_9(L_4);
		// }
		return;
	}
}
// System.Single controleInimigo::DistanciaPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float controleInimigo_DistanciaPlayer_m7ACEB7C568DB40E35BE8FAD1300DE7E3A977D8AB (controleInimigo_t8F3139EC1A39F3D59509FE5EBB87412892A6E31F * __this, const RuntimeMethod* method)
{
	{
		// return Vector2.Distance(jogador.position, transform.position);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_jogador_8();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_1, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_4, /*hidden argument*/NULL);
		float L_6;
		L_6 = Vector2_Distance_m7DFAD110E57AF0E903DDC47BDBD99D1CC62EA03F(L_2, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void controleInimigo::Flip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controleInimigo_Flip_mA25B857A99D3C8D1940B5B5813FD701CEB711F90 (controleInimigo_t8F3139EC1A39F3D59509FE5EBB87412892A6E31F * __this, const RuntimeMethod* method)
{
	{
		// sprite.flipX = !sprite.flipX;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0 = __this->get_sprite_9();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_1 = __this->get_sprite_9();
		NullCheck(L_1);
		bool L_2;
		L_2 = SpriteRenderer_get_flipX_mCB73CAF5724B925903C9D9805D3F7B8AD0C509F5(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		SpriteRenderer_set_flipX_mD3AB83CC6D742A69F1B52376D1636CAA2E44B67E(L_0, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// speed *= -1;
		int32_t L_3 = __this->get_speed_4();
		__this->set_speed_4(((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)(-1))));
		// }
		return;
	}
}
// System.Void controleInimigo::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controleInimigo_Update_mF500B7EBEA49BFF897D9457FC4793440A848DE4A (controleInimigo_t8F3139EC1A39F3D59509FE5EBB87412892A6E31F * __this, const RuntimeMethod* method)
{
	{
		// float distance = DistanciaPlayer();
		float L_0;
		L_0 = controleInimigo_DistanciaPlayer_m7ACEB7C568DB40E35BE8FAD1300DE7E3A977D8AB(__this, /*hidden argument*/NULL);
		// if (estaMovendo)
		bool L_1 = __this->get_estaMovendo_5();
		if (!L_1)
		{
			goto IL_0073;
		}
	}
	{
		// if((jogador.position.x > transform.position.x && sprite.flipX) ||
		//     (jogador.position.x < transform.position.x && !sprite.flipX))
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = __this->get_jogador_8();
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		float L_4 = L_3.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		float L_7 = L_6.get_x_2();
		if ((!(((float)L_4) > ((float)L_7))))
		{
			goto IL_003e;
		}
	}
	{
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_8 = __this->get_sprite_9();
		NullCheck(L_8);
		bool L_9;
		L_9 = SpriteRenderer_get_flipX_mCB73CAF5724B925903C9D9805D3F7B8AD0C509F5(L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_006d;
		}
	}

IL_003e:
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = __this->get_jogador_8();
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_13, /*hidden argument*/NULL);
		float L_15 = L_14.get_x_2();
		if ((!(((float)L_12) < ((float)L_15))))
		{
			goto IL_0073;
		}
	}
	{
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_16 = __this->get_sprite_9();
		NullCheck(L_16);
		bool L_17;
		L_17 = SpriteRenderer_get_flipX_mCB73CAF5724B925903C9D9805D3F7B8AD0C509F5(L_16, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_0073;
		}
	}

IL_006d:
	{
		// Flip();
		controleInimigo_Flip_mA25B857A99D3C8D1940B5B5813FD701CEB711F90(__this, /*hidden argument*/NULL);
	}

IL_0073:
	{
		// }
		return;
	}
}
// System.Void controleInimigo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controleInimigo__ctor_m01EBDD0B6458DBC609BC5A47EC1D8E524CD06632 (controleInimigo_t8F3139EC1A39F3D59509FE5EBB87412892A6E31F * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void correr::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void correr_Update_mE16AB3CA0A89725C45CA3AD7FC8C546ED22A3EDC (correr_tA4AD10A5423F50C9A44988FBDB23B535552569EB * __this, const RuntimeMethod* method)
{
	{
		// if (bot.input == 1)
		botao_t1CB711FD8DD10D426863ECD16B3B020975E33AE8 * L_0 = __this->get_bot_4();
		NullCheck(L_0);
		float L_1 = L_0->get_input_4();
		if ((!(((float)L_1) == ((float)(1.0f)))))
		{
			goto IL_0024;
		}
	}
	{
		// player.playerSpeed = speedCorrida;
		player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * L_2 = __this->get_player_7();
		float L_3 = __this->get_speedCorrida_5();
		NullCheck(L_2);
		L_2->set_playerSpeed_5(L_3);
		// }
		return;
	}

IL_0024:
	{
		// if(bot.input == 0)
		botao_t1CB711FD8DD10D426863ECD16B3B020975E33AE8 * L_4 = __this->get_bot_4();
		NullCheck(L_4);
		float L_5 = L_4->get_input_4();
		if ((!(((float)L_5) == ((float)(0.0f)))))
		{
			goto IL_0047;
		}
	}
	{
		// player.playerSpeed = speedNormal;
		player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * L_6 = __this->get_player_7();
		float L_7 = __this->get_speedNormal_6();
		NullCheck(L_6);
		L_6->set_playerSpeed_5(L_7);
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void correr::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void correr__ctor_mA638EA130A49CDC40E4C289883679661CB6AAEE0 (correr_tA4AD10A5423F50C9A44988FBDB23B535552569EB * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void dano::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dano_Start_mE31EA361DE88686A194CBFD1711B81228BCE0CBF (dano_tADF61C6163271C8DE6E9F9BFDEC48F5606218EE6 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void dano::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dano_Update_mB9A0CEF19CEBE710B6E02CF87A484E1BAC7C0057 (dano_tADF61C6163271C8DE6E9F9BFDEC48F5606218EE6 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void dano::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dano__ctor_m6A7B861B6293DAC497A2426BC676B279B1191C0E (dano_tADF61C6163271C8DE6E9F9BFDEC48F5606218EE6 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void danoControle::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void danoControle_Start_mD575DDAA9217076B75273C7FA1E8E7C1495D0F25 (danoControle_tD0F8CB9F186BA35EEB6254F5FC421C72F668BBE5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_Tisplayer_tA80E0022C279849EE513BB6A4017ED62943ADC71_m0697638C371A3C624D3003D829B9C6461AB27039_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player = GameObject.Find("Player").GetComponent<player>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		NullCheck(L_0);
		player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * L_1;
		L_1 = GameObject_GetComponent_Tisplayer_tA80E0022C279849EE513BB6A4017ED62943ADC71_m0697638C371A3C624D3003D829B9C6461AB27039(L_0, /*hidden argument*/GameObject_GetComponent_Tisplayer_tA80E0022C279849EE513BB6A4017ED62943ADC71_m0697638C371A3C624D3003D829B9C6461AB27039_RuntimeMethod_var);
		__this->set_player_4(L_1);
		// }
		return;
	}
}
// System.Void danoControle::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void danoControle_OnTriggerEnter2D_m91A86916F58E7EEA75AB699112B03A205C1C702D (danoControle_tD0F8CB9F186BA35EEB6254F5FC421C72F668BBE5 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.CompareTag("Enemy"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___other0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_0, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		// if (player.invencivel == false)
		player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * L_2 = __this->get_player_4();
		NullCheck(L_2);
		bool L_3 = L_2->get_invencivel_13();
		if (L_3)
		{
			goto IL_0030;
		}
	}
	{
		// player.DanoPlayer();
		player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * L_4 = __this->get_player_4();
		NullCheck(L_4);
		player_DanoPlayer_mB488EEAC225A9EA1B1D839063D21C83A0F5261EC(L_4, /*hidden argument*/NULL);
		// som.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_5 = __this->get_som_5();
		NullCheck(L_5);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_5, /*hidden argument*/NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void danoControle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void danoControle__ctor_m2DE8C13CF86A653E1DB21287D619CA463C4A1835 (danoControle_tD0F8CB9F186BA35EEB6254F5FC421C72F668BBE5 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void dialogo::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dialogo_Start_m0576138EA91DDEA17DDFE6147ADFC7B619A06387 (dialogo_t1F4C50918565CE949A74FB80A4EBACA98B53A2F7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisdialogoControl_t440084F0ACFD90A29D2BB0234775F6C1E1735E30_m161ACA3F8E9EADD931CF4E14D295F42FDAAD7ADB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// dialogoControl = FindObjectOfType<dialogoControl>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		dialogoControl_t440084F0ACFD90A29D2BB0234775F6C1E1735E30 * L_0;
		L_0 = Object_FindObjectOfType_TisdialogoControl_t440084F0ACFD90A29D2BB0234775F6C1E1735E30_m161ACA3F8E9EADD931CF4E14D295F42FDAAD7ADB(/*hidden argument*/Object_FindObjectOfType_TisdialogoControl_t440084F0ACFD90A29D2BB0234775F6C1E1735E30_m161ACA3F8E9EADD931CF4E14D295F42FDAAD7ADB_RuntimeMethod_var);
		__this->set_dialogoControl_10(L_0);
		// }
		return;
	}
}
// System.Void dialogo::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dialogo_FixedUpdate_m66333E0864BC5CBBE1C653A4F297960D08F6514C (dialogo_t1F4C50918565CE949A74FB80A4EBACA98B53A2F7 * __this, const RuntimeMethod* method)
{
	{
		// Intera??o();
		dialogo_InteraUE7UE3o_m4B9E042EF46F2429F0952A13A3B165DC3A62C83B(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void dialogo::Intera??o()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dialogo_InteraUE7UE3o_m4B9E042EF46F2429F0952A13A3B165DC3A62C83B (dialogo_t1F4C50918565CE949A74FB80A4EBACA98B53A2F7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Collider2D dentroDoRaio = Physics2D.OverlapCircle(transform.position, raio, playerLayer);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_1, /*hidden argument*/NULL);
		float L_3 = __this->get_raio_8();
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_4 = __this->get_playerLayer_7();
		int32_t L_5;
		L_5 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_6;
		L_6 = Physics2D_OverlapCircle_mA13E0B8B40964C93CD1E8BB9B4FE32B19B52BC07(L_2, L_3, L_5, /*hidden argument*/NULL);
		// if(dentroDoRaio != null)
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_6, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0036;
		}
	}
	{
		// dentroRaio = true;
		__this->set_dentroRaio_9((bool)1);
		// }
		return;
	}

IL_0036:
	{
		// dentroRaio = false;
		__this->set_dentroRaio_9((bool)0);
		// }
		return;
	}
}
// System.Void dialogo::Conversar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dialogo_Conversar_m41F18C34768DEF4FAFCC0B71E02F78C414FD21B6 (dialogo_t1F4C50918565CE949A74FB80A4EBACA98B53A2F7 * __this, const RuntimeMethod* method)
{
	{
		// if (dentroRaio)
		bool L_0 = __this->get_dentroRaio_9();
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		// dialogoControl.Fala(personagem, fala, nomePersonagem);
		dialogoControl_t440084F0ACFD90A29D2BB0234775F6C1E1735E30 * L_1 = __this->get_dialogoControl_10();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_2 = __this->get_personagem_4();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = __this->get_fala_5();
		String_t* L_4 = __this->get_nomePersonagem_6();
		NullCheck(L_1);
		dialogoControl_Fala_mA2A1AF98338F84A86275A11C728119B9BDBABB7A(L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void dialogo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dialogo__ctor_m79DCAEA7D4733B72C34A5861F317B7692E229797 (dialogo_t1F4C50918565CE949A74FB80A4EBACA98B53A2F7 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void dialogoControl::Fala(UnityEngine.Sprite,System.String[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dialogoControl_Fala_mA2A1AF98338F84A86275A11C728119B9BDBABB7A (dialogoControl_t440084F0ACFD90A29D2BB0234775F6C1E1735E30 * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___p0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___txt1, String_t* ___personagemNome2, const RuntimeMethod* method)
{
	{
		// Dialogo.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_Dialogo_4();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// perfil.sprite = p;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1 = __this->get_perfil_5();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_2 = ___p0;
		NullCheck(L_1);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_1, L_2, /*hidden argument*/NULL);
		// sentencas = txt;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = ___txt1;
		__this->set_sentencas_9(L_3);
		// nomePersonagem.text = personagemNome;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_nomePersonagem_7();
		String_t* L_5 = ___personagemNome2;
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_5);
		// StartCoroutine(TempoEspera());
		RuntimeObject* L_6;
		L_6 = dialogoControl_TempoEspera_mE5DA4FFF4FFCA094491D4294CDE2364C604AA024(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_7;
		L_7 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator dialogoControl::TempoEspera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* dialogoControl_TempoEspera_mE5DA4FFF4FFCA094491D4294CDE2364C604AA024 (dialogoControl_t440084F0ACFD90A29D2BB0234775F6C1E1735E30 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTempoEsperaU3Ed__8_tCFCDE1937A367F835BB0E4EA589FBA4C3CCED77F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTempoEsperaU3Ed__8_tCFCDE1937A367F835BB0E4EA589FBA4C3CCED77F * L_0 = (U3CTempoEsperaU3Ed__8_tCFCDE1937A367F835BB0E4EA589FBA4C3CCED77F *)il2cpp_codegen_object_new(U3CTempoEsperaU3Ed__8_tCFCDE1937A367F835BB0E4EA589FBA4C3CCED77F_il2cpp_TypeInfo_var);
		U3CTempoEsperaU3Ed__8__ctor_m7C4F6227DD80B8EF4C85BF57F1541B202943E7D3(L_0, 0, /*hidden argument*/NULL);
		U3CTempoEsperaU3Ed__8_tCFCDE1937A367F835BB0E4EA589FBA4C3CCED77F * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void dialogoControl::ProximaFala()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dialogoControl_ProximaFala_m3CF6A94098CC25E4136854D7CC3B6EFA4BDB892E (dialogoControl_t440084F0ACFD90A29D2BB0234775F6C1E1735E30 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(Falas.text == sentencas[index])
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_Falas_6();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = __this->get_sentencas_9();
		int32_t L_3 = __this->get_index_10();
		NullCheck(L_2);
		int32_t L_4 = L_3;
		String_t* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		bool L_6;
		L_6 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0080;
		}
	}
	{
		// if(index < sentencas.Length - 1)
		int32_t L_7 = __this->get_index_10();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = __this->get_sentencas_9();
		NullCheck(L_8);
		if ((((int32_t)L_7) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))), (int32_t)1)))))
		{
			goto IL_005d;
		}
	}
	{
		// index++;
		int32_t L_9 = __this->get_index_10();
		__this->set_index_10(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)));
		// Falas.text = "";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_10 = __this->get_Falas_6();
		NullCheck(L_10);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// StartCoroutine(TempoEspera());
		RuntimeObject* L_11;
		L_11 = dialogoControl_TempoEspera_mE5DA4FFF4FFCA094491D4294CDE2364C604AA024(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_12;
		L_12 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_11, /*hidden argument*/NULL);
		// }
		return;
	}

IL_005d:
	{
		// Falas.text = "";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_13 = __this->get_Falas_6();
		NullCheck(L_13);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// index = 0;
		__this->set_index_10(0);
		// Dialogo.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = __this->get_Dialogo_4();
		NullCheck(L_14);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_14, (bool)0, /*hidden argument*/NULL);
	}

IL_0080:
	{
		// }
		return;
	}
}
// System.Void dialogoControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dialogoControl__ctor_m96DE5291E9B7F45BA981A590288176AC488B9CBE (dialogoControl_t440084F0ACFD90A29D2BB0234775F6C1E1735E30 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void girolli::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void girolli_Start_mDBEFFA8F795F2E3BD54B660A592F6C97AA3A861E (girolli_t4FF8990132F80C1701133AF443D7F698E3CFB765 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m521C787DAC1426E4C5736B5FF65980D6444B9249_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mFA486713E3FCA2B8B812AE64A4EE9D9928632DA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// jogador = GameObject.Find("Player").GetComponent<Transform>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mFA486713E3FCA2B8B812AE64A4EE9D9928632DA5(L_0, /*hidden argument*/GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mFA486713E3FCA2B8B812AE64A4EE9D9928632DA5_RuntimeMethod_var);
		__this->set_jogador_4(L_1);
		// sprite = GetComponent<SpriteRenderer>();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_2;
		L_2 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m521C787DAC1426E4C5736B5FF65980D6444B9249(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m521C787DAC1426E4C5736B5FF65980D6444B9249_RuntimeMethod_var);
		__this->set_sprite_5(L_2);
		// }
		return;
	}
}
// System.Void girolli::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void girolli_Update_mDA6CDAB17B379451ECE1859151F31B02EBC54EE6 (girolli_t4FF8990132F80C1701133AF443D7F698E3CFB765 * __this, const RuntimeMethod* method)
{
	{
		// if (jogador.position.x < transform.position.x)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_jogador_4();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_x_2();
		if ((!(((float)L_2) < ((float)L_5))))
		{
			goto IL_002f;
		}
	}
	{
		// sprite.flipX = true;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_6 = __this->get_sprite_5();
		NullCheck(L_6);
		SpriteRenderer_set_flipX_mD3AB83CC6D742A69F1B52376D1636CAA2E44B67E(L_6, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_002f:
	{
		// if (jogador.position.x > transform.position.x)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = __this->get_jogador_4();
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_x_2();
		if ((!(((float)L_9) > ((float)L_12))))
		{
			goto IL_005d;
		}
	}
	{
		// sprite.flipX = false;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_13 = __this->get_sprite_5();
		NullCheck(L_13);
		SpriteRenderer_set_flipX_mD3AB83CC6D742A69F1B52376D1636CAA2E44B67E(L_13, (bool)0, /*hidden argument*/NULL);
	}

IL_005d:
	{
		// }
		return;
	}
}
// System.Void girolli::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void girolli__ctor_m0557C7ED40A2D93AA35FF48C52E8526184B7B242 (girolli_t4FF8990132F80C1701133AF443D7F698E3CFB765 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void inimigo::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void inimigo_Awake_m73DF7BD5D2C2BB48992DB3DC5EBE2D084F9B6085 (inimigo_t10762E03F1068A96AF3A69F01DA0769FDFAB2221 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m66FA849561D4B37151172353F62FE31D3F863A08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m26E35B19637B4682494A4299BBD06748D17133B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m521C787DAC1426E4C5736B5FF65980D6444B9249_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mFA486713E3FCA2B8B812AE64A4EE9D9928632DA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB750E274D88AEC9F379EBCB3B34B3E5AFC4B3A8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb2d = GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m26E35B19637B4682494A4299BBD06748D17133B1(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m26E35B19637B4682494A4299BBD06748D17133B1_RuntimeMethod_var);
		__this->set_rb2d_7(L_0);
		// jogador = GameObject.Find("Player").GetComponent<Transform>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mFA486713E3FCA2B8B812AE64A4EE9D9928632DA5(L_1, /*hidden argument*/GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mFA486713E3FCA2B8B812AE64A4EE9D9928632DA5_RuntimeMethod_var);
		__this->set_jogador_8(L_2);
		// animacao = GetComponentInChildren<Animator>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_3;
		L_3 = Component_GetComponentInChildren_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m66FA849561D4B37151172353F62FE31D3F863A08(__this, /*hidden argument*/Component_GetComponentInChildren_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m66FA849561D4B37151172353F62FE31D3F863A08_RuntimeMethod_var);
		__this->set_animacao_9(L_3);
		// sprite = GetComponent<SpriteRenderer>();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_4;
		L_4 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m521C787DAC1426E4C5736B5FF65980D6444B9249(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m521C787DAC1426E4C5736B5FF65980D6444B9249_RuntimeMethod_var);
		__this->set_sprite_10(L_4);
		// fantasma = GameObject.Find("Iminigo");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralAB750E274D88AEC9F379EBCB3B34B3E5AFC4B3A8, /*hidden argument*/NULL);
		__this->set_fantasma_11(L_5);
		// }
		return;
	}
}
// System.Single inimigo::distanciaJogador()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float inimigo_distanciaJogador_mDC1A089C2D031DFC0BCED8F474A8837DC967E429 (inimigo_t10762E03F1068A96AF3A69F01DA0769FDFAB2221 * __this, const RuntimeMethod* method)
{
	{
		// return Vector2.Distance(jogador.position, transform.position);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_jogador_8();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_1, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_4, /*hidden argument*/NULL);
		float L_6;
		L_6 = Vector2_Distance_m7DFAD110E57AF0E903DDC47BDBD99D1CC62EA03F(L_2, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void inimigo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void inimigo__ctor_m1200DB4392677DBD01914D0A4839EA767ECFB651 (inimigo_t10762E03F1068A96AF3A69F01DA0769FDFAB2221 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void joystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void joystick_Start_mB87398D017607537366B6C021D3E055042736D30 (joystick_t4BBF6FBF7FA9B64D60EC36D3378931F4865C4F05 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m1B327975BFAB070F4A1332784FFE80A1EECFBF00_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// joysPosOiginal = joysFundo.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_joysFundo_5();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_2, /*hidden argument*/NULL);
		__this->set_joysPosOiginal_8(L_3);
		// joysRaio = joysFundo.GetComponent<RectTransform>().sizeDelta.y / 4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_joysFundo_5();
		NullCheck(L_4);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_5;
		L_5 = GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m1B327975BFAB070F4A1332784FFE80A1EECFBF00(L_4, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m1B327975BFAB070F4A1332784FFE80A1EECFBF00_RuntimeMethod_var);
		NullCheck(L_5);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		L_6 = RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50(L_5, /*hidden argument*/NULL);
		float L_7 = L_6.get_y_1();
		__this->set_joysRaio_9(((float)((float)L_7/(float)(4.0f))));
		// }
		return;
	}
}
// System.Void joystick::PointerDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void joystick_PointerDown_m6ACD32C4FF6680BF50D06E55504B37EEAE2BF6D9 (joystick_t4BBF6FBF7FA9B64D60EC36D3378931F4865C4F05 * __this, const RuntimeMethod* method)
{
	{
		// joys.transform.position = Input.mousePosition;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_joys_4();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_1, L_2, /*hidden argument*/NULL);
		// joysPosTouch = Input.mousePosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_3, /*hidden argument*/NULL);
		__this->set_joysPosTouch_7(L_4);
		// }
		return;
	}
}
// System.Void joystick::arrastar(UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void joystick_arrastar_m6BAA9E5C1BEF20090CC6E3D50E9988041C8D41FD (joystick_t4BBF6FBF7FA9B64D60EC36D3378931F4865C4F05 * __this, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___baseEventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// PointerEventData pointerEventData = baseEventData as PointerEventData;
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___baseEventData0;
		// Vector2 arrastPos = pointerEventData.position;
		NullCheck(((PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)IsInstClass((RuntimeObject*)L_0, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var)));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = PointerEventData_get_position_mE65C1CF448C935678F7C2A6265B4F3906FD9D651_inline(((PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)IsInstClass((RuntimeObject*)L_0, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_0 = L_1;
		// joysVec = (arrastPos - joysPosTouch).normalized;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = __this->get_joysPosTouch_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_2, L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Vector2_get_normalized_m1F7F7AA3B7AC2414F245395C3785880B847BF7F5((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_2), /*hidden argument*/NULL);
		__this->set_joysVec_6(L_5);
		// float joysDist = Vector2.Distance(arrastPos, joysPosOiginal);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = __this->get_joysPosOiginal_8();
		float L_8;
		L_8 = Vector2_Distance_m7DFAD110E57AF0E903DDC47BDBD99D1CC62EA03F(L_6, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		// if(joysDist < joysRaio)
		float L_9 = V_1;
		float L_10 = __this->get_joysRaio_9();
		if ((!(((float)L_9) < ((float)L_10))))
		{
			goto IL_0069;
		}
	}
	{
		// joys.transform.position = joysPosOiginal + joysVec * joysDist;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_joys_4();
		NullCheck(L_11);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_11, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13 = __this->get_joysPosOiginal_8();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14 = __this->get_joysVec_6();
		float L_15 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16;
		L_16 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_14, L_15, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17;
		L_17 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_13, L_16, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_17, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_12, L_18, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0069:
	{
		// joys.transform.position = joysPosOiginal + joysVec * joysRaio;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = __this->get_joys_4();
		NullCheck(L_19);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_19, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_21 = __this->get_joysPosOiginal_8();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_22 = __this->get_joysVec_6();
		float L_23 = __this->get_joysRaio_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_24;
		L_24 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_22, L_23, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_25;
		L_25 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_21, L_24, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_25, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_20, L_26, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void joystick::PointerUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void joystick_PointerUp_m47E392997960E8D569090F1715E5ED9BE5DF7838 (joystick_t4BBF6FBF7FA9B64D60EC36D3378931F4865C4F05 * __this, const RuntimeMethod* method)
{
	{
		// joysVec = Vector2.zero;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		L_0 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		__this->set_joysVec_6(L_0);
		// joys.transform.position = joysPosOiginal;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_joys_4();
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = __this->get_joysPosOiginal_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_2, L_4, /*hidden argument*/NULL);
		// joysFundo.transform.position = joysPosOiginal;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_joysFundo_5();
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = __this->get_joysPosOiginal_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_6, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void joystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void joystick__ctor_mC5225A2A062F639F3D93CB8F49C79EE5DC15A05E (joystick_t4BBF6FBF7FA9B64D60EC36D3378931F4865C4F05 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void mute::parar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mute_parar_m2B0626122CBE7A538179357A0D7AFB5758E901F5 (mute_t7CD6D915FDA58DF86E7E8A8AF8C1CD3549A45B2D * __this, const RuntimeMethod* method)
{
	{
		// girolli.Pause();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_girolli_4();
		NullCheck(L_0);
		AudioSource_Pause_mC4F9932A77B6AA2CC3FB720721B7837CF57B675D(L_0, /*hidden argument*/NULL);
		// desmute.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_desmute_5();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// mutar.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_mutar_6();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void mute::tocar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mute_tocar_m10B73ECE08667F46C05F0C14FFC222D72B7495DE (mute_t7CD6D915FDA58DF86E7E8A8AF8C1CD3549A45B2D * __this, const RuntimeMethod* method)
{
	{
		// girolli.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_girolli_4();
		NullCheck(L_0);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_0, /*hidden argument*/NULL);
		// desmute.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_desmute_5();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// mutar.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_mutar_6();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void mute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mute__ctor_m8BA957BD9A03EC81A286AAC05B5AD923CD858F46 (mute_t7CD6D915FDA58DF86E7E8A8AF8C1CD3549A45B2D * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void pause::pausar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pause_pausar_m78A30390CF8BCD2B899B8E7DF3FAF2C306499A7C (pause_tF478C7B117ADB28997D31868F88A52290C950A85 * __this, const RuntimeMethod* method)
{
	{
		// if(Time.timeScale == 1)
		float L_0;
		L_0 = Time_get_timeScale_m082A05928ED5917AA986FAA6106E79D8446A26F4(/*hidden argument*/NULL);
		if ((!(((float)L_0) == ((float)(1.0f)))))
		{
			goto IL_0022;
		}
	}
	{
		// pauseMenu.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_pauseMenu_4();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// Time.timeScale = 0;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((0.0f), /*hidden argument*/NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void pause::resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pause_resume_m52B4A7D98D514710F6D1EA72C30F8B4FD59257E1 (pause_tF478C7B117ADB28997D31868F88A52290C950A85 * __this, const RuntimeMethod* method)
{
	{
		// pauseMenu.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_pauseMenu_4();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// Time.timeScale = 1;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void pause::sair()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pause_sair_m89C8F56FC23593740C92A7E09EA83E5A07BBF2CC (pause_tF478C7B117ADB28997D31868F88A52290C950A85 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pauseMenu.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_pauseMenu_4();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// Time.timeScale = 1;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// SceneManager.LoadScene(Menu);
		String_t* L_1 = __this->get_Menu_5();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void pause::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pause__ctor_mAAB488F5515C7D2FAEDD1296E41205142D337AAB (pause_tF478C7B117ADB28997D31868F88A52290C950A85 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void player::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void player_Start_m70A61B77EB8E3359FE4CBB98768C3D17ECD8F65A (player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_mF86B79BED8570481BDFC54EAEF1F692E0508BA38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m26E35B19637B4682494A4299BBD06748D17133B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m521C787DAC1426E4C5736B5FF65980D6444B9249_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb2d = GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m26E35B19637B4682494A4299BBD06748D17133B1(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m26E35B19637B4682494A4299BBD06748D17133B1_RuntimeMethod_var);
		__this->set_rb2d_6(L_0);
		// animacao = GetComponent<Animator>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1;
		L_1 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_mF86B79BED8570481BDFC54EAEF1F692E0508BA38(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_mF86B79BED8570481BDFC54EAEF1F692E0508BA38_RuntimeMethod_var);
		__this->set_animacao_8(L_1);
		// sprite = GetComponent<SpriteRenderer>();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_2;
		L_2 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m521C787DAC1426E4C5736B5FF65980D6444B9249(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m521C787DAC1426E4C5736B5FF65980D6444B9249_RuntimeMethod_var);
		__this->set_sprite_7(L_2);
		// vidaAtual = vidaMax;
		int32_t L_3 = __this->get_vidaMax_11();
		__this->set_vidaAtual_12(L_3);
		// }
		return;
	}
}
// System.Void player::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void player_Update_m0B7A820EE0B22E5EE37AE5C3697BE4CA8D368069 (player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * __this, const RuntimeMethod* method)
{
	{
		// direcao = joystick.joysVec.x;
		joystick_t4BBF6FBF7FA9B64D60EC36D3378931F4865C4F05 * L_0 = __this->get_joystick_4();
		NullCheck(L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_1 = L_0->get_address_of_joysVec_6();
		float L_2 = L_1->get_x_0();
		__this->set_direcao_9(L_2);
		// MudarDirecao();
		player_MudarDirecao_m8711D44FFEB3A51B6E74BA8B69AE4573916CA4E4(__this, /*hidden argument*/NULL);
		// Vida();
		player_Vida_mD8786244C8695A5980768135CAB4B743247172CD(__this, /*hidden argument*/NULL);
		// RecebendoComida();
		player_RecebendoComida_mEC4E87D3B18AD43EB87C534E0DF18ED6D069E5CD(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void player::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void player_FixedUpdate_m5B490FF205191403C76DF260D37BD720CF1D64B8 (player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * __this, const RuntimeMethod* method)
{
	{
		// if (vivo)
		bool L_0 = __this->get_vivo_10();
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		// if (joystick.joysVec.y != 0)
		joystick_t4BBF6FBF7FA9B64D60EC36D3378931F4865C4F05 * L_1 = __this->get_joystick_4();
		NullCheck(L_1);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_2 = L_1->get_address_of_joysVec_6();
		float L_3 = L_2->get_y_1();
		if ((((float)L_3) == ((float)(0.0f))))
		{
			goto IL_005e;
		}
	}
	{
		// rb2d.velocity = new Vector2(joystick.joysVec.x * playerSpeed, joystick.joysVec.y * playerSpeed);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_4 = __this->get_rb2d_6();
		joystick_t4BBF6FBF7FA9B64D60EC36D3378931F4865C4F05 * L_5 = __this->get_joystick_4();
		NullCheck(L_5);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_6 = L_5->get_address_of_joysVec_6();
		float L_7 = L_6->get_x_0();
		float L_8 = __this->get_playerSpeed_5();
		joystick_t4BBF6FBF7FA9B64D60EC36D3378931F4865C4F05 * L_9 = __this->get_joystick_4();
		NullCheck(L_9);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_10 = L_9->get_address_of_joysVec_6();
		float L_11 = L_10->get_y_1();
		float L_12 = __this->get_playerSpeed_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_13), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), ((float)il2cpp_codegen_multiply((float)L_11, (float)L_12)), /*hidden argument*/NULL);
		NullCheck(L_4);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_4, L_13, /*hidden argument*/NULL);
		// }
		return;
	}

IL_005e:
	{
		// rb2d.velocity = Vector2.zero;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_14 = __this->get_rb2d_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15;
		L_15 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		NullCheck(L_14);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_14, L_15, /*hidden argument*/NULL);
		// }
		return;
	}

IL_006f:
	{
		// rb2d.velocity = Vector2.zero;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_16 = __this->get_rb2d_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17;
		L_17 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		NullCheck(L_16);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_16, L_17, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void player::MudarDirecao()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void player_MudarDirecao_m8711D44FFEB3A51B6E74BA8B69AE4573916CA4E4 (player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69CD5A2E7873D79C4235066C833604B2EB3F337B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C0145291B25951D608D28FC915FD0641A2B8110);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (vivo)
		bool L_0 = __this->get_vivo_10();
		if (!L_0)
		{
			goto IL_0069;
		}
	}
	{
		// if (direcao > 0)
		float L_1 = __this->get_direcao_9();
		if ((!(((float)L_1) > ((float)(0.0f)))))
		{
			goto IL_0028;
		}
	}
	{
		// animacao.SetBool("Correndo", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_2 = __this->get_animacao_8();
		NullCheck(L_2);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_2, _stringLiteral6C0145291B25951D608D28FC915FD0641A2B8110, (bool)1, /*hidden argument*/NULL);
		// }
		goto IL_0039;
	}

IL_0028:
	{
		// animacao.SetBool("Correndo", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_3 = __this->get_animacao_8();
		NullCheck(L_3);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_3, _stringLiteral6C0145291B25951D608D28FC915FD0641A2B8110, (bool)0, /*hidden argument*/NULL);
	}

IL_0039:
	{
		// if (direcao < 0)
		float L_4 = __this->get_direcao_9();
		if ((!(((float)L_4) < ((float)(0.0f)))))
		{
			goto IL_0058;
		}
	}
	{
		// animacao.SetBool("CorrendoE", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_5 = __this->get_animacao_8();
		NullCheck(L_5);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_5, _stringLiteral69CD5A2E7873D79C4235066C833604B2EB3F337B, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0058:
	{
		// animacao.SetBool("CorrendoE", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_6 = __this->get_animacao_8();
		NullCheck(L_6);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_6, _stringLiteral69CD5A2E7873D79C4235066C833604B2EB3F337B, (bool)0, /*hidden argument*/NULL);
	}

IL_0069:
	{
		// }
		return;
	}
}
// System.Void player::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void player_OnCollisionEnter2D_mB093C8FEC41D11C71C1A7DDBB13C09A81F3ABBAA (player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * __this, Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BB5AC567A3F8D5B260105CB84455E041A89B701);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral633F98D0711EDB34EB34FB388B58E499D227233A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DBE3D7D87DE325F504F11C089B92BDA1BB3A4F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FFBFC89B34DDAABDC06D52A3EDB69ED14935550);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98DB3279546DC1517BC787A274DEB6AFF078148C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8ADB5958AA40B204567C4F58A6DC9688E27F331);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFFA7150A513E0B66D5D49097D9919A0CE9AEFA9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD743EFEE8BB0821F9EDC0333CA4B4C86940F70C4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.CompareTag("Cena26"))
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_1, _stringLiteralAFFA7150A513E0B66D5D49097D9919A0CE9AEFA9, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// Invoke("Cena26", 0.1F);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralAFFA7150A513E0B66D5D49097D9919A0CE9AEFA9, (0.100000001f), /*hidden argument*/NULL);
	}

IL_0022:
	{
		// if (collision.gameObject.CompareTag("CenaCorre26"))
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_3 = ___collision0;
		NullCheck(L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_4, _stringLiteral7DBE3D7D87DE325F504F11C089B92BDA1BB3A4F5, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		// Invoke("CenaCorre26", 0.1F);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral7DBE3D7D87DE325F504F11C089B92BDA1BB3A4F5, (0.100000001f), /*hidden argument*/NULL);
	}

IL_0044:
	{
		// if (collision.gameObject.CompareTag("Cena26Antes"))
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_6 = ___collision0;
		NullCheck(L_6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		bool L_8;
		L_8 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_7, _stringLiteralA8ADB5958AA40B204567C4F58A6DC9688E27F331, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0066;
		}
	}
	{
		// Invoke("Cena26Antes", 0.1F);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralA8ADB5958AA40B204567C4F58A6DC9688E27F331, (0.100000001f), /*hidden argument*/NULL);
	}

IL_0066:
	{
		// if (collision.gameObject.CompareTag("CenaCorreComeco"))
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_9 = ___collision0;
		NullCheck(L_9);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		bool L_11;
		L_11 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_10, _stringLiteralD743EFEE8BB0821F9EDC0333CA4B4C86940F70C4, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0088;
		}
	}
	{
		// Invoke("CenaCorreComeco", 0.1F);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralD743EFEE8BB0821F9EDC0333CA4B4C86940F70C4, (0.100000001f), /*hidden argument*/NULL);
	}

IL_0088:
	{
		// if (collision.gameObject.CompareTag("saida"))
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_12 = ___collision0;
		NullCheck(L_12);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		bool L_14;
		L_14 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_13, _stringLiteral0BB5AC567A3F8D5B260105CB84455E041A89B701, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_00aa;
		}
	}
	{
		// Invoke("sair", 0.1F);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral633F98D0711EDB34EB34FB388B58E499D227233A, (0.100000001f), /*hidden argument*/NULL);
	}

IL_00aa:
	{
		// if (collision.gameObject.CompareTag("Dormir"))
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_15 = ___collision0;
		NullCheck(L_15);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		bool L_17;
		L_17 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_16, _stringLiteral98DB3279546DC1517BC787A274DEB6AFF078148C, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00e4;
		}
	}
	{
		// Invoke("Dormir", 4F);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral98DB3279546DC1517BC787A274DEB6AFF078148C, (4.0f), /*hidden argument*/NULL);
		// animacao.SetBool("Morto", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_18 = __this->get_animacao_8();
		NullCheck(L_18);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_18, _stringLiteral8FFBFC89B34DDAABDC06D52A3EDB69ED14935550, (bool)1, /*hidden argument*/NULL);
		// vivo = false;
		__this->set_vivo_10((bool)0);
	}

IL_00e4:
	{
		// }
		return;
	}
}
// System.Void player::RecarregarNivel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void player_RecarregarNivel_m3703CD7EF2820327BD425F4FE3605983E8BB379B (player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().name);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void player::Cena26()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void player_Cena26_m4C21A5A86DAB92AAD7D437BD8BE71E4580DF1C50 (player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DAF755BFA5483A2ED4660390AE32F2F637B57A9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Cena26Corre");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral5DAF755BFA5483A2ED4660390AE32F2F637B57A9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void player::CenaCorre26()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void player_CenaCorre26_m437943253F5EAEAACBAC0925C6FD4F225A46A838 (player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DBE3D7D87DE325F504F11C089B92BDA1BB3A4F5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("CenaCorre26");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral7DBE3D7D87DE325F504F11C089B92BDA1BB3A4F5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void player::Cena26Antes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void player_Cena26Antes_m9D29CC61F1098B4181607CE84164B150536151DD (player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8ADB5958AA40B204567C4F58A6DC9688E27F331);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Cena26Antes");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralA8ADB5958AA40B204567C4F58A6DC9688E27F331, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void player::CenaCorreComeco()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void player_CenaCorreComeco_m84673B874840334FC6171993D50494E764844466 (player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63EAC2512395039C5CF7CB1BBA7C97C9360435BC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("CenaCorreCome?o26");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral63EAC2512395039C5CF7CB1BBA7C97C9360435BC, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void player::Dormir()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void player_Dormir_m705CE1161AA7330FC28770A273EAC4EEFA2B2582 (player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFFA7150A513E0B66D5D49097D9919A0CE9AEFA9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Cena26");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralAFFA7150A513E0B66D5D49097D9919A0CE9AEFA9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void player::sair()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void player_sair_m8D7A26CCF02B903D8F0A15F85793C1174062D368 (player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F79CFD08C1EC74EAAF3D9F7CBDAB04E99B9FA44);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Final");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral5F79CFD08C1EC74EAAF3D9F7CBDAB04E99B9FA44, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator player::Dano()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* player_Dano_m3659DAC9B6D2F032C9D457670BC726361340D498 (player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDanoU3Ed__25_t1E12314488E95B21A2AFE6668BAA216100E02D7A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDanoU3Ed__25_t1E12314488E95B21A2AFE6668BAA216100E02D7A * L_0 = (U3CDanoU3Ed__25_t1E12314488E95B21A2AFE6668BAA216100E02D7A *)il2cpp_codegen_object_new(U3CDanoU3Ed__25_t1E12314488E95B21A2AFE6668BAA216100E02D7A_il2cpp_TypeInfo_var);
		U3CDanoU3Ed__25__ctor_m03870593C2B40440C80B657FC5575BEDD49D4DAF(L_0, 0, /*hidden argument*/NULL);
		U3CDanoU3Ed__25_t1E12314488E95B21A2AFE6668BAA216100E02D7A * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void player::DanoPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void player_DanoPlayer_mB488EEAC225A9EA1B1D839063D21C83A0F5261EC (player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FFBFC89B34DDAABDC06D52A3EDB69ED14935550);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB36B09C1C71F835615D243517A2078AB35B92775);
		s_Il2CppMethodInitialized = true;
	}
	{
		// invencivel = true;
		__this->set_invencivel_13((bool)1);
		// vidaAtual--;
		int32_t L_0 = __this->get_vidaAtual_12();
		__this->set_vidaAtual_12(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)));
		// StartCoroutine(Dano());
		RuntimeObject* L_1;
		L_1 = player_Dano_m3659DAC9B6D2F032C9D457670BC726361340D498(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_2;
		L_2 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_1, /*hidden argument*/NULL);
		// if (vidaAtual <= 0)
		int32_t L_3 = __this->get_vidaAtual_12();
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0083;
		}
	}
	{
		// vivo = false;
		__this->set_vivo_10((bool)0);
		// animacao.SetBool("Morto", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_4 = __this->get_animacao_8();
		NullCheck(L_4);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_4, _stringLiteral8FFBFC89B34DDAABDC06D52A3EDB69ED14935550, (bool)1, /*hidden argument*/NULL);
		// Invoke("RecarregarNivel", 1.9f);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralB36B09C1C71F835615D243517A2078AB35B92775, (1.89999998f), /*hidden argument*/NULL);
		// vidaAtual = vidaMax;
		int32_t L_5 = __this->get_vidaMax_11();
		__this->set_vidaAtual_12(L_5);
		// vida3.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_vida3_14();
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)1, /*hidden argument*/NULL);
		// vida2.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_vida2_15();
		NullCheck(L_7);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)1, /*hidden argument*/NULL);
		// vida1.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_vida1_16();
		NullCheck(L_8);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)1, /*hidden argument*/NULL);
	}

IL_0083:
	{
		// }
		return;
	}
}
// System.Void player::Vida()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void player_Vida_mD8786244C8695A5980768135CAB4B743247172CD (player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * __this, const RuntimeMethod* method)
{
	{
		// if (vidaAtual == 2)
		int32_t L_0 = __this->get_vidaAtual_12();
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0015;
		}
	}
	{
		// vida3.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_vida3_14();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
	}

IL_0015:
	{
		// if (vidaAtual == 1)
		int32_t L_2 = __this->get_vidaAtual_12();
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_002a;
		}
	}
	{
		// vida2.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_vida2_15();
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
	}

IL_002a:
	{
		// if (vidaAtual < 1)
		int32_t L_4 = __this->get_vidaAtual_12();
		if ((((int32_t)L_4) >= ((int32_t)1)))
		{
			goto IL_003f;
		}
	}
	{
		// vida1.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_vida1_16();
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)0, /*hidden argument*/NULL);
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Void player::Comendo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void player_Comendo_m6B9492FF8228E4C964A0DEA41674CF9FAF322B06 (player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * __this, const RuntimeMethod* method)
{
	{
		// vidaAtual += 1;
		int32_t L_0 = __this->get_vidaAtual_12();
		__this->set_vidaAtual_12(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// }
		return;
	}
}
// System.Void player::RecebendoComida()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void player_RecebendoComida_mEC4E87D3B18AD43EB87C534E0DF18ED6D069E5CD (player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * __this, const RuntimeMethod* method)
{
	{
		// if(vidaAtual  >= 4)
		int32_t L_0 = __this->get_vidaAtual_12();
		if ((((int32_t)L_0) < ((int32_t)4)))
		{
			goto IL_0018;
		}
	}
	{
		// vidaAtual--;
		int32_t L_1 = __this->get_vidaAtual_12();
		__this->set_vidaAtual_12(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)));
		// }
		return;
	}

IL_0018:
	{
		// if (vidaAtual == 3)
		int32_t L_2 = __this->get_vidaAtual_12();
		if ((!(((uint32_t)L_2) == ((uint32_t)3))))
		{
			goto IL_002d;
		}
	}
	{
		// vida3.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_vida3_14();
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)1, /*hidden argument*/NULL);
	}

IL_002d:
	{
		// if (vidaAtual == 2)
		int32_t L_4 = __this->get_vidaAtual_12();
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0042;
		}
	}
	{
		// vida2.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_vida2_15();
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)1, /*hidden argument*/NULL);
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void player__ctor_m714EC555B4D536FDD17E68FB029561E4AC0124FB (player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * __this, const RuntimeMethod* method)
{
	{
		// private bool vivo = true;
		__this->set_vivo_10((bool)1);
		// public int vidaMax = 3;
		__this->set_vidaMax_11(3);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void dialogoControl/<TempoEspera>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTempoEsperaU3Ed__8__ctor_m7C4F6227DD80B8EF4C85BF57F1541B202943E7D3 (U3CTempoEsperaU3Ed__8_tCFCDE1937A367F835BB0E4EA589FBA4C3CCED77F * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void dialogoControl/<TempoEspera>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTempoEsperaU3Ed__8_System_IDisposable_Dispose_m9D2C53FA2D10775039722F2D9E9F264807C56F1A (U3CTempoEsperaU3Ed__8_tCFCDE1937A367F835BB0E4EA589FBA4C3CCED77F * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean dialogoControl/<TempoEspera>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTempoEsperaU3Ed__8_MoveNext_m5179654670D8E9908B35CB13D3B3ACF5B7846EF0 (U3CTempoEsperaU3Ed__8_tCFCDE1937A367F835BB0E4EA589FBA4C3CCED77F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	dialogoControl_t440084F0ACFD90A29D2BB0234775F6C1E1735E30 * V_1 = NULL;
	Il2CppChar V_2 = 0x0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		dialogoControl_t440084F0ACFD90A29D2BB0234775F6C1E1735E30 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0084;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// foreach( char falas in sentencas[index].ToCharArray())
		dialogoControl_t440084F0ACFD90A29D2BB0234775F6C1E1735E30 * L_4 = V_1;
		NullCheck(L_4);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_4->get_sentencas_9();
		dialogoControl_t440084F0ACFD90A29D2BB0234775F6C1E1735E30 * L_6 = V_1;
		NullCheck(L_6);
		int32_t L_7 = L_6->get_index_10();
		NullCheck(L_5);
		int32_t L_8 = L_7;
		String_t* L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_10;
		L_10 = String_ToCharArray_m33E93AEB7086CBEBDFA5730EAAC49686F144089C(L_9, /*hidden argument*/NULL);
		__this->set_U3CU3E7__wrap1_3(L_10);
		__this->set_U3CU3E7__wrap2_4(0);
		goto IL_0099;
	}

IL_003f:
	{
		// foreach( char falas in sentencas[index].ToCharArray())
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_11 = __this->get_U3CU3E7__wrap1_3();
		int32_t L_12 = __this->get_U3CU3E7__wrap2_4();
		NullCheck(L_11);
		int32_t L_13 = L_12;
		uint16_t L_14 = (uint16_t)(L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_2 = L_14;
		// Falas.text += falas;
		dialogoControl_t440084F0ACFD90A29D2BB0234775F6C1E1735E30 * L_15 = V_1;
		NullCheck(L_15);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_16 = L_15->get_Falas_6();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_17 = L_16;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_17);
		String_t* L_19;
		L_19 = Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8((Il2CppChar*)(&V_2), /*hidden argument*/NULL);
		String_t* L_20;
		L_20 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_18, L_19, /*hidden argument*/NULL);
		NullCheck(L_17);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_17, L_20);
		// yield return new WaitForSeconds(velocidade);
		dialogoControl_t440084F0ACFD90A29D2BB0234775F6C1E1735E30 * L_21 = V_1;
		NullCheck(L_21);
		float L_22 = L_21->get_velocidade_8();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_23 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_23, L_22, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_23);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0084:
	{
		__this->set_U3CU3E1__state_0((-1));
		int32_t L_24 = __this->get_U3CU3E7__wrap2_4();
		__this->set_U3CU3E7__wrap2_4(((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1)));
	}

IL_0099:
	{
		// foreach( char falas in sentencas[index].ToCharArray())
		int32_t L_25 = __this->get_U3CU3E7__wrap2_4();
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_26 = __this->get_U3CU3E7__wrap1_3();
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length))))))
		{
			goto IL_003f;
		}
	}
	{
		__this->set_U3CU3E7__wrap1_3((CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)NULL);
		// }
		return (bool)0;
	}
}
// System.Object dialogoControl/<TempoEspera>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTempoEsperaU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD043F0033C54FCE2EFE14C3A53DE7B8B23536A05 (U3CTempoEsperaU3Ed__8_tCFCDE1937A367F835BB0E4EA589FBA4C3CCED77F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void dialogoControl/<TempoEspera>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTempoEsperaU3Ed__8_System_Collections_IEnumerator_Reset_m6A23BABB8B9FFA55BCDECFD107ED7161D4DE5257 (U3CTempoEsperaU3Ed__8_tCFCDE1937A367F835BB0E4EA589FBA4C3CCED77F * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTempoEsperaU3Ed__8_System_Collections_IEnumerator_Reset_m6A23BABB8B9FFA55BCDECFD107ED7161D4DE5257_RuntimeMethod_var)));
	}
}
// System.Object dialogoControl/<TempoEspera>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTempoEsperaU3Ed__8_System_Collections_IEnumerator_get_Current_mCCAACDF73AF43732676254091B7469F0BBDC9FD0 (U3CTempoEsperaU3Ed__8_tCFCDE1937A367F835BB0E4EA589FBA4C3CCED77F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void player/<Dano>d__25::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDanoU3Ed__25__ctor_m03870593C2B40440C80B657FC5575BEDD49D4DAF (U3CDanoU3Ed__25_t1E12314488E95B21A2AFE6668BAA216100E02D7A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void player/<Dano>d__25::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDanoU3Ed__25_System_IDisposable_Dispose_m57BC3CB63362789BD10D9FE313D89FCE28027518 (U3CDanoU3Ed__25_t1E12314488E95B21A2AFE6668BAA216100E02D7A * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean player/<Dano>d__25::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDanoU3Ed__25_MoveNext_m136F29678208BA5F43110BF03DC62E362B92815E (U3CDanoU3Ed__25_t1E12314488E95B21A2AFE6668BAA216100E02D7A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_005b;
			}
			case 2:
			{
				goto IL_0087;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for(float i = 0f; i <1f; i += 0.1f)
		__this->set_U3CiU3E5__2_3((0.0f));
		goto IL_00a0;
	}

IL_0036:
	{
		// sprite.enabled = false;
		player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * L_3 = V_1;
		NullCheck(L_3);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_4 = L_3->get_sprite_7();
		NullCheck(L_4);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_4, (bool)0, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_5 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_5, (0.100000001f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_005b:
	{
		__this->set_U3CU3E1__state_0((-1));
		// sprite.enabled = true;
		player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * L_6 = V_1;
		NullCheck(L_6);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_7 = L_6->get_sprite_7();
		NullCheck(L_7);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_7, (bool)1, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_8 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_8, (0.100000001f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_8);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0087:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for(float i = 0f; i <1f; i += 0.1f)
		float L_9 = __this->get_U3CiU3E5__2_3();
		__this->set_U3CiU3E5__2_3(((float)il2cpp_codegen_add((float)L_9, (float)(0.100000001f))));
	}

IL_00a0:
	{
		// for(float i = 0f; i <1f; i += 0.1f)
		float L_10 = __this->get_U3CiU3E5__2_3();
		if ((((float)L_10) < ((float)(1.0f))))
		{
			goto IL_0036;
		}
	}
	{
		// invencivel = false;
		player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * L_11 = V_1;
		NullCheck(L_11);
		L_11->set_invencivel_13((bool)0);
		// }
		return (bool)0;
	}
}
// System.Object player/<Dano>d__25::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDanoU3Ed__25_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD4419F5DD5E7FDB77421232FF268EB7EC2DAFEE8 (U3CDanoU3Ed__25_t1E12314488E95B21A2AFE6668BAA216100E02D7A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void player/<Dano>d__25::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDanoU3Ed__25_System_Collections_IEnumerator_Reset_m841CAE7522CAE84B99BED1A07FC416DDDED0E4C7 (U3CDanoU3Ed__25_t1E12314488E95B21A2AFE6668BAA216100E02D7A * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDanoU3Ed__25_System_Collections_IEnumerator_Reset_m841CAE7522CAE84B99BED1A07FC416DDDED0E4C7_RuntimeMethod_var)));
	}
}
// System.Object player/<Dano>d__25::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDanoU3Ed__25_System_Collections_IEnumerator_get_Current_m4AB09FC88966E404171AEEFA8EA7DA30F66CDF97 (U3CDanoU3Ed__25_t1E12314488E95B21A2AFE6668BAA216100E02D7A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_Lerp_mC9A8AB816281F4447B7B62264595C16751ED355B_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		___t2 = L_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___a0;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___b1;
		float L_5 = L_4.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___a0;
		float L_7 = L_6.get_x_0();
		float L_8 = ___t2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = ___a0;
		float L_10 = L_9.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11 = ___b1;
		float L_12 = L_11.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13 = ___a0;
		float L_14 = L_13.get_y_1();
		float L_15 = ___t2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_16), ((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), (float)L_8)))), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_003d;
	}

IL_003d:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  PointerEventData_get_position_mE65C1CF448C935678F7C2A6265B4F3906FD9D651_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 position { get; set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_U3CpositionU3Ek__BackingField_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a0;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
