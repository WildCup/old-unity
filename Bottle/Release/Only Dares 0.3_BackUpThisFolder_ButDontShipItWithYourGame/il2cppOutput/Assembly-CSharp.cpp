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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Comparison`1<System.Object>
struct Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645;
// System.Comparison`1<Quest>
struct Comparison_1_t9B91ECD402EEC20F8DEE76FD07A82C3D175C9663;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<Player>
struct List_1_tE2164EA8BAA8705A2E709A2D74744EC5E511A859;
// System.Collections.Generic.List`1<Quest>
struct List_1_tC535F9CD686AF631ADF2E758CC14257CA84FBC88;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// Player[]
struct PlayerU5BU5D_t297CC8A8335645D2AEF2DDB3FBF57964C8B68DF1;
// Quest[]
struct QuestU5BU5D_tACAB87E6E7B7B47F97ED7DD563AE08696809202A;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// AddPlayer
struct AddPlayer_t3ADBE058A67D6165BAF9E1EF934BFD1F571A878A;
// AddQuest
struct AddQuest_t4ED5F0C1563995DAB9FF94FC9277488928296860;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// Colors
struct Colors_t4FBC8F9BC3173CFB15C6164CC275EEBAC6E0E973;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// Game
struct Game_tA6A98F81416961C425C0982A763372581DF081F1;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.EventSystems.IScrollHandler
struct IScrollHandler_t762CB73017D561E11CF6759ED9FD8C9F24B3D13F;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE;
// MainMenu
struct MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Player
struct Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74;
// Quest
struct Quest_tEC1246A2C0E042A3081F297279B59702FB449CB9;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// START
struct START_t6950252134D0B7A57418AFB92417F5D812398C84;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// SaveData
struct SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29;
// SaveLoad
struct SaveLoad_t9057ED9262F85AC317794B37B80A402744502C14;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_InputField
struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F;
// TMPro.TMP_InputValidator
struct TMP_InputValidator_t3429AF61284AE19180C3FB81C0C7D2F90165EA98;
// TMPro.TMP_ScrollbarEventHandler
struct TMP_ScrollbarEventHandler_t84C389ED6800977DAEA8C025E18C9F3321888F4D;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// AddQuest/<DisableInput>d__19
struct U3CDisableInputU3Ed__19_tD24C354ACD26296DE2D792E60C5D39543680A523;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// Game/<>c
struct U3CU3Ec_tD2F9210CA24FE81EFB71CDAB95622429D160CD7E;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// TMPro.TMP_InputField/OnChangeEvent
struct OnChangeEvent_tDBB13012ABF81899E4DFDD82258EB7E9BB7A9F1D;
// TMPro.TMP_InputField/OnValidateInput
struct OnValidateInput_t88ECDC5C12A807AF2A5761369563B0FAA6A25530;
// TMPro.TMP_InputField/SelectionEvent
struct SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119;
// TMPro.TMP_InputField/SubmitEvent
struct SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500;
// TMPro.TMP_InputField/TextSelectionEvent
struct TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401;
// TMPro.TMP_InputField/TouchScreenKeyboardEvent
struct TouchScreenKeyboardEvent_tB9BEBEF5D6F2B52547EF3861FF437AC25BC06AF1;

IL2CPP_EXTERN_C RuntimeClass* Colors_t4FBC8F9BC3173CFB15C6164CC275EEBAC6E0E973_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Comparison_1_t9B91ECD402EEC20F8DEE76FD07A82C3D175C9663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Game_tA6A98F81416961C425C0982A763372581DF081F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC535F9CD686AF631ADF2E758CC14257CA84FBC88_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE2164EA8BAA8705A2E709A2D74744EC5E511A859_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SaveLoad_t9057ED9262F85AC317794B37B80A402744502C14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDisableInputU3Ed__19_tD24C354ACD26296DE2D792E60C5D39543680A523_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tD2F9210CA24FE81EFB71CDAB95622429D160CD7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1B122769966B9AD67C35D51E4E00AB036C327989;
IL2CPP_EXTERN_C String_t* _stringLiteral1C3E720085F29322B468C943485C5108700FADB7;
IL2CPP_EXTERN_C String_t* _stringLiteral1DA3E2C42776059DD48942A366C3DD2BFC0BE961;
IL2CPP_EXTERN_C String_t* _stringLiteral2046AEE3CAE084D2C4B778097922E59B91F4AF17;
IL2CPP_EXTERN_C String_t* _stringLiteral21F7AEEB84E3EF4DC4D495B2E36433B334266FD9;
IL2CPP_EXTERN_C String_t* _stringLiteral4F1ACAF3C174916005394A01436AA53AE526F4DD;
IL2CPP_EXTERN_C String_t* _stringLiteral6B00891BDD5E036427FB867D36C2E99D16226247;
IL2CPP_EXTERN_C String_t* _stringLiteral7503DA80C5434E4C6BA9A7A3A78A7AD767604CCF;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral7E74F79A045BA55F8905E76A9C3039DE7AF3D77E;
IL2CPP_EXTERN_C String_t* _stringLiteral831790A699C35A68FE8B235257FBE36E8A6E9737;
IL2CPP_EXTERN_C String_t* _stringLiteralE439203A9670B853872281FC29B81DBC459EBAC5;
IL2CPP_EXTERN_C String_t* _stringLiteralE4DE096E0FCBB4FAEC390CA1ECCA822DD729EE1E;
IL2CPP_EXTERN_C String_t* _stringLiteralEECDF3B69A9A6966F69107842CD6D746DBE70049;
IL2CPP_EXTERN_C String_t* _stringLiteralF92DDD5C3258D4667CC2EC32868648986EBA9098;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAddPlayer_t3ADBE058A67D6165BAF9E1EF934BFD1F571A878A_m8C95E71BC9243F8AA4D2A4ED2580FDBDF5CB98C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAddQuest_t4ED5F0C1563995DAB9FF94FC9277488928296860_m421A17C6A334CDCDF0766A7D360E32D1D4FC31D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mD8628665E26E907BC91D2D37D5C91AFDEE21D683_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m124EE6E49F9DCEB61F38F14DDD93AF7A1AC7F93A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m448E034BD0C065C262331B2682685EE25F1112B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAddPlayer_t3ADBE058A67D6165BAF9E1EF934BFD1F571A878A_mEC99A9D14A03B5438D0F21056041F44E84E6F801_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAddQuest_t4ED5F0C1563995DAB9FF94FC9277488928296860_mB0E227FB568AB2E61D201C2E852F0C1DBB4358C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisSaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29_mAD02E4C0FBD2AD3DF55EF8A88D94268F6D5F1A06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5D6171A2ACE4310127DD8B97BB94C633F1830EF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mD8E256BA24844F3F97CD976D60E46382FE9FF746_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m4A42DCAB3920517CA9F56F482C64458A058EEB18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mB08A06A97EFF37BE9A031630747AF8EB8CB71D0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mF9F817B4B935EC2566B6E0F5F19735C2B9A2616C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m2B41E5B9E061DD4D5F58B693018024AADF2AD7F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Sort_m8704AC1EC87FCCB134C59C9C99078A5EA986FB4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m3212846DF03A63CFFD526A0AFC64AF08166FE380_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6C95BE4AA43CEECAE2ABC9B4F106D26F4BE227D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m53D5ED85773AF1E2C0F8B34C65597BEC3B2B7306_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mA52752CBCF290840F7A34DCABC1A559D0387ACBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m3531CBD1C32E07D868F9C916895554A6C2CDB67C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m5BAB69A5CA4DBC2074EF31F02EF7365FB50A002B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDisableInputU3Ed__19_System_Collections_IEnumerator_Reset_m26427F3688F02DF5B8A5B2F5EA2C68456791FE60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSortU3Eb__20_0_mEE46DC9B6848B5F2B3A9C0AA2CBAAF67ACB278E9_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Player>
struct List_1_tE2164EA8BAA8705A2E709A2D74744EC5E511A859  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	PlayerU5BU5D_t297CC8A8335645D2AEF2DDB3FBF57964C8B68DF1* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tE2164EA8BAA8705A2E709A2D74744EC5E511A859_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	PlayerU5BU5D_t297CC8A8335645D2AEF2DDB3FBF57964C8B68DF1* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Quest>
struct List_1_tC535F9CD686AF631ADF2E758CC14257CA84FBC88  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	QuestU5BU5D_tACAB87E6E7B7B47F97ED7DD563AE08696809202A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tC535F9CD686AF631ADF2E758CC14257CA84FBC88_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	QuestU5BU5D_tACAB87E6E7B7B47F97ED7DD563AE08696809202A* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// Player
struct Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74  : public RuntimeObject
{
	// System.String Player::name
	String_t* ___name_0;
	// System.Boolean Player::isMale
	bool ___isMale_1;
};

// Quest
struct Quest_tEC1246A2C0E042A3081F297279B59702FB449CB9  : public RuntimeObject
{
	// System.String Quest::quest
	String_t* ___quest_0;
	// System.Int32 Quest::lvl
	int32_t ___lvl_1;
	// System.Boolean Quest::used
	bool ___used_2;
	// Quest/Gender Quest::gender
	int32_t ___gender_3;
};

// SaveData
struct SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Quest> SaveData::quests
	List_1_tC535F9CD686AF631ADF2E758CC14257CA84FBC88* ___quests_0;
	// System.Collections.Generic.List`1<Player> SaveData::players
	List_1_tE2164EA8BAA8705A2E709A2D74744EC5E511A859* ___players_1;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// AddQuest/<DisableInput>d__19
struct U3CDisableInputU3Ed__19_tD24C354ACD26296DE2D792E60C5D39543680A523  : public RuntimeObject
{
	// System.Int32 AddQuest/<DisableInput>d__19::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object AddQuest/<DisableInput>d__19::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// AddQuest AddQuest/<DisableInput>d__19::<>4__this
	AddQuest_t4ED5F0C1563995DAB9FF94FC9277488928296860* ___U3CU3E4__this_2;
};

// Game/<>c
struct U3CU3Ec_tD2F9210CA24FE81EFB71CDAB95622429D160CD7E  : public RuntimeObject
{
};

struct U3CU3Ec_tD2F9210CA24FE81EFB71CDAB95622429D160CD7E_StaticFields
{
	// Game/<>c Game/<>c::<>9
	U3CU3Ec_tD2F9210CA24FE81EFB71CDAB95622429D160CD7E* ___U3CU3E9_0;
	// System.Comparison`1<Quest> Game/<>c::<>9__20_0
	Comparison_1_t9B91ECD402EEC20F8DEE76FD07A82C3D175C9663* ___U3CU3E9__20_0_1;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Quest>
struct Enumerator_tE57C29B3B670ACA51B98EC712849F9BC6D3D4291 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tC535F9CD686AF631ADF2E758CC14257CA84FBC88* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Quest_tEC1246A2C0E042A3081F297279B59702FB449CB9* ____current_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
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

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
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

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// System.Comparison`1<Quest>
struct Comparison_1_t9B91ECD402EEC20F8DEE76FD07A82C3D175C9663  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// AddPlayer
struct AddPlayer_t3ADBE058A67D6165BAF9E1EF934BFD1F571A878A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI AddPlayer::gender
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___gender_4;
	// UnityEngine.Color AddPlayer::cMan
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___cMan_5;
	// UnityEngine.Color AddPlayer::cWoman
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___cWoman_6;
	// UnityEngine.UI.Image AddPlayer::image
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___image_7;
	// UnityEngine.UI.Button AddPlayer::genderButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___genderButton_8;
	// UnityEngine.Sprite AddPlayer::manSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___manSprite_9;
	// UnityEngine.Sprite AddPlayer::womanSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___womanSprite_10;
	// TMPro.TMP_InputField AddPlayer::inputField
	TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___inputField_11;
	// Player AddPlayer::player
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___player_12;
};

// AddQuest
struct AddQuest_t4ED5F0C1563995DAB9FF94FC9277488928296860  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI AddQuest::gender
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___gender_4;
	// TMPro.TextMeshProUGUI AddQuest::lvlText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___lvlText_5;
	// UnityEngine.Color AddQuest::cMan
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___cMan_6;
	// UnityEngine.Color AddQuest::cWoman
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___cWoman_7;
	// UnityEngine.Color AddQuest::cEveryone
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___cEveryone_8;
	// UnityEngine.Color AddQuest::clvl1
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___clvl1_9;
	// UnityEngine.Color AddQuest::clvl2
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___clvl2_10;
	// UnityEngine.Color AddQuest::clvl3
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___clvl3_11;
	// UnityEngine.Color AddQuest::clvl4
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___clvl4_12;
	// UnityEngine.Color AddQuest::clvl5
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___clvl5_13;
	// UnityEngine.UI.Image AddQuest::image
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___image_14;
	// UnityEngine.UI.Image AddQuest::imageGender
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___imageGender_15;
	// TMPro.TMP_InputField AddQuest::inputField
	TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___inputField_16;
	// Quest AddQuest::quest
	Quest_tEC1246A2C0E042A3081F297279B59702FB449CB9* ___quest_17;
	// UnityEngine.UI.Image AddQuest::editButton
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___editButton_18;
};

// Colors
struct Colors_t4FBC8F9BC3173CFB15C6164CC275EEBAC6E0E973  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Color Colors::cLvl1
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___cLvl1_7;
	// UnityEngine.Color Colors::cLvl2
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___cLvl2_8;
	// UnityEngine.Color Colors::cLvl3
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___cLvl3_9;
	// UnityEngine.Color Colors::cLvl4
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___cLvl4_10;
	// UnityEngine.Color Colors::cLvl5
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___cLvl5_11;
};

struct Colors_t4FBC8F9BC3173CFB15C6164CC275EEBAC6E0E973_StaticFields
{
	// UnityEngine.Color Colors::cMan
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___cMan_4;
	// UnityEngine.Color Colors::cWoman
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___cWoman_5;
	// UnityEngine.Color Colors::cEveryone
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___cEveryone_6;
	// Colors Colors::instance
	Colors_t4FBC8F9BC3173CFB15C6164CC275EEBAC6E0E973* ___instance_12;
};

// Game
struct Game_tA6A98F81416961C425C0982A763372581DF081F1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<Quest> Game::quests
	List_1_tC535F9CD686AF631ADF2E758CC14257CA84FBC88* ___quests_5;
	// System.Collections.Generic.List`1<Player> Game::players
	List_1_tE2164EA8BAA8705A2E709A2D74744EC5E511A859* ___players_6;
	// System.Collections.Generic.List`1<System.Int32> Game::q1
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___q1_7;
	// System.Collections.Generic.List`1<System.Int32> Game::q2
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___q2_8;
	// System.Collections.Generic.List`1<System.Int32> Game::q3
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___q3_9;
	// System.Collections.Generic.List`1<System.Int32> Game::q4
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___q4_10;
	// System.Collections.Generic.List`1<System.Int32> Game::q5
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___q5_11;
	// TMPro.TextMeshProUGUI Game::text
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___text_12;
	// UnityEngine.UI.Image Game::image
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___image_13;
	// System.Int32 Game::current
	int32_t ___current_14;
	// System.Int32 Game::used
	int32_t ___used_15;
};

struct Game_tA6A98F81416961C425C0982A763372581DF081F1_StaticFields
{
	// Game Game::instance
	Game_tA6A98F81416961C425C0982A763372581DF081F1* ___instance_4;
};

// MainMenu
struct MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject MainMenu::playPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___playPanel_4;
	// UnityEngine.GameObject MainMenu::playersPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___playersPanel_5;
	// UnityEngine.GameObject MainMenu::questsPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___questsPanel_6;
	// UnityEngine.GameObject MainMenu::optionsPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___optionsPanel_7;
	// UnityEngine.GameObject MainMenu::instructionPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___instructionPanel_8;
	// UnityEngine.GameObject MainMenu::playerPref
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___playerPref_9;
	// UnityEngine.GameObject MainMenu::questPref
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___questPref_10;
	// UnityEngine.Transform MainMenu::playersParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___playersParent_11;
	// UnityEngine.Transform MainMenu::questsParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___questsParent_12;
	// System.Int32 MainMenu::lvl
	int32_t ___lvl_13;
	// UnityEngine.UI.Image MainMenu::image
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___image_14;
	// TMPro.TextMeshProUGUI MainMenu::text
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___text_15;
	// TMPro.TextMeshProUGUI MainMenu::instructionText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___instructionText_16;
	// System.Int32 MainMenu::i
	int32_t ___i_17;
};

// START
struct START_t6950252134D0B7A57418AFB92417F5D812398C84  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// SaveLoad
struct SaveLoad_t9057ED9262F85AC317794B37B80A402744502C14  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct SaveLoad_t9057ED9262F85AC317794B37B80A402744502C14_StaticFields
{
	// System.String SaveLoad::path
	String_t* ___path_4;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// TMPro.TMP_InputField
struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.TouchScreenKeyboard TMPro.TMP_InputField::m_SoftKeyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_SoftKeyboard_20;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_22;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_TextViewport
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_TextViewport_23;
	// UnityEngine.UI.RectMask2D TMPro.TMP_InputField::m_TextComponentRectMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_TextComponentRectMask_24;
	// UnityEngine.UI.RectMask2D TMPro.TMP_InputField::m_TextViewportRectMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_TextViewportRectMask_25;
	// UnityEngine.Rect TMPro.TMP_InputField::m_CachedViewportRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_CachedViewportRect_26;
	// TMPro.TMP_Text TMPro.TMP_InputField::m_TextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_TextComponent_27;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_TextComponentRectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_TextComponentRectTransform_28;
	// UnityEngine.UI.Graphic TMPro.TMP_InputField::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_29;
	// UnityEngine.UI.Scrollbar TMPro.TMP_InputField::m_VerticalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_VerticalScrollbar_30;
	// TMPro.TMP_ScrollbarEventHandler TMPro.TMP_InputField::m_VerticalScrollbarEventHandler
	TMP_ScrollbarEventHandler_t84C389ED6800977DAEA8C025E18C9F3321888F4D* ___m_VerticalScrollbarEventHandler_31;
	// System.Boolean TMPro.TMP_InputField::m_IsDrivenByLayoutComponents
	bool ___m_IsDrivenByLayoutComponents_32;
	// UnityEngine.UI.LayoutGroup TMPro.TMP_InputField::m_LayoutGroup
	LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE* ___m_LayoutGroup_33;
	// UnityEngine.EventSystems.IScrollHandler TMPro.TMP_InputField::m_IScrollHandlerParent
	RuntimeObject* ___m_IScrollHandlerParent_34;
	// System.Single TMPro.TMP_InputField::m_ScrollPosition
	float ___m_ScrollPosition_35;
	// System.Single TMPro.TMP_InputField::m_ScrollSensitivity
	float ___m_ScrollSensitivity_36;
	// TMPro.TMP_InputField/ContentType TMPro.TMP_InputField::m_ContentType
	int32_t ___m_ContentType_37;
	// TMPro.TMP_InputField/InputType TMPro.TMP_InputField::m_InputType
	int32_t ___m_InputType_38;
	// System.Char TMPro.TMP_InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_39;
	// UnityEngine.TouchScreenKeyboardType TMPro.TMP_InputField::m_KeyboardType
	int32_t ___m_KeyboardType_40;
	// TMPro.TMP_InputField/LineType TMPro.TMP_InputField::m_LineType
	int32_t ___m_LineType_41;
	// System.Boolean TMPro.TMP_InputField::m_HideMobileInput
	bool ___m_HideMobileInput_42;
	// System.Boolean TMPro.TMP_InputField::m_HideSoftKeyboard
	bool ___m_HideSoftKeyboard_43;
	// TMPro.TMP_InputField/CharacterValidation TMPro.TMP_InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_44;
	// System.String TMPro.TMP_InputField::m_RegexValue
	String_t* ___m_RegexValue_45;
	// System.Single TMPro.TMP_InputField::m_GlobalPointSize
	float ___m_GlobalPointSize_46;
	// System.Int32 TMPro.TMP_InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_47;
	// TMPro.TMP_InputField/SubmitEvent TMPro.TMP_InputField::m_OnEndEdit
	SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* ___m_OnEndEdit_48;
	// TMPro.TMP_InputField/SubmitEvent TMPro.TMP_InputField::m_OnSubmit
	SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* ___m_OnSubmit_49;
	// TMPro.TMP_InputField/SelectionEvent TMPro.TMP_InputField::m_OnSelect
	SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119* ___m_OnSelect_50;
	// TMPro.TMP_InputField/SelectionEvent TMPro.TMP_InputField::m_OnDeselect
	SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119* ___m_OnDeselect_51;
	// TMPro.TMP_InputField/TextSelectionEvent TMPro.TMP_InputField::m_OnTextSelection
	TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401* ___m_OnTextSelection_52;
	// TMPro.TMP_InputField/TextSelectionEvent TMPro.TMP_InputField::m_OnEndTextSelection
	TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401* ___m_OnEndTextSelection_53;
	// TMPro.TMP_InputField/OnChangeEvent TMPro.TMP_InputField::m_OnValueChanged
	OnChangeEvent_tDBB13012ABF81899E4DFDD82258EB7E9BB7A9F1D* ___m_OnValueChanged_54;
	// TMPro.TMP_InputField/TouchScreenKeyboardEvent TMPro.TMP_InputField::m_OnTouchScreenKeyboardStatusChanged
	TouchScreenKeyboardEvent_tB9BEBEF5D6F2B52547EF3861FF437AC25BC06AF1* ___m_OnTouchScreenKeyboardStatusChanged_55;
	// TMPro.TMP_InputField/OnValidateInput TMPro.TMP_InputField::m_OnValidateInput
	OnValidateInput_t88ECDC5C12A807AF2A5761369563B0FAA6A25530* ___m_OnValidateInput_56;
	// UnityEngine.Color TMPro.TMP_InputField::m_CaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor_57;
	// System.Boolean TMPro.TMP_InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_58;
	// UnityEngine.Color TMPro.TMP_InputField::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_59;
	// System.String TMPro.TMP_InputField::m_Text
	String_t* ___m_Text_60;
	// System.Single TMPro.TMP_InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_61;
	// System.Int32 TMPro.TMP_InputField::m_CaretWidth
	int32_t ___m_CaretWidth_62;
	// System.Boolean TMPro.TMP_InputField::m_ReadOnly
	bool ___m_ReadOnly_63;
	// System.Boolean TMPro.TMP_InputField::m_RichText
	bool ___m_RichText_64;
	// System.Int32 TMPro.TMP_InputField::m_StringPosition
	int32_t ___m_StringPosition_65;
	// System.Int32 TMPro.TMP_InputField::m_StringSelectPosition
	int32_t ___m_StringSelectPosition_66;
	// System.Int32 TMPro.TMP_InputField::m_CaretPosition
	int32_t ___m_CaretPosition_67;
	// System.Int32 TMPro.TMP_InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_68;
	// UnityEngine.RectTransform TMPro.TMP_InputField::caretRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans_69;
	// UnityEngine.UIVertex[] TMPro.TMP_InputField::m_CursorVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts_70;
	// UnityEngine.CanvasRenderer TMPro.TMP_InputField::m_CachedInputRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer_71;
	// UnityEngine.Vector2 TMPro.TMP_InputField::m_LastPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LastPosition_72;
	// UnityEngine.Mesh TMPro.TMP_InputField::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_73;
	// System.Boolean TMPro.TMP_InputField::m_AllowInput
	bool ___m_AllowInput_74;
	// System.Boolean TMPro.TMP_InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_75;
	// System.Boolean TMPro.TMP_InputField::m_UpdateDrag
	bool ___m_UpdateDrag_76;
	// System.Boolean TMPro.TMP_InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_77;
	// System.Boolean TMPro.TMP_InputField::m_CaretVisible
	bool ___m_CaretVisible_80;
	// UnityEngine.Coroutine TMPro.TMP_InputField::m_BlinkCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine_81;
	// System.Single TMPro.TMP_InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_82;
	// UnityEngine.Coroutine TMPro.TMP_InputField::m_DragCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine_83;
	// System.String TMPro.TMP_InputField::m_OriginalText
	String_t* ___m_OriginalText_84;
	// System.Boolean TMPro.TMP_InputField::m_WasCanceled
	bool ___m_WasCanceled_85;
	// System.Boolean TMPro.TMP_InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_86;
	// UnityEngine.WaitForSecondsRealtime TMPro.TMP_InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime_87;
	// System.Boolean TMPro.TMP_InputField::m_PreventCallback
	bool ___m_PreventCallback_88;
	// System.Boolean TMPro.TMP_InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_89;
	// System.Boolean TMPro.TMP_InputField::m_IsTextComponentUpdateRequired
	bool ___m_IsTextComponentUpdateRequired_90;
	// System.Boolean TMPro.TMP_InputField::m_isLastKeyBackspace
	bool ___m_isLastKeyBackspace_91;
	// System.Single TMPro.TMP_InputField::m_PointerDownClickStartTime
	float ___m_PointerDownClickStartTime_92;
	// System.Single TMPro.TMP_InputField::m_KeyDownStartTime
	float ___m_KeyDownStartTime_93;
	// System.Single TMPro.TMP_InputField::m_DoubleClickDelay
	float ___m_DoubleClickDelay_94;
	// System.Boolean TMPro.TMP_InputField::m_IsCompositionActive
	bool ___m_IsCompositionActive_96;
	// System.Boolean TMPro.TMP_InputField::m_ShouldUpdateIMEWindowPosition
	bool ___m_ShouldUpdateIMEWindowPosition_97;
	// System.Int32 TMPro.TMP_InputField::m_PreviousIMEInsertionLine
	int32_t ___m_PreviousIMEInsertionLine_98;
	// TMPro.TMP_FontAsset TMPro.TMP_InputField::m_GlobalFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_GlobalFontAsset_99;
	// System.Boolean TMPro.TMP_InputField::m_OnFocusSelectAll
	bool ___m_OnFocusSelectAll_100;
	// System.Boolean TMPro.TMP_InputField::m_isSelectAll
	bool ___m_isSelectAll_101;
	// System.Boolean TMPro.TMP_InputField::m_ResetOnDeActivation
	bool ___m_ResetOnDeActivation_102;
	// System.Boolean TMPro.TMP_InputField::m_SelectionStillActive
	bool ___m_SelectionStillActive_103;
	// System.Boolean TMPro.TMP_InputField::m_ReleaseSelection
	bool ___m_ReleaseSelection_104;
	// UnityEngine.GameObject TMPro.TMP_InputField::m_PreviouslySelectedObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PreviouslySelectedObject_105;
	// System.Boolean TMPro.TMP_InputField::m_RestoreOriginalTextOnEscape
	bool ___m_RestoreOriginalTextOnEscape_106;
	// System.Boolean TMPro.TMP_InputField::m_isRichTextEditingAllowed
	bool ___m_isRichTextEditingAllowed_107;
	// System.Int32 TMPro.TMP_InputField::m_LineLimit
	int32_t ___m_LineLimit_108;
	// TMPro.TMP_InputValidator TMPro.TMP_InputField::m_InputValidator
	TMP_InputValidator_t3429AF61284AE19180C3FB81C0C7D2F90165EA98* ___m_InputValidator_109;
	// System.Boolean TMPro.TMP_InputField::m_isSelected
	bool ___m_isSelected_110;
	// System.Boolean TMPro.TMP_InputField::m_IsStringPositionDirty
	bool ___m_IsStringPositionDirty_111;
	// System.Boolean TMPro.TMP_InputField::m_IsCaretPositionDirty
	bool ___m_IsCaretPositionDirty_112;
	// System.Boolean TMPro.TMP_InputField::m_forceRectTransformAdjustment
	bool ___m_forceRectTransformAdjustment_113;
	// UnityEngine.Event TMPro.TMP_InputField::m_ProcessingEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent_114;
};

struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_StaticFields
{
	// System.Char[] TMPro.TMP_InputField::kSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators_21;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_267;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_268;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_269;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_270;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_271;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_272;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_273;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_274;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_275;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_276;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_277;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_278;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_279;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_280;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_281;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_282;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_283;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_284;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_285;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_304;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_305;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m2B41E5B9E061DD4D5F58B693018024AADF2AD7F5_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Comparison`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparison_1__ctor_mC1E8799BBCE317B612875123C9C894BD470BFE6A_gshared (Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mEB3B61CB86B1419919338B0668DC4E568C2FFF93_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645* ___comparison0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonUtility_FromJson_TisRuntimeObject_m3A645CB2B6525E4A5835EA8A8CEBD39C7E2C444A_gshared (String_t* ___json0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::AddWithResize(T)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m378B392086AAB6F400944FA9839516326B3F7BB8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddWithResize(T)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;

// UnityEngine.UI.Image UnityEngine.UI.Selectable::get_image()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* Selectable_get_image_m88664022F6BC90E7B8D4BFCBA7FE24B48E90C639 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.String TMPro.TMP_InputField::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void AddPlayer::ChangeGender()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddPlayer_ChangeGender_m31BE9D3394B3632BC04066F4A682E185FDC7D9C8 (AddPlayer_t3ADBE058A67D6165BAF9E1EF934BFD1F571A878A* __this, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_InputField::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_InputField_set_text_m684E9CDA2D9E82D1C497B5E03DBE79C00584FF62 (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_InputField::MoveTextEnd(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_InputField_MoveTextEnd_mC781F7D531E0B22F73DF2C6E5F882243DD133E6A (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, bool ___shift0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator AddQuest::DisableInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AddQuest_DisableInput_m966E77F6F40FEE1F0E83FBBB2146133958CA238D (AddQuest_t4ED5F0C1563995DAB9FF94FC9277488928296860* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void AddQuest/<DisableInput>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisableInputU3Ed__19__ctor_m854170596EC418A0FD955BDA45460DA926FBCE19 (U3CDisableInputU3Ed__19_tD24C354ACD26296DE2D792E60C5D39543680A523* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void AddQuest::ChangeLvl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddQuest_ChangeLvl_m59E6E2193F1ACFBAB8D458C3D3323A9BE363D791 (AddQuest_t4ED5F0C1563995DAB9FF94FC9277488928296860* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color32::op_Implicit(UnityEngine.Color32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___c0, const RuntimeMethod* method) ;
// System.Void SaveLoad::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveLoad_Load_mE287BE7721AF216FF91874ADEEFBFB4CC082EB59 (const RuntimeMethod* method) ;
// System.Void Game::updateQuests()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_updateQuests_m7D9AE3BC5F3065D4FFF1342B16F37399BE8D3543 (Game_tA6A98F81416961C425C0982A763372581DF081F1* __this, const RuntimeMethod* method) ;
// System.Void Game::RollNextQuestion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_RollNextQuestion_m8B1DB164133DD1A17FF049A4FFDF6507410EAFCB (Game_tA6A98F81416961C425C0982A763372581DF081F1* __this, const RuntimeMethod* method) ;
// System.Void Game::Sort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_Sort_m26A30FE701199592662BC73DA1A3D76330318E69 (Game_tA6A98F81416961C425C0982A763372581DF081F1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
inline void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<Quest>::get_Item(System.Int32)
inline Quest_tEC1246A2C0E042A3081F297279B59702FB449CB9* List_1_get_Item_m3531CBD1C32E07D868F9C916895554A6C2CDB67C (List_1_tC535F9CD686AF631ADF2E758CC14257CA84FBC88* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Quest_tEC1246A2C0E042A3081F297279B59702FB449CB9* (*) (List_1_tC535F9CD686AF631ADF2E758CC14257CA84FBC88*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
inline void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<Quest>::get_Count()
inline int32_t List_1_get_Count_mA52752CBCF290840F7A34DCABC1A559D0387ACBF_inline (List_1_tC535F9CD686AF631ADF2E758CC14257CA84FBC88* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tC535F9CD686AF631ADF2E758CC14257CA84FBC88*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared)(__this, ___index0, method);
}
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T)
inline bool List_1_Remove_m2B41E5B9E061DD4D5F58B693018024AADF2AD7F5 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Remove_m2B41E5B9E061DD4D5F58B693018024AADF2AD7F5_gshared)(__this, ___item0, method);
}
// System.Void SaveLoad::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveLoad_Save_m14A03AB14BA3254FB0ABAF891C9990C1B33D9CED (const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Quest>::GetEnumerator()
inline Enumerator_tE57C29B3B670ACA51B98EC712849F9BC6D3D4291 List_1_GetEnumerator_mF9F817B4B935EC2566B6E0F5F19735C2B9A2616C (List_1_tC535F9CD686AF631ADF2E758CC14257CA84FBC88* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tE57C29B3B670ACA51B98EC712849F9BC6D3D4291 (*) (List_1_tC535F9CD686AF631ADF2E758CC14257CA84FBC88*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Quest>::Dispose()
inline void Enumerator_Dispose_mD8628665E26E907BC91D2D37D5C91AFDEE21D683 (Enumerator_tE57C29B3B670ACA51B98EC712849F9BC6D3D4291* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE57C29B3B670ACA51B98EC712849F9BC6D3D4291*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Quest>::get_Current()
inline Quest_tEC1246A2C0E042A3081F297279B59702FB449CB9* Enumerator_get_Current_m448E034BD0C065C262331B2682685EE25F1112B1_inline (Enumerator_tE57C29B3B670ACA51B98EC712849F9BC6D3D4291* __this, const RuntimeMethod* method)
{
	return ((  Quest_tEC1246A2C0E042A3081F297279B59702FB449CB9* (*) (Enumerator_tE57C29B3B670ACA51B98EC712849F9BC6D3D4291*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Quest>::MoveNext()
inline bool Enumerator_MoveNext_m124EE6E49F9DCEB61F38F14DDD93AF7A1AC7F93A (Enumerator_tE57C29B3B670ACA51B98EC712849F9BC6D3D4291* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tE57C29B3B670ACA51B98EC712849F9BC6D3D4291*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Comparison`1<Quest>::.ctor(System.Object,System.IntPtr)
inline void Comparison_1__ctor_mAABE9552F7165376DC046EFBAB293CD65B9D1A89 (Comparison_1_t9B91ECD402EEC20F8DEE76FD07A82C3D175C9663* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Comparison_1_t9B91ECD402EEC20F8DEE76FD07A82C3D175C9663*, RuntimeObject*, intptr_t, const RuntimeMethod*))Comparison_1__ctor_mC1E8799BBCE317B612875123C9C894BD470BFE6A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Collections.Generic.List`1<Quest>::Sort(System.Comparison`1<T>)
inline void List_1_Sort_m8704AC1EC87FCCB134C59C9C99078A5EA986FB4A (List_1_tC535F9CD686AF631ADF2E758CC14257CA84FBC88* __this, Comparison_1_t9B91ECD402EEC20F8DEE76FD07A82C3D175C9663* ___comparison0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC535F9CD686AF631ADF2E758CC14257CA84FBC88*, Comparison_1_t9B91ECD402EEC20F8DEE76FD07A82C3D175C9663*, const RuntimeMethod*))List_1_Sort_mEB3B61CB86B1419919338B0668DC4E568C2FFF93_gshared)(__this, ___comparison0, method);
}
// System.Void System.Collections.Generic.List`1<Quest>::.ctor()
inline void List_1__ctor_m3212846DF03A63CFFD526A0AFC64AF08166FE380 (List_1_tC535F9CD686AF631ADF2E758CC14257CA84FBC88* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC535F9CD686AF631ADF2E758CC14257CA84FBC88*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Player>::.ctor()
inline void List_1__ctor_m6C95BE4AA43CEECAE2ABC9B4F106D26F4BE227D7 (List_1_tE2164EA8BAA8705A2E709A2D74744EC5E511A859* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE2164EA8BAA8705A2E709A2D74744EC5E511A859*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared)(__this, method);
}
// System.Void Game/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m176597143AE640E743D1594EE7C95CB0D935EDC5 (U3CU3Ec_tD2F9210CA24FE81EFB71CDAB95622429D160CD7E* __this, const RuntimeMethod* method) ;
// System.Int32 System.Int32::CompareTo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586 (int32_t* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 System.String::CompareTo(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_CompareTo_m32A3DFBEA443A4091053D53825DBB76E6EAFECCF (String_t* __this, String_t* ___strB0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Player>::get_Count()
inline int32_t List_1_get_Count_m53D5ED85773AF1E2C0F8B34C65597BEC3B2B7306_inline (List_1_tE2164EA8BAA8705A2E709A2D74744EC5E511A859* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE2164EA8BAA8705A2E709A2D74744EC5E511A859*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared)(___original0, ___parent1, method);
}
// T UnityEngine.GameObject::GetComponent<AddPlayer>()
inline AddPlayer_t3ADBE058A67D6165BAF9E1EF934BFD1F571A878A* GameObject_GetComponent_TisAddPlayer_t3ADBE058A67D6165BAF9E1EF934BFD1F571A878A_mEC99A9D14A03B5438D0F21056041F44E84E6F801 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AddPlayer_t3ADBE058A67D6165BAF9E1EF934BFD1F571A878A* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<Player>::get_Item(System.Int32)
inline Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* List_1_get_Item_m5BAB69A5CA4DBC2074EF31F02EF7365FB50A002B (List_1_tE2164EA8BAA8705A2E709A2D74744EC5E511A859* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* (*) (List_1_tE2164EA8BAA8705A2E709A2D74744EC5E511A859*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void AddPlayer::UpdatePlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddPlayer_UpdatePlayer_m7254B9FE287B67F16EEC46B9AA40586BF7BA4B37 (AddPlayer_t3ADBE058A67D6165BAF9E1EF934BFD1F571A878A* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<AddQuest>()
inline AddQuest_t4ED5F0C1563995DAB9FF94FC9277488928296860* GameObject_GetComponent_TisAddQuest_t4ED5F0C1563995DAB9FF94FC9277488928296860_mB0E227FB568AB2E61D201C2E852F0C1DBB4358C8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AddQuest_t4ED5F0C1563995DAB9FF94FC9277488928296860* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void AddQuest::UpdateQuest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddQuest_UpdateQuest_mD9775AB7DCEA84900B747A4BADA525D2D0DA72B5 (AddQuest_t4ED5F0C1563995DAB9FF94FC9277488928296860* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Player>::Clear()
inline void List_1_Clear_mB08A06A97EFF37BE9A031630747AF8EB8CB71D0D_inline (List_1_tE2164EA8BAA8705A2E709A2D74744EC5E511A859* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE2164EA8BAA8705A2E709A2D74744EC5E511A859*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<AddPlayer>()
inline AddPlayer_t3ADBE058A67D6165BAF9E1EF934BFD1F571A878A* Component_GetComponent_TisAddPlayer_t3ADBE058A67D6165BAF9E1EF934BFD1F571A878A_m8C95E71BC9243F8AA4D2A4ED2580FDBDF5CB98C1 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AddPlayer_t3ADBE058A67D6165BAF9E1EF934BFD1F571A878A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Player>::Add(T)
inline void List_1_Add_m5D6171A2ACE4310127DD8B97BB94C633F1830EF8_inline (List_1_tE2164EA8BAA8705A2E709A2D74744EC5E511A859* __this, Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE2164EA8BAA8705A2E709A2D74744EC5E511A859*, Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Quest>::Clear()
inline void List_1_Clear_m4A42DCAB3920517CA9F56F482C64458A058EEB18_inline (List_1_tC535F9CD686AF631ADF2E758CC14257CA84FBC88* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC535F9CD686AF631ADF2E758CC14257CA84FBC88*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// T UnityEngine.Component::GetComponent<AddQuest>()
inline AddQuest_t4ED5F0C1563995DAB9FF94FC9277488928296860* Component_GetComponent_TisAddQuest_t4ED5F0C1563995DAB9FF94FC9277488928296860_m421A17C6A334CDCDF0766A7D360E32D1D4FC31D7 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AddQuest_t4ED5F0C1563995DAB9FF94FC9277488928296860* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Quest>::Add(T)
inline void List_1_Add_mD8E256BA24844F3F97CD976D60E46382FE9FF746_inline (List_1_tC535F9CD686AF631ADF2E758CC14257CA84FBC88* __this, Quest_tEC1246A2C0E042A3081F297279B59702FB449CB9* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC535F9CD686AF631ADF2E758CC14257CA84FBC88*, Quest_tEC1246A2C0E042A3081F297279B59702FB449CB9*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void SaveData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveData__ctor_m7E683A9CD703CB4058EEA6C1BBC22F4EDE2F76E5 (SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_mD0FB24DC5A8621A2473FC208E9B15AF43944EBCD (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.IO.File::WriteAllText(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_WriteAllText_mE462D8448CA65183AA5D464210706167E0EF19EB (String_t* ___path0, String_t* ___contents1, const RuntimeMethod* method) ;
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_mD7E7A84A6B9E9A9BADBDA7C46AAE0624EF106D85 (String_t* ___path0, const RuntimeMethod* method) ;
// System.String System.IO.File::ReadAllText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* File_ReadAllText_m5635BE83C14358AB1721547180F43103F777CEB5 (String_t* ___path0, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<SaveData>(System.String)
inline SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* JsonUtility_FromJson_TisSaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29_mAD02E4C0FBD2AD3DF55EF8A88D94268F6D5F1A06 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m3A645CB2B6525E4A5835EA8A8CEBD39C7E2C444A_gshared)(___json0, method);
}
// System.Void UnityEngine.QualitySettings::set_vSyncCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QualitySettings_set_vSyncCount_m37CB89BA3DF4BE2E181339F5F44F03C493733360 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::set_targetFrameRate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_set_targetFrameRate_m794A13DC5116C506B042663606691257CF3A7325 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::AddWithResize(T)
inline void List_1_AddWithResize_m378B392086AAB6F400944FA9839516326B3F7BB8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_AddWithResize_m378B392086AAB6F400944FA9839516326B3F7BB8_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::AddWithResize(T)
inline void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared)(__this, ___item0, method);
}
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
// System.Void AddPlayer::ChangeGender()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddPlayer_ChangeGender_m31BE9D3394B3632BC04066F4A682E185FDC7D9C8 (AddPlayer_t3ADBE058A67D6165BAF9E1EF934BFD1F571A878A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C3E720085F29322B468C943485C5108700FADB7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE439203A9670B853872281FC29B81DBC459EBAC5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (player.isMale)
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_0 = __this->___player_12;
		NullCheck(L_0);
		bool L_1 = L_0->___isMale_1;
		if (!L_1)
		{
			goto IL_0046;
		}
	}
	{
		// gender.text = "Woman";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2 = __this->___gender_4;
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_2, _stringLiteralE439203A9670B853872281FC29B81DBC459EBAC5);
		// image.color = cWoman;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___image_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = __this->___cWoman_6;
		NullCheck(L_3);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_3, L_4);
		// genderButton.image.sprite = womanSprite;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_5 = __this->___genderButton_8;
		NullCheck(L_5);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6;
		L_6 = Selectable_get_image_m88664022F6BC90E7B8D4BFCBA7FE24B48E90C639(L_5, NULL);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_7 = __this->___womanSprite_10;
		NullCheck(L_6);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_6, L_7, NULL);
		goto IL_007d;
	}

IL_0046:
	{
		// gender.text = "Man";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_8 = __this->___gender_4;
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_8, _stringLiteral1C3E720085F29322B468C943485C5108700FADB7);
		// image.color = cMan;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9 = __this->___image_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = __this->___cMan_5;
		NullCheck(L_9);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_9, L_10);
		// genderButton.image.sprite = manSprite;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_11 = __this->___genderButton_8;
		NullCheck(L_11);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12;
		L_12 = Selectable_get_image_m88664022F6BC90E7B8D4BFCBA7FE24B48E90C639(L_11, NULL);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_13 = __this->___manSprite_9;
		NullCheck(L_12);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_12, L_13, NULL);
	}

IL_007d:
	{
		// player.isMale = !player.isMale;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_14 = __this->___player_12;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_15 = __this->___player_12;
		NullCheck(L_15);
		bool L_16 = L_15->___isMale_1;
		NullCheck(L_14);
		L_14->___isMale_1 = (bool)((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
		// }
		return;
	}
}
// System.Void AddPlayer::ChangeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddPlayer_ChangeName_m9AA287E47F5BABE8F75DE1595813FCEBAAE284BA (AddPlayer_t3ADBE058A67D6165BAF9E1EF934BFD1F571A878A* __this, const RuntimeMethod* method) 
{
	{
		// player.name = inputField.text;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_0 = __this->___player_12;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_1 = __this->___inputField_11;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_1, NULL);
		NullCheck(L_0);
		L_0->___name_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___name_0), (void*)L_2);
		// }
		return;
	}
}
// System.Void AddPlayer::DeletePlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddPlayer_DeletePlayer_mE1543A48A33B77E2257B5801C1E41B6DA4487BC8 (AddPlayer_t3ADBE058A67D6165BAF9E1EF934BFD1F571A878A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_0, NULL);
		// }
		return;
	}
}
// System.Void AddPlayer::UpdatePlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddPlayer_UpdatePlayer_m7254B9FE287B67F16EEC46B9AA40586BF7BA4B37 (AddPlayer_t3ADBE058A67D6165BAF9E1EF934BFD1F571A878A* __this, const RuntimeMethod* method) 
{
	{
		// if (!player.isMale)
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_0 = __this->___player_12;
		NullCheck(L_0);
		bool L_1 = L_0->___isMale_1;
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		// player.isMale = true;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_2 = __this->___player_12;
		NullCheck(L_2);
		L_2->___isMale_1 = (bool)1;
		// ChangeGender();
		AddPlayer_ChangeGender_m31BE9D3394B3632BC04066F4A682E185FDC7D9C8(__this, NULL);
	}

IL_001f:
	{
		// inputField.text = player.name;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_3 = __this->___inputField_11;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_4 = __this->___player_12;
		NullCheck(L_4);
		String_t* L_5 = L_4->___name_0;
		NullCheck(L_3);
		TMP_InputField_set_text_m684E9CDA2D9E82D1C497B5E03DBE79C00584FF62(L_3, L_5, NULL);
		// }
		return;
	}
}
// System.Void AddPlayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddPlayer__ctor_m607FC2CDCC0933882EDA94479C28624B280BC3D6 (AddPlayer_t3ADBE058A67D6165BAF9E1EF934BFD1F571A878A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void AddQuest::ChangeGender()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddQuest_ChangeGender_mD0BA1F8DD23FEC018B74EE13635D06A2ECD5655F (AddQuest_t4ED5F0C1563995DAB9FF94FC9277488928296860* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B00891BDD5E036427FB867D36C2E99D16226247);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral831790A699C35A68FE8B235257FBE36E8A6E9737);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE4DE096E0FCBB4FAEC390CA1ECCA822DD729EE1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (quest.gender == Quest.Gender.man)
		Quest_tEC1246A2C0E042A3081F297279B59702FB449CB9* L_0 = __this->___quest_17;
		NullCheck(L_0);
		int32_t L_1 = L_0->___gender_3;
		if (L_1)
		{
			goto IL_003b;
		}
	}
	{
		// gender.text = "woman";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2 = __this->___gender_4;
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_2, _stringLiteral831790A699C35A68FE8B235257FBE36E8A6E9737);
		// imageGender.color = cWoman;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___imageGender_15;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = __this->___cWoman_7;
		NullCheck(L_3);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_3, L_4);
		// quest.gender = Quest.Gender.woman;
		Quest_tEC1246A2C0E042A3081F297279B59702FB449CB9* L_5 = __this->___quest_17;
		NullCheck(L_5);
		L_5->___gender_3 = 1;
		return;
	}

IL_003b:
	{
		// else if (quest.gender == Quest.Gender.woman)
		Quest_tEC1246A2C0E042A3081F297279B59702FB449CB9* L_6 = __this->___quest_17;
		NullCheck(L_6);
		int32_t L_7 = L_6->___gender_3;
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_0077;
		}
	}
	{
		// gender.text = "everyone";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_8 = __this->___gender_4;
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_8, _stringLiteral6B00891BDD5E036427FB867D36C2E99D16226247);
		// imageGender.color = cEveryone;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9 = __this->___imageGender_15;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = __this->___cEveryone_8;
		NullCheck(L_9);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_9, L_10);
		// quest.gender = Quest.Gender.everyone;
		Quest_tEC1246A2C0E042A3081F297279B59702FB449CB9* L_11 = __this->___quest_17;
		NullCheck(L_11);
		L_11->___gender_3 = 2;
		return;
	}

IL_0077:
	{
		// gender.text = "man";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_12 = __this->___gender_4;
		NullCheck(L_12);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_12, _stringLiteralE4DE096E0FCBB4FAEC390CA1ECCA822DD729EE1E);
		// imageGender.color = cMan;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_13 = __this->___imageGender_15;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = __this->___cMan_6;
		NullCheck(L_13);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_13, L_14);
		// quest.gender = Quest.Gender.man;
		Quest_tEC1246A2C0E042A3081F297279B59702FB449CB9* L_15 = __this->___quest_17;
		NullCheck(L_15);
		L_15->___gender_3 = 0;
		// }
		return;
	}
}
// System.Void AddQuest::ChangeLvl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddQuest_ChangeLvl_m59E6E2193F1ACFBAB8D458C3D3323A9BE363D791 (AddQuest_t4ED5F0C1563995DAB9FF94FC9277488928296860* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B122769966B9AD67C35D51E4E00AB036C327989);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (quest.lvl == 5) quest.lvl = 1;
		Quest_tEC1246A2C0E042A3081F297279B59702FB449CB9* L_0 = __this->___quest_17;
		NullCheck(L_0);
		int32_t L_1 = L_0->___lvl_1;
		if ((!(((uint32_t)L_1) == ((uint32_t)5))))
		{
			goto IL_001c;
		}
	}
	{
		// if (quest.lvl == 5) quest.lvl = 1;
		Quest_tEC1246A2C0E042A3081F297279B59702FB449CB9* L_2 = __this->___quest_17;
		NullCheck(L_2);
		L_2->___lvl_1 = 1;
		goto IL_002f;
	}

IL_001c:
	{
		// else quest.lvl++;
		Quest_tEC1246A2C0E042A3081F297279B59702FB449CB9* L_3 = __this->___quest_17;
		Quest_tEC1246A2C0E042A3081F297279B59702FB449CB9* L_4 = L_3;
		NullCheck(L_4);
		int32_t L_5 = L_4->___lvl_1;
		NullCheck(L_4);
		L_4->___lvl_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_002f:
	{
		// lvlText.text = "lvl " + quest.lvl;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_6 = __this->___lvlText_5;
		Quest_tEC1246A2C0E042A3081F297279B59702FB449CB9* L_7 = __this->___quest_17;
		NullCheck(L_7);
		int32_t* L_8 = (&L_7->___lvl_1);
		String_t* L_9;
		L_9 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_8, NULL);
		String_t* L_10;
		L_10 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral1B122769966B9AD67C35D51E4E00AB036C327989, L_9, NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_6, L_10);
		// switch (quest.lvl)
		Quest_tEC1246A2C0E042A3081F297279B59702FB449CB9* L_11 = __this->___quest_17;
		NullCheck(L_11);
		int32_t L_12 = L_11->___lvl_1;
		V_0 = L_12;
		int32_t L_13 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_13, 1)))
		{
			case 0:
			{
				goto IL_007d;
			}
			case 1:
			{
				goto IL_008f;
			}
			case 2:
			{
				goto IL_00a1;
			}
			case 3:
			{
				goto IL_00b3;
			}
			case 4:
			{
				goto IL_00c5;
			}
		}
	}
	{
		return;
	}

IL_007d:
	{
		// case 1: image.color = clvl1; break;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___image_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15 = __this->___clvl1_9;
		NullCheck(L_14);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_14, L_15);
		// case 1: image.color = clvl1; break;
		return;
	}

IL_008f:
	{
		// case 2: image.color = clvl2; break;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16 = __this->___image_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = __this->___clvl2_10;
		NullCheck(L_16);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_16, L_17);
		// case 2: image.color = clvl2; break;
		return;
	}

IL_00a1:
	{
		// case 3: image.color = clvl3; break;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_18 = __this->___image_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19 = __this->___clvl3_11;
		NullCheck(L_18);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_18, L_19);
		// case 3: image.color = clvl3; break;
		return;
	}

IL_00b3:
	{
		// case 4: image.color = clvl4; break;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_20 = __this->___image_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_21 = __this->___clvl4_12;
		NullCheck(L_20);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_20, L_21);
		// case 4: image.color = clvl4; break;
		return;
	}

IL_00c5:
	{
		// case 5: image.color = clvl5; break;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_22 = __this->___image_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = __this->___clvl5_13;
		NullCheck(L_22);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_22, L_23);
		// }
		return;
	}
}
// System.Void AddQuest::DeleteQuest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddQuest_DeleteQuest_mE67CBC01A4437C2450FBA6276417E16DA4FB31E3 (AddQuest_t4ED5F0C1563995DAB9FF94FC9277488928296860* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_0, NULL);
		// }
		return;
	}
}
// System.Void AddQuest::EditQuest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddQuest_EditQuest_m56011964924A0E330E4BC0168238C07B7BAB94FE (AddQuest_t4ED5F0C1563995DAB9FF94FC9277488928296860* __this, const RuntimeMethod* method) 
{
	{
		// if (!inputField.IsInteractable())
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = __this->___inputField_16;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(24 /* System.Boolean UnityEngine.UI.Selectable::IsInteractable() */, L_0);
		if (L_1)
		{
			goto IL_005b;
		}
	}
	{
		// editButton.color = new Color(255, 255, 255, 255);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___editButton_18;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		memset((&L_3), 0, sizeof(L_3));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_3), (255.0f), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_3);
		// inputField.image.enabled = true;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_4 = __this->___inputField_16;
		NullCheck(L_4);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5;
		L_5 = Selectable_get_image_m88664022F6BC90E7B8D4BFCBA7FE24B48E90C639(L_4, NULL);
		NullCheck(L_5);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_5, (bool)1, NULL);
		// inputField.interactable = true;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_6 = __this->___inputField_16;
		NullCheck(L_6);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_6, (bool)1, NULL);
		// inputField.MoveTextEnd(true);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_7 = __this->___inputField_16;
		NullCheck(L_7);
		TMP_InputField_MoveTextEnd_mC781F7D531E0B22F73DF2C6E5F882243DD133E6A(L_7, (bool)1, NULL);
		return;
	}

IL_005b:
	{
		// editButton.color = new Color(255, 255, 255, 60);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = __this->___editButton_18;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		memset((&L_9), 0, sizeof(L_9));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_9), (255.0f), (255.0f), (255.0f), (60.0f), /*hidden argument*/NULL);
		NullCheck(L_8);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_8, L_9);
		// inputField.image.enabled = false;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_10 = __this->___inputField_16;
		NullCheck(L_10);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_11;
		L_11 = Selectable_get_image_m88664022F6BC90E7B8D4BFCBA7FE24B48E90C639(L_10, NULL);
		NullCheck(L_11);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_11, (bool)0, NULL);
		// quest.quest = inputField.text;
		Quest_tEC1246A2C0E042A3081F297279B59702FB449CB9* L_12 = __this->___quest_17;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_13 = __this->___inputField_16;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_13, NULL);
		NullCheck(L_12);
		L_12->___quest_0 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->___quest_0), (void*)L_14);
		// StartCoroutine(DisableInput());
		RuntimeObject* L_15;
		L_15 = AddQuest_DisableInput_m966E77F6F40FEE1F0E83FBBB2146133958CA238D(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_16;
		L_16 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_15, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator AddQuest::DisableInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AddQuest_DisableInput_m966E77F6F40FEE1F0E83FBBB2146133958CA238D (AddQuest_t4ED5F0C1563995DAB9FF94FC9277488928296860* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDisableInputU3Ed__19_tD24C354ACD26296DE2D792E60C5D39543680A523_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDisableInputU3Ed__19_tD24C354ACD26296DE2D792E60C5D39543680A523* L_0 = (U3CDisableInputU3Ed__19_tD24C354ACD26296DE2D792E60C5D39543680A523*)il2cpp_codegen_object_new(U3CDisableInputU3Ed__19_tD24C354ACD26296DE2D792E60C5D39543680A523_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CDisableInputU3Ed__19__ctor_m854170596EC418A0FD955BDA45460DA926FBCE19(L_0, 0, NULL);
		U3CDisableInputU3Ed__19_tD24C354ACD26296DE2D792E60C5D39543680A523* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void AddQuest::UpdateQuest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddQuest_UpdateQuest_mD9775AB7DCEA84900B747A4BADA525D2D0DA72B5 (AddQuest_t4ED5F0C1563995DAB9FF94FC9277488928296860* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B00891BDD5E036427FB867D36C2E99D16226247);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral831790A699C35A68FE8B235257FBE36E8A6E9737);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE4DE096E0FCBB4FAEC390CA1ECCA822DD729EE1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// quest.lvl--;
		Quest_tEC1246A2C0E042A3081F297279B59702FB449CB9* L_0 = __this->___quest_17;
		Quest_tEC1246A2C0E042A3081F297279B59702FB449CB9* L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->___lvl_1;
		NullCheck(L_1);
		L_1->___lvl_1 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		// ChangeLvl();
		AddQuest_ChangeLvl_m59E6E2193F1ACFBAB8D458C3D3323A9BE363D791(__this, NULL);
		// if (quest.gender == Quest.Gender.man)
		Quest_tEC1246A2C0E042A3081F297279B59702FB449CB9* L_3 = __this->___quest_17;
		NullCheck(L_3);
		int32_t L_4 = L_3->___gender_3;
		if (L_4)
		{
			goto IL_0055;
		}
	}
	{
		// gender.text = "man";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_5 = __this->___gender_4;
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_5, _stringLiteralE4DE096E0FCBB4FAEC390CA1ECCA822DD729EE1E);
		// imageGender.color = cMan;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6 = __this->___imageGender_15;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = __this->___cMan_6;
		NullCheck(L_6);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_6, L_7);
		// quest.gender = Quest.Gender.man;
		Quest_tEC1246A2C0E042A3081F297279B59702FB449CB9* L_8 = __this->___quest_17;
		NullCheck(L_8);
		L_8->___gender_3 = 0;
		goto IL_00bf;
	}

IL_0055:
	{
		// else if (quest.gender == Quest.Gender.woman)
		Quest_tEC1246A2C0E042A3081F297279B59702FB449CB9* L_9 = __this->___quest_17;
		NullCheck(L_9);
		int32_t L_10 = L_9->___gender_3;
		if ((!(((uint32_t)L_10) == ((uint32_t)1))))
		{
			goto IL_0092;
		}
	}
	{
		// gender.text = "woman";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_11 = __this->___gender_4;
		NullCheck(L_11);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_11, _stringLiteral831790A699C35A68FE8B235257FBE36E8A6E9737);
		// imageGender.color = cWoman;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12 = __this->___imageGender_15;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = __this->___cWoman_7;
		NullCheck(L_12);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_12, L_13);
		// quest.gender = Quest.Gender.woman;
		Quest_tEC1246A2C0E042A3081F297279B59702FB449CB9* L_14 = __this->___quest_17;
		NullCheck(L_14);
		L_14->___gender_3 = 1;
		goto IL_00bf;
	}

IL_0092:
	{
		// gender.text = "everyone";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_15 = __this->___gender_4;
		NullCheck(L_15);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_15, _stringLiteral6B00891BDD5E036427FB867D36C2E99D16226247);
		// imageGender.color = cEveryone;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16 = __this->___imageGender_15;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = __this->___cEveryone_8;
		NullCheck(L_16);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_16, L_17);
		// quest.gender = Quest.Gender.everyone;
		Quest_tEC1246A2C0E042A3081F297279B59702FB449CB9* L_18 = __this->___quest_17;
		NullCheck(L_18);
		L_18->___gender_3 = 2;
	}

IL_00bf:
	{
		// inputField.text = quest.quest;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_19 = __this->___inputField_16;
		Quest_tEC1246A2C0E042A3081F297279B59702FB449CB9* L_20 = __this->___quest_17;
		NullCheck(L_20);
		String_t* L_21 = L_20->___quest_0;
		NullCheck(L_19);
		TMP_InputField_set_text_m684E9CDA2D9E82D1C497B5E03DBE79C00584FF62(L_19, L_21, NULL);
		// inputField.interactable = false;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_22 = __this->___inputField_16;
		NullCheck(L_22);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_22, (bool)0, NULL);
		// inputField.image.enabled = false;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_23 = __this->___inputField_16;
		NullCheck(L_23);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_24;
		L_24 = Selectable_get_image_m88664022F6BC90E7B8D4BFCBA7FE24B48E90C639(L_23, NULL);
		NullCheck(L_24);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_24, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void AddQuest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddQuest__ctor_mA104BEE2CD0AD80BD2877F2077C6D9B34441C09F (AddQuest_t4ED5F0C1563995DAB9FF94FC9277488928296860* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void AddQuest/<DisableInput>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisableInputU3Ed__19__ctor_m854170596EC418A0FD955BDA45460DA926FBCE19 (U3CDisableInputU3Ed__19_tD24C354ACD26296DE2D792E60C5D39543680A523* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void AddQuest/<DisableInput>d__19::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisableInputU3Ed__19_System_IDisposable_Dispose_m78B5DF8EB666A6AB2550D5EFB25ED0C5268042F4 (U3CDisableInputU3Ed__19_tD24C354ACD26296DE2D792E60C5D39543680A523* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean AddQuest/<DisableInput>d__19::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDisableInputU3Ed__19_MoveNext_m3D270589DA5241F22D86BEC6D8FF56235848A479 (U3CDisableInputU3Ed__19_tD24C354ACD26296DE2D792E60C5D39543680A523* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AddQuest_t4ED5F0C1563995DAB9FF94FC9277488928296860* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		AddQuest_t4ED5F0C1563995DAB9FF94FC9277488928296860* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0032;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_4 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_4, NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0032:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// inputField.interactable = false;
		AddQuest_t4ED5F0C1563995DAB9FF94FC9277488928296860* L_5 = V_1;
		NullCheck(L_5);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_6 = L_5->___inputField_16;
		NullCheck(L_6);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_6, (bool)0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object AddQuest/<DisableInput>d__19::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDisableInputU3Ed__19_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA12539B620ACC87DAAE997675CA19501CFC9DF54 (U3CDisableInputU3Ed__19_tD24C354ACD26296DE2D792E60C5D39543680A523* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void AddQuest/<DisableInput>d__19::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisableInputU3Ed__19_System_Collections_IEnumerator_Reset_m26427F3688F02DF5B8A5B2F5EA2C68456791FE60 (U3CDisableInputU3Ed__19_tD24C354ACD26296DE2D792E60C5D39543680A523* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDisableInputU3Ed__19_System_Collections_IEnumerator_Reset_m26427F3688F02DF5B8A5B2F5EA2C68456791FE60_RuntimeMethod_var)));
	}
}
// System.Object AddQuest/<DisableInput>d__19::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDisableInputU3Ed__19_System_Collections_IEnumerator_get_Current_m141A3626A3F5635D6B7EFCF599FEA7FA0DBA2BC3 (U3CDisableInputU3Ed__19_tD24C354ACD26296DE2D792E60C5D39543680A523* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Colors::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Colors_Awake_m7C207691B721B1EFEAC8E5C5EDFAB0079F8E0139 (Colors_t4FBC8F9BC3173CFB15C6164CC275EEBAC6E0E973* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Colors_t4FBC8F9BC3173CFB15C6164CC275EEBAC6E0E973_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((Colors_t4FBC8F9BC3173CFB15C6164CC275EEBAC6E0E973_StaticFields*)il2cpp_codegen_static_fields_for(Colors_t4FBC8F9BC3173CFB15C6164CC275EEBAC6E0E973_il2cpp_TypeInfo_var))->___instance_12 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((Colors_t4FBC8F9BC3173CFB15C6164CC275EEBAC6E0E973_StaticFields*)il2cpp_codegen_static_fields_for(Colors_t4FBC8F9BC3173CFB15C6164CC275EEBAC6E0E973_il2cpp_TypeInfo_var))->___instance_12), (void*)__this);
		// }
		return;
	}
}
// System.Void Colors::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Colors__ctor_mDE8F4C75B1D8B96D5800B5A827BC62D935AF73F0 (Colors_t4FBC8F9BC3173CFB15C6164CC275EEBAC6E0E973* __this, const RuntimeMethod* method) 
{
	{
		// public Color cLvl1 = new Color32(159, 159, 159, 255);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_0), (uint8_t)((int32_t)159), (uint8_t)((int32_t)159), (uint8_t)((int32_t)159), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline(L_0, NULL);
		__this->___cLvl1_7 = L_1;
		// public Color cLvl2 = new Color32(100, 255, 80, 255);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_2;
		memset((&L_2), 0, sizeof(L_2));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_2), (uint8_t)((int32_t)100), (uint8_t)((int32_t)255), (uint8_t)((int32_t)80), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline(L_2, NULL);
		__this->___cLvl2_8 = L_3;
		// public Color cLvl3 = new Color32(23, 205, 255, 255);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_4;
		memset((&L_4), 0, sizeof(L_4));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_4), (uint8_t)((int32_t)23), (uint8_t)((int32_t)205), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline(L_4, NULL);
		__this->___cLvl3_9 = L_5;
		// public Color cLvl4 = new Color32(195, 85, 255, 255);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_6;
		memset((&L_6), 0, sizeof(L_6));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_6), (uint8_t)((int32_t)195), (uint8_t)((int32_t)85), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline(L_6, NULL);
		__this->___cLvl4_10 = L_7;
		// public Color cLvl5 = new Color32(255, 190, 64, 255);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_8), (uint8_t)((int32_t)255), (uint8_t)((int32_t)190), (uint8_t)((int32_t)64), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline(L_8, NULL);
		__this->___cLvl5_11 = L_9;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Game::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_Awake_m3B65DFD784616A9F1AA8870399863AF3E75E420B (Game_tA6A98F81416961C425C0982A763372581DF081F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tA6A98F81416961C425C0982A763372581DF081F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveLoad_t9057ED9262F85AC317794B37B80A402744502C14_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((Game_tA6A98F81416961C425C0982A763372581DF081F1_StaticFields*)il2cpp_codegen_static_fields_for(Game_tA6A98F81416961C425C0982A763372581DF081F1_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((Game_tA6A98F81416961C425C0982A763372581DF081F1_StaticFields*)il2cpp_codegen_static_fields_for(Game_tA6A98F81416961C425C0982A763372581DF081F1_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// SaveLoad.Load();
		il2cpp_codegen_runtime_class_init_inline(SaveLoad_t9057ED9262F85AC317794B37B80A402744502C14_il2cpp_TypeInfo_var);
		SaveLoad_Load_mE287BE7721AF216FF91874ADEEFBFB4CC082EB59(NULL);
		// }
		return;
	}
}
// System.Void Game::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_Start_m81FFBF966FD86236D5383C0295E70170EAE3F1DB (Game_tA6A98F81416961C425C0982A763372581DF081F1* __this, const RuntimeMethod* method) 
{
	{
		// updateQuests();
		Game_updateQuests_m7D9AE3BC5F3065D4FFF1342B16F37399BE8D3543(__this, NULL);
		// RollNextQuestion();
		Game_RollNextQuestion_m8B1DB164133DD1A17FF049A4FFDF6507410EAFCB(__this, NULL);
		// Sort();
		Game_Sort_m26A30FE701199592662BC73DA1A3D76330318E69(__this, NULL);
		// }
		return;
	}
}
// System.Void Game::updateQuests()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_updateQuests_m7D9AE3BC5F3065D4FFF1342B16F37399BE8D3543 (Game_tA6A98F81416961C425C0982A763372581DF081F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mA52752CBCF290840F7A34DCABC1A559D0387ACBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3531CBD1C32E07D868F9C916895554A6C2CDB67C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// q1.Clear();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = __this->___q1_7;
		NullCheck(L_0);
		List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_inline(L_0, List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
		// q2.Clear();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_1 = __this->___q2_8;
		NullCheck(L_1);
		List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_inline(L_1, List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
		// q3.Clear();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_2 = __this->___q3_9;
		NullCheck(L_2);
		List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_inline(L_2, List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
		// q4.Clear();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_3 = __this->___q4_10;
		NullCheck(L_3);
		List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_inline(L_3, List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
		// q5.Clear();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_4 = __this->___q5_11;
		NullCheck(L_4);
		List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_inline(L_4, List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
		// for (int i = 0; i < quests.Count; i++)
		V_0 = 0;
		goto IL_00d9;
	}

IL_003e:
	{
		// if (!quests[i].used)
		List_1_tC535F9CD686AF631ADF2E758CC14257CA84FBC88* L_5 = __this->___quests_5;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Quest_tEC1246A2C0E042A3081F297279B59702FB449CB9* L_7;
		L_7 = List_1_get_Item_m3531CBD1C32E07D868F9C916895554A6C2CDB67C(L_5, L_6, List_1_get_Item_m3531CBD1C32E07D868F9C916895554A6C2CDB67C_RuntimeMethod_var);
		NullCheck(L_7);
		bool L_8 = L_7->___used_2;
		if (L_8)
		{
			goto IL_00c7;
		}
	}
	{
		// switch (quests[i].lvl)
		List_1_tC535F9CD686AF631ADF2E758CC14257CA84FBC88* L_9 = __this->___quests_5;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		Quest_tEC1246A2C0E042A3081F297279B59702FB449CB9* L_11;
		L_11 = List_1_get_Item_m3531CBD1C32E07D868F9C916895554A6C2CDB67C(L_9, L_10, List_1_get_Item_m3531CBD1C32E07D868F9C916895554A6C2CDB67C_RuntimeMethod_var);
		NullCheck(L_11);
		int32_t L_12 = L_11->___lvl_1;
		V_1 = L_12;
		int32_t L_13 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract(L_13, 1)))
		{
			case 0:
			{
				goto IL_0081;
			}
			case 1:
			{
				goto IL_008f;
			}
			case 2:
			{
				goto IL_009d;
			}
			case 3:
			{
				goto IL_00ab;
			}
			case 4:
			{
				goto IL_00b9;
			}
		}
	}
	{
		goto IL_00d5;
	}

IL_0081:
	{
		// case 1: q1.Add(i); break;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_14 = __this->___q1_7;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_14, L_15, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// case 1: q1.Add(i); break;
		goto IL_00d5;
	}

IL_008f:
	{
		// case 2: q2.Add(i); break;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_16 = __this->___q2_8;
		int32_t L_17 = V_0;
		NullCheck(L_16);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_16, L_17, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// case 2: q2.Add(i); break;
		goto IL_00d5;
	}

IL_009d:
	{
		// case 3: q3.Add(i); break;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_18 = __this->___q3_9;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_18, L_19, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// case 3: q3.Add(i); break;
		goto IL_00d5;
	}

IL_00ab:
	{
		// case 4: q4.Add(i); break;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_20 = __this->___q4_10;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_20, L_21, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// case 4: q4.Add(i); break;
		goto IL_00d5;
	}

IL_00b9:
	{
		// case 5: q5.Add(i); break;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_22 = __this->___q5_11;
		int32_t L_23 = V_0;
		NullCheck(L_22);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_22, L_23, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// case 5: q5.Add(i); break;
		goto IL_00d5;
	}

IL_00c7:
	{
		// else used++;
		int32_t L_24 = __this->___used_15;
		__this->___used_15 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_00d5:
	{
		// for (int i = 0; i < quests.Count; i++)
		int32_t L_25 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_00d9:
	{
		// for (int i = 0; i < quests.Count; i++)
		int32_t L_26 = V_0;
		List_1_tC535F9CD686AF631ADF2E758CC14257CA84FBC88* L_27 = __this->___quests_5;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = List_1_get_Count_mA52752CBCF290840F7A34DCABC1A559D0387ACBF_inline(L_27, List_1_get_Count_mA52752CBCF290840F7A34DCABC1A559D0387ACBF_RuntimeMethod_var);
		if ((((int32_t)L_26) < ((int32_t)L_28)))
		{
			goto IL_003e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Game::RollNextQuestion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_RollNextQuestion_m8B1DB164133DD1A17FF049A4FFDF6507410EAFCB (Game_tA6A98F81416961C425C0982A763372581DF081F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Colors_t4FBC8F9BC3173CFB15C6164CC275EEBAC6E0E973_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3531CBD1C32E07D868F9C916895554A6C2CDB67C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2046AEE3CAE084D2C4B778097922E59B91F4AF17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	{
		// current++;
		int32_t L_0 = __this->___current_14;
		__this->___current_14 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// float chanse5 = 0.01f + (0.01f / 12 * used); //%
		int32_t L_1 = __this->___used_15;
		V_0 = ((float)il2cpp_codegen_add((0.00999999978f), ((float)il2cpp_codegen_multiply((0.000833333295f), ((float)L_1)))));
		// float chanse4 = 0.09f + (0.09f / 12 * used); //%
		int32_t L_2 = __this->___used_15;
		V_1 = ((float)il2cpp_codegen_add((0.0900000036f), ((float)il2cpp_codegen_multiply((0.0075000003f), ((float)L_2)))));
		// float chanse3 = 1.9f + (1.9f / 12 * used); //%
		int32_t L_3 = __this->___used_15;
		V_2 = ((float)il2cpp_codegen_add((1.89999998f), ((float)il2cpp_codegen_multiply((0.158333331f), ((float)L_3)))));
		// float chanse2 = 10f + (10 / 12 * used); //%
		int32_t L_4 = __this->___used_15;
		V_3 = ((float)il2cpp_codegen_add((10.0f), ((float)0)));
		// float chanse1 = 88f - used; //%
		int32_t L_5 = __this->___used_15;
		// float random = Random.Range(0, 100);
		int32_t L_6;
		L_6 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, ((int32_t)100), NULL);
		V_4 = ((float)L_6);
		// if ((random < chanse5 || q4.Count == 0) && q5.Count > 0)
		float L_7 = V_4;
		float L_8 = V_0;
		if ((((float)L_7) < ((float)L_8)))
		{
			goto IL_007e;
		}
	}
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_9 = __this->___q4_10;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_9, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		if (L_10)
		{
			goto IL_00b7;
		}
	}

IL_007e:
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_11 = __this->___q5_11;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_11, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		if ((((int32_t)L_12) <= ((int32_t)0)))
		{
			goto IL_00b7;
		}
	}
	{
		// int i = Random.Range(0, q5.Count);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_13 = __this->___q5_11;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_13, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		int32_t L_15;
		L_15 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, L_14, NULL);
		V_5 = L_15;
		// current = q5[i];
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_16 = __this->___q5_11;
		int32_t L_17 = V_5;
		NullCheck(L_16);
		int32_t L_18;
		L_18 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_16, L_17, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		__this->___current_14 = L_18;
		goto IL_01dc;
	}

IL_00b7:
	{
		// else if ((random < chanse4 || q3.Count == 0) && q4.Count > 0)
		float L_19 = V_4;
		float L_20 = V_1;
		if ((((float)L_19) < ((float)L_20)))
		{
			goto IL_00c9;
		}
	}
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_21 = __this->___q3_9;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_21, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		if (L_22)
		{
			goto IL_0102;
		}
	}

IL_00c9:
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_23 = __this->___q4_10;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_23, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		if ((((int32_t)L_24) <= ((int32_t)0)))
		{
			goto IL_0102;
		}
	}
	{
		// int i = Random.Range(0, q4.Count);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_25 = __this->___q4_10;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_25, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		int32_t L_27;
		L_27 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, L_26, NULL);
		V_6 = L_27;
		// current = q4[i];
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_28 = __this->___q4_10;
		int32_t L_29 = V_6;
		NullCheck(L_28);
		int32_t L_30;
		L_30 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_28, L_29, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		__this->___current_14 = L_30;
		goto IL_01dc;
	}

IL_0102:
	{
		// else if ((random < chanse3 || q2.Count == 0) && q3.Count > 0)
		float L_31 = V_4;
		float L_32 = V_2;
		if ((((float)L_31) < ((float)L_32)))
		{
			goto IL_0114;
		}
	}
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_33 = __this->___q2_8;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_33, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		if (L_34)
		{
			goto IL_014d;
		}
	}

IL_0114:
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_35 = __this->___q3_9;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_35, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		if ((((int32_t)L_36) <= ((int32_t)0)))
		{
			goto IL_014d;
		}
	}
	{
		// int i = Random.Range(0, q3.Count);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_37 = __this->___q3_9;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_37, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		int32_t L_39;
		L_39 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, L_38, NULL);
		V_7 = L_39;
		// current = q3[i];
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_40 = __this->___q3_9;
		int32_t L_41 = V_7;
		NullCheck(L_40);
		int32_t L_42;
		L_42 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_40, L_41, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		__this->___current_14 = L_42;
		goto IL_01dc;
	}

IL_014d:
	{
		// else if ((random < chanse2 || q1.Count == 0) && q2.Count > 0)
		float L_43 = V_4;
		float L_44 = V_3;
		if ((((float)L_43) < ((float)L_44)))
		{
			goto IL_015f;
		}
	}
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_45 = __this->___q1_7;
		NullCheck(L_45);
		int32_t L_46;
		L_46 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_45, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		if (L_46)
		{
			goto IL_0195;
		}
	}

IL_015f:
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_47 = __this->___q2_8;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_47, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		if ((((int32_t)L_48) <= ((int32_t)0)))
		{
			goto IL_0195;
		}
	}
	{
		// int i = Random.Range(0, q2.Count);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_49 = __this->___q2_8;
		NullCheck(L_49);
		int32_t L_50;
		L_50 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_49, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		int32_t L_51;
		L_51 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, L_50, NULL);
		V_8 = L_51;
		// current = q2[i];
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_52 = __this->___q2_8;
		int32_t L_53 = V_8;
		NullCheck(L_52);
		int32_t L_54;
		L_54 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_52, L_53, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		__this->___current_14 = L_54;
		goto IL_01dc;
	}

IL_0195:
	{
		// else if (q1.Count > 0)
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_55 = __this->___q1_7;
		NullCheck(L_55);
		int32_t L_56;
		L_56 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_55, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		if ((((int32_t)L_56) <= ((int32_t)0)))
		{
			goto IL_01cb;
		}
	}
	{
		// int i = Random.Range(0, q1.Count);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_57 = __this->___q1_7;
		NullCheck(L_57);
		int32_t L_58;
		L_58 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_57, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		int32_t L_59;
		L_59 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, L_58, NULL);
		V_9 = L_59;
		// current = q1[i];
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_60 = __this->___q1_7;
		int32_t L_61 = V_9;
		NullCheck(L_60);
		int32_t L_62;
		L_62 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_60, L_61, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		__this->___current_14 = L_62;
		goto IL_01dc;
	}

IL_01cb:
	{
		// text.text = "You finished the game.\nPlease restart your profress.";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_63 = __this->___text_12;
		NullCheck(L_63);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_63, _stringLiteral2046AEE3CAE084D2C4B778097922E59B91F4AF17);
		// return;
		return;
	}

IL_01dc:
	{
		// text.text = quests[current].quest;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_64 = __this->___text_12;
		List_1_tC535F9CD686AF631ADF2E758CC14257CA84FBC88* L_65 = __this->___quests_5;
		int32_t L_66 = __this->___current_14;
		NullCheck(L_65);
		Quest_tEC1246A2C0E042A3081F297279B59702FB449CB9* L_67;
		L_67 = List_1_get_Item_m3531CBD1C32E07D868F9C916895554A6C2CDB67C(L_65, L_66, List_1_get_Item_m3531CBD1C32E07D868F9C916895554A6C2CDB67C_RuntimeMethod_var);
		NullCheck(L_67);
		String_t* L_68 = L_67->___quest_0;
		NullCheck(L_64);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_64, L_68);
		// switch (quests[current].lvl)
		List_1_tC535F9CD686AF631ADF2E758CC14257CA84FBC88* L_69 = __this->___quests_5;
		int32_t L_70 = __this->___current_14;
		NullCheck(L_69);
		Quest_tEC1246A2C0E042A3081F297279B59702FB449CB9* L_71;
		L_71 = List_1_get_Item_m3531CBD1C32E07D868F9C916895554A6C2CDB67C(L_69, L_70, List_1_get_Item_m3531CBD1C32E07D868F9C916895554A6C2CDB67C_RuntimeMethod_var);
		NullCheck(L_71);
		int32_t L_72 = L_71->___lvl_1;
		V_10 = L_72;
		int32_t L_73 = V_10;
		switch (((int32_t)il2cpp_codegen_subtract(L_73, 1)))
		{
			case 0:
			{
				goto IL_0234;
			}
			case 1:
			{
				goto IL_024b;
			}
			case 2:
			{
				goto IL_0262;
			}
			case 3:
			{
				goto IL_0279;
			}
			case 4:
			{
				goto IL_0290;
			}
		}
	}
	{
		goto IL_02a5;
	}

IL_0234:
	{
		// case 1: image.color = Colors.instance.cLvl1; break;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_74 = __this->___image_13;
		Colors_t4FBC8F9BC3173CFB15C6164CC275EEBAC6E0E973* L_75 = ((Colors_t4FBC8F9BC3173CFB15C6164CC275EEBAC6E0E973_StaticFields*)il2cpp_codegen_static_fields_for(Colors_t4FBC8F9BC3173CFB15C6164CC275EEBAC6E0E973_il2cpp_TypeInfo_var))->___instance_12;
		NullCheck(L_75);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_76 = L_75->___cLvl1_7;
		NullCheck(L_74);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_74, L_76);
		// case 1: image.color = Colors.instance.cLvl1; break;
		goto IL_02a5;
	}

IL_024b:
	{
		// case 2: image.color = Colors.instance.cLvl2; break;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_77 = __this->___image_13;
		Colors_t4FBC8F9BC3173CFB15C6164CC275EEBAC6E0E973* L_78 = ((Colors_t4FBC8F9BC3173CFB15C6164CC275EEBAC6E0E973_StaticFields*)il2cpp_codegen_static_fields_for(Colors_t4FBC8F9BC3173CFB15C6164CC275EEBAC6E0E973_il2cpp_TypeInfo_var))->___instance_12;
		NullCheck(L_78);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_79 = L_78->___cLvl2_8;
		NullCheck(L_77);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_77, L_79);
		// case 2: image.color = Colors.instance.cLvl2; break;
		goto IL_02a5;
	}

IL_0262:
	{
		// case 3: image.color = Colors.instance.cLvl3; break;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_80 = __this->___image_13;
		Colors_t4FBC8F9BC3173CFB15C6164CC275EEBAC6E0E973* L_81 = ((Colors_t4FBC8F9BC3173CFB15C6164CC275EEBAC6E0E973_StaticFields*)il2cpp_codegen_static_fields_for(Colors_t4FBC8F9BC3173CFB15C6164CC275EEBAC6E0E973_il2cpp_TypeInfo_var))->___instance_12;
		NullCheck(L_81);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_82 = L_81->___cLvl3_9;
		NullCheck(L_80);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_80, L_82);
		// case 3: image.color = Colors.instance.cLvl3; break;
		goto IL_02a5;
	}

IL_0279:
	{
		// case 4: image.color = Colors.instance.cLvl4; break;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_83 = __this->___image_13;
		Colors_t4FBC8F9BC3173CFB15C6164CC275EEBAC6E0E973* L_84 = ((Colors_t4FBC8F9BC3173CFB15C6164CC275EEBAC6E0E973_StaticFields*)il2cpp_codegen_static_fields_for(Colors_t4FBC8F9BC3173CFB15C6164CC275EEBAC6E0E973_il2cpp_TypeInfo_var))->___instance_12;
		NullCheck(L_84);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_85 = L_84->___cLvl4_10;
		NullCheck(L_83);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_83, L_85);
		// case 4: image.color = Colors.instance.cLvl4; break;
		goto IL_02a5;
	}

IL_0290:
	{
		// case 5: image.color = Colors.instance.cLvl5; break;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_86 = __this->___image_13;
		Colors_t4FBC8F9BC3173CFB15C6164CC275EEBAC6E0E973* L_87 = ((Colors_t4FBC8F9BC3173CFB15C6164CC275EEBAC6E0E973_StaticFields*)il2cpp_codegen_static_fields_for(Colors_t4FBC8F9BC3173CFB15C6164CC275EEBAC6E0E973_il2cpp_TypeInfo_var))->___instance_12;
		NullCheck(L_87);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_88 = L_87->___cLvl5_11;
		NullCheck(L_86);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_86, L_88);
	}

IL_02a5:
	{
		// Debug.Log(q1.Count + ", " + q2.Count + ", " + q3.Count + ", " + q4.Count + ", " + q4.Count);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_89 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_90 = L_89;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_91 = __this->___q1_7;
		NullCheck(L_91);
		int32_t L_92;
		L_92 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_91, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		V_10 = L_92;
		String_t* L_93;
		L_93 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_10), NULL);
		NullCheck(L_90);
		ArrayElementTypeCheck (L_90, L_93);
		(L_90)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_93);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_94 = L_90;
		NullCheck(L_94);
		ArrayElementTypeCheck (L_94, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_94)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_95 = L_94;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_96 = __this->___q2_8;
		NullCheck(L_96);
		int32_t L_97;
		L_97 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_96, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		V_10 = L_97;
		String_t* L_98;
		L_98 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_10), NULL);
		NullCheck(L_95);
		ArrayElementTypeCheck (L_95, L_98);
		(L_95)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_98);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_99 = L_95;
		NullCheck(L_99);
		ArrayElementTypeCheck (L_99, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_99)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_100 = L_99;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_101 = __this->___q3_9;
		NullCheck(L_101);
		int32_t L_102;
		L_102 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_101, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		V_10 = L_102;
		String_t* L_103;
		L_103 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_10), NULL);
		NullCheck(L_100);
		ArrayElementTypeCheck (L_100, L_103);
		(L_100)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_103);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_104 = L_100;
		NullCheck(L_104);
		ArrayElementTypeCheck (L_104, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_104)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_105 = L_104;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_106 = __this->___q4_10;
		NullCheck(L_106);
		int32_t L_107;
		L_107 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_106, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		V_10 = L_107;
		String_t* L_108;
		L_108 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_10), NULL);
		NullCheck(L_105);
		ArrayElementTypeCheck (L_105, L_108);
		(L_105)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)L_108);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_109 = L_105;
		NullCheck(L_109);
		ArrayElementTypeCheck (L_109, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_109)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_110 = L_109;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_111 = __this->___q4_10;
		NullCheck(L_111);
		int32_t L_112;
		L_112 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_111, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		V_10 = L_112;
		String_t* L_113;
		L_113 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_10), NULL);
		NullCheck(L_110);
		ArrayElementTypeCheck (L_110, L_113);
		(L_110)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)L_113);
		String_t* L_114;
		L_114 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_110, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_114, NULL);
		// }
		return;
	}
}
// System.Void Game::Done()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_Done_m811FE4938FB23F1A191408D60E4D271EBFB30E01 (Game_tA6A98F81416961C425C0982A763372581DF081F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m2B41E5B9E061DD4D5F58B693018024AADF2AD7F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3531CBD1C32E07D868F9C916895554A6C2CDB67C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// quests[current].used = true;
		List_1_tC535F9CD686AF631ADF2E758CC14257CA84FBC88* L_0 = __this->___quests_5;
		int32_t L_1 = __this->___current_14;
		NullCheck(L_0);
		Quest_tEC1246A2C0E042A3081F297279B59702FB449CB9* L_2;
		L_2 = List_1_get_Item_m3531CBD1C32E07D868F9C916895554A6C2CDB67C(L_0, L_1, List_1_get_Item_m3531CBD1C32E07D868F9C916895554A6C2CDB67C_RuntimeMethod_var);
		NullCheck(L_2);
		L_2->___used_2 = (bool)1;
		// used++;
		int32_t L_3 = __this->___used_15;
		__this->___used_15 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		// switch (quests[current].lvl)
		List_1_tC535F9CD686AF631ADF2E758CC14257CA84FBC88* L_4 = __this->___quests_5;
		int32_t L_5 = __this->___current_14;
		NullCheck(L_4);
		Quest_tEC1246A2C0E042A3081F297279B59702FB449CB9* L_6;
		L_6 = List_1_get_Item_m3531CBD1C32E07D868F9C916895554A6C2CDB67C(L_4, L_5, List_1_get_Item_m3531CBD1C32E07D868F9C916895554A6C2CDB67C_RuntimeMethod_var);
		NullCheck(L_6);
		int32_t L_7 = L_6->___lvl_1;
		V_0 = L_7;
		int32_t L_8 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_8, 1)))
		{
			case 0:
			{
				goto IL_005a;
			}
			case 1:
			{
				goto IL_006e;
			}
			case 2:
			{
				goto IL_0082;
			}
			case 3:
			{
				goto IL_0096;
			}
			case 4:
			{
				goto IL_00aa;
			}
		}
	}
	{
		goto IL_00bc;
	}

IL_005a:
	{
		// case 1: q1.Remove(current); break;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_9 = __this->___q1_7;
		int32_t L_10 = __this->___current_14;
		NullCheck(L_9);
		bool L_11;
		L_11 = List_1_Remove_m2B41E5B9E061DD4D5F58B693018024AADF2AD7F5(L_9, L_10, List_1_Remove_m2B41E5B9E061DD4D5F58B693018024AADF2AD7F5_RuntimeMethod_var);
		// case 1: q1.Remove(current); break;
		goto IL_00bc;
	}

IL_006e:
	{
		// case 2: q2.Remove(current); break;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_12 = __this->___q2_8;
		int32_t L_13 = __this->___current_14;
		NullCheck(L_12);
		bool L_14;
		L_14 = List_1_Remove_m2B41E5B9E061DD4D5F58B693018024AADF2AD7F5(L_12, L_13, List_1_Remove_m2B41E5B9E061DD4D5F58B693018024AADF2AD7F5_RuntimeMethod_var);
		// case 2: q2.Remove(current); break;
		goto IL_00bc;
	}

IL_0082:
	{
		// case 3: q3.Remove(current); break;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_15 = __this->___q3_9;
		int32_t L_16 = __this->___current_14;
		NullCheck(L_15);
		bool L_17;
		L_17 = List_1_Remove_m2B41E5B9E061DD4D5F58B693018024AADF2AD7F5(L_15, L_16, List_1_Remove_m2B41E5B9E061DD4D5F58B693018024AADF2AD7F5_RuntimeMethod_var);
		// case 3: q3.Remove(current); break;
		goto IL_00bc;
	}

IL_0096:
	{
		// case 4: q4.Remove(current); break;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_18 = __this->___q4_10;
		int32_t L_19 = __this->___current_14;
		NullCheck(L_18);
		bool L_20;
		L_20 = List_1_Remove_m2B41E5B9E061DD4D5F58B693018024AADF2AD7F5(L_18, L_19, List_1_Remove_m2B41E5B9E061DD4D5F58B693018024AADF2AD7F5_RuntimeMethod_var);
		// case 4: q4.Remove(current); break;
		goto IL_00bc;
	}

IL_00aa:
	{
		// case 5: q5.Remove(current); break;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_21 = __this->___q5_11;
		int32_t L_22 = __this->___current_14;
		NullCheck(L_21);
		bool L_23;
		L_23 = List_1_Remove_m2B41E5B9E061DD4D5F58B693018024AADF2AD7F5(L_21, L_22, List_1_Remove_m2B41E5B9E061DD4D5F58B693018024AADF2AD7F5_RuntimeMethod_var);
	}

IL_00bc:
	{
		// RollNextQuestion();
		Game_RollNextQuestion_m8B1DB164133DD1A17FF049A4FFDF6507410EAFCB(__this, NULL);
		// }
		return;
	}
}
// System.Void Game::Reject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_Reject_mCBB96457C0546C849F6CA1AA8CA8F8AC9462409B (Game_tA6A98F81416961C425C0982A763372581DF081F1* __this, const RuntimeMethod* method) 
{
	{
		// RollNextQuestion();
		Game_RollNextQuestion_m8B1DB164133DD1A17FF049A4FFDF6507410EAFCB(__this, NULL);
		// }
		return;
	}
}
// System.Void Game::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_OnApplicationQuit_m514F6A5B2D7533F7DEC127E90DE37924DF1FE797 (Game_tA6A98F81416961C425C0982A763372581DF081F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveLoad_t9057ED9262F85AC317794B37B80A402744502C14_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SaveLoad.Save();
		il2cpp_codegen_runtime_class_init_inline(SaveLoad_t9057ED9262F85AC317794B37B80A402744502C14_il2cpp_TypeInfo_var);
		SaveLoad_Save_m14A03AB14BA3254FB0ABAF891C9990C1B33D9CED(NULL);
		// }
		return;
	}
}
// System.Void Game::ResetProgres()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_ResetProgres_m4F14F308EEF6E15FA0BA18AABE0611CD4111A8E8 (Game_tA6A98F81416961C425C0982A763372581DF081F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD8628665E26E907BC91D2D37D5C91AFDEE21D683_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m124EE6E49F9DCEB61F38F14DDD93AF7A1AC7F93A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m448E034BD0C065C262331B2682685EE25F1112B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mF9F817B4B935EC2566B6E0F5F19735C2B9A2616C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tE57C29B3B670ACA51B98EC712849F9BC6D3D4291 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach(Quest q in quests)
		List_1_tC535F9CD686AF631ADF2E758CC14257CA84FBC88* L_0 = __this->___quests_5;
		NullCheck(L_0);
		Enumerator_tE57C29B3B670ACA51B98EC712849F9BC6D3D4291 L_1;
		L_1 = List_1_GetEnumerator_mF9F817B4B935EC2566B6E0F5F19735C2B9A2616C(L_0, List_1_GetEnumerator_mF9F817B4B935EC2566B6E0F5F19735C2B9A2616C_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0026:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD8628665E26E907BC91D2D37D5C91AFDEE21D683((&V_0), Enumerator_Dispose_mD8628665E26E907BC91D2D37D5C91AFDEE21D683_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001b_1;
			}

IL_000e_1:
			{
				// foreach(Quest q in quests)
				Quest_tEC1246A2C0E042A3081F297279B59702FB449CB9* L_2;
				L_2 = Enumerator_get_Current_m448E034BD0C065C262331B2682685EE25F1112B1_inline((&V_0), Enumerator_get_Current_m448E034BD0C065C262331B2682685EE25F1112B1_RuntimeMethod_var);
				// q.used = false;
				NullCheck(L_2);
				L_2->___used_2 = (bool)0;
			}

IL_001b_1:
			{
				// foreach(Quest q in quests)
				bool L_3;
				L_3 = Enumerator_MoveNext_m124EE6E49F9DCEB61F38F14DDD93AF7A1AC7F93A((&V_0), Enumerator_MoveNext_m124EE6E49F9DCEB61F38F14DDD93AF7A1AC7F93A_RuntimeMethod_var);
				if (L_3)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0034;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0034:
	{
		// updateQuests();
		Game_updateQuests_m7D9AE3BC5F3065D4FFF1342B16F37399BE8D3543(__this, NULL);
		// }
		return;
	}
}
// System.Void Game::Sort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_Sort_m26A30FE701199592662BC73DA1A3D76330318E69 (Game_tA6A98F81416961C425C0982A763372581DF081F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparison_1_t9B91ECD402EEC20F8DEE76FD07A82C3D175C9663_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Sort_m8704AC1EC87FCCB134C59C9C99078A5EA986FB4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSortU3Eb__20_0_mEE46DC9B6848B5F2B3A9C0AA2CBAAF67ACB278E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD2F9210CA24FE81EFB71CDAB95622429D160CD7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Comparison_1_t9B91ECD402EEC20F8DEE76FD07A82C3D175C9663* G_B2_0 = NULL;
	List_1_tC535F9CD686AF631ADF2E758CC14257CA84FBC88* G_B2_1 = NULL;
	Comparison_1_t9B91ECD402EEC20F8DEE76FD07A82C3D175C9663* G_B1_0 = NULL;
	List_1_tC535F9CD686AF631ADF2E758CC14257CA84FBC88* G_B1_1 = NULL;
	{
		// quests.Sort(delegate(Quest a, Quest b) {
		//     if (a.lvl != b.lvl) return a.lvl.CompareTo(b.lvl);
		//     else return a.quest.CompareTo(b.quest);
		// });
		List_1_tC535F9CD686AF631ADF2E758CC14257CA84FBC88* L_0 = __this->___quests_5;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD2F9210CA24FE81EFB71CDAB95622429D160CD7E_il2cpp_TypeInfo_var);
		Comparison_1_t9B91ECD402EEC20F8DEE76FD07A82C3D175C9663* L_1 = ((U3CU3Ec_tD2F9210CA24FE81EFB71CDAB95622429D160CD7E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD2F9210CA24FE81EFB71CDAB95622429D160CD7E_il2cpp_TypeInfo_var))->___U3CU3E9__20_0_1;
		Comparison_1_t9B91ECD402EEC20F8DEE76FD07A82C3D175C9663* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD2F9210CA24FE81EFB71CDAB95622429D160CD7E_il2cpp_TypeInfo_var);
		U3CU3Ec_tD2F9210CA24FE81EFB71CDAB95622429D160CD7E* L_3 = ((U3CU3Ec_tD2F9210CA24FE81EFB71CDAB95622429D160CD7E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD2F9210CA24FE81EFB71CDAB95622429D160CD7E_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Comparison_1_t9B91ECD402EEC20F8DEE76FD07A82C3D175C9663* L_4 = (Comparison_1_t9B91ECD402EEC20F8DEE76FD07A82C3D175C9663*)il2cpp_codegen_object_new(Comparison_1_t9B91ECD402EEC20F8DEE76FD07A82C3D175C9663_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Comparison_1__ctor_mAABE9552F7165376DC046EFBAB293CD65B9D1A89(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CSortU3Eb__20_0_mEE46DC9B6848B5F2B3A9C0AA2CBAAF67ACB278E9_RuntimeMethod_var), NULL);
		Comparison_1_t9B91ECD402EEC20F8DEE76FD07A82C3D175C9663* L_5 = L_4;
		((U3CU3Ec_tD2F9210CA24FE81EFB71CDAB95622429D160CD7E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD2F9210CA24FE81EFB71CDAB95622429D160CD7E_il2cpp_TypeInfo_var))->___U3CU3E9__20_0_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD2F9210CA24FE81EFB71CDAB95622429D160CD7E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD2F9210CA24FE81EFB71CDAB95622429D160CD7E_il2cpp_TypeInfo_var))->___U3CU3E9__20_0_1), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		NullCheck(G_B2_1);
		List_1_Sort_m8704AC1EC87FCCB134C59C9C99078A5EA986FB4A(G_B2_1, G_B2_0, List_1_Sort_m8704AC1EC87FCCB134C59C9C99078A5EA986FB4A_RuntimeMethod_var);
		// updateQuests();
		Game_updateQuests_m7D9AE3BC5F3065D4FFF1342B16F37399BE8D3543(__this, NULL);
		// }
		return;
	}
}
// System.Void Game::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game__ctor_m22BD482E0EC7CE99133FCF5EEF21DBC98A0BE5C3 (Game_tA6A98F81416961C425C0982A763372581DF081F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m3212846DF03A63CFFD526A0AFC64AF08166FE380_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6C95BE4AA43CEECAE2ABC9B4F106D26F4BE227D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC535F9CD686AF631ADF2E758CC14257CA84FBC88_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE2164EA8BAA8705A2E709A2D74744EC5E511A859_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<Quest> quests = new List<Quest>();
		List_1_tC535F9CD686AF631ADF2E758CC14257CA84FBC88* L_0 = (List_1_tC535F9CD686AF631ADF2E758CC14257CA84FBC88*)il2cpp_codegen_object_new(List_1_tC535F9CD686AF631ADF2E758CC14257CA84FBC88_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m3212846DF03A63CFFD526A0AFC64AF08166FE380(L_0, List_1__ctor_m3212846DF03A63CFFD526A0AFC64AF08166FE380_RuntimeMethod_var);
		__this->___quests_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___quests_5), (void*)L_0);
		// public List<Player> players = new List<Player>();
		List_1_tE2164EA8BAA8705A2E709A2D74744EC5E511A859* L_1 = (List_1_tE2164EA8BAA8705A2E709A2D74744EC5E511A859*)il2cpp_codegen_object_new(List_1_tE2164EA8BAA8705A2E709A2D74744EC5E511A859_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m6C95BE4AA43CEECAE2ABC9B4F106D26F4BE227D7(L_1, List_1__ctor_m6C95BE4AA43CEECAE2ABC9B4F106D26F4BE227D7_RuntimeMethod_var);
		__this->___players_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___players_6), (void*)L_1);
		// List<int> q1 = new List<int>();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_2 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_2, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		__this->___q1_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q1_7), (void*)L_2);
		// List<int> q2 = new List<int>();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_3 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_3, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		__this->___q2_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q2_8), (void*)L_3);
		// List<int> q3 = new List<int>();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_4 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_4, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		__this->___q3_9 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q3_9), (void*)L_4);
		// List<int> q4 = new List<int>();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_5 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_5, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		__this->___q4_10 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q4_10), (void*)L_5);
		// List<int> q5 = new List<int>();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_6 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_6, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		__this->___q5_11 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q5_11), (void*)L_6);
		// int current = -1;
		__this->___current_14 = (-1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Game/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mFA5F18C29ACA6CF34DB214707BC7CADD91AD85AB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD2F9210CA24FE81EFB71CDAB95622429D160CD7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tD2F9210CA24FE81EFB71CDAB95622429D160CD7E* L_0 = (U3CU3Ec_tD2F9210CA24FE81EFB71CDAB95622429D160CD7E*)il2cpp_codegen_object_new(U3CU3Ec_tD2F9210CA24FE81EFB71CDAB95622429D160CD7E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m176597143AE640E743D1594EE7C95CB0D935EDC5(L_0, NULL);
		((U3CU3Ec_tD2F9210CA24FE81EFB71CDAB95622429D160CD7E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD2F9210CA24FE81EFB71CDAB95622429D160CD7E_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD2F9210CA24FE81EFB71CDAB95622429D160CD7E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD2F9210CA24FE81EFB71CDAB95622429D160CD7E_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Game/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m176597143AE640E743D1594EE7C95CB0D935EDC5 (U3CU3Ec_tD2F9210CA24FE81EFB71CDAB95622429D160CD7E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 Game/<>c::<Sort>b__20_0(Quest,Quest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CSortU3Eb__20_0_mEE46DC9B6848B5F2B3A9C0AA2CBAAF67ACB278E9 (U3CU3Ec_tD2F9210CA24FE81EFB71CDAB95622429D160CD7E* __this, Quest_tEC1246A2C0E042A3081F297279B59702FB449CB9* ___a0, Quest_tEC1246A2C0E042A3081F297279B59702FB449CB9* ___b1, const RuntimeMethod* method) 
{
	{
		// if (a.lvl != b.lvl) return a.lvl.CompareTo(b.lvl);
		Quest_tEC1246A2C0E042A3081F297279B59702FB449CB9* L_0 = ___a0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___lvl_1;
		Quest_tEC1246A2C0E042A3081F297279B59702FB449CB9* L_2 = ___b1;
		NullCheck(L_2);
		int32_t L_3 = L_2->___lvl_1;
		if ((((int32_t)L_1) == ((int32_t)L_3)))
		{
			goto IL_0020;
		}
	}
	{
		// if (a.lvl != b.lvl) return a.lvl.CompareTo(b.lvl);
		Quest_tEC1246A2C0E042A3081F297279B59702FB449CB9* L_4 = ___a0;
		NullCheck(L_4);
		int32_t* L_5 = (&L_4->___lvl_1);
		Quest_tEC1246A2C0E042A3081F297279B59702FB449CB9* L_6 = ___b1;
		NullCheck(L_6);
		int32_t L_7 = L_6->___lvl_1;
		int32_t L_8;
		L_8 = Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586(L_5, L_7, NULL);
		return L_8;
	}

IL_0020:
	{
		// else return a.quest.CompareTo(b.quest);
		Quest_tEC1246A2C0E042A3081F297279B59702FB449CB9* L_9 = ___a0;
		NullCheck(L_9);
		String_t* L_10 = L_9->___quest_0;
		Quest_tEC1246A2C0E042A3081F297279B59702FB449CB9* L_11 = ___b1;
		NullCheck(L_11);
		String_t* L_12 = L_11->___quest_0;
		NullCheck(L_10);
		int32_t L_13;
		L_13 = String_CompareTo_m32A3DFBEA443A4091053D53825DBB76E6EAFECCF(L_10, L_12, NULL);
		return L_13;
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
// System.Void MainMenu::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_Start_m1729BDE6D096D9F4C92DBE72B392BA89E9A9ECAD (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAddPlayer_t3ADBE058A67D6165BAF9E1EF934BFD1F571A878A_mEC99A9D14A03B5438D0F21056041F44E84E6F801_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAddQuest_t4ED5F0C1563995DAB9FF94FC9277488928296860_mB0E227FB568AB2E61D201C2E852F0C1DBB4358C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tA6A98F81416961C425C0982A763372581DF081F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m53D5ED85773AF1E2C0F8B34C65597BEC3B2B7306_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mA52752CBCF290840F7A34DCABC1A559D0387ACBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3531CBD1C32E07D868F9C916895554A6C2CDB67C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m5BAB69A5CA4DBC2074EF31F02EF7365FB50A002B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// int s = Game.instance.players.Count;
		Game_tA6A98F81416961C425C0982A763372581DF081F1* L_0 = ((Game_tA6A98F81416961C425C0982A763372581DF081F1_StaticFields*)il2cpp_codegen_static_fields_for(Game_tA6A98F81416961C425C0982A763372581DF081F1_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_0);
		List_1_tE2164EA8BAA8705A2E709A2D74744EC5E511A859* L_1 = L_0->___players_6;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m53D5ED85773AF1E2C0F8B34C65597BEC3B2B7306_inline(L_1, List_1_get_Count_m53D5ED85773AF1E2C0F8B34C65597BEC3B2B7306_RuntimeMethod_var);
		V_0 = L_2;
		// if (s > 0)
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0067;
		}
	}
	{
		// Destroy(playersParent.GetChild(0).gameObject);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___playersParent_11;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_4, 0, NULL);
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_6, NULL);
		// for(int i = 0; i < s; i++)
		V_1 = 0;
		goto IL_0063;
	}

IL_002e:
	{
		// GameObject o = Instantiate(playerPref, playersParent);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___playerPref_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___playersParent_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_7, L_8, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		// AddPlayer p = o.GetComponent<AddPlayer>();
		NullCheck(L_9);
		AddPlayer_t3ADBE058A67D6165BAF9E1EF934BFD1F571A878A* L_10;
		L_10 = GameObject_GetComponent_TisAddPlayer_t3ADBE058A67D6165BAF9E1EF934BFD1F571A878A_mEC99A9D14A03B5438D0F21056041F44E84E6F801(L_9, GameObject_GetComponent_TisAddPlayer_t3ADBE058A67D6165BAF9E1EF934BFD1F571A878A_mEC99A9D14A03B5438D0F21056041F44E84E6F801_RuntimeMethod_var);
		// p.player = Game.instance.players[i];
		AddPlayer_t3ADBE058A67D6165BAF9E1EF934BFD1F571A878A* L_11 = L_10;
		Game_tA6A98F81416961C425C0982A763372581DF081F1* L_12 = ((Game_tA6A98F81416961C425C0982A763372581DF081F1_StaticFields*)il2cpp_codegen_static_fields_for(Game_tA6A98F81416961C425C0982A763372581DF081F1_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_12);
		List_1_tE2164EA8BAA8705A2E709A2D74744EC5E511A859* L_13 = L_12->___players_6;
		int32_t L_14 = V_1;
		NullCheck(L_13);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_15;
		L_15 = List_1_get_Item_m5BAB69A5CA4DBC2074EF31F02EF7365FB50A002B(L_13, L_14, List_1_get_Item_m5BAB69A5CA4DBC2074EF31F02EF7365FB50A002B_RuntimeMethod_var);
		NullCheck(L_11);
		L_11->___player_12 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___player_12), (void*)L_15);
		// p.UpdatePlayer();
		NullCheck(L_11);
		AddPlayer_UpdatePlayer_m7254B9FE287B67F16EEC46B9AA40586BF7BA4B37(L_11, NULL);
		// for(int i = 0; i < s; i++)
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0063:
	{
		// for(int i = 0; i < s; i++)
		int32_t L_17 = V_1;
		int32_t L_18 = V_0;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_002e;
		}
	}

IL_0067:
	{
		// s = Game.instance.quests.Count;
		Game_tA6A98F81416961C425C0982A763372581DF081F1* L_19 = ((Game_tA6A98F81416961C425C0982A763372581DF081F1_StaticFields*)il2cpp_codegen_static_fields_for(Game_tA6A98F81416961C425C0982A763372581DF081F1_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_19);
		List_1_tC535F9CD686AF631ADF2E758CC14257CA84FBC88* L_20 = L_19->___quests_5;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = List_1_get_Count_mA52752CBCF290840F7A34DCABC1A559D0387ACBF_inline(L_20, List_1_get_Count_mA52752CBCF290840F7A34DCABC1A559D0387ACBF_RuntimeMethod_var);
		V_0 = L_21;
		// if (s > 0)
		int32_t L_22 = V_0;
		if ((((int32_t)L_22) <= ((int32_t)0)))
		{
			goto IL_00ce;
		}
	}
	{
		// Destroy(questsParent.GetChild(0).gameObject);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = __this->___questsParent_12;
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_23, 0, NULL);
		NullCheck(L_24);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_24, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_25, NULL);
		// for (int i = 0; i < s; i++)
		V_2 = 0;
		goto IL_00ca;
	}

IL_0095:
	{
		// GameObject o = Instantiate(questPref, questsParent);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->___questPref_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = __this->___questsParent_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
		L_28 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_26, L_27, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		// AddQuest p = o.GetComponent<AddQuest>();
		NullCheck(L_28);
		AddQuest_t4ED5F0C1563995DAB9FF94FC9277488928296860* L_29;
		L_29 = GameObject_GetComponent_TisAddQuest_t4ED5F0C1563995DAB9FF94FC9277488928296860_mB0E227FB568AB2E61D201C2E852F0C1DBB4358C8(L_28, GameObject_GetComponent_TisAddQuest_t4ED5F0C1563995DAB9FF94FC9277488928296860_mB0E227FB568AB2E61D201C2E852F0C1DBB4358C8_RuntimeMethod_var);
		// p.quest = Game.instance.quests[i];
		AddQuest_t4ED5F0C1563995DAB9FF94FC9277488928296860* L_30 = L_29;
		Game_tA6A98F81416961C425C0982A763372581DF081F1* L_31 = ((Game_tA6A98F81416961C425C0982A763372581DF081F1_StaticFields*)il2cpp_codegen_static_fields_for(Game_tA6A98F81416961C425C0982A763372581DF081F1_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_31);
		List_1_tC535F9CD686AF631ADF2E758CC14257CA84FBC88* L_32 = L_31->___quests_5;
		int32_t L_33 = V_2;
		NullCheck(L_32);
		Quest_tEC1246A2C0E042A3081F297279B59702FB449CB9* L_34;
		L_34 = List_1_get_Item_m3531CBD1C32E07D868F9C916895554A6C2CDB67C(L_32, L_33, List_1_get_Item_m3531CBD1C32E07D868F9C916895554A6C2CDB67C_RuntimeMethod_var);
		NullCheck(L_30);
		L_30->___quest_17 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&L_30->___quest_17), (void*)L_34);
		// p.UpdateQuest();
		NullCheck(L_30);
		AddQuest_UpdateQuest_mD9775AB7DCEA84900B747A4BADA525D2D0DA72B5(L_30, NULL);
		// for (int i = 0; i < s; i++)
		int32_t L_35 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00ca:
	{
		// for (int i = 0; i < s; i++)
		int32_t L_36 = V_2;
		int32_t L_37 = V_0;
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_0095;
		}
	}

IL_00ce:
	{
		// }
		return;
	}
}
// System.Void MainMenu::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_Play_m83A060624413533808E63A4420ECEFA5A9FB07E6 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	{
		// playPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___playPanel_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void MainMenu::Players()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_Players_m15F5756032A4524EFDC782103B7785A678FFC018 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	{
		// playersPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___playersPanel_5;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void MainMenu::Quests()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_Quests_mE564CDD033B274D054701DF4A8A010E6A126A0AB (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	{
		// questsPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___questsPanel_6;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void MainMenu::Options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_Options_m9F8823529F29FF1E39305F6CC48A1826A1F1EEFC (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	{
		// optionsPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___optionsPanel_7;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void MainMenu::Exit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_Exit_m6F5450D0B3DAA7105D4D000F93C37AA6328F9B78 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	{
		// playPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___playPanel_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// playersPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___playersPanel_5;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// questsPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___questsPanel_6;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// optionsPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___optionsPanel_7;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void MainMenu::AddPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_AddPlayer_m10DEBFFF6AAEDAE93DEFDF0F134D9DB376D23A75 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instantiate(playerPref, playersParent);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___playerPref_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___playersParent_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_0, L_1, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void MainMenu::AddQuest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_AddQuest_m3E2EF95E010D1657E90390649A347F2779C1F9A6 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instantiate(questPref, questsParent);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___questPref_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___questsParent_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_0, L_1, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void MainMenu::SubmitPlayers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_SubmitPlayers_m2F8DAB76B1084124567580B2404842D13F11E899 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAddPlayer_t3ADBE058A67D6165BAF9E1EF934BFD1F571A878A_m8C95E71BC9243F8AA4D2A4ED2580FDBDF5CB98C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tA6A98F81416961C425C0982A763372581DF081F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5D6171A2ACE4310127DD8B97BB94C633F1830EF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mB08A06A97EFF37BE9A031630747AF8EB8CB71D0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	AddPlayer_t3ADBE058A67D6165BAF9E1EF934BFD1F571A878A* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// Game.instance.players.Clear();
		Game_tA6A98F81416961C425C0982A763372581DF081F1* L_0 = ((Game_tA6A98F81416961C425C0982A763372581DF081F1_StaticFields*)il2cpp_codegen_static_fields_for(Game_tA6A98F81416961C425C0982A763372581DF081F1_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_0);
		List_1_tE2164EA8BAA8705A2E709A2D74744EC5E511A859* L_1 = L_0->___players_6;
		NullCheck(L_1);
		List_1_Clear_mB08A06A97EFF37BE9A031630747AF8EB8CB71D0D_inline(L_1, List_1_Clear_mB08A06A97EFF37BE9A031630747AF8EB8CB71D0D_RuntimeMethod_var);
		// foreach (Transform child in playersParent)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___playersParent_11;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_2, NULL);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0056:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_0;
					V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_2;
					if (!L_5)
					{
						goto IL_0066;
					}
				}
				{
					RuntimeObject* L_6 = V_2;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0066:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_004c_1;
			}

IL_001d_1:
			{
				// foreach (Transform child in playersParent)
				RuntimeObject* L_7 = V_0;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				// AddPlayer p = child.GetComponent<AddPlayer>();
				NullCheck(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_8, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)));
				AddPlayer_t3ADBE058A67D6165BAF9E1EF934BFD1F571A878A* L_9;
				L_9 = Component_GetComponent_TisAddPlayer_t3ADBE058A67D6165BAF9E1EF934BFD1F571A878A_m8C95E71BC9243F8AA4D2A4ED2580FDBDF5CB98C1(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_8, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), Component_GetComponent_TisAddPlayer_t3ADBE058A67D6165BAF9E1EF934BFD1F571A878A_m8C95E71BC9243F8AA4D2A4ED2580FDBDF5CB98C1_RuntimeMethod_var);
				V_1 = L_9;
				// if(p != null)
				AddPlayer_t3ADBE058A67D6165BAF9E1EF934BFD1F571A878A* L_10 = V_1;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_11;
				L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_11)
				{
					goto IL_004c_1;
				}
			}
			{
				// Game.instance.players.Add(p.player);
				Game_tA6A98F81416961C425C0982A763372581DF081F1* L_12 = ((Game_tA6A98F81416961C425C0982A763372581DF081F1_StaticFields*)il2cpp_codegen_static_fields_for(Game_tA6A98F81416961C425C0982A763372581DF081F1_il2cpp_TypeInfo_var))->___instance_4;
				NullCheck(L_12);
				List_1_tE2164EA8BAA8705A2E709A2D74744EC5E511A859* L_13 = L_12->___players_6;
				AddPlayer_t3ADBE058A67D6165BAF9E1EF934BFD1F571A878A* L_14 = V_1;
				NullCheck(L_14);
				Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_15 = L_14->___player_12;
				NullCheck(L_13);
				List_1_Add_m5D6171A2ACE4310127DD8B97BB94C633F1830EF8_inline(L_13, L_15, List_1_Add_m5D6171A2ACE4310127DD8B97BB94C633F1830EF8_RuntimeMethod_var);
			}

IL_004c_1:
			{
				// foreach (Transform child in playersParent)
				RuntimeObject* L_16 = V_0;
				NullCheck(L_16);
				bool L_17;
				L_17 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_16);
				if (L_17)
				{
					goto IL_001d_1;
				}
			}
			{
				goto IL_0067;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0067:
	{
		// }
		return;
	}
}
// System.Void MainMenu::SubmitQuest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_SubmitQuest_mA31E6667FBBD036881F78EB122B577F0401F402A (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAddQuest_t4ED5F0C1563995DAB9FF94FC9277488928296860_m421A17C6A334CDCDF0766A7D360E32D1D4FC31D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tA6A98F81416961C425C0982A763372581DF081F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD8E256BA24844F3F97CD976D60E46382FE9FF746_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m4A42DCAB3920517CA9F56F482C64458A058EEB18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	AddQuest_t4ED5F0C1563995DAB9FF94FC9277488928296860* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// Game.instance.quests.Clear();
		Game_tA6A98F81416961C425C0982A763372581DF081F1* L_0 = ((Game_tA6A98F81416961C425C0982A763372581DF081F1_StaticFields*)il2cpp_codegen_static_fields_for(Game_tA6A98F81416961C425C0982A763372581DF081F1_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_0);
		List_1_tC535F9CD686AF631ADF2E758CC14257CA84FBC88* L_1 = L_0->___quests_5;
		NullCheck(L_1);
		List_1_Clear_m4A42DCAB3920517CA9F56F482C64458A058EEB18_inline(L_1, List_1_Clear_m4A42DCAB3920517CA9F56F482C64458A058EEB18_RuntimeMethod_var);
		// foreach (Transform child in questsParent)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___questsParent_12;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_2, NULL);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0056:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_0;
					V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_2;
					if (!L_5)
					{
						goto IL_0066;
					}
				}
				{
					RuntimeObject* L_6 = V_2;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0066:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_004c_1;
			}

IL_001d_1:
			{
				// foreach (Transform child in questsParent)
				RuntimeObject* L_7 = V_0;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				// AddQuest q = child.GetComponent<AddQuest>();
				NullCheck(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_8, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)));
				AddQuest_t4ED5F0C1563995DAB9FF94FC9277488928296860* L_9;
				L_9 = Component_GetComponent_TisAddQuest_t4ED5F0C1563995DAB9FF94FC9277488928296860_m421A17C6A334CDCDF0766A7D360E32D1D4FC31D7(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_8, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), Component_GetComponent_TisAddQuest_t4ED5F0C1563995DAB9FF94FC9277488928296860_m421A17C6A334CDCDF0766A7D360E32D1D4FC31D7_RuntimeMethod_var);
				V_1 = L_9;
				// if (q != null)
				AddQuest_t4ED5F0C1563995DAB9FF94FC9277488928296860* L_10 = V_1;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_11;
				L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_11)
				{
					goto IL_004c_1;
				}
			}
			{
				// Game.instance.quests.Add(q.quest);
				Game_tA6A98F81416961C425C0982A763372581DF081F1* L_12 = ((Game_tA6A98F81416961C425C0982A763372581DF081F1_StaticFields*)il2cpp_codegen_static_fields_for(Game_tA6A98F81416961C425C0982A763372581DF081F1_il2cpp_TypeInfo_var))->___instance_4;
				NullCheck(L_12);
				List_1_tC535F9CD686AF631ADF2E758CC14257CA84FBC88* L_13 = L_12->___quests_5;
				AddQuest_t4ED5F0C1563995DAB9FF94FC9277488928296860* L_14 = V_1;
				NullCheck(L_14);
				Quest_tEC1246A2C0E042A3081F297279B59702FB449CB9* L_15 = L_14->___quest_17;
				NullCheck(L_13);
				List_1_Add_mD8E256BA24844F3F97CD976D60E46382FE9FF746_inline(L_13, L_15, List_1_Add_mD8E256BA24844F3F97CD976D60E46382FE9FF746_RuntimeMethod_var);
			}

IL_004c_1:
			{
				// foreach (Transform child in questsParent)
				RuntimeObject* L_16 = V_0;
				NullCheck(L_16);
				bool L_17;
				L_17 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_16);
				if (L_17)
				{
					goto IL_001d_1;
				}
			}
			{
				goto IL_0067;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0067:
	{
		// Game.instance.updateQuests();
		Game_tA6A98F81416961C425C0982A763372581DF081F1* L_18 = ((Game_tA6A98F81416961C425C0982A763372581DF081F1_StaticFields*)il2cpp_codegen_static_fields_for(Game_tA6A98F81416961C425C0982A763372581DF081F1_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_18);
		Game_updateQuests_m7D9AE3BC5F3065D4FFF1342B16F37399BE8D3543(L_18, NULL);
		// }
		return;
	}
}
// System.Void MainMenu::ChangeLvl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_ChangeLvl_mC77170AF14D09D61CBDF86D835781AB6A34DA184 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Colors_t4FBC8F9BC3173CFB15C6164CC275EEBAC6E0E973_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAddQuest_t4ED5F0C1563995DAB9FF94FC9277488928296860_m421A17C6A334CDCDF0766A7D360E32D1D4FC31D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B122769966B9AD67C35D51E4E00AB036C327989);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF92DDD5C3258D4667CC2EC32868648986EBA9098);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		// lvl++;
		int32_t L_0 = __this->___lvl_13;
		__this->___lvl_13 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// if (lvl > 5) lvl = 0;
		int32_t L_1 = __this->___lvl_13;
		if ((((int32_t)L_1) <= ((int32_t)5)))
		{
			goto IL_001e;
		}
	}
	{
		// if (lvl > 5) lvl = 0;
		__this->___lvl_13 = 0;
	}

IL_001e:
	{
		// switch (lvl)
		int32_t L_2 = __this->___lvl_13;
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0048;
			}
			case 1:
			{
				goto IL_006e;
			}
			case 2:
			{
				goto IL_0085;
			}
			case 3:
			{
				goto IL_009c;
			}
			case 4:
			{
				goto IL_00b3;
			}
			case 5:
			{
				goto IL_00ca;
			}
		}
	}
	{
		goto IL_00df;
	}

IL_0048:
	{
		// case 0: image.color = new Color(255, 255, 255, 255); break;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___image_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		memset((&L_5), 0, sizeof(L_5));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_5), (255.0f), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_4, L_5);
		// case 0: image.color = new Color(255, 255, 255, 255); break;
		goto IL_00df;
	}

IL_006e:
	{
		// case 1: image.color = Colors.instance.cLvl1; break;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6 = __this->___image_14;
		Colors_t4FBC8F9BC3173CFB15C6164CC275EEBAC6E0E973* L_7 = ((Colors_t4FBC8F9BC3173CFB15C6164CC275EEBAC6E0E973_StaticFields*)il2cpp_codegen_static_fields_for(Colors_t4FBC8F9BC3173CFB15C6164CC275EEBAC6E0E973_il2cpp_TypeInfo_var))->___instance_12;
		NullCheck(L_7);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = L_7->___cLvl1_7;
		NullCheck(L_6);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_6, L_8);
		// case 1: image.color = Colors.instance.cLvl1; break;
		goto IL_00df;
	}

IL_0085:
	{
		// case 2: image.color = Colors.instance.cLvl2; break;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9 = __this->___image_14;
		Colors_t4FBC8F9BC3173CFB15C6164CC275EEBAC6E0E973* L_10 = ((Colors_t4FBC8F9BC3173CFB15C6164CC275EEBAC6E0E973_StaticFields*)il2cpp_codegen_static_fields_for(Colors_t4FBC8F9BC3173CFB15C6164CC275EEBAC6E0E973_il2cpp_TypeInfo_var))->___instance_12;
		NullCheck(L_10);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = L_10->___cLvl2_8;
		NullCheck(L_9);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_9, L_11);
		// case 2: image.color = Colors.instance.cLvl2; break;
		goto IL_00df;
	}

IL_009c:
	{
		// case 3: image.color = Colors.instance.cLvl3; break;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12 = __this->___image_14;
		Colors_t4FBC8F9BC3173CFB15C6164CC275EEBAC6E0E973* L_13 = ((Colors_t4FBC8F9BC3173CFB15C6164CC275EEBAC6E0E973_StaticFields*)il2cpp_codegen_static_fields_for(Colors_t4FBC8F9BC3173CFB15C6164CC275EEBAC6E0E973_il2cpp_TypeInfo_var))->___instance_12;
		NullCheck(L_13);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = L_13->___cLvl3_9;
		NullCheck(L_12);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_12, L_14);
		// case 3: image.color = Colors.instance.cLvl3; break;
		goto IL_00df;
	}

IL_00b3:
	{
		// case 4: image.color = Colors.instance.cLvl4; break;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15 = __this->___image_14;
		Colors_t4FBC8F9BC3173CFB15C6164CC275EEBAC6E0E973* L_16 = ((Colors_t4FBC8F9BC3173CFB15C6164CC275EEBAC6E0E973_StaticFields*)il2cpp_codegen_static_fields_for(Colors_t4FBC8F9BC3173CFB15C6164CC275EEBAC6E0E973_il2cpp_TypeInfo_var))->___instance_12;
		NullCheck(L_16);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = L_16->___cLvl4_10;
		NullCheck(L_15);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_15, L_17);
		// case 4: image.color = Colors.instance.cLvl4; break;
		goto IL_00df;
	}

IL_00ca:
	{
		// case 5: image.color = Colors.instance.cLvl5; break;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_18 = __this->___image_14;
		Colors_t4FBC8F9BC3173CFB15C6164CC275EEBAC6E0E973* L_19 = ((Colors_t4FBC8F9BC3173CFB15C6164CC275EEBAC6E0E973_StaticFields*)il2cpp_codegen_static_fields_for(Colors_t4FBC8F9BC3173CFB15C6164CC275EEBAC6E0E973_il2cpp_TypeInfo_var))->___instance_12;
		NullCheck(L_19);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = L_19->___cLvl5_11;
		NullCheck(L_18);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_18, L_20);
	}

IL_00df:
	{
		// if (lvl == 0) text.text = "all";
		int32_t L_21 = __this->___lvl_13;
		if (L_21)
		{
			goto IL_00f9;
		}
	}
	{
		// if (lvl == 0) text.text = "all";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_22 = __this->___text_15;
		NullCheck(L_22);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_22, _stringLiteralF92DDD5C3258D4667CC2EC32868648986EBA9098);
		goto IL_0119;
	}

IL_00f9:
	{
		// else text.text = "lvl " + lvl;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_23 = __this->___text_15;
		int32_t* L_24 = (&__this->___lvl_13);
		String_t* L_25;
		L_25 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_24, NULL);
		String_t* L_26;
		L_26 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral1B122769966B9AD67C35D51E4E00AB036C327989, L_25, NULL);
		NullCheck(L_23);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_23, L_26);
	}

IL_0119:
	{
		// foreach (Transform t in questsParent)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = __this->___questsParent_12;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_27, NULL);
		V_1 = L_28;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0177:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_29 = V_1;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_30 = V_3;
					if (!L_30)
					{
						goto IL_0187;
					}
				}
				{
					RuntimeObject* L_31 = V_3;
					NullCheck(L_31);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_31);
				}

IL_0187:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_016d_1;
			}

IL_0127_1:
			{
				// foreach (Transform t in questsParent)
				RuntimeObject* L_32 = V_1;
				NullCheck(L_32);
				RuntimeObject* L_33;
				L_33 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_32);
				V_2 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_33, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var));
				// if(lvl == 0 || t.GetComponent<AddQuest>().quest.lvl == lvl)
				int32_t L_34 = __this->___lvl_13;
				if (!L_34)
				{
					goto IL_0153_1;
				}
			}
			{
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35 = V_2;
				NullCheck(L_35);
				AddQuest_t4ED5F0C1563995DAB9FF94FC9277488928296860* L_36;
				L_36 = Component_GetComponent_TisAddQuest_t4ED5F0C1563995DAB9FF94FC9277488928296860_m421A17C6A334CDCDF0766A7D360E32D1D4FC31D7(L_35, Component_GetComponent_TisAddQuest_t4ED5F0C1563995DAB9FF94FC9277488928296860_m421A17C6A334CDCDF0766A7D360E32D1D4FC31D7_RuntimeMethod_var);
				NullCheck(L_36);
				Quest_tEC1246A2C0E042A3081F297279B59702FB449CB9* L_37 = L_36->___quest_17;
				NullCheck(L_37);
				int32_t L_38 = L_37->___lvl_1;
				int32_t L_39 = __this->___lvl_13;
				if ((!(((uint32_t)L_38) == ((uint32_t)L_39))))
				{
					goto IL_0161_1;
				}
			}

IL_0153_1:
			{
				// t.gameObject.SetActive(true);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40 = V_2;
				NullCheck(L_40);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41;
				L_41 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_40, NULL);
				NullCheck(L_41);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_41, (bool)1, NULL);
				goto IL_016d_1;
			}

IL_0161_1:
			{
				// else t.gameObject.SetActive(false);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42 = V_2;
				NullCheck(L_42);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43;
				L_43 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_42, NULL);
				NullCheck(L_43);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_43, (bool)0, NULL);
			}

IL_016d_1:
			{
				// foreach (Transform t in questsParent)
				RuntimeObject* L_44 = V_1;
				NullCheck(L_44);
				bool L_45;
				L_45 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_44);
				if (L_45)
				{
					goto IL_0127_1;
				}
			}
			{
				goto IL_0188;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0188:
	{
		// }
		return;
	}
}
// System.Void MainMenu::ShowInstruction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_ShowInstruction_m34D666DC014DFC6337EBCFC9F3C7C7EEFFA61EFD (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	{
		// instructionPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___instructionPanel_8;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void MainMenu::ShowNextInstruction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_ShowNextInstruction_m3020A90ADE539D326DF5B45B5EA4C3E8F0029CBC (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F1ACAF3C174916005394A01436AA53AE526F4DD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7503DA80C5434E4C6BA9A7A3A78A7AD767604CCF);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	{
		// string[] ss = {"Meaning of levels:\n\n" +
		//         "lvl 1:\nno problem for sober, comfortable\n\n"+
		//         "lvl 2:\nno problem for sober, less comfortable\n\n"+
		//         "lvl 3:\nI'd like to be less sober\n\n"+
		//         "lvl 4:\nI'd like to be drunk\n\n"+
		//         "lvl 5:\nI'd like to be drunk as hell",
		// 
		//         "If sb don't want to do a challange they must drink!\n\n" +
		//         "If the challange does include drinking already, you can't skip it.\n\n" +
		//         "Click on the right if the challange was complerted - it won't appear again. Click on the left otherwise.\n\n" +
		//         "Restart progress button - sets all quests to notUsed.\n"+
		//         "It won't delete or restore anything,\nso be carefull with your decisions."
		// };
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral4F1ACAF3C174916005394A01436AA53AE526F4DD);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral4F1ACAF3C174916005394A01436AA53AE526F4DD);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral7503DA80C5434E4C6BA9A7A3A78A7AD767604CCF);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral7503DA80C5434E4C6BA9A7A3A78A7AD767604CCF);
		V_0 = L_2;
		// i++;
		int32_t L_3 = __this->___i_17;
		__this->___i_17 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		// if (i < ss.Length) instructionText.text = ss[i];
		int32_t L_4 = __this->___i_17;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = V_0;
		NullCheck(L_5);
		if ((((int32_t)L_4) >= ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))))
		{
			goto IL_0044;
		}
	}
	{
		// if (i < ss.Length) instructionText.text = ss[i];
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_6 = __this->___instructionText_16;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = V_0;
		int32_t L_8 = __this->___i_17;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		String_t* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_6, L_10);
		return;
	}

IL_0044:
	{
		// else instructionPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___instructionPanel_8;
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void MainMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu__ctor_m8209CEC1D907C87A96D777961F4D0536E6E948DD (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_m0A83E0706592FC871B0CF188B37AFC6649F3D85D (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// public bool isMale = true;
		__this->___isMale_1 = (bool)1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Quest::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quest__ctor_m0F4980FF07F9E6DAC348D12C54A9C379A2A5CD6C (Quest_tEC1246A2C0E042A3081F297279B59702FB449CB9* __this, String_t* ___quest0, int32_t ___lvl1, const RuntimeMethod* method) 
{
	{
		// public int lvl = 1;
		__this->___lvl_1 = 1;
		// public Gender gender = Gender.everyone;
		__this->___gender_3 = 2;
		// public Quest(string quest, int lvl)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.quest = quest;
		String_t* L_0 = ___quest0;
		__this->___quest_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___quest_0), (void*)L_0);
		// this.lvl = lvl;
		int32_t L_1 = ___lvl1;
		__this->___lvl_1 = L_1;
		// }
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
// System.Void SaveData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveData__ctor_m7E683A9CD703CB4058EEA6C1BBC22F4EDE2F76E5 (SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tA6A98F81416961C425C0982A763372581DF081F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SaveData()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// quests =    Game.instance.quests;
		Game_tA6A98F81416961C425C0982A763372581DF081F1* L_0 = ((Game_tA6A98F81416961C425C0982A763372581DF081F1_StaticFields*)il2cpp_codegen_static_fields_for(Game_tA6A98F81416961C425C0982A763372581DF081F1_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_0);
		List_1_tC535F9CD686AF631ADF2E758CC14257CA84FBC88* L_1 = L_0->___quests_5;
		__this->___quests_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___quests_0), (void*)L_1);
		// players =   Game.instance.players;
		Game_tA6A98F81416961C425C0982A763372581DF081F1* L_2 = ((Game_tA6A98F81416961C425C0982A763372581DF081F1_StaticFields*)il2cpp_codegen_static_fields_for(Game_tA6A98F81416961C425C0982A763372581DF081F1_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_2);
		List_1_tE2164EA8BAA8705A2E709A2D74744EC5E511A859* L_3 = L_2->___players_6;
		__this->___players_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___players_1), (void*)L_3);
		// }
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
// System.Void SaveLoad::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveLoad_Save_m14A03AB14BA3254FB0ABAF891C9990C1B33D9CED (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveLoad_t9057ED9262F85AC317794B37B80A402744502C14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21F7AEEB84E3EF4DC4D495B2E36433B334266FD9);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// SaveData sd = new SaveData();
		SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* L_0 = (SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29*)il2cpp_codegen_object_new(SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SaveData__ctor_m7E683A9CD703CB4058EEA6C1BBC22F4EDE2F76E5(L_0, NULL);
		// string json = JsonUtility.ToJson(sd);
		String_t* L_1;
		L_1 = JsonUtility_ToJson_mD0FB24DC5A8621A2473FC208E9B15AF43944EBCD(L_0, NULL);
		V_0 = L_1;
		// File.WriteAllText(path, json);
		il2cpp_codegen_runtime_class_init_inline(SaveLoad_t9057ED9262F85AC317794B37B80A402744502C14_il2cpp_TypeInfo_var);
		String_t* L_2 = ((SaveLoad_t9057ED9262F85AC317794B37B80A402744502C14_StaticFields*)il2cpp_codegen_static_fields_for(SaveLoad_t9057ED9262F85AC317794B37B80A402744502C14_il2cpp_TypeInfo_var))->___path_4;
		String_t* L_3 = V_0;
		File_WriteAllText_mE462D8448CA65183AA5D464210706167E0EF19EB(L_2, L_3, NULL);
		// Debug.Log("Saved");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral21F7AEEB84E3EF4DC4D495B2E36433B334266FD9, NULL);
		// }
		return;
	}
}
// System.Void SaveLoad::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveLoad_Load_mE287BE7721AF216FF91874ADEEFBFB4CC082EB59 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tA6A98F81416961C425C0982A763372581DF081F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisSaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29_mAD02E4C0FBD2AD3DF55EF8A88D94268F6D5F1A06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveLoad_t9057ED9262F85AC317794B37B80A402744502C14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1DA3E2C42776059DD48942A366C3DD2BFC0BE961);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEECDF3B69A9A6966F69107842CD6D746DBE70049);
		s_Il2CppMethodInitialized = true;
	}
	SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* V_0 = NULL;
	{
		// if (File.Exists(path))
		il2cpp_codegen_runtime_class_init_inline(SaveLoad_t9057ED9262F85AC317794B37B80A402744502C14_il2cpp_TypeInfo_var);
		String_t* L_0 = ((SaveLoad_t9057ED9262F85AC317794B37B80A402744502C14_StaticFields*)il2cpp_codegen_static_fields_for(SaveLoad_t9057ED9262F85AC317794B37B80A402744502C14_il2cpp_TypeInfo_var))->___path_4;
		bool L_1;
		L_1 = File_Exists_mD7E7A84A6B9E9A9BADBDA7C46AAE0624EF106D85(L_0, NULL);
		if (!L_1)
		{
			goto IL_0047;
		}
	}
	{
		// string json = File.ReadAllText(path);
		il2cpp_codegen_runtime_class_init_inline(SaveLoad_t9057ED9262F85AC317794B37B80A402744502C14_il2cpp_TypeInfo_var);
		String_t* L_2 = ((SaveLoad_t9057ED9262F85AC317794B37B80A402744502C14_StaticFields*)il2cpp_codegen_static_fields_for(SaveLoad_t9057ED9262F85AC317794B37B80A402744502C14_il2cpp_TypeInfo_var))->___path_4;
		String_t* L_3;
		L_3 = File_ReadAllText_m5635BE83C14358AB1721547180F43103F777CEB5(L_2, NULL);
		// SaveData sd = JsonUtility.FromJson<SaveData>(json);
		SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* L_4;
		L_4 = JsonUtility_FromJson_TisSaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29_mAD02E4C0FBD2AD3DF55EF8A88D94268F6D5F1A06(L_3, JsonUtility_FromJson_TisSaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29_mAD02E4C0FBD2AD3DF55EF8A88D94268F6D5F1A06_RuntimeMethod_var);
		V_0 = L_4;
		// Game.instance.quests = sd.quests;
		Game_tA6A98F81416961C425C0982A763372581DF081F1* L_5 = ((Game_tA6A98F81416961C425C0982A763372581DF081F1_StaticFields*)il2cpp_codegen_static_fields_for(Game_tA6A98F81416961C425C0982A763372581DF081F1_il2cpp_TypeInfo_var))->___instance_4;
		SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* L_6 = V_0;
		NullCheck(L_6);
		List_1_tC535F9CD686AF631ADF2E758CC14257CA84FBC88* L_7 = L_6->___quests_0;
		NullCheck(L_5);
		L_5->___quests_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___quests_5), (void*)L_7);
		// Game.instance.players = sd.players;
		Game_tA6A98F81416961C425C0982A763372581DF081F1* L_8 = ((Game_tA6A98F81416961C425C0982A763372581DF081F1_StaticFields*)il2cpp_codegen_static_fields_for(Game_tA6A98F81416961C425C0982A763372581DF081F1_il2cpp_TypeInfo_var))->___instance_4;
		SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* L_9 = V_0;
		NullCheck(L_9);
		List_1_tE2164EA8BAA8705A2E709A2D74744EC5E511A859* L_10 = L_9->___players_1;
		NullCheck(L_8);
		L_8->___players_6 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___players_6), (void*)L_10);
		// Debug.Log("Loaded");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralEECDF3B69A9A6966F69107842CD6D746DBE70049, NULL);
		return;
	}

IL_0047:
	{
		// Debug.Log("File was not found");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral1DA3E2C42776059DD48942A366C3DD2BFC0BE961, NULL);
		// }
		return;
	}
}
// System.Void SaveLoad::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveLoad__ctor_m1028727B5EDBE319DA62C90D8C967C7A68A3AD53 (SaveLoad_t9057ED9262F85AC317794B37B80A402744502C14* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void SaveLoad::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveLoad__cctor_m491666488BBF81048FF20F2D58D1573582CF35D0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveLoad_t9057ED9262F85AC317794B37B80A402744502C14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E74F79A045BA55F8905E76A9C3039DE7AF3D77E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static string path = "Assets\\StreamingAssets\\All Questions.txt";
		((SaveLoad_t9057ED9262F85AC317794B37B80A402744502C14_StaticFields*)il2cpp_codegen_static_fields_for(SaveLoad_t9057ED9262F85AC317794B37B80A402744502C14_il2cpp_TypeInfo_var))->___path_4 = _stringLiteral7E74F79A045BA55F8905E76A9C3039DE7AF3D77E;
		Il2CppCodeGenWriteBarrier((void**)(&((SaveLoad_t9057ED9262F85AC317794B37B80A402744502C14_StaticFields*)il2cpp_codegen_static_fields_for(SaveLoad_t9057ED9262F85AC317794B37B80A402744502C14_il2cpp_TypeInfo_var))->___path_4), (void*)_stringLiteral7E74F79A045BA55F8905E76A9C3039DE7AF3D77E);
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
// System.Void START::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void START_Awake_mD9FC258E5B92B8A482E84564B8E6AEAED15B6BD0 (START_t6950252134D0B7A57418AFB92417F5D812398C84* __this, const RuntimeMethod* method) 
{
	{
		// QualitySettings.vSyncCount = 0;  // VSync must be disabled
		QualitySettings_set_vSyncCount_m37CB89BA3DF4BE2E181339F5F44F03C493733360(0, NULL);
		// Application.targetFrameRate = 60;
		Application_set_targetFrameRate_m794A13DC5116C506B042663606691257CF3A7325(((int32_t)60), NULL);
		// }
		return;
	}
}
// System.Void START::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void START__ctor_m439B4959698288394F5BACB9BFECFFDA883FFFEF (START_t6950252134D0B7A57418AFB92417F5D812398C84* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) 
{
	{
		// return m_Text;
		String_t* L_0 = __this->___m_Text_60;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method) 
{
	{
		__this->___rgba_0 = 0;
		uint8_t L_0 = ___r0;
		__this->___r_1 = L_0;
		uint8_t L_1 = ___g1;
		__this->___g_2 = L_1;
		uint8_t L_2 = ___b2;
		__this->___b_3 = L_2;
		uint8_t L_3 = ___a3;
		__this->___a_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___c0, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = ___c0;
		uint8_t L_1 = L_0.___r_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_2 = ___c0;
		uint8_t L_3 = L_2.___g_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_4 = ___c0;
		uint8_t L_5 = L_4.___b_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_6 = ___c0;
		uint8_t L_7 = L_6.___a_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_8), ((float)(((float)L_1)/(255.0f))), ((float)(((float)L_3)/(255.0f))), ((float)(((float)L_5)/(255.0f))), ((float)(((float)L_7)/(255.0f))), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_003d;
	}

IL_003d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
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
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___item0;
		List_1_AddWithResize_m378B392086AAB6F400944FA9839516326B3F7BB8(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
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
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
