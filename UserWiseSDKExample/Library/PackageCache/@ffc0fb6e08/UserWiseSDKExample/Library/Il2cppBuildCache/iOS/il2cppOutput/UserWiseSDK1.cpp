﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<UserWiseSDK.Internal.API.APIResponse>
struct Action_1_tFCB412D46FF51645C0DC0D13515EF4C0D61FEFFB;
// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83;
// System.Action`1<UserWiseSDK.Internal.Triggers.ITriggerable>
struct Action_1_t8B9D154E6AC4F2C06ED9B8727E61F426060B7170;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`2<System.Boolean,System.Byte[]>
struct Action_2_t6AE767DB2F0E371CDCC9FC496C39B598B1D20B3E;
// System.Action`2<System.Boolean,UserWiseSDK.MediaInfo>
struct Action_2_tC9B6AFEE9B1498523B4F9EBDBC90FA84E9EB9393;
// System.Action`2<System.Boolean,System.Object>
struct Action_2_t48DF0C0D4F3A3AB463DECA881851C95F1A5B0E72;
// System.Collections.Generic.Dictionary`2<UserWiseSDK.Internal.Scheduled.ISchedulable,System.Collections.IEnumerator>
struct Dictionary_2_t72C4E4F8B3ADB9219021174DB3949759B035C9D0;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Object>>
struct Dictionary_2_tBC3D75391B3A91841136B660BDB52AABDF625D3C;
// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
struct Dictionary_2_t89F1337E661E2EFCB4C0B7F9C0FE6C3BC09383E9;
// System.Collections.Generic.Dictionary`2<System.String,UserWiseSDK.MediaInfo>
struct Dictionary_2_tB0FB41928F6EF012A87C0AADD61CC5B74BF33C22;
// System.Collections.Generic.Dictionary`2<System.String,UserWiseSDK.MediaVariant>
struct Dictionary_2_tFA373B3096D6615E45CAF3846685613730BA1E79;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399;
// System.EventHandler`1<UserWiseSDK.Events.GameEventEventArgs>
struct EventHandler_1_t9566C51B3744C343CC707DE83C20DC7EA8A39BAE;
// System.EventHandler`1<UserWiseSDK.Messages.MessageEventArgs>
struct EventHandler_1_t7A31148CCAB55ABA8B9E4FA24AFED408F0E6DB9D;
// System.EventHandler`1<UserWiseSDK.Messages.MessagesLoadedEventArgs>
struct EventHandler_1_t6482188854EFCB00EC073E8819393CDE2743482A;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB;
// System.EventHandler`1<UserWiseSDK.Offers.OfferEventArgs>
struct EventHandler_1_t7827DEAD0F31A439E5160F227B30EA39AF88FCBA;
// System.EventHandler`1<UserWiseSDK.Offers.OfferImpressionEventArgs>
struct EventHandler_1_tE5C3802BDD10C52FDA59E18CC1D58768C92E0A57;
// System.EventHandler`1<UserWiseSDK.Events.OnEventsLoadedEventArgs>
struct EventHandler_1_t5C2B9AFBEC790C6B97C97C53E88612027964BB45;
// System.EventHandler`1<UserWiseSDK.OnSessionInitializedEventArgs>
struct EventHandler_1_t410873E26095B700A7985EE8CE2B8D4415BF3EA1;
// System.EventHandler`1<UserWiseSDK.OnStartEventArgs>
struct EventHandler_1_t7CC7A6F8523F1B42EC272EDD550AF4B9CD218878;
// System.EventHandler`1<UserWiseSDK.Variables.Types.OnValueChangeEventArgs>
struct EventHandler_1_t8BA7C98495FFAC2626F102D680E05F7066D6E69C;
// System.EventHandler`1<UserWiseSDK.Surveys.SurveyEventArgs>
struct EventHandler_1_t4DCF486377698D15BE19DC4DA76BFE0FE5B70770;
// System.EventHandler`1<UserWiseSDK.Surveys.SurveyInviteInitializedEventArgs>
struct EventHandler_1_t7E16AEA66F6C4636B6E10A9A2ADCD1429BE4F555;
// System.EventHandler`1<UserWiseSDK.Surveys.SurveyResponseIdEventArgs>
struct EventHandler_1_t1BEB15B2B124055FE88D844DA101A6E2D5F07668;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.List`1<System.Object>>
struct KeyCollection_tF9CFB95F4615D4EBB544CB4EA1C9E6C54ADF193B;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17;
// System.Lazy`1<UserWiseSDK.UserWise>
struct Lazy_1_t321FD8275F80723BDEB69B00532E4113E8D4C59A;
// System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>
struct List_1_t3CAEFF22F70FA8270239B1324BE3AABD8B5BD0C0;
// System.Collections.Generic.List`1<System.DateTime>
struct List_1_t7240E3382CB212F4FEB22D7A3E93EE9152E03CBC;
// System.Collections.Generic.List`1<System.Double>
struct List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC;
// System.Collections.Generic.List`1<UserWiseSDK.Events.GameEvent>
struct List_1_tE62939D5C1612114BA235F6D4E4BAEF045368813;
// System.Collections.Generic.List`1<UserWiseSDK.Internal.Triggers.ITriggerable>
struct List_1_t92B053769F1F29417E25AE8F630FE7F9B7911437;
// System.Collections.Generic.List`1<UserWiseSDK.Variables.Types.IVariable>
struct List_1_t6A199232F00F6677AE80AA4F32F24C6B986CC7E2;
// System.Collections.Generic.List`1<System.Int64>
struct List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4;
// System.Collections.Generic.List`1<UserWiseSDK.Messages.Message>
struct List_1_t2ABD335F4E99C978AB4A9D0863D6C3841EFB2F80;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UserWiseSDK.Offers.Offer>
struct List_1_tCCE32F207A4C93F8ABEFBCFAEBEC7D50BBE212F2;
// System.Collections.Generic.List`1<UserWiseSDK.PlayerEventAttribute>
struct List_1_tDF5AFDD3A0DE5C7C3DEB594CF5CE6A7F5FE34BD2;
// System.Collections.Generic.List`1<UserWiseSDK.RegionMetadata>
struct List_1_tEB7D3C41B15A71A632C4C4CB9B05C477B19E524A;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<UserWiseSDK.Surveys.Survey>
struct List_1_tB6F98E3EBF4067177E99E83D2BB0C63414CA78BE;
// System.Predicate`1<UserWiseSDK.Internal.Triggers.ITriggerable>
struct Predicate_1_tC9CACB45F6A8CDB31F794FE9910F7A85B14C445C;
// System.Predicate`1<UserWiseSDK.Variables.Types.IVariable>
struct Predicate_1_t252A4131FBF10F595F30D77DD5DCC10EAF91F1E1;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<UserWiseSDK.PlayerEventAttribute>
struct Predicate_1_t6DC00870BCCD3170671403014C65A17A3E69834C;
// System.Predicate`1<UserWiseSDK.RegionMetadata>
struct Predicate_1_tB2799FC3E18B34B2340D143078E9F4D980992FF9;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.List`1<System.Object>>
struct ValueCollection_tDE8BB8D8AF7E4D40BB9AB15472C77FB122F01D63;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E;
// UserWiseSDK.Variables.Types.Variable`1<System.Object>
struct Variable_1_t5EC5F7553D41F631E59F07E69F8AD3D773497278;
// UserWiseSDK.Variables.Types.Variable`1<System.String>
struct Variable_1_t5176D87E316D748175C0D26DD2EAA638B2827252;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>[]
struct Dictionary_2U5BU5D_tA1057ED686B28705A60F5B2BD0E1171C1F7CC655;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Collections.Generic.List`1<System.Object>>[]
struct EntryU5BU5D_t799A3B9B46D9404B54789EDC8B6D6CC31FB21F71;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.DateTime[]
struct DateTimeU5BU5D_t43291D587229E4ED44A327CC74DC7771EF2EBBC1;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Double[]
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB;
// UserWiseSDK.Internal.Triggers.ITriggerable[]
struct ITriggerableU5BU5D_tA476A090BFE117149DA15CF683E231313CD24FE4;
// UserWiseSDK.Variables.Types.IVariable[]
struct IVariableU5BU5D_t3F95CE577312982820CEF7273C9C69B5D86550A4;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Int64[]
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UserWiseSDK.PlayerEventAttribute[]
struct PlayerEventAttributeU5BU5D_tC32FAC5FCF2C93D8A2FE8CB6C7D061547F3F9E8B;
// UserWiseSDK.RegionMetadata[]
struct RegionMetadataU5BU5D_t22307C1291EA9F3C3AD9544CDCFFBAA781DA076B;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UserWiseSDK.Internal.API.APIRequestor
struct APIRequestor_tD14C8E4002C81340504C7A81952A09E57A7F597E;
// UserWiseSDK.Internal.API.APIResponse
struct APIResponse_t04D6883FBCAF2557AC604DFC943CD759DE8556C8;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UserWiseSDK.Campaigns.CampaignsModule
struct CampaignsModule_tA0959E20252EE97968A02783FD4D3AAFDF192B10;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IO.DirectoryInfo
struct DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD;
// System.EventHandler
struct EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B;
// UserWiseSDK.Events.EventsModule
struct EventsModule_t4DAC0631F19FA41A3CA16E5C6B8F9732A7B43A20;
// UserWiseSDK.Events.GameEvent
struct GameEvent_tF75EAF1479A5119F3188123C4694630955553B53;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// UserWiseSDK.IAttributable
struct IAttributable_tC5E13B13786CBDCF3AE4B0D06F84E06C74D9FD0F;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// UserWiseSDK.Internal.Scheduled.ISchedulable
struct ISchedulable_t0F46D447C9047499E88CF10E8CC603C68644FF01;
// UserWiseSDK.Internal.Triggers.ITriggerable
struct ITriggerable_t6048D1AAF66C6D53CDC7D75F692C3AB1FB333174;
// UserWiseSDK.Variables.Types.IVariable
struct IVariable_tF3AA49B2528F27A4EACB63B3D53EF63FAFB493EB;
// UserWiseSDK.MediaInfo
struct MediaInfo_tD5FD6440EA9A916214A52B032E95F87043900686;
// UserWiseSDK.Messages.Message
struct Message_t994A7D958E14F464F785BFB6864280005103A91D;
// UserWiseSDK.Messages.MessageEventArgs
struct MessageEventArgs_t2F5E385C2CA07A1D68DB2081FBD8E55F59445797;
// UserWiseSDK.Messages.MessagesModule
struct MessagesModule_t77B236E65D4003E98ED18F92F6A2FF781F5D5AC8;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UserWiseSDK.Internal.ModuleCacheFile
struct ModuleCacheFile_tE0D276B2482C84D431ABFE789BF6F4DE8555BB76;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UserWiseSDK.Offers.Offer
struct Offer_tF5EB0445F358ACF0E545C2B513B39B63804190A7;
// UserWiseSDK.Offers.OfferEventArgs
struct OfferEventArgs_t058E3ED8601ECACF7282CFF140768C5CF6B44170;
// UserWiseSDK.Offers.OfferImpression
struct OfferImpression_t93005F7531AFF65592176D6B1A40B085819AB2EE;
// UserWiseSDK.Offers.OfferImpressionEventArgs
struct OfferImpressionEventArgs_tC118DB83F1F30158A6C86A7AB84901E11677E2C9;
// UserWiseSDK.Offers.OffersModule
struct OffersModule_t6F8C5C3B400904E3CBFB8EC6ACC9D02C8FD81737;
// UserWiseSDK.PushNotifications.PushNotificationsModule
struct PushNotificationsModule_tEBE210C49FAE8DBB1BC626E5661F4582EF9521C3;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UserWiseSDK.Internal.Scheduled.SchedulableContentController
struct SchedulableContentController_tF564CB4B9771BDD8B86048FDEFA58468DFCAA995;
// UserWiseSDK.Internal.SessionData
struct SessionData_tA252CE97293037E48AE88E446107D0BBFF599001;
// System.String
struct String_t;
// UserWiseSDK.Variables.Types.StringVariable
struct StringVariable_t5D1782F60CD7D6C7FE378A53EED1F99D47EF2BE5;
// UserWiseSDK.Surveys.Survey
struct Survey_t63EBCA3CF9AB2225CD1CF20B3E7B854C7846832A;
// UserWiseSDK.Surveys.SurveyInviteInitializedEventArgs
struct SurveyInviteInitializedEventArgs_tDEB6C9961E8D2629015B58F402585DA112B5B8D0;
// UserWiseSDK.Surveys.SurveyResponseIdEventArgs
struct SurveyResponseIdEventArgs_t834D0F47C4D59C6297F6A4EE164ED1D27F34ECB0;
// UserWiseSDK.Surveys.SurveysModule
struct SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A;
// UserWiseSDK.Internal.Triggers.TriggerData
struct TriggerData_t40BC1C042F41DAE8FD2282A4205ECA50429A7EE6;
// UserWiseSDK.Internal.Triggers.TriggerQuota
struct TriggerQuota_tD1BA9066B490D48E86E8BF9D5E65B46AD38576E3;
// UserWiseSDK.Internal.Triggers.TriggerableContentController
struct TriggerableContentController_t879B381534ABAAA2D45C76715E084E80D900D57D;
// UserWiseSDK.Unity.UWHandlerGameObject
struct UWHandlerGameObject_t36CEA348DF9C545316FA3A4E94C3DEFDEC5C0F65;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E;
// UserWiseSDK.UserWise
struct UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47;
// UserWiseSDK.Variables.VariablesModule
struct VariablesModule_tF50D6213AFAE1B3AAA4725CA497C205E3F402675;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40;
// UserWiseSDK.Messages.MessagesModule/<>c__DisplayClass25_0
struct U3CU3Ec__DisplayClass25_0_t6BF097B330FC68C168CF6F78E6154E937879D9F1;
// UserWiseSDK.Messages.MessagesModule/<>c__DisplayClass33_0
struct U3CU3Ec__DisplayClass33_0_t85D2ED8887F3E354C84F7CB192B1906A3A2A5B83;
// UserWiseSDK.Offers.OffersModule/<>c
struct U3CU3Ec_t43D16DAD4F56F4F796AB9EB26DC1797E5519B895;
// UserWiseSDK.Offers.OffersModule/<>c__DisplayClass33_0
struct U3CU3Ec__DisplayClass33_0_t2BFC0CE3A8E7CFC3BAF951E217BB46D3BF0EB5F7;
// UserWiseSDK.PlayerEvent/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t35C2E77CF792ED0E19199BDF44B18E8897197F09;
// UserWiseSDK.Region/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_tD07C02F88A629829CA14D23ADD791EFC038D0A81;
// UserWiseSDK.Internal.Scheduled.SchedulableContentController/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_tA8C9B8C22D85B3D1346E1F9891EDA1AD5D61DCBE;
// UserWiseSDK.Internal.Scheduled.SchedulableContentController/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_tB70C1EF881D32041E6E9B57A4D778A93FA207FDF;
// UserWiseSDK.Internal.Scheduled.SchedulableContentController/<GenerateEnumerator>d__11
struct U3CGenerateEnumeratorU3Ed__11_t34C1BB0F622A0EBED3287CDF04F1739C2CD798DA;
// UserWiseSDK.Variables.Types.StringVariable/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t3B7E60D8AB61E67E26DC21327E12026D249099C7;
// UserWiseSDK.Surveys.SurveysModule/<>c__DisplayClass45_0
struct U3CU3Ec__DisplayClass45_0_tE0D83E2E7B92042CA32F0F7DCDB563071B846225;
// UserWiseSDK.Surveys.SurveysModule/<>c__DisplayClass46_0
struct U3CU3Ec__DisplayClass46_0_t855782F0F5F68CBF9C9BB773F47B63ED0A87F8D0;
// UserWiseSDK.Surveys.SurveysModule/<>c__DisplayClass47_0
struct U3CU3Ec__DisplayClass47_0_t2A6AC13E2429211AD116ED1F6632EAE25A407BCB;
// UserWiseSDK.Surveys.SurveysModule/<>c__DisplayClass48_0
struct U3CU3Ec__DisplayClass48_0_tF729482103EAE6A557BB049FE81D346236E4582B;
// UserWiseSDK.Campaigns.Internal.TriggerableCampaign/<>c__DisplayClass31_0
struct U3CU3Ec__DisplayClass31_0_t3162AB2F18601EF78435ACE2B3CA7299CA2EDE84;
// UserWiseSDK.Campaigns.Internal.TriggerableCampaign/<>c__DisplayClass35_0
struct U3CU3Ec__DisplayClass35_0_t5273E630404198372B6E589574E69230FFCD8274;
// UserWiseSDK.Campaigns.Internal.TriggerableCampaign/<>c__DisplayClass35_1
struct U3CU3Ec__DisplayClass35_1_t8B58EB44020D9FBD8BCFECEC7B2DE1DE5D9BF747;
// UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c
struct U3CU3Ec_tE93B34597CA2E728710340B7EB2214EB39639A45;
// UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t431E0569A6A79C9269B1F3F801FC650C9633C98D;
// UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c__DisplayClass10_1
struct U3CU3Ec__DisplayClass10_1_tEC2CC51281D844DB2994000721DC385D6D966A67;
// UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c__DisplayClass10_2
struct U3CU3Ec__DisplayClass10_2_tFB10A80CBF0C5E1A13CD00ADECCB414D13C09DCC;
// UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c__DisplayClass10_3
struct U3CU3Ec__DisplayClass10_3_t12BDF41E90B1A66EB112830F8F67AA2A4CD10206;
// UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_tE709B9673098A3DE2A7919BAFDFA06436B0A2C6A;
// UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t546D5442D40E2EC33D281012C7E5AA4DBD1F8AF9;
// UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c__DisplayClass7_1
struct U3CU3Ec__DisplayClass7_1_tBC31731EF0C31056D82DBD574B2F05178C1BC5FE;
// UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_tFFDE3CB9337715BA3168135D5042BAEDFF1BE179;
// UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c__DisplayClass8_1
struct U3CU3Ec__DisplayClass8_1_t9127E4A745BC257B855FE111D2BE5323F13E0747;
// UserWiseSDK.Unity.UWHandlerGameObject/UWProxyEventHandler
struct UWProxyEventHandler_t8164F2CF63723BF90005F32FF7216645A65428E9;
// UserWiseSDK.UserWise/<>c
struct U3CU3Ec_t30C593BF3D9A31C5EA7C390D973DA18D86183222;
// UserWiseSDK.UserWise/<>c__DisplayClass71_0
struct U3CU3Ec__DisplayClass71_0_tE8E7523B9BFF87C3D354E48684A61D61AA9033DC;
// UserWiseSDK.UserWise/<>c__DisplayClass72_0
struct U3CU3Ec__DisplayClass72_0_t6FF290DA27F97ED6AF22D3C3154ED6348D79F9BD;
// UserWiseSDK.UserWise/<>c__DisplayClass73_0
struct U3CU3Ec__DisplayClass73_0_tC6DD8E3ECD116B9E73C70616D961173597483F0E;
// UserWiseSDK.UserWise/<>c__DisplayClass74_0
struct U3CU3Ec__DisplayClass74_0_tC4503649DCCA22323FC3EC0F35A7ED9931278163;
// UserWiseSDK.UserWise/<>c__DisplayClass75_0
struct U3CU3Ec__DisplayClass75_0_t5F4373B0C09706AB93E576B8CCCBEC11F9D414B6;
// UserWiseSDK.UserWise/<>c__DisplayClass76_0
struct U3CU3Ec__DisplayClass76_0_t056ADACB6A54861ADC969AB31BB7698303319F19;
// UserWiseSDK.Variables.VariablesModule/<>c
struct U3CU3Ec_t5FAF232BE15C02F5CE897D67871FB54B80E8E5B5;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t8B9D154E6AC4F2C06ED9B8727E61F426060B7170_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictSerializable_1_t0C1905F68BCBC7CE02D817D1EED20D39CA857229_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictSerializable_1_t0C36D241D1667DB34433BC8786A454390EB7F3E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictSerializable_1_t1E98E47070925B225B8A5FE8F59CECD657EDBEDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictSerializable_1_t959AEAA0C7615DD60788B60E9F83CBD5871239D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictSerializable_1_t97D0EAF4BEB6BB5B32F53623EEF18EB15C605899_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictSerializable_1_tC4E7F28E4044EFB36EDCB7A10ECDEA25C7D5B306_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISchedulable_t0F46D447C9047499E88CF10E8CC603C68644FF01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITriggerable_t6048D1AAF66C6D53CDC7D75F692C3AB1FB333174_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IVariable_tF3AA49B2528F27A4EACB63B3D53EF63FAFB493EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MediaInfo_tD5FD6440EA9A916214A52B032E95F87043900686_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageEventArgs_t2F5E385C2CA07A1D68DB2081FBD8E55F59445797_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Nullable_1_t0D5CA762E667CF24B1BFBE05DD585E367D814023_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Nullable_1_tC4FB4BB8479F72D16C842427383E6E3BE652C9A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OfferEventArgs_t058E3ED8601ECACF7282CFF140768C5CF6B44170_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OfferImpressionEventArgs_tC118DB83F1F30158A6C86A7AB84901E11677E2C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OfferImpression_t93005F7531AFF65592176D6B1A40B085819AB2EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerAttribute_tFEE261801264075772E64E9C9823AE73B88747BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerEventAttribute_t8DCB62015FEE0EAC58B720075BAD7BA8B6A67154_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t252A4131FBF10F595F30D77DD5DCC10EAF91F1E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t6DC00870BCCD3170671403014C65A17A3E69834C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_tB2799FC3E18B34B2340D143078E9F4D980992FF9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RegionMetadata_tF86DE590B11B13AAD85D1595B383D4D180ECFCAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SessionData_tA252CE97293037E48AE88E446107D0BBFF599001_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SurveyInviteInitializedEventArgs_tDEB6C9961E8D2629015B58F402585DA112B5B8D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SurveyResponseIdEventArgs_t834D0F47C4D59C6297F6A4EE164ED1D27F34ECB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass35_1_t8B58EB44020D9FBD8BCFECEC7B2DE1DE5D9BF747_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass7_1_tBC31731EF0C31056D82DBD574B2F05178C1BC5FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass8_1_t9127E4A745BC257B855FE111D2BE5323F13E0747_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t30C593BF3D9A31C5EA7C390D973DA18D86183222_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t43D16DAD4F56F4F796AB9EB26DC1797E5519B895_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t5FAF232BE15C02F5CE897D67871FB54B80E8E5B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tE93B34597CA2E728710340B7EB2214EB39639A45_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UWHandlerGameObject_t36CEA348DF9C545316FA3A4E94C3DEFDEC5C0F65_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral20BB23A674F385779F076FBBECD1E67230DE5751;
IL2CPP_EXTERN_C String_t* _stringLiteral3E4A8C9408E7D1E41EAF79C6A17D5B0971EBD7F6;
IL2CPP_EXTERN_C String_t* _stringLiteral6DE41EF8F355D6A9E58DF7425B17C46D79207B11;
IL2CPP_EXTERN_C String_t* _stringLiteral734D834219E25F6AC949E3C4A33AA80BB578DC1A;
IL2CPP_EXTERN_C String_t* _stringLiteral742BB80CE36C1930E5C1022A988EF1BAB5512E0A;
IL2CPP_EXTERN_C String_t* _stringLiteral7D5AF3EDA16DFA5320D5D7F1531831A947B07025;
IL2CPP_EXTERN_C String_t* _stringLiteral8B6F140D032754F02246C343F0CE5D4A4B7A4FF2;
IL2CPP_EXTERN_C String_t* _stringLiteralA140C1F41F25B028A946446019BD278916B2C3B1;
IL2CPP_EXTERN_C String_t* _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469;
IL2CPP_EXTERN_C String_t* _stringLiteralB896D5816D050F21687F4F9FA4CFDF883EC8A23E;
IL2CPP_EXTERN_C String_t* _stringLiteralC203279FC91536021E64CC54092300BDE54D3FEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC2BF959D011B7C1F6B935008613645AA99D9A123;
IL2CPP_EXTERN_C String_t* _stringLiteralC64B72E24F04209EF5F1891842A7D197197F6141;
IL2CPP_EXTERN_C String_t* _stringLiteralD3CA097F57BB42BDA87A7FB14F36DAD5C901524A;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE35A021C33238EC8095FC12ADC3E92FB384ACEBE;
IL2CPP_EXTERN_C String_t* _stringLiteralEE3C8DF7A1486448449F3C76D937019689DFCBE9;
IL2CPP_EXTERN_C String_t* _stringLiteralF1EA647BFF3142DDA57C410AC7E3DF7EDF88FC1E;
IL2CPP_EXTERN_C String_t* _stringLiteralFBFED6DEA5A92748E7B7A0A236B4FBA1EFEF38C6;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mA5A36B6CBCF2BFB650C6BFA51ECCFDB0AE976506_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_m3138C8470F2E807600E5B1B36D4BD259DEDDB6DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_mA5259ECBF33EBA0C89A44BD230DC3223C41C0EDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisDictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_m82627B9461A9F7E3BD090C37A69A9C392F4CA138_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisList_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_mF1D55797C8C6B9A6BE3787B18EF18D3082C81177_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisRuntimeObject_m3A39ABACAB51C059B4B2C3863AB540D0008EA256_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisString_t_m650E3E6854ED4FFA1F3A5E002E72DBFC0B7AFD04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m2081C22E67B979AFF0710DA64B3BFE895BAE1635_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m41D28F48221F99DB3016C0F5CF4B210291338546_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m1BA889A31BFF75A026EE37C812DE8D320EB9573C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m7D3C5AB9967DFDFE269DC54DF367D0B21C59E356_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m27DDAE22558733AB59D955136A7EF5AF05B1F4CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m5D01A6607C2199E7A7B5856E49119C26FE5327BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m0C912722C5458101F71073C2356CED75B53591C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m17391176FA563A9E5A747FB7FDD148BEBFF704F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m39D7C8CE4211C8D2C9E06013F87216811ABEB0CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m3A913729344A711379818904A0BD83EA71DC1BFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_mF2554C1A499FE332F9781B4BAA50FCDBADDAFCAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m186BDFBE15172FEE311041A38252C8B10444E63B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3AA13B63BAEF6C890A4EAF571DD1E4C9245A3493_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m4C8CE184D497D4EA29D3963CCAC07D7D995A847A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m56E93B74F5254C198272F09C8E4B09483184B929_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m6A1C4A27FCE1C8E658902185D1D8713EB33C4562_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Find_m2C28DEE7A09BB3786F7CF2AC537C1CE44D6DF7EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Find_m896D2FC9958E06E63EBA462B0F84DF8FB38C94BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Find_m8F84724E3B9CF39244F178118AFE40F3C62CBC8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ForEach_m875ED8D875B2C3BFBAF73C83492173CEBF00014D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m162D2EC9E315E003217699D359B316C5CF375941_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m3913E4FE07DE0534B318191A3D508DBCF094A1CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mB4A325AB11A5E20ADCE6DDD6978D49D2CF0DDAD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mC0848B1E8B9FCB262EA335141C667FFCFBBFBCD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Predicate_1__ctor_m1CB6EB50499523977C9D42EDBEF45CC9F5BF4707_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Predicate_1__ctor_m2CC94284D0661A08DDAE49AFAEEFEF6F0F77F483_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Predicate_1__ctor_m6AAB73662593F005CC537DA195F5B46CE38A1499_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGenerateEnumeratorU3Ed__11_System_Collections_IEnumerator_Reset_m63417FA8996EA6F0DA018D1FCF4E20FA14FDAD54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass35_1_U3CUserWiseSDK_Internal_Triggers_ITriggerable_TriggerU3Eb__5_m82E8FD325E4AE2EAAD5CF4D4E1D4F0F26280672C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass75_0_U3CSetAttributesU3Eb__2_m3D1F3FCA06FC3ABE9D2A816C870B5C368710A0AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass7_1_U3CHandleTriggerActionU3Eb__3_mBE8241147C2AE1DD8B78EE0B7B646334A8B30AD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_1_U3CHandleTriggerActionU3Eb__3_m2D94FA2A6AE686689C0895A67B2AD182A9E2931C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Variable_1_SetCurrentValue_mD343EA3FC5C7490CB34739959A5A0A94535152FB_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Object>>
struct  Dictionary_2_tBC3D75391B3A91841136B660BDB52AABDF625D3C  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t799A3B9B46D9404B54789EDC8B6D6CC31FB21F71* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tF9CFB95F4615D4EBB544CB4EA1C9E6C54ADF193B * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tDE8BB8D8AF7E4D40BB9AB15472C77FB122F01D63 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tBC3D75391B3A91841136B660BDB52AABDF625D3C, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tBC3D75391B3A91841136B660BDB52AABDF625D3C, ___entries_1)); }
	inline EntryU5BU5D_t799A3B9B46D9404B54789EDC8B6D6CC31FB21F71* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t799A3B9B46D9404B54789EDC8B6D6CC31FB21F71** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t799A3B9B46D9404B54789EDC8B6D6CC31FB21F71* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tBC3D75391B3A91841136B660BDB52AABDF625D3C, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tBC3D75391B3A91841136B660BDB52AABDF625D3C, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tBC3D75391B3A91841136B660BDB52AABDF625D3C, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tBC3D75391B3A91841136B660BDB52AABDF625D3C, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tBC3D75391B3A91841136B660BDB52AABDF625D3C, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tBC3D75391B3A91841136B660BDB52AABDF625D3C, ___keys_7)); }
	inline KeyCollection_tF9CFB95F4615D4EBB544CB4EA1C9E6C54ADF193B * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tF9CFB95F4615D4EBB544CB4EA1C9E6C54ADF193B ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tF9CFB95F4615D4EBB544CB4EA1C9E6C54ADF193B * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tBC3D75391B3A91841136B660BDB52AABDF625D3C, ___values_8)); }
	inline ValueCollection_tDE8BB8D8AF7E4D40BB9AB15472C77FB122F01D63 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tDE8BB8D8AF7E4D40BB9AB15472C77FB122F01D63 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tDE8BB8D8AF7E4D40BB9AB15472C77FB122F01D63 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tBC3D75391B3A91841136B660BDB52AABDF625D3C, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct  Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___entries_1)); }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___keys_7)); }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___values_8)); }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>
struct  List_1_t3CAEFF22F70FA8270239B1324BE3AABD8B5BD0C0  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Dictionary_2U5BU5D_tA1057ED686B28705A60F5B2BD0E1171C1F7CC655* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3CAEFF22F70FA8270239B1324BE3AABD8B5BD0C0, ____items_1)); }
	inline Dictionary_2U5BU5D_tA1057ED686B28705A60F5B2BD0E1171C1F7CC655* get__items_1() const { return ____items_1; }
	inline Dictionary_2U5BU5D_tA1057ED686B28705A60F5B2BD0E1171C1F7CC655** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Dictionary_2U5BU5D_tA1057ED686B28705A60F5B2BD0E1171C1F7CC655* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3CAEFF22F70FA8270239B1324BE3AABD8B5BD0C0, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3CAEFF22F70FA8270239B1324BE3AABD8B5BD0C0, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3CAEFF22F70FA8270239B1324BE3AABD8B5BD0C0, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3CAEFF22F70FA8270239B1324BE3AABD8B5BD0C0_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Dictionary_2U5BU5D_tA1057ED686B28705A60F5B2BD0E1171C1F7CC655* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3CAEFF22F70FA8270239B1324BE3AABD8B5BD0C0_StaticFields, ____emptyArray_5)); }
	inline Dictionary_2U5BU5D_tA1057ED686B28705A60F5B2BD0E1171C1F7CC655* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Dictionary_2U5BU5D_tA1057ED686B28705A60F5B2BD0E1171C1F7CC655** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Dictionary_2U5BU5D_tA1057ED686B28705A60F5B2BD0E1171C1F7CC655* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.DateTime>
struct  List_1_t7240E3382CB212F4FEB22D7A3E93EE9152E03CBC  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DateTimeU5BU5D_t43291D587229E4ED44A327CC74DC7771EF2EBBC1* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t7240E3382CB212F4FEB22D7A3E93EE9152E03CBC, ____items_1)); }
	inline DateTimeU5BU5D_t43291D587229E4ED44A327CC74DC7771EF2EBBC1* get__items_1() const { return ____items_1; }
	inline DateTimeU5BU5D_t43291D587229E4ED44A327CC74DC7771EF2EBBC1** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DateTimeU5BU5D_t43291D587229E4ED44A327CC74DC7771EF2EBBC1* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t7240E3382CB212F4FEB22D7A3E93EE9152E03CBC, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t7240E3382CB212F4FEB22D7A3E93EE9152E03CBC, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t7240E3382CB212F4FEB22D7A3E93EE9152E03CBC, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t7240E3382CB212F4FEB22D7A3E93EE9152E03CBC_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	DateTimeU5BU5D_t43291D587229E4ED44A327CC74DC7771EF2EBBC1* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t7240E3382CB212F4FEB22D7A3E93EE9152E03CBC_StaticFields, ____emptyArray_5)); }
	inline DateTimeU5BU5D_t43291D587229E4ED44A327CC74DC7771EF2EBBC1* get__emptyArray_5() const { return ____emptyArray_5; }
	inline DateTimeU5BU5D_t43291D587229E4ED44A327CC74DC7771EF2EBBC1** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(DateTimeU5BU5D_t43291D587229E4ED44A327CC74DC7771EF2EBBC1* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Double>
struct  List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC, ____items_1)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get__items_1() const { return ____items_1; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC_StaticFields, ____emptyArray_5)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get__emptyArray_5() const { return ____emptyArray_5; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UserWiseSDK.Internal.Triggers.ITriggerable>
struct  List_1_t92B053769F1F29417E25AE8F630FE7F9B7911437  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ITriggerableU5BU5D_tA476A090BFE117149DA15CF683E231313CD24FE4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t92B053769F1F29417E25AE8F630FE7F9B7911437, ____items_1)); }
	inline ITriggerableU5BU5D_tA476A090BFE117149DA15CF683E231313CD24FE4* get__items_1() const { return ____items_1; }
	inline ITriggerableU5BU5D_tA476A090BFE117149DA15CF683E231313CD24FE4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ITriggerableU5BU5D_tA476A090BFE117149DA15CF683E231313CD24FE4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t92B053769F1F29417E25AE8F630FE7F9B7911437, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t92B053769F1F29417E25AE8F630FE7F9B7911437, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t92B053769F1F29417E25AE8F630FE7F9B7911437, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t92B053769F1F29417E25AE8F630FE7F9B7911437_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ITriggerableU5BU5D_tA476A090BFE117149DA15CF683E231313CD24FE4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t92B053769F1F29417E25AE8F630FE7F9B7911437_StaticFields, ____emptyArray_5)); }
	inline ITriggerableU5BU5D_tA476A090BFE117149DA15CF683E231313CD24FE4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ITriggerableU5BU5D_tA476A090BFE117149DA15CF683E231313CD24FE4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ITriggerableU5BU5D_tA476A090BFE117149DA15CF683E231313CD24FE4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UserWiseSDK.Variables.Types.IVariable>
struct  List_1_t6A199232F00F6677AE80AA4F32F24C6B986CC7E2  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IVariableU5BU5D_t3F95CE577312982820CEF7273C9C69B5D86550A4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6A199232F00F6677AE80AA4F32F24C6B986CC7E2, ____items_1)); }
	inline IVariableU5BU5D_t3F95CE577312982820CEF7273C9C69B5D86550A4* get__items_1() const { return ____items_1; }
	inline IVariableU5BU5D_t3F95CE577312982820CEF7273C9C69B5D86550A4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IVariableU5BU5D_t3F95CE577312982820CEF7273C9C69B5D86550A4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6A199232F00F6677AE80AA4F32F24C6B986CC7E2, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6A199232F00F6677AE80AA4F32F24C6B986CC7E2, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6A199232F00F6677AE80AA4F32F24C6B986CC7E2, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6A199232F00F6677AE80AA4F32F24C6B986CC7E2_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	IVariableU5BU5D_t3F95CE577312982820CEF7273C9C69B5D86550A4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6A199232F00F6677AE80AA4F32F24C6B986CC7E2_StaticFields, ____emptyArray_5)); }
	inline IVariableU5BU5D_t3F95CE577312982820CEF7273C9C69B5D86550A4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline IVariableU5BU5D_t3F95CE577312982820CEF7273C9C69B5D86550A4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(IVariableU5BU5D_t3F95CE577312982820CEF7273C9C69B5D86550A4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int64>
struct  List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4, ____items_1)); }
	inline Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* get__items_1() const { return ____items_1; }
	inline Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4_StaticFields, ____emptyArray_5)); }
	inline Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UserWiseSDK.PlayerEventAttribute>
struct  List_1_tDF5AFDD3A0DE5C7C3DEB594CF5CE6A7F5FE34BD2  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PlayerEventAttributeU5BU5D_tC32FAC5FCF2C93D8A2FE8CB6C7D061547F3F9E8B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tDF5AFDD3A0DE5C7C3DEB594CF5CE6A7F5FE34BD2, ____items_1)); }
	inline PlayerEventAttributeU5BU5D_tC32FAC5FCF2C93D8A2FE8CB6C7D061547F3F9E8B* get__items_1() const { return ____items_1; }
	inline PlayerEventAttributeU5BU5D_tC32FAC5FCF2C93D8A2FE8CB6C7D061547F3F9E8B** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PlayerEventAttributeU5BU5D_tC32FAC5FCF2C93D8A2FE8CB6C7D061547F3F9E8B* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tDF5AFDD3A0DE5C7C3DEB594CF5CE6A7F5FE34BD2, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tDF5AFDD3A0DE5C7C3DEB594CF5CE6A7F5FE34BD2, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tDF5AFDD3A0DE5C7C3DEB594CF5CE6A7F5FE34BD2, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tDF5AFDD3A0DE5C7C3DEB594CF5CE6A7F5FE34BD2_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	PlayerEventAttributeU5BU5D_tC32FAC5FCF2C93D8A2FE8CB6C7D061547F3F9E8B* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tDF5AFDD3A0DE5C7C3DEB594CF5CE6A7F5FE34BD2_StaticFields, ____emptyArray_5)); }
	inline PlayerEventAttributeU5BU5D_tC32FAC5FCF2C93D8A2FE8CB6C7D061547F3F9E8B* get__emptyArray_5() const { return ____emptyArray_5; }
	inline PlayerEventAttributeU5BU5D_tC32FAC5FCF2C93D8A2FE8CB6C7D061547F3F9E8B** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(PlayerEventAttributeU5BU5D_tC32FAC5FCF2C93D8A2FE8CB6C7D061547F3F9E8B* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UserWiseSDK.RegionMetadata>
struct  List_1_tEB7D3C41B15A71A632C4C4CB9B05C477B19E524A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	RegionMetadataU5BU5D_t22307C1291EA9F3C3AD9544CDCFFBAA781DA076B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tEB7D3C41B15A71A632C4C4CB9B05C477B19E524A, ____items_1)); }
	inline RegionMetadataU5BU5D_t22307C1291EA9F3C3AD9544CDCFFBAA781DA076B* get__items_1() const { return ____items_1; }
	inline RegionMetadataU5BU5D_t22307C1291EA9F3C3AD9544CDCFFBAA781DA076B** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(RegionMetadataU5BU5D_t22307C1291EA9F3C3AD9544CDCFFBAA781DA076B* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tEB7D3C41B15A71A632C4C4CB9B05C477B19E524A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tEB7D3C41B15A71A632C4C4CB9B05C477B19E524A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tEB7D3C41B15A71A632C4C4CB9B05C477B19E524A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tEB7D3C41B15A71A632C4C4CB9B05C477B19E524A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	RegionMetadataU5BU5D_t22307C1291EA9F3C3AD9544CDCFFBAA781DA076B* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tEB7D3C41B15A71A632C4C4CB9B05C477B19E524A_StaticFields, ____emptyArray_5)); }
	inline RegionMetadataU5BU5D_t22307C1291EA9F3C3AD9544CDCFFBAA781DA076B* get__emptyArray_5() const { return ____emptyArray_5; }
	inline RegionMetadataU5BU5D_t22307C1291EA9F3C3AD9544CDCFFBAA781DA076B** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(RegionMetadataU5BU5D_t22307C1291EA9F3C3AD9544CDCFFBAA781DA076B* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct  List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// UserWiseSDK.Internal.API.APIResponse
struct  APIResponse_t04D6883FBCAF2557AC604DFC943CD759DE8556C8  : public RuntimeObject
{
public:
	// UnityEngine.Networking.UnityWebRequest UserWiseSDK.Internal.API.APIResponse::webRequest
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___webRequest_0;
	// System.Boolean UserWiseSDK.Internal.API.APIResponse::<IsErr>k__BackingField
	bool ___U3CIsErrU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_webRequest_0() { return static_cast<int32_t>(offsetof(APIResponse_t04D6883FBCAF2557AC604DFC943CD759DE8556C8, ___webRequest_0)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_webRequest_0() const { return ___webRequest_0; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_webRequest_0() { return &___webRequest_0; }
	inline void set_webRequest_0(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___webRequest_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___webRequest_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsErrU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(APIResponse_t04D6883FBCAF2557AC604DFC943CD759DE8556C8, ___U3CIsErrU3Ek__BackingField_1)); }
	inline bool get_U3CIsErrU3Ek__BackingField_1() const { return ___U3CIsErrU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CIsErrU3Ek__BackingField_1() { return &___U3CIsErrU3Ek__BackingField_1; }
	inline void set_U3CIsErrU3Ek__BackingField_1(bool value)
	{
		___U3CIsErrU3Ek__BackingField_1 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7  : public RuntimeObject
{
public:

public:
};


// System.EventArgs
struct  EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA  : public RuntimeObject
{
public:

public:
};

struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields, ___Empty_0)); }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// UserWiseSDK.Events.EventsModule
struct  EventsModule_t4DAC0631F19FA41A3CA16E5C6B8F9732A7B43A20  : public RuntimeObject
{
public:
	// System.EventHandler`1<UserWiseSDK.Events.OnEventsLoadedEventArgs> UserWiseSDK.Events.EventsModule::OnEventsLoaded
	EventHandler_1_t5C2B9AFBEC790C6B97C97C53E88612027964BB45 * ___OnEventsLoaded_0;
	// System.EventHandler`1<UserWiseSDK.Events.GameEventEventArgs> UserWiseSDK.Events.EventsModule::OnEventActive
	EventHandler_1_t9566C51B3744C343CC707DE83C20DC7EA8A39BAE * ___OnEventActive_1;
	// System.EventHandler`1<UserWiseSDK.Events.GameEventEventArgs> UserWiseSDK.Events.EventsModule::OnEventInactive
	EventHandler_1_t9566C51B3744C343CC707DE83C20DC7EA8A39BAE * ___OnEventInactive_2;
	// System.Collections.Generic.List`1<UserWiseSDK.Events.GameEvent> UserWiseSDK.Events.EventsModule::<ActiveEvents>k__BackingField
	List_1_tE62939D5C1612114BA235F6D4E4BAEF045368813 * ___U3CActiveEventsU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<UserWiseSDK.Events.GameEvent> UserWiseSDK.Events.EventsModule::<UpcomingEvents>k__BackingField
	List_1_tE62939D5C1612114BA235F6D4E4BAEF045368813 * ___U3CUpcomingEventsU3Ek__BackingField_4;
	// UserWiseSDK.UserWise UserWiseSDK.Events.EventsModule::userWise
	UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47 * ___userWise_5;
	// UserWiseSDK.Internal.API.APIRequestor UserWiseSDK.Events.EventsModule::apiRequestor
	APIRequestor_tD14C8E4002C81340504C7A81952A09E57A7F597E * ___apiRequestor_6;
	// UserWiseSDK.Internal.ModuleCacheFile UserWiseSDK.Events.EventsModule::moduleCache
	ModuleCacheFile_tE0D276B2482C84D431ABFE789BF6F4DE8555BB76 * ___moduleCache_7;

public:
	inline static int32_t get_offset_of_OnEventsLoaded_0() { return static_cast<int32_t>(offsetof(EventsModule_t4DAC0631F19FA41A3CA16E5C6B8F9732A7B43A20, ___OnEventsLoaded_0)); }
	inline EventHandler_1_t5C2B9AFBEC790C6B97C97C53E88612027964BB45 * get_OnEventsLoaded_0() const { return ___OnEventsLoaded_0; }
	inline EventHandler_1_t5C2B9AFBEC790C6B97C97C53E88612027964BB45 ** get_address_of_OnEventsLoaded_0() { return &___OnEventsLoaded_0; }
	inline void set_OnEventsLoaded_0(EventHandler_1_t5C2B9AFBEC790C6B97C97C53E88612027964BB45 * value)
	{
		___OnEventsLoaded_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnEventsLoaded_0), (void*)value);
	}

	inline static int32_t get_offset_of_OnEventActive_1() { return static_cast<int32_t>(offsetof(EventsModule_t4DAC0631F19FA41A3CA16E5C6B8F9732A7B43A20, ___OnEventActive_1)); }
	inline EventHandler_1_t9566C51B3744C343CC707DE83C20DC7EA8A39BAE * get_OnEventActive_1() const { return ___OnEventActive_1; }
	inline EventHandler_1_t9566C51B3744C343CC707DE83C20DC7EA8A39BAE ** get_address_of_OnEventActive_1() { return &___OnEventActive_1; }
	inline void set_OnEventActive_1(EventHandler_1_t9566C51B3744C343CC707DE83C20DC7EA8A39BAE * value)
	{
		___OnEventActive_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnEventActive_1), (void*)value);
	}

	inline static int32_t get_offset_of_OnEventInactive_2() { return static_cast<int32_t>(offsetof(EventsModule_t4DAC0631F19FA41A3CA16E5C6B8F9732A7B43A20, ___OnEventInactive_2)); }
	inline EventHandler_1_t9566C51B3744C343CC707DE83C20DC7EA8A39BAE * get_OnEventInactive_2() const { return ___OnEventInactive_2; }
	inline EventHandler_1_t9566C51B3744C343CC707DE83C20DC7EA8A39BAE ** get_address_of_OnEventInactive_2() { return &___OnEventInactive_2; }
	inline void set_OnEventInactive_2(EventHandler_1_t9566C51B3744C343CC707DE83C20DC7EA8A39BAE * value)
	{
		___OnEventInactive_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnEventInactive_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CActiveEventsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(EventsModule_t4DAC0631F19FA41A3CA16E5C6B8F9732A7B43A20, ___U3CActiveEventsU3Ek__BackingField_3)); }
	inline List_1_tE62939D5C1612114BA235F6D4E4BAEF045368813 * get_U3CActiveEventsU3Ek__BackingField_3() const { return ___U3CActiveEventsU3Ek__BackingField_3; }
	inline List_1_tE62939D5C1612114BA235F6D4E4BAEF045368813 ** get_address_of_U3CActiveEventsU3Ek__BackingField_3() { return &___U3CActiveEventsU3Ek__BackingField_3; }
	inline void set_U3CActiveEventsU3Ek__BackingField_3(List_1_tE62939D5C1612114BA235F6D4E4BAEF045368813 * value)
	{
		___U3CActiveEventsU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CActiveEventsU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUpcomingEventsU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(EventsModule_t4DAC0631F19FA41A3CA16E5C6B8F9732A7B43A20, ___U3CUpcomingEventsU3Ek__BackingField_4)); }
	inline List_1_tE62939D5C1612114BA235F6D4E4BAEF045368813 * get_U3CUpcomingEventsU3Ek__BackingField_4() const { return ___U3CUpcomingEventsU3Ek__BackingField_4; }
	inline List_1_tE62939D5C1612114BA235F6D4E4BAEF045368813 ** get_address_of_U3CUpcomingEventsU3Ek__BackingField_4() { return &___U3CUpcomingEventsU3Ek__BackingField_4; }
	inline void set_U3CUpcomingEventsU3Ek__BackingField_4(List_1_tE62939D5C1612114BA235F6D4E4BAEF045368813 * value)
	{
		___U3CUpcomingEventsU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUpcomingEventsU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_userWise_5() { return static_cast<int32_t>(offsetof(EventsModule_t4DAC0631F19FA41A3CA16E5C6B8F9732A7B43A20, ___userWise_5)); }
	inline UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47 * get_userWise_5() const { return ___userWise_5; }
	inline UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47 ** get_address_of_userWise_5() { return &___userWise_5; }
	inline void set_userWise_5(UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47 * value)
	{
		___userWise_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userWise_5), (void*)value);
	}

	inline static int32_t get_offset_of_apiRequestor_6() { return static_cast<int32_t>(offsetof(EventsModule_t4DAC0631F19FA41A3CA16E5C6B8F9732A7B43A20, ___apiRequestor_6)); }
	inline APIRequestor_tD14C8E4002C81340504C7A81952A09E57A7F597E * get_apiRequestor_6() const { return ___apiRequestor_6; }
	inline APIRequestor_tD14C8E4002C81340504C7A81952A09E57A7F597E ** get_address_of_apiRequestor_6() { return &___apiRequestor_6; }
	inline void set_apiRequestor_6(APIRequestor_tD14C8E4002C81340504C7A81952A09E57A7F597E * value)
	{
		___apiRequestor_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___apiRequestor_6), (void*)value);
	}

	inline static int32_t get_offset_of_moduleCache_7() { return static_cast<int32_t>(offsetof(EventsModule_t4DAC0631F19FA41A3CA16E5C6B8F9732A7B43A20, ___moduleCache_7)); }
	inline ModuleCacheFile_tE0D276B2482C84D431ABFE789BF6F4DE8555BB76 * get_moduleCache_7() const { return ___moduleCache_7; }
	inline ModuleCacheFile_tE0D276B2482C84D431ABFE789BF6F4DE8555BB76 ** get_address_of_moduleCache_7() { return &___moduleCache_7; }
	inline void set_moduleCache_7(ModuleCacheFile_tE0D276B2482C84D431ABFE789BF6F4DE8555BB76 * value)
	{
		___moduleCache_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___moduleCache_7), (void*)value);
	}
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// UserWiseSDK.MediaInfo
struct  MediaInfo_tD5FD6440EA9A916214A52B032E95F87043900686  : public RuntimeObject
{
public:
	// System.String UserWiseSDK.MediaInfo::<Id>k__BackingField
	String_t* ___U3CIdU3Ek__BackingField_0;
	// System.String UserWiseSDK.MediaInfo::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.String UserWiseSDK.MediaInfo::<ContentType>k__BackingField
	String_t* ___U3CContentTypeU3Ek__BackingField_2;
	// System.String UserWiseSDK.MediaInfo::<Url>k__BackingField
	String_t* ___U3CUrlU3Ek__BackingField_3;
	// System.Int32 UserWiseSDK.MediaInfo::<ByteSize>k__BackingField
	int32_t ___U3CByteSizeU3Ek__BackingField_4;
	// System.Collections.Generic.Dictionary`2<System.String,UserWiseSDK.MediaVariant> UserWiseSDK.MediaInfo::<Variants>k__BackingField
	Dictionary_2_tFA373B3096D6615E45CAF3846685613730BA1E79 * ___U3CVariantsU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MediaInfo_tD5FD6440EA9A916214A52B032E95F87043900686, ___U3CIdU3Ek__BackingField_0)); }
	inline String_t* get_U3CIdU3Ek__BackingField_0() const { return ___U3CIdU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CIdU3Ek__BackingField_0() { return &___U3CIdU3Ek__BackingField_0; }
	inline void set_U3CIdU3Ek__BackingField_0(String_t* value)
	{
		___U3CIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIdU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MediaInfo_tD5FD6440EA9A916214A52B032E95F87043900686, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CContentTypeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MediaInfo_tD5FD6440EA9A916214A52B032E95F87043900686, ___U3CContentTypeU3Ek__BackingField_2)); }
	inline String_t* get_U3CContentTypeU3Ek__BackingField_2() const { return ___U3CContentTypeU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CContentTypeU3Ek__BackingField_2() { return &___U3CContentTypeU3Ek__BackingField_2; }
	inline void set_U3CContentTypeU3Ek__BackingField_2(String_t* value)
	{
		___U3CContentTypeU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CContentTypeU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUrlU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MediaInfo_tD5FD6440EA9A916214A52B032E95F87043900686, ___U3CUrlU3Ek__BackingField_3)); }
	inline String_t* get_U3CUrlU3Ek__BackingField_3() const { return ___U3CUrlU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CUrlU3Ek__BackingField_3() { return &___U3CUrlU3Ek__BackingField_3; }
	inline void set_U3CUrlU3Ek__BackingField_3(String_t* value)
	{
		___U3CUrlU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUrlU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CByteSizeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(MediaInfo_tD5FD6440EA9A916214A52B032E95F87043900686, ___U3CByteSizeU3Ek__BackingField_4)); }
	inline int32_t get_U3CByteSizeU3Ek__BackingField_4() const { return ___U3CByteSizeU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CByteSizeU3Ek__BackingField_4() { return &___U3CByteSizeU3Ek__BackingField_4; }
	inline void set_U3CByteSizeU3Ek__BackingField_4(int32_t value)
	{
		___U3CByteSizeU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CVariantsU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(MediaInfo_tD5FD6440EA9A916214A52B032E95F87043900686, ___U3CVariantsU3Ek__BackingField_5)); }
	inline Dictionary_2_tFA373B3096D6615E45CAF3846685613730BA1E79 * get_U3CVariantsU3Ek__BackingField_5() const { return ___U3CVariantsU3Ek__BackingField_5; }
	inline Dictionary_2_tFA373B3096D6615E45CAF3846685613730BA1E79 ** get_address_of_U3CVariantsU3Ek__BackingField_5() { return &___U3CVariantsU3Ek__BackingField_5; }
	inline void set_U3CVariantsU3Ek__BackingField_5(Dictionary_2_tFA373B3096D6615E45CAF3846685613730BA1E79 * value)
	{
		___U3CVariantsU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVariantsU3Ek__BackingField_5), (void*)value);
	}
};


// UserWiseSDK.Messages.MessagesModule
struct  MessagesModule_t77B236E65D4003E98ED18F92F6A2FF781F5D5AC8  : public RuntimeObject
{
public:
	// System.EventHandler`1<UserWiseSDK.Messages.MessagesLoadedEventArgs> UserWiseSDK.Messages.MessagesModule::OnMessagesLoaded
	EventHandler_1_t6482188854EFCB00EC073E8819393CDE2743482A * ___OnMessagesLoaded_0;
	// System.EventHandler`1<UserWiseSDK.Messages.MessageEventArgs> UserWiseSDK.Messages.MessagesModule::OnMessageAvailable
	EventHandler_1_t7A31148CCAB55ABA8B9E4FA24AFED408F0E6DB9D * ___OnMessageAvailable_1;
	// System.EventHandler`1<UserWiseSDK.Messages.MessageEventArgs> UserWiseSDK.Messages.MessagesModule::OnMessageUnavailable
	EventHandler_1_t7A31148CCAB55ABA8B9E4FA24AFED408F0E6DB9D * ___OnMessageUnavailable_2;
	// System.Collections.Generic.List`1<UserWiseSDK.Messages.Message> UserWiseSDK.Messages.MessagesModule::<ActiveMessages>k__BackingField
	List_1_t2ABD335F4E99C978AB4A9D0863D6C3841EFB2F80 * ___U3CActiveMessagesU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<UserWiseSDK.Messages.Message> UserWiseSDK.Messages.MessagesModule::<UpcomingMessages>k__BackingField
	List_1_t2ABD335F4E99C978AB4A9D0863D6C3841EFB2F80 * ___U3CUpcomingMessagesU3Ek__BackingField_4;
	// UserWiseSDK.UserWise UserWiseSDK.Messages.MessagesModule::userWise
	UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47 * ___userWise_5;
	// UserWiseSDK.Internal.API.APIRequestor UserWiseSDK.Messages.MessagesModule::apiRequestor
	APIRequestor_tD14C8E4002C81340504C7A81952A09E57A7F597E * ___apiRequestor_6;
	// UserWiseSDK.Internal.ModuleCacheFile UserWiseSDK.Messages.MessagesModule::moduleCache
	ModuleCacheFile_tE0D276B2482C84D431ABFE789BF6F4DE8555BB76 * ___moduleCache_7;

public:
	inline static int32_t get_offset_of_OnMessagesLoaded_0() { return static_cast<int32_t>(offsetof(MessagesModule_t77B236E65D4003E98ED18F92F6A2FF781F5D5AC8, ___OnMessagesLoaded_0)); }
	inline EventHandler_1_t6482188854EFCB00EC073E8819393CDE2743482A * get_OnMessagesLoaded_0() const { return ___OnMessagesLoaded_0; }
	inline EventHandler_1_t6482188854EFCB00EC073E8819393CDE2743482A ** get_address_of_OnMessagesLoaded_0() { return &___OnMessagesLoaded_0; }
	inline void set_OnMessagesLoaded_0(EventHandler_1_t6482188854EFCB00EC073E8819393CDE2743482A * value)
	{
		___OnMessagesLoaded_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMessagesLoaded_0), (void*)value);
	}

	inline static int32_t get_offset_of_OnMessageAvailable_1() { return static_cast<int32_t>(offsetof(MessagesModule_t77B236E65D4003E98ED18F92F6A2FF781F5D5AC8, ___OnMessageAvailable_1)); }
	inline EventHandler_1_t7A31148CCAB55ABA8B9E4FA24AFED408F0E6DB9D * get_OnMessageAvailable_1() const { return ___OnMessageAvailable_1; }
	inline EventHandler_1_t7A31148CCAB55ABA8B9E4FA24AFED408F0E6DB9D ** get_address_of_OnMessageAvailable_1() { return &___OnMessageAvailable_1; }
	inline void set_OnMessageAvailable_1(EventHandler_1_t7A31148CCAB55ABA8B9E4FA24AFED408F0E6DB9D * value)
	{
		___OnMessageAvailable_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMessageAvailable_1), (void*)value);
	}

	inline static int32_t get_offset_of_OnMessageUnavailable_2() { return static_cast<int32_t>(offsetof(MessagesModule_t77B236E65D4003E98ED18F92F6A2FF781F5D5AC8, ___OnMessageUnavailable_2)); }
	inline EventHandler_1_t7A31148CCAB55ABA8B9E4FA24AFED408F0E6DB9D * get_OnMessageUnavailable_2() const { return ___OnMessageUnavailable_2; }
	inline EventHandler_1_t7A31148CCAB55ABA8B9E4FA24AFED408F0E6DB9D ** get_address_of_OnMessageUnavailable_2() { return &___OnMessageUnavailable_2; }
	inline void set_OnMessageUnavailable_2(EventHandler_1_t7A31148CCAB55ABA8B9E4FA24AFED408F0E6DB9D * value)
	{
		___OnMessageUnavailable_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMessageUnavailable_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CActiveMessagesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MessagesModule_t77B236E65D4003E98ED18F92F6A2FF781F5D5AC8, ___U3CActiveMessagesU3Ek__BackingField_3)); }
	inline List_1_t2ABD335F4E99C978AB4A9D0863D6C3841EFB2F80 * get_U3CActiveMessagesU3Ek__BackingField_3() const { return ___U3CActiveMessagesU3Ek__BackingField_3; }
	inline List_1_t2ABD335F4E99C978AB4A9D0863D6C3841EFB2F80 ** get_address_of_U3CActiveMessagesU3Ek__BackingField_3() { return &___U3CActiveMessagesU3Ek__BackingField_3; }
	inline void set_U3CActiveMessagesU3Ek__BackingField_3(List_1_t2ABD335F4E99C978AB4A9D0863D6C3841EFB2F80 * value)
	{
		___U3CActiveMessagesU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CActiveMessagesU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUpcomingMessagesU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(MessagesModule_t77B236E65D4003E98ED18F92F6A2FF781F5D5AC8, ___U3CUpcomingMessagesU3Ek__BackingField_4)); }
	inline List_1_t2ABD335F4E99C978AB4A9D0863D6C3841EFB2F80 * get_U3CUpcomingMessagesU3Ek__BackingField_4() const { return ___U3CUpcomingMessagesU3Ek__BackingField_4; }
	inline List_1_t2ABD335F4E99C978AB4A9D0863D6C3841EFB2F80 ** get_address_of_U3CUpcomingMessagesU3Ek__BackingField_4() { return &___U3CUpcomingMessagesU3Ek__BackingField_4; }
	inline void set_U3CUpcomingMessagesU3Ek__BackingField_4(List_1_t2ABD335F4E99C978AB4A9D0863D6C3841EFB2F80 * value)
	{
		___U3CUpcomingMessagesU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUpcomingMessagesU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_userWise_5() { return static_cast<int32_t>(offsetof(MessagesModule_t77B236E65D4003E98ED18F92F6A2FF781F5D5AC8, ___userWise_5)); }
	inline UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47 * get_userWise_5() const { return ___userWise_5; }
	inline UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47 ** get_address_of_userWise_5() { return &___userWise_5; }
	inline void set_userWise_5(UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47 * value)
	{
		___userWise_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userWise_5), (void*)value);
	}

	inline static int32_t get_offset_of_apiRequestor_6() { return static_cast<int32_t>(offsetof(MessagesModule_t77B236E65D4003E98ED18F92F6A2FF781F5D5AC8, ___apiRequestor_6)); }
	inline APIRequestor_tD14C8E4002C81340504C7A81952A09E57A7F597E * get_apiRequestor_6() const { return ___apiRequestor_6; }
	inline APIRequestor_tD14C8E4002C81340504C7A81952A09E57A7F597E ** get_address_of_apiRequestor_6() { return &___apiRequestor_6; }
	inline void set_apiRequestor_6(APIRequestor_tD14C8E4002C81340504C7A81952A09E57A7F597E * value)
	{
		___apiRequestor_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___apiRequestor_6), (void*)value);
	}

	inline static int32_t get_offset_of_moduleCache_7() { return static_cast<int32_t>(offsetof(MessagesModule_t77B236E65D4003E98ED18F92F6A2FF781F5D5AC8, ___moduleCache_7)); }
	inline ModuleCacheFile_tE0D276B2482C84D431ABFE789BF6F4DE8555BB76 * get_moduleCache_7() const { return ___moduleCache_7; }
	inline ModuleCacheFile_tE0D276B2482C84D431ABFE789BF6F4DE8555BB76 ** get_address_of_moduleCache_7() { return &___moduleCache_7; }
	inline void set_moduleCache_7(ModuleCacheFile_tE0D276B2482C84D431ABFE789BF6F4DE8555BB76 * value)
	{
		___moduleCache_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___moduleCache_7), (void*)value);
	}
};


// UserWiseSDK.Offers.OffersModule
struct  OffersModule_t6F8C5C3B400904E3CBFB8EC6ACC9D02C8FD81737  : public RuntimeObject
{
public:
	// System.EventHandler UserWiseSDK.Offers.OffersModule::OnOffersLoaded
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___OnOffersLoaded_0;
	// System.EventHandler`1<UserWiseSDK.Offers.OfferEventArgs> UserWiseSDK.Offers.OffersModule::OnOfferAvailable
	EventHandler_1_t7827DEAD0F31A439E5160F227B30EA39AF88FCBA * ___OnOfferAvailable_1;
	// System.EventHandler`1<UserWiseSDK.Offers.OfferEventArgs> UserWiseSDK.Offers.OffersModule::OnOfferUnavailable
	EventHandler_1_t7827DEAD0F31A439E5160F227B30EA39AF88FCBA * ___OnOfferUnavailable_2;
	// System.EventHandler`1<UserWiseSDK.Offers.OfferEventArgs> UserWiseSDK.Offers.OffersModule::OnOfferImpressionInitializationFailed
	EventHandler_1_t7827DEAD0F31A439E5160F227B30EA39AF88FCBA * ___OnOfferImpressionInitializationFailed_3;
	// System.EventHandler`1<UserWiseSDK.Offers.OfferImpressionEventArgs> UserWiseSDK.Offers.OffersModule::OnOfferImpressionInitialized
	EventHandler_1_tE5C3802BDD10C52FDA59E18CC1D58768C92E0A57 * ___OnOfferImpressionInitialized_4;
	// System.Boolean UserWiseSDK.Offers.OffersModule::<IsInitializationActive>k__BackingField
	bool ___U3CIsInitializationActiveU3Ek__BackingField_5;
	// System.Collections.Generic.List`1<UserWiseSDK.Offers.Offer> UserWiseSDK.Offers.OffersModule::<ActiveOffers>k__BackingField
	List_1_tCCE32F207A4C93F8ABEFBCFAEBEC7D50BBE212F2 * ___U3CActiveOffersU3Ek__BackingField_6;
	// System.Collections.Generic.List`1<UserWiseSDK.Offers.Offer> UserWiseSDK.Offers.OffersModule::<UpcomingOffers>k__BackingField
	List_1_tCCE32F207A4C93F8ABEFBCFAEBEC7D50BBE212F2 * ___U3CUpcomingOffersU3Ek__BackingField_7;
	// UserWiseSDK.UserWise UserWiseSDK.Offers.OffersModule::userWise
	UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47 * ___userWise_8;
	// UserWiseSDK.Internal.API.APIRequestor UserWiseSDK.Offers.OffersModule::apiRequestor
	APIRequestor_tD14C8E4002C81340504C7A81952A09E57A7F597E * ___apiRequestor_9;

public:
	inline static int32_t get_offset_of_OnOffersLoaded_0() { return static_cast<int32_t>(offsetof(OffersModule_t6F8C5C3B400904E3CBFB8EC6ACC9D02C8FD81737, ___OnOffersLoaded_0)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_OnOffersLoaded_0() const { return ___OnOffersLoaded_0; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_OnOffersLoaded_0() { return &___OnOffersLoaded_0; }
	inline void set_OnOffersLoaded_0(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___OnOffersLoaded_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnOffersLoaded_0), (void*)value);
	}

	inline static int32_t get_offset_of_OnOfferAvailable_1() { return static_cast<int32_t>(offsetof(OffersModule_t6F8C5C3B400904E3CBFB8EC6ACC9D02C8FD81737, ___OnOfferAvailable_1)); }
	inline EventHandler_1_t7827DEAD0F31A439E5160F227B30EA39AF88FCBA * get_OnOfferAvailable_1() const { return ___OnOfferAvailable_1; }
	inline EventHandler_1_t7827DEAD0F31A439E5160F227B30EA39AF88FCBA ** get_address_of_OnOfferAvailable_1() { return &___OnOfferAvailable_1; }
	inline void set_OnOfferAvailable_1(EventHandler_1_t7827DEAD0F31A439E5160F227B30EA39AF88FCBA * value)
	{
		___OnOfferAvailable_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnOfferAvailable_1), (void*)value);
	}

	inline static int32_t get_offset_of_OnOfferUnavailable_2() { return static_cast<int32_t>(offsetof(OffersModule_t6F8C5C3B400904E3CBFB8EC6ACC9D02C8FD81737, ___OnOfferUnavailable_2)); }
	inline EventHandler_1_t7827DEAD0F31A439E5160F227B30EA39AF88FCBA * get_OnOfferUnavailable_2() const { return ___OnOfferUnavailable_2; }
	inline EventHandler_1_t7827DEAD0F31A439E5160F227B30EA39AF88FCBA ** get_address_of_OnOfferUnavailable_2() { return &___OnOfferUnavailable_2; }
	inline void set_OnOfferUnavailable_2(EventHandler_1_t7827DEAD0F31A439E5160F227B30EA39AF88FCBA * value)
	{
		___OnOfferUnavailable_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnOfferUnavailable_2), (void*)value);
	}

	inline static int32_t get_offset_of_OnOfferImpressionInitializationFailed_3() { return static_cast<int32_t>(offsetof(OffersModule_t6F8C5C3B400904E3CBFB8EC6ACC9D02C8FD81737, ___OnOfferImpressionInitializationFailed_3)); }
	inline EventHandler_1_t7827DEAD0F31A439E5160F227B30EA39AF88FCBA * get_OnOfferImpressionInitializationFailed_3() const { return ___OnOfferImpressionInitializationFailed_3; }
	inline EventHandler_1_t7827DEAD0F31A439E5160F227B30EA39AF88FCBA ** get_address_of_OnOfferImpressionInitializationFailed_3() { return &___OnOfferImpressionInitializationFailed_3; }
	inline void set_OnOfferImpressionInitializationFailed_3(EventHandler_1_t7827DEAD0F31A439E5160F227B30EA39AF88FCBA * value)
	{
		___OnOfferImpressionInitializationFailed_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnOfferImpressionInitializationFailed_3), (void*)value);
	}

	inline static int32_t get_offset_of_OnOfferImpressionInitialized_4() { return static_cast<int32_t>(offsetof(OffersModule_t6F8C5C3B400904E3CBFB8EC6ACC9D02C8FD81737, ___OnOfferImpressionInitialized_4)); }
	inline EventHandler_1_tE5C3802BDD10C52FDA59E18CC1D58768C92E0A57 * get_OnOfferImpressionInitialized_4() const { return ___OnOfferImpressionInitialized_4; }
	inline EventHandler_1_tE5C3802BDD10C52FDA59E18CC1D58768C92E0A57 ** get_address_of_OnOfferImpressionInitialized_4() { return &___OnOfferImpressionInitialized_4; }
	inline void set_OnOfferImpressionInitialized_4(EventHandler_1_tE5C3802BDD10C52FDA59E18CC1D58768C92E0A57 * value)
	{
		___OnOfferImpressionInitialized_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnOfferImpressionInitialized_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsInitializationActiveU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(OffersModule_t6F8C5C3B400904E3CBFB8EC6ACC9D02C8FD81737, ___U3CIsInitializationActiveU3Ek__BackingField_5)); }
	inline bool get_U3CIsInitializationActiveU3Ek__BackingField_5() const { return ___U3CIsInitializationActiveU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CIsInitializationActiveU3Ek__BackingField_5() { return &___U3CIsInitializationActiveU3Ek__BackingField_5; }
	inline void set_U3CIsInitializationActiveU3Ek__BackingField_5(bool value)
	{
		___U3CIsInitializationActiveU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CActiveOffersU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(OffersModule_t6F8C5C3B400904E3CBFB8EC6ACC9D02C8FD81737, ___U3CActiveOffersU3Ek__BackingField_6)); }
	inline List_1_tCCE32F207A4C93F8ABEFBCFAEBEC7D50BBE212F2 * get_U3CActiveOffersU3Ek__BackingField_6() const { return ___U3CActiveOffersU3Ek__BackingField_6; }
	inline List_1_tCCE32F207A4C93F8ABEFBCFAEBEC7D50BBE212F2 ** get_address_of_U3CActiveOffersU3Ek__BackingField_6() { return &___U3CActiveOffersU3Ek__BackingField_6; }
	inline void set_U3CActiveOffersU3Ek__BackingField_6(List_1_tCCE32F207A4C93F8ABEFBCFAEBEC7D50BBE212F2 * value)
	{
		___U3CActiveOffersU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CActiveOffersU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUpcomingOffersU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(OffersModule_t6F8C5C3B400904E3CBFB8EC6ACC9D02C8FD81737, ___U3CUpcomingOffersU3Ek__BackingField_7)); }
	inline List_1_tCCE32F207A4C93F8ABEFBCFAEBEC7D50BBE212F2 * get_U3CUpcomingOffersU3Ek__BackingField_7() const { return ___U3CUpcomingOffersU3Ek__BackingField_7; }
	inline List_1_tCCE32F207A4C93F8ABEFBCFAEBEC7D50BBE212F2 ** get_address_of_U3CUpcomingOffersU3Ek__BackingField_7() { return &___U3CUpcomingOffersU3Ek__BackingField_7; }
	inline void set_U3CUpcomingOffersU3Ek__BackingField_7(List_1_tCCE32F207A4C93F8ABEFBCFAEBEC7D50BBE212F2 * value)
	{
		___U3CUpcomingOffersU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUpcomingOffersU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_userWise_8() { return static_cast<int32_t>(offsetof(OffersModule_t6F8C5C3B400904E3CBFB8EC6ACC9D02C8FD81737, ___userWise_8)); }
	inline UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47 * get_userWise_8() const { return ___userWise_8; }
	inline UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47 ** get_address_of_userWise_8() { return &___userWise_8; }
	inline void set_userWise_8(UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47 * value)
	{
		___userWise_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userWise_8), (void*)value);
	}

	inline static int32_t get_offset_of_apiRequestor_9() { return static_cast<int32_t>(offsetof(OffersModule_t6F8C5C3B400904E3CBFB8EC6ACC9D02C8FD81737, ___apiRequestor_9)); }
	inline APIRequestor_tD14C8E4002C81340504C7A81952A09E57A7F597E * get_apiRequestor_9() const { return ___apiRequestor_9; }
	inline APIRequestor_tD14C8E4002C81340504C7A81952A09E57A7F597E ** get_address_of_apiRequestor_9() { return &___apiRequestor_9; }
	inline void set_apiRequestor_9(APIRequestor_tD14C8E4002C81340504C7A81952A09E57A7F597E * value)
	{
		___apiRequestor_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___apiRequestor_9), (void*)value);
	}
};


// UserWiseSDK.Internal.Scheduled.SchedulableContentController
struct  SchedulableContentController_tF564CB4B9771BDD8B86048FDEFA58468DFCAA995  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<UserWiseSDK.Internal.Scheduled.ISchedulable,System.Collections.IEnumerator> UserWiseSDK.Internal.Scheduled.SchedulableContentController::UpcomingSchedulables
	Dictionary_2_t72C4E4F8B3ADB9219021174DB3949759B035C9D0 * ___UpcomingSchedulables_0;
	// System.Collections.Generic.Dictionary`2<UserWiseSDK.Internal.Scheduled.ISchedulable,System.Collections.IEnumerator> UserWiseSDK.Internal.Scheduled.SchedulableContentController::EndingSchedulables
	Dictionary_2_t72C4E4F8B3ADB9219021174DB3949759B035C9D0 * ___EndingSchedulables_1;
	// UserWiseSDK.UserWise UserWiseSDK.Internal.Scheduled.SchedulableContentController::userWise
	UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47 * ___userWise_2;

public:
	inline static int32_t get_offset_of_UpcomingSchedulables_0() { return static_cast<int32_t>(offsetof(SchedulableContentController_tF564CB4B9771BDD8B86048FDEFA58468DFCAA995, ___UpcomingSchedulables_0)); }
	inline Dictionary_2_t72C4E4F8B3ADB9219021174DB3949759B035C9D0 * get_UpcomingSchedulables_0() const { return ___UpcomingSchedulables_0; }
	inline Dictionary_2_t72C4E4F8B3ADB9219021174DB3949759B035C9D0 ** get_address_of_UpcomingSchedulables_0() { return &___UpcomingSchedulables_0; }
	inline void set_UpcomingSchedulables_0(Dictionary_2_t72C4E4F8B3ADB9219021174DB3949759B035C9D0 * value)
	{
		___UpcomingSchedulables_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UpcomingSchedulables_0), (void*)value);
	}

	inline static int32_t get_offset_of_EndingSchedulables_1() { return static_cast<int32_t>(offsetof(SchedulableContentController_tF564CB4B9771BDD8B86048FDEFA58468DFCAA995, ___EndingSchedulables_1)); }
	inline Dictionary_2_t72C4E4F8B3ADB9219021174DB3949759B035C9D0 * get_EndingSchedulables_1() const { return ___EndingSchedulables_1; }
	inline Dictionary_2_t72C4E4F8B3ADB9219021174DB3949759B035C9D0 ** get_address_of_EndingSchedulables_1() { return &___EndingSchedulables_1; }
	inline void set_EndingSchedulables_1(Dictionary_2_t72C4E4F8B3ADB9219021174DB3949759B035C9D0 * value)
	{
		___EndingSchedulables_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EndingSchedulables_1), (void*)value);
	}

	inline static int32_t get_offset_of_userWise_2() { return static_cast<int32_t>(offsetof(SchedulableContentController_tF564CB4B9771BDD8B86048FDEFA58468DFCAA995, ___userWise_2)); }
	inline UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47 * get_userWise_2() const { return ___userWise_2; }
	inline UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47 ** get_address_of_userWise_2() { return &___userWise_2; }
	inline void set_userWise_2(UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47 * value)
	{
		___userWise_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userWise_2), (void*)value);
	}
};


// UserWiseSDK.Internal.SessionData
struct  SessionData_tA252CE97293037E48AE88E446107D0BBFF599001  : public RuntimeObject
{
public:
	// System.Boolean UserWiseSDK.Internal.SessionData::isDebugMode
	bool ___isDebugMode_0;
	// System.String UserWiseSDK.Internal.SessionData::apiKey
	String_t* ___apiKey_1;
	// System.String UserWiseSDK.Internal.SessionData::sessionId
	String_t* ___sessionId_2;
	// System.String UserWiseSDK.Internal.SessionData::externalId
	String_t* ___externalId_3;
	// System.String UserWiseSDK.Internal.SessionData::_initializedExternalId
	String_t* ____initializedExternalId_4;
	// System.Boolean UserWiseSDK.Internal.SessionData::isInitialized
	bool ___isInitialized_5;

public:
	inline static int32_t get_offset_of_isDebugMode_0() { return static_cast<int32_t>(offsetof(SessionData_tA252CE97293037E48AE88E446107D0BBFF599001, ___isDebugMode_0)); }
	inline bool get_isDebugMode_0() const { return ___isDebugMode_0; }
	inline bool* get_address_of_isDebugMode_0() { return &___isDebugMode_0; }
	inline void set_isDebugMode_0(bool value)
	{
		___isDebugMode_0 = value;
	}

	inline static int32_t get_offset_of_apiKey_1() { return static_cast<int32_t>(offsetof(SessionData_tA252CE97293037E48AE88E446107D0BBFF599001, ___apiKey_1)); }
	inline String_t* get_apiKey_1() const { return ___apiKey_1; }
	inline String_t** get_address_of_apiKey_1() { return &___apiKey_1; }
	inline void set_apiKey_1(String_t* value)
	{
		___apiKey_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___apiKey_1), (void*)value);
	}

	inline static int32_t get_offset_of_sessionId_2() { return static_cast<int32_t>(offsetof(SessionData_tA252CE97293037E48AE88E446107D0BBFF599001, ___sessionId_2)); }
	inline String_t* get_sessionId_2() const { return ___sessionId_2; }
	inline String_t** get_address_of_sessionId_2() { return &___sessionId_2; }
	inline void set_sessionId_2(String_t* value)
	{
		___sessionId_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sessionId_2), (void*)value);
	}

	inline static int32_t get_offset_of_externalId_3() { return static_cast<int32_t>(offsetof(SessionData_tA252CE97293037E48AE88E446107D0BBFF599001, ___externalId_3)); }
	inline String_t* get_externalId_3() const { return ___externalId_3; }
	inline String_t** get_address_of_externalId_3() { return &___externalId_3; }
	inline void set_externalId_3(String_t* value)
	{
		___externalId_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___externalId_3), (void*)value);
	}

	inline static int32_t get_offset_of__initializedExternalId_4() { return static_cast<int32_t>(offsetof(SessionData_tA252CE97293037E48AE88E446107D0BBFF599001, ____initializedExternalId_4)); }
	inline String_t* get__initializedExternalId_4() const { return ____initializedExternalId_4; }
	inline String_t** get_address_of__initializedExternalId_4() { return &____initializedExternalId_4; }
	inline void set__initializedExternalId_4(String_t* value)
	{
		____initializedExternalId_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____initializedExternalId_4), (void*)value);
	}

	inline static int32_t get_offset_of_isInitialized_5() { return static_cast<int32_t>(offsetof(SessionData_tA252CE97293037E48AE88E446107D0BBFF599001, ___isInitialized_5)); }
	inline bool get_isInitialized_5() const { return ___isInitialized_5; }
	inline bool* get_address_of_isInitialized_5() { return &___isInitialized_5; }
	inline void set_isInitialized_5(bool value)
	{
		___isInitialized_5 = value;
	}
};


// System.String
struct  String_t  : public RuntimeObject
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


// UserWiseSDK.Surveys.SurveysModule
struct  SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A  : public RuntimeObject
{
public:
	// System.EventHandler UserWiseSDK.Surveys.SurveysModule::OnSurveysLoaded
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___OnSurveysLoaded_0;
	// System.EventHandler`1<UserWiseSDK.Surveys.SurveyEventArgs> UserWiseSDK.Surveys.SurveysModule::OnSurveyAvailable
	EventHandler_1_t4DCF486377698D15BE19DC4DA76BFE0FE5B70770 * ___OnSurveyAvailable_1;
	// System.EventHandler`1<UserWiseSDK.Surveys.SurveyEventArgs> UserWiseSDK.Surveys.SurveysModule::OnSurveyUnavailable
	EventHandler_1_t4DCF486377698D15BE19DC4DA76BFE0FE5B70770 * ___OnSurveyUnavailable_2;
	// System.EventHandler`1<UserWiseSDK.Surveys.SurveyInviteInitializedEventArgs> UserWiseSDK.Surveys.SurveysModule::OnSurveyInviteInitialized
	EventHandler_1_t7E16AEA66F6C4636B6E10A9A2ADCD1429BE4F555 * ___OnSurveyInviteInitialized_3;
	// System.EventHandler`1<UserWiseSDK.Surveys.SurveyResponseIdEventArgs> UserWiseSDK.Surveys.SurveysModule::OnSurveyEntered
	EventHandler_1_t1BEB15B2B124055FE88D844DA101A6E2D5F07668 * ___OnSurveyEntered_4;
	// System.EventHandler`1<UserWiseSDK.Surveys.SurveyResponseIdEventArgs> UserWiseSDK.Surveys.SurveysModule::OnSurveyEnterFailed
	EventHandler_1_t1BEB15B2B124055FE88D844DA101A6E2D5F07668 * ___OnSurveyEnterFailed_5;
	// System.EventHandler`1<UserWiseSDK.Surveys.SurveyResponseIdEventArgs> UserWiseSDK.Surveys.SurveysModule::OnSurveyCompleted
	EventHandler_1_t1BEB15B2B124055FE88D844DA101A6E2D5F07668 * ___OnSurveyCompleted_6;
	// System.EventHandler`1<UserWiseSDK.Surveys.SurveyResponseIdEventArgs> UserWiseSDK.Surveys.SurveysModule::OnSurveyClosed
	EventHandler_1_t1BEB15B2B124055FE88D844DA101A6E2D5F07668 * ___OnSurveyClosed_7;
	// UserWiseSDK.Surveys.Survey UserWiseSDK.Surveys.SurveysModule::<SurveyBeingTaken>k__BackingField
	Survey_t63EBCA3CF9AB2225CD1CF20B3E7B854C7846832A * ___U3CSurveyBeingTakenU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<UserWiseSDK.Surveys.Survey> UserWiseSDK.Surveys.SurveysModule::<ActiveSurveys>k__BackingField
	List_1_tB6F98E3EBF4067177E99E83D2BB0C63414CA78BE * ___U3CActiveSurveysU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UserWiseSDK.Surveys.Survey> UserWiseSDK.Surveys.SurveysModule::<UpcomingSurveys>k__BackingField
	List_1_tB6F98E3EBF4067177E99E83D2BB0C63414CA78BE * ___U3CUpcomingSurveysU3Ek__BackingField_10;
	// UserWiseSDK.UserWise UserWiseSDK.Surveys.SurveysModule::userWise
	UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47 * ___userWise_11;
	// UserWiseSDK.Internal.API.APIRequestor UserWiseSDK.Surveys.SurveysModule::apiRequestor
	APIRequestor_tD14C8E4002C81340504C7A81952A09E57A7F597E * ___apiRequestor_12;

public:
	inline static int32_t get_offset_of_OnSurveysLoaded_0() { return static_cast<int32_t>(offsetof(SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A, ___OnSurveysLoaded_0)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_OnSurveysLoaded_0() const { return ___OnSurveysLoaded_0; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_OnSurveysLoaded_0() { return &___OnSurveysLoaded_0; }
	inline void set_OnSurveysLoaded_0(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___OnSurveysLoaded_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSurveysLoaded_0), (void*)value);
	}

	inline static int32_t get_offset_of_OnSurveyAvailable_1() { return static_cast<int32_t>(offsetof(SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A, ___OnSurveyAvailable_1)); }
	inline EventHandler_1_t4DCF486377698D15BE19DC4DA76BFE0FE5B70770 * get_OnSurveyAvailable_1() const { return ___OnSurveyAvailable_1; }
	inline EventHandler_1_t4DCF486377698D15BE19DC4DA76BFE0FE5B70770 ** get_address_of_OnSurveyAvailable_1() { return &___OnSurveyAvailable_1; }
	inline void set_OnSurveyAvailable_1(EventHandler_1_t4DCF486377698D15BE19DC4DA76BFE0FE5B70770 * value)
	{
		___OnSurveyAvailable_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSurveyAvailable_1), (void*)value);
	}

	inline static int32_t get_offset_of_OnSurveyUnavailable_2() { return static_cast<int32_t>(offsetof(SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A, ___OnSurveyUnavailable_2)); }
	inline EventHandler_1_t4DCF486377698D15BE19DC4DA76BFE0FE5B70770 * get_OnSurveyUnavailable_2() const { return ___OnSurveyUnavailable_2; }
	inline EventHandler_1_t4DCF486377698D15BE19DC4DA76BFE0FE5B70770 ** get_address_of_OnSurveyUnavailable_2() { return &___OnSurveyUnavailable_2; }
	inline void set_OnSurveyUnavailable_2(EventHandler_1_t4DCF486377698D15BE19DC4DA76BFE0FE5B70770 * value)
	{
		___OnSurveyUnavailable_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSurveyUnavailable_2), (void*)value);
	}

	inline static int32_t get_offset_of_OnSurveyInviteInitialized_3() { return static_cast<int32_t>(offsetof(SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A, ___OnSurveyInviteInitialized_3)); }
	inline EventHandler_1_t7E16AEA66F6C4636B6E10A9A2ADCD1429BE4F555 * get_OnSurveyInviteInitialized_3() const { return ___OnSurveyInviteInitialized_3; }
	inline EventHandler_1_t7E16AEA66F6C4636B6E10A9A2ADCD1429BE4F555 ** get_address_of_OnSurveyInviteInitialized_3() { return &___OnSurveyInviteInitialized_3; }
	inline void set_OnSurveyInviteInitialized_3(EventHandler_1_t7E16AEA66F6C4636B6E10A9A2ADCD1429BE4F555 * value)
	{
		___OnSurveyInviteInitialized_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSurveyInviteInitialized_3), (void*)value);
	}

	inline static int32_t get_offset_of_OnSurveyEntered_4() { return static_cast<int32_t>(offsetof(SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A, ___OnSurveyEntered_4)); }
	inline EventHandler_1_t1BEB15B2B124055FE88D844DA101A6E2D5F07668 * get_OnSurveyEntered_4() const { return ___OnSurveyEntered_4; }
	inline EventHandler_1_t1BEB15B2B124055FE88D844DA101A6E2D5F07668 ** get_address_of_OnSurveyEntered_4() { return &___OnSurveyEntered_4; }
	inline void set_OnSurveyEntered_4(EventHandler_1_t1BEB15B2B124055FE88D844DA101A6E2D5F07668 * value)
	{
		___OnSurveyEntered_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSurveyEntered_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnSurveyEnterFailed_5() { return static_cast<int32_t>(offsetof(SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A, ___OnSurveyEnterFailed_5)); }
	inline EventHandler_1_t1BEB15B2B124055FE88D844DA101A6E2D5F07668 * get_OnSurveyEnterFailed_5() const { return ___OnSurveyEnterFailed_5; }
	inline EventHandler_1_t1BEB15B2B124055FE88D844DA101A6E2D5F07668 ** get_address_of_OnSurveyEnterFailed_5() { return &___OnSurveyEnterFailed_5; }
	inline void set_OnSurveyEnterFailed_5(EventHandler_1_t1BEB15B2B124055FE88D844DA101A6E2D5F07668 * value)
	{
		___OnSurveyEnterFailed_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSurveyEnterFailed_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnSurveyCompleted_6() { return static_cast<int32_t>(offsetof(SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A, ___OnSurveyCompleted_6)); }
	inline EventHandler_1_t1BEB15B2B124055FE88D844DA101A6E2D5F07668 * get_OnSurveyCompleted_6() const { return ___OnSurveyCompleted_6; }
	inline EventHandler_1_t1BEB15B2B124055FE88D844DA101A6E2D5F07668 ** get_address_of_OnSurveyCompleted_6() { return &___OnSurveyCompleted_6; }
	inline void set_OnSurveyCompleted_6(EventHandler_1_t1BEB15B2B124055FE88D844DA101A6E2D5F07668 * value)
	{
		___OnSurveyCompleted_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSurveyCompleted_6), (void*)value);
	}

	inline static int32_t get_offset_of_OnSurveyClosed_7() { return static_cast<int32_t>(offsetof(SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A, ___OnSurveyClosed_7)); }
	inline EventHandler_1_t1BEB15B2B124055FE88D844DA101A6E2D5F07668 * get_OnSurveyClosed_7() const { return ___OnSurveyClosed_7; }
	inline EventHandler_1_t1BEB15B2B124055FE88D844DA101A6E2D5F07668 ** get_address_of_OnSurveyClosed_7() { return &___OnSurveyClosed_7; }
	inline void set_OnSurveyClosed_7(EventHandler_1_t1BEB15B2B124055FE88D844DA101A6E2D5F07668 * value)
	{
		___OnSurveyClosed_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSurveyClosed_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSurveyBeingTakenU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A, ___U3CSurveyBeingTakenU3Ek__BackingField_8)); }
	inline Survey_t63EBCA3CF9AB2225CD1CF20B3E7B854C7846832A * get_U3CSurveyBeingTakenU3Ek__BackingField_8() const { return ___U3CSurveyBeingTakenU3Ek__BackingField_8; }
	inline Survey_t63EBCA3CF9AB2225CD1CF20B3E7B854C7846832A ** get_address_of_U3CSurveyBeingTakenU3Ek__BackingField_8() { return &___U3CSurveyBeingTakenU3Ek__BackingField_8; }
	inline void set_U3CSurveyBeingTakenU3Ek__BackingField_8(Survey_t63EBCA3CF9AB2225CD1CF20B3E7B854C7846832A * value)
	{
		___U3CSurveyBeingTakenU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSurveyBeingTakenU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CActiveSurveysU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A, ___U3CActiveSurveysU3Ek__BackingField_9)); }
	inline List_1_tB6F98E3EBF4067177E99E83D2BB0C63414CA78BE * get_U3CActiveSurveysU3Ek__BackingField_9() const { return ___U3CActiveSurveysU3Ek__BackingField_9; }
	inline List_1_tB6F98E3EBF4067177E99E83D2BB0C63414CA78BE ** get_address_of_U3CActiveSurveysU3Ek__BackingField_9() { return &___U3CActiveSurveysU3Ek__BackingField_9; }
	inline void set_U3CActiveSurveysU3Ek__BackingField_9(List_1_tB6F98E3EBF4067177E99E83D2BB0C63414CA78BE * value)
	{
		___U3CActiveSurveysU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CActiveSurveysU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUpcomingSurveysU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A, ___U3CUpcomingSurveysU3Ek__BackingField_10)); }
	inline List_1_tB6F98E3EBF4067177E99E83D2BB0C63414CA78BE * get_U3CUpcomingSurveysU3Ek__BackingField_10() const { return ___U3CUpcomingSurveysU3Ek__BackingField_10; }
	inline List_1_tB6F98E3EBF4067177E99E83D2BB0C63414CA78BE ** get_address_of_U3CUpcomingSurveysU3Ek__BackingField_10() { return &___U3CUpcomingSurveysU3Ek__BackingField_10; }
	inline void set_U3CUpcomingSurveysU3Ek__BackingField_10(List_1_tB6F98E3EBF4067177E99E83D2BB0C63414CA78BE * value)
	{
		___U3CUpcomingSurveysU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUpcomingSurveysU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_userWise_11() { return static_cast<int32_t>(offsetof(SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A, ___userWise_11)); }
	inline UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47 * get_userWise_11() const { return ___userWise_11; }
	inline UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47 ** get_address_of_userWise_11() { return &___userWise_11; }
	inline void set_userWise_11(UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47 * value)
	{
		___userWise_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userWise_11), (void*)value);
	}

	inline static int32_t get_offset_of_apiRequestor_12() { return static_cast<int32_t>(offsetof(SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A, ___apiRequestor_12)); }
	inline APIRequestor_tD14C8E4002C81340504C7A81952A09E57A7F597E * get_apiRequestor_12() const { return ___apiRequestor_12; }
	inline APIRequestor_tD14C8E4002C81340504C7A81952A09E57A7F597E ** get_address_of_apiRequestor_12() { return &___apiRequestor_12; }
	inline void set_apiRequestor_12(APIRequestor_tD14C8E4002C81340504C7A81952A09E57A7F597E * value)
	{
		___apiRequestor_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___apiRequestor_12), (void*)value);
	}
};


// UserWiseSDK.Internal.Triggers.TriggerableContentController
struct  TriggerableContentController_t879B381534ABAAA2D45C76715E084E80D900D57D  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UserWiseSDK.Internal.Triggers.ITriggerable> UserWiseSDK.Internal.Triggers.TriggerableContentController::Triggerables
	List_1_t92B053769F1F29417E25AE8F630FE7F9B7911437 * ___Triggerables_0;
	// UserWiseSDK.UserWise UserWiseSDK.Internal.Triggers.TriggerableContentController::UserWise
	UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47 * ___UserWise_1;

public:
	inline static int32_t get_offset_of_Triggerables_0() { return static_cast<int32_t>(offsetof(TriggerableContentController_t879B381534ABAAA2D45C76715E084E80D900D57D, ___Triggerables_0)); }
	inline List_1_t92B053769F1F29417E25AE8F630FE7F9B7911437 * get_Triggerables_0() const { return ___Triggerables_0; }
	inline List_1_t92B053769F1F29417E25AE8F630FE7F9B7911437 ** get_address_of_Triggerables_0() { return &___Triggerables_0; }
	inline void set_Triggerables_0(List_1_t92B053769F1F29417E25AE8F630FE7F9B7911437 * value)
	{
		___Triggerables_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Triggerables_0), (void*)value);
	}

	inline static int32_t get_offset_of_UserWise_1() { return static_cast<int32_t>(offsetof(TriggerableContentController_t879B381534ABAAA2D45C76715E084E80D900D57D, ___UserWise_1)); }
	inline UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47 * get_UserWise_1() const { return ___UserWise_1; }
	inline UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47 ** get_address_of_UserWise_1() { return &___UserWise_1; }
	inline void set_UserWise_1(UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47 * value)
	{
		___UserWise_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UserWise_1), (void*)value);
	}
};


// UserWiseSDK.UserWise
struct  UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47  : public RuntimeObject
{
public:
	// System.EventHandler`1<UserWiseSDK.OnStartEventArgs> UserWiseSDK.UserWise::OnStart
	EventHandler_1_t7CC7A6F8523F1B42EC272EDD550AF4B9CD218878 * ___OnStart_1;
	// System.EventHandler UserWiseSDK.UserWise::OnSessionInitializationAttemptFailed
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___OnSessionInitializationAttemptFailed_2;
	// System.EventHandler`1<UserWiseSDK.OnSessionInitializedEventArgs> UserWiseSDK.UserWise::OnSessionInitialized
	EventHandler_1_t410873E26095B700A7985EE8CE2B8D4415BF3EA1 * ___OnSessionInitialized_3;
	// System.EventHandler UserWiseSDK.UserWise::OnStop
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___OnStop_4;
	// System.Boolean UserWiseSDK.UserWise::<IsRunning>k__BackingField
	bool ___U3CIsRunningU3Ek__BackingField_5;
	// UserWiseSDK.Offers.OffersModule UserWiseSDK.UserWise::<OffersModule>k__BackingField
	OffersModule_t6F8C5C3B400904E3CBFB8EC6ACC9D02C8FD81737 * ___U3COffersModuleU3Ek__BackingField_6;
	// UserWiseSDK.Surveys.SurveysModule UserWiseSDK.UserWise::<SurveysModule>k__BackingField
	SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A * ___U3CSurveysModuleU3Ek__BackingField_7;
	// UserWiseSDK.Events.EventsModule UserWiseSDK.UserWise::<EventsModule>k__BackingField
	EventsModule_t4DAC0631F19FA41A3CA16E5C6B8F9732A7B43A20 * ___U3CEventsModuleU3Ek__BackingField_8;
	// UserWiseSDK.Messages.MessagesModule UserWiseSDK.UserWise::<MessagesModule>k__BackingField
	MessagesModule_t77B236E65D4003E98ED18F92F6A2FF781F5D5AC8 * ___U3CMessagesModuleU3Ek__BackingField_9;
	// UserWiseSDK.PushNotifications.PushNotificationsModule UserWiseSDK.UserWise::<PushNotificationsModule>k__BackingField
	PushNotificationsModule_tEBE210C49FAE8DBB1BC626E5661F4582EF9521C3 * ___U3CPushNotificationsModuleU3Ek__BackingField_10;
	// UserWiseSDK.Variables.VariablesModule UserWiseSDK.UserWise::<VariablesModule>k__BackingField
	VariablesModule_tF50D6213AFAE1B3AAA4725CA497C205E3F402675 * ___U3CVariablesModuleU3Ek__BackingField_11;
	// UserWiseSDK.Campaigns.CampaignsModule UserWiseSDK.UserWise::<CampaignsModule>k__BackingField
	CampaignsModule_tA0959E20252EE97968A02783FD4D3AAFDF192B10 * ___U3CCampaignsModuleU3Ek__BackingField_12;
	// UserWiseSDK.Internal.API.APIRequestor UserWiseSDK.UserWise::apiRequestor
	APIRequestor_tD14C8E4002C81340504C7A81952A09E57A7F597E * ___apiRequestor_13;
	// UserWiseSDK.Internal.SessionData UserWiseSDK.UserWise::sessionData
	SessionData_tA252CE97293037E48AE88E446107D0BBFF599001 * ___sessionData_14;
	// UserWiseSDK.Internal.Triggers.TriggerableContentController UserWiseSDK.UserWise::triggerableContentController
	TriggerableContentController_t879B381534ABAAA2D45C76715E084E80D900D57D * ___triggerableContentController_15;
	// UserWiseSDK.Internal.Scheduled.SchedulableContentController UserWiseSDK.UserWise::schedulableContentController
	SchedulableContentController_tF564CB4B9771BDD8B86048FDEFA58468DFCAA995 * ___schedulableContentController_16;
	// System.Collections.Generic.Dictionary`2<System.String,UserWiseSDK.MediaInfo> UserWiseSDK.UserWise::loadedMediaInfo
	Dictionary_2_tB0FB41928F6EF012A87C0AADD61CC5B74BF33C22 * ___loadedMediaInfo_17;
	// System.Boolean UserWiseSDK.UserWise::IsRunningInitialization
	bool ___IsRunningInitialization_18;
	// UserWiseSDK.Unity.UWHandlerGameObject UserWiseSDK.UserWise::gameObject
	UWHandlerGameObject_t36CEA348DF9C545316FA3A4E94C3DEFDEC5C0F65 * ___gameObject_19;
	// System.String UserWiseSDK.UserWise::_hostOverride
	String_t* ____hostOverride_20;

public:
	inline static int32_t get_offset_of_OnStart_1() { return static_cast<int32_t>(offsetof(UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47, ___OnStart_1)); }
	inline EventHandler_1_t7CC7A6F8523F1B42EC272EDD550AF4B9CD218878 * get_OnStart_1() const { return ___OnStart_1; }
	inline EventHandler_1_t7CC7A6F8523F1B42EC272EDD550AF4B9CD218878 ** get_address_of_OnStart_1() { return &___OnStart_1; }
	inline void set_OnStart_1(EventHandler_1_t7CC7A6F8523F1B42EC272EDD550AF4B9CD218878 * value)
	{
		___OnStart_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStart_1), (void*)value);
	}

	inline static int32_t get_offset_of_OnSessionInitializationAttemptFailed_2() { return static_cast<int32_t>(offsetof(UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47, ___OnSessionInitializationAttemptFailed_2)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_OnSessionInitializationAttemptFailed_2() const { return ___OnSessionInitializationAttemptFailed_2; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_OnSessionInitializationAttemptFailed_2() { return &___OnSessionInitializationAttemptFailed_2; }
	inline void set_OnSessionInitializationAttemptFailed_2(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___OnSessionInitializationAttemptFailed_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSessionInitializationAttemptFailed_2), (void*)value);
	}

	inline static int32_t get_offset_of_OnSessionInitialized_3() { return static_cast<int32_t>(offsetof(UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47, ___OnSessionInitialized_3)); }
	inline EventHandler_1_t410873E26095B700A7985EE8CE2B8D4415BF3EA1 * get_OnSessionInitialized_3() const { return ___OnSessionInitialized_3; }
	inline EventHandler_1_t410873E26095B700A7985EE8CE2B8D4415BF3EA1 ** get_address_of_OnSessionInitialized_3() { return &___OnSessionInitialized_3; }
	inline void set_OnSessionInitialized_3(EventHandler_1_t410873E26095B700A7985EE8CE2B8D4415BF3EA1 * value)
	{
		___OnSessionInitialized_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSessionInitialized_3), (void*)value);
	}

	inline static int32_t get_offset_of_OnStop_4() { return static_cast<int32_t>(offsetof(UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47, ___OnStop_4)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_OnStop_4() const { return ___OnStop_4; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_OnStop_4() { return &___OnStop_4; }
	inline void set_OnStop_4(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___OnStop_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStop_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsRunningU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47, ___U3CIsRunningU3Ek__BackingField_5)); }
	inline bool get_U3CIsRunningU3Ek__BackingField_5() const { return ___U3CIsRunningU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CIsRunningU3Ek__BackingField_5() { return &___U3CIsRunningU3Ek__BackingField_5; }
	inline void set_U3CIsRunningU3Ek__BackingField_5(bool value)
	{
		___U3CIsRunningU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3COffersModuleU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47, ___U3COffersModuleU3Ek__BackingField_6)); }
	inline OffersModule_t6F8C5C3B400904E3CBFB8EC6ACC9D02C8FD81737 * get_U3COffersModuleU3Ek__BackingField_6() const { return ___U3COffersModuleU3Ek__BackingField_6; }
	inline OffersModule_t6F8C5C3B400904E3CBFB8EC6ACC9D02C8FD81737 ** get_address_of_U3COffersModuleU3Ek__BackingField_6() { return &___U3COffersModuleU3Ek__BackingField_6; }
	inline void set_U3COffersModuleU3Ek__BackingField_6(OffersModule_t6F8C5C3B400904E3CBFB8EC6ACC9D02C8FD81737 * value)
	{
		___U3COffersModuleU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COffersModuleU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSurveysModuleU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47, ___U3CSurveysModuleU3Ek__BackingField_7)); }
	inline SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A * get_U3CSurveysModuleU3Ek__BackingField_7() const { return ___U3CSurveysModuleU3Ek__BackingField_7; }
	inline SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A ** get_address_of_U3CSurveysModuleU3Ek__BackingField_7() { return &___U3CSurveysModuleU3Ek__BackingField_7; }
	inline void set_U3CSurveysModuleU3Ek__BackingField_7(SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A * value)
	{
		___U3CSurveysModuleU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSurveysModuleU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventsModuleU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47, ___U3CEventsModuleU3Ek__BackingField_8)); }
	inline EventsModule_t4DAC0631F19FA41A3CA16E5C6B8F9732A7B43A20 * get_U3CEventsModuleU3Ek__BackingField_8() const { return ___U3CEventsModuleU3Ek__BackingField_8; }
	inline EventsModule_t4DAC0631F19FA41A3CA16E5C6B8F9732A7B43A20 ** get_address_of_U3CEventsModuleU3Ek__BackingField_8() { return &___U3CEventsModuleU3Ek__BackingField_8; }
	inline void set_U3CEventsModuleU3Ek__BackingField_8(EventsModule_t4DAC0631F19FA41A3CA16E5C6B8F9732A7B43A20 * value)
	{
		___U3CEventsModuleU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventsModuleU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMessagesModuleU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47, ___U3CMessagesModuleU3Ek__BackingField_9)); }
	inline MessagesModule_t77B236E65D4003E98ED18F92F6A2FF781F5D5AC8 * get_U3CMessagesModuleU3Ek__BackingField_9() const { return ___U3CMessagesModuleU3Ek__BackingField_9; }
	inline MessagesModule_t77B236E65D4003E98ED18F92F6A2FF781F5D5AC8 ** get_address_of_U3CMessagesModuleU3Ek__BackingField_9() { return &___U3CMessagesModuleU3Ek__BackingField_9; }
	inline void set_U3CMessagesModuleU3Ek__BackingField_9(MessagesModule_t77B236E65D4003E98ED18F92F6A2FF781F5D5AC8 * value)
	{
		___U3CMessagesModuleU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMessagesModuleU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPushNotificationsModuleU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47, ___U3CPushNotificationsModuleU3Ek__BackingField_10)); }
	inline PushNotificationsModule_tEBE210C49FAE8DBB1BC626E5661F4582EF9521C3 * get_U3CPushNotificationsModuleU3Ek__BackingField_10() const { return ___U3CPushNotificationsModuleU3Ek__BackingField_10; }
	inline PushNotificationsModule_tEBE210C49FAE8DBB1BC626E5661F4582EF9521C3 ** get_address_of_U3CPushNotificationsModuleU3Ek__BackingField_10() { return &___U3CPushNotificationsModuleU3Ek__BackingField_10; }
	inline void set_U3CPushNotificationsModuleU3Ek__BackingField_10(PushNotificationsModule_tEBE210C49FAE8DBB1BC626E5661F4582EF9521C3 * value)
	{
		___U3CPushNotificationsModuleU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPushNotificationsModuleU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CVariablesModuleU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47, ___U3CVariablesModuleU3Ek__BackingField_11)); }
	inline VariablesModule_tF50D6213AFAE1B3AAA4725CA497C205E3F402675 * get_U3CVariablesModuleU3Ek__BackingField_11() const { return ___U3CVariablesModuleU3Ek__BackingField_11; }
	inline VariablesModule_tF50D6213AFAE1B3AAA4725CA497C205E3F402675 ** get_address_of_U3CVariablesModuleU3Ek__BackingField_11() { return &___U3CVariablesModuleU3Ek__BackingField_11; }
	inline void set_U3CVariablesModuleU3Ek__BackingField_11(VariablesModule_tF50D6213AFAE1B3AAA4725CA497C205E3F402675 * value)
	{
		___U3CVariablesModuleU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVariablesModuleU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCampaignsModuleU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47, ___U3CCampaignsModuleU3Ek__BackingField_12)); }
	inline CampaignsModule_tA0959E20252EE97968A02783FD4D3AAFDF192B10 * get_U3CCampaignsModuleU3Ek__BackingField_12() const { return ___U3CCampaignsModuleU3Ek__BackingField_12; }
	inline CampaignsModule_tA0959E20252EE97968A02783FD4D3AAFDF192B10 ** get_address_of_U3CCampaignsModuleU3Ek__BackingField_12() { return &___U3CCampaignsModuleU3Ek__BackingField_12; }
	inline void set_U3CCampaignsModuleU3Ek__BackingField_12(CampaignsModule_tA0959E20252EE97968A02783FD4D3AAFDF192B10 * value)
	{
		___U3CCampaignsModuleU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCampaignsModuleU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_apiRequestor_13() { return static_cast<int32_t>(offsetof(UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47, ___apiRequestor_13)); }
	inline APIRequestor_tD14C8E4002C81340504C7A81952A09E57A7F597E * get_apiRequestor_13() const { return ___apiRequestor_13; }
	inline APIRequestor_tD14C8E4002C81340504C7A81952A09E57A7F597E ** get_address_of_apiRequestor_13() { return &___apiRequestor_13; }
	inline void set_apiRequestor_13(APIRequestor_tD14C8E4002C81340504C7A81952A09E57A7F597E * value)
	{
		___apiRequestor_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___apiRequestor_13), (void*)value);
	}

	inline static int32_t get_offset_of_sessionData_14() { return static_cast<int32_t>(offsetof(UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47, ___sessionData_14)); }
	inline SessionData_tA252CE97293037E48AE88E446107D0BBFF599001 * get_sessionData_14() const { return ___sessionData_14; }
	inline SessionData_tA252CE97293037E48AE88E446107D0BBFF599001 ** get_address_of_sessionData_14() { return &___sessionData_14; }
	inline void set_sessionData_14(SessionData_tA252CE97293037E48AE88E446107D0BBFF599001 * value)
	{
		___sessionData_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sessionData_14), (void*)value);
	}

	inline static int32_t get_offset_of_triggerableContentController_15() { return static_cast<int32_t>(offsetof(UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47, ___triggerableContentController_15)); }
	inline TriggerableContentController_t879B381534ABAAA2D45C76715E084E80D900D57D * get_triggerableContentController_15() const { return ___triggerableContentController_15; }
	inline TriggerableContentController_t879B381534ABAAA2D45C76715E084E80D900D57D ** get_address_of_triggerableContentController_15() { return &___triggerableContentController_15; }
	inline void set_triggerableContentController_15(TriggerableContentController_t879B381534ABAAA2D45C76715E084E80D900D57D * value)
	{
		___triggerableContentController_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___triggerableContentController_15), (void*)value);
	}

	inline static int32_t get_offset_of_schedulableContentController_16() { return static_cast<int32_t>(offsetof(UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47, ___schedulableContentController_16)); }
	inline SchedulableContentController_tF564CB4B9771BDD8B86048FDEFA58468DFCAA995 * get_schedulableContentController_16() const { return ___schedulableContentController_16; }
	inline SchedulableContentController_tF564CB4B9771BDD8B86048FDEFA58468DFCAA995 ** get_address_of_schedulableContentController_16() { return &___schedulableContentController_16; }
	inline void set_schedulableContentController_16(SchedulableContentController_tF564CB4B9771BDD8B86048FDEFA58468DFCAA995 * value)
	{
		___schedulableContentController_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___schedulableContentController_16), (void*)value);
	}

	inline static int32_t get_offset_of_loadedMediaInfo_17() { return static_cast<int32_t>(offsetof(UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47, ___loadedMediaInfo_17)); }
	inline Dictionary_2_tB0FB41928F6EF012A87C0AADD61CC5B74BF33C22 * get_loadedMediaInfo_17() const { return ___loadedMediaInfo_17; }
	inline Dictionary_2_tB0FB41928F6EF012A87C0AADD61CC5B74BF33C22 ** get_address_of_loadedMediaInfo_17() { return &___loadedMediaInfo_17; }
	inline void set_loadedMediaInfo_17(Dictionary_2_tB0FB41928F6EF012A87C0AADD61CC5B74BF33C22 * value)
	{
		___loadedMediaInfo_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loadedMediaInfo_17), (void*)value);
	}

	inline static int32_t get_offset_of_IsRunningInitialization_18() { return static_cast<int32_t>(offsetof(UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47, ___IsRunningInitialization_18)); }
	inline bool get_IsRunningInitialization_18() const { return ___IsRunningInitialization_18; }
	inline bool* get_address_of_IsRunningInitialization_18() { return &___IsRunningInitialization_18; }
	inline void set_IsRunningInitialization_18(bool value)
	{
		___IsRunningInitialization_18 = value;
	}

	inline static int32_t get_offset_of_gameObject_19() { return static_cast<int32_t>(offsetof(UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47, ___gameObject_19)); }
	inline UWHandlerGameObject_t36CEA348DF9C545316FA3A4E94C3DEFDEC5C0F65 * get_gameObject_19() const { return ___gameObject_19; }
	inline UWHandlerGameObject_t36CEA348DF9C545316FA3A4E94C3DEFDEC5C0F65 ** get_address_of_gameObject_19() { return &___gameObject_19; }
	inline void set_gameObject_19(UWHandlerGameObject_t36CEA348DF9C545316FA3A4E94C3DEFDEC5C0F65 * value)
	{
		___gameObject_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameObject_19), (void*)value);
	}

	inline static int32_t get_offset_of__hostOverride_20() { return static_cast<int32_t>(offsetof(UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47, ____hostOverride_20)); }
	inline String_t* get__hostOverride_20() const { return ____hostOverride_20; }
	inline String_t** get_address_of__hostOverride_20() { return &____hostOverride_20; }
	inline void set__hostOverride_20(String_t* value)
	{
		____hostOverride_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____hostOverride_20), (void*)value);
	}
};

struct UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47_StaticFields
{
public:
	// System.String UserWiseSDK.UserWise::VERSION
	String_t* ___VERSION_0;
	// System.Lazy`1<UserWiseSDK.UserWise> UserWiseSDK.UserWise::lazySharedInst
	Lazy_1_t321FD8275F80723BDEB69B00532E4113E8D4C59A * ___lazySharedInst_21;

public:
	inline static int32_t get_offset_of_VERSION_0() { return static_cast<int32_t>(offsetof(UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47_StaticFields, ___VERSION_0)); }
	inline String_t* get_VERSION_0() const { return ___VERSION_0; }
	inline String_t** get_address_of_VERSION_0() { return &___VERSION_0; }
	inline void set_VERSION_0(String_t* value)
	{
		___VERSION_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VERSION_0), (void*)value);
	}

	inline static int32_t get_offset_of_lazySharedInst_21() { return static_cast<int32_t>(offsetof(UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47_StaticFields, ___lazySharedInst_21)); }
	inline Lazy_1_t321FD8275F80723BDEB69B00532E4113E8D4C59A * get_lazySharedInst_21() const { return ___lazySharedInst_21; }
	inline Lazy_1_t321FD8275F80723BDEB69B00532E4113E8D4C59A ** get_address_of_lazySharedInst_21() { return &___lazySharedInst_21; }
	inline void set_lazySharedInst_21(Lazy_1_t321FD8275F80723BDEB69B00532E4113E8D4C59A * value)
	{
		___lazySharedInst_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lazySharedInst_21), (void*)value);
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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

// UserWiseSDK.Messages.MessagesModule/<>c__DisplayClass25_0
struct  U3CU3Ec__DisplayClass25_0_t6BF097B330FC68C168CF6F78E6154E937879D9F1  : public RuntimeObject
{
public:
	// UserWiseSDK.Messages.Message UserWiseSDK.Messages.MessagesModule/<>c__DisplayClass25_0::message
	Message_t994A7D958E14F464F785BFB6864280005103A91D * ___message_0;
	// UserWiseSDK.Messages.MessagesModule UserWiseSDK.Messages.MessagesModule/<>c__DisplayClass25_0::<>4__this
	MessagesModule_t77B236E65D4003E98ED18F92F6A2FF781F5D5AC8 * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_message_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass25_0_t6BF097B330FC68C168CF6F78E6154E937879D9F1, ___message_0)); }
	inline Message_t994A7D958E14F464F785BFB6864280005103A91D * get_message_0() const { return ___message_0; }
	inline Message_t994A7D958E14F464F785BFB6864280005103A91D ** get_address_of_message_0() { return &___message_0; }
	inline void set_message_0(Message_t994A7D958E14F464F785BFB6864280005103A91D * value)
	{
		___message_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___message_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass25_0_t6BF097B330FC68C168CF6F78E6154E937879D9F1, ___U3CU3E4__this_1)); }
	inline MessagesModule_t77B236E65D4003E98ED18F92F6A2FF781F5D5AC8 * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline MessagesModule_t77B236E65D4003E98ED18F92F6A2FF781F5D5AC8 ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(MessagesModule_t77B236E65D4003E98ED18F92F6A2FF781F5D5AC8 * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// UserWiseSDK.Messages.MessagesModule/<>c__DisplayClass33_0
struct  U3CU3Ec__DisplayClass33_0_t85D2ED8887F3E354C84F7CB192B1906A3A2A5B83  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Object>> UserWiseSDK.Messages.MessagesModule/<>c__DisplayClass33_0::data
	Dictionary_2_tBC3D75391B3A91841136B660BDB52AABDF625D3C * ___data_0;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass33_0_t85D2ED8887F3E354C84F7CB192B1906A3A2A5B83, ___data_0)); }
	inline Dictionary_2_tBC3D75391B3A91841136B660BDB52AABDF625D3C * get_data_0() const { return ___data_0; }
	inline Dictionary_2_tBC3D75391B3A91841136B660BDB52AABDF625D3C ** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(Dictionary_2_tBC3D75391B3A91841136B660BDB52AABDF625D3C * value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_0), (void*)value);
	}
};


// UserWiseSDK.Offers.OffersModule/<>c
struct  U3CU3Ec_t43D16DAD4F56F4F796AB9EB26DC1797E5519B895  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t43D16DAD4F56F4F796AB9EB26DC1797E5519B895_StaticFields
{
public:
	// UserWiseSDK.Offers.OffersModule/<>c UserWiseSDK.Offers.OffersModule/<>c::<>9
	U3CU3Ec_t43D16DAD4F56F4F796AB9EB26DC1797E5519B895 * ___U3CU3E9_0;
	// System.Action`1<UserWiseSDK.Internal.API.APIResponse> UserWiseSDK.Offers.OffersModule/<>c::<>9__34_0
	Action_1_tFCB412D46FF51645C0DC0D13515EF4C0D61FEFFB * ___U3CU3E9__34_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t43D16DAD4F56F4F796AB9EB26DC1797E5519B895_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t43D16DAD4F56F4F796AB9EB26DC1797E5519B895 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t43D16DAD4F56F4F796AB9EB26DC1797E5519B895 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t43D16DAD4F56F4F796AB9EB26DC1797E5519B895 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__34_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t43D16DAD4F56F4F796AB9EB26DC1797E5519B895_StaticFields, ___U3CU3E9__34_0_1)); }
	inline Action_1_tFCB412D46FF51645C0DC0D13515EF4C0D61FEFFB * get_U3CU3E9__34_0_1() const { return ___U3CU3E9__34_0_1; }
	inline Action_1_tFCB412D46FF51645C0DC0D13515EF4C0D61FEFFB ** get_address_of_U3CU3E9__34_0_1() { return &___U3CU3E9__34_0_1; }
	inline void set_U3CU3E9__34_0_1(Action_1_tFCB412D46FF51645C0DC0D13515EF4C0D61FEFFB * value)
	{
		___U3CU3E9__34_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__34_0_1), (void*)value);
	}
};


// UserWiseSDK.Offers.OffersModule/<>c__DisplayClass33_0
struct  U3CU3Ec__DisplayClass33_0_t2BFC0CE3A8E7CFC3BAF951E217BB46D3BF0EB5F7  : public RuntimeObject
{
public:
	// UserWiseSDK.Offers.OffersModule UserWiseSDK.Offers.OffersModule/<>c__DisplayClass33_0::<>4__this
	OffersModule_t6F8C5C3B400904E3CBFB8EC6ACC9D02C8FD81737 * ___U3CU3E4__this_0;
	// UserWiseSDK.Offers.Offer UserWiseSDK.Offers.OffersModule/<>c__DisplayClass33_0::offer
	Offer_tF5EB0445F358ACF0E545C2B513B39B63804190A7 * ___offer_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass33_0_t2BFC0CE3A8E7CFC3BAF951E217BB46D3BF0EB5F7, ___U3CU3E4__this_0)); }
	inline OffersModule_t6F8C5C3B400904E3CBFB8EC6ACC9D02C8FD81737 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline OffersModule_t6F8C5C3B400904E3CBFB8EC6ACC9D02C8FD81737 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(OffersModule_t6F8C5C3B400904E3CBFB8EC6ACC9D02C8FD81737 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_offer_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass33_0_t2BFC0CE3A8E7CFC3BAF951E217BB46D3BF0EB5F7, ___offer_1)); }
	inline Offer_tF5EB0445F358ACF0E545C2B513B39B63804190A7 * get_offer_1() const { return ___offer_1; }
	inline Offer_tF5EB0445F358ACF0E545C2B513B39B63804190A7 ** get_address_of_offer_1() { return &___offer_1; }
	inline void set_offer_1(Offer_tF5EB0445F358ACF0E545C2B513B39B63804190A7 * value)
	{
		___offer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___offer_1), (void*)value);
	}
};


// UserWiseSDK.PlayerEvent/<>c__DisplayClass6_0
struct  U3CU3Ec__DisplayClass6_0_t35C2E77CF792ED0E19199BDF44B18E8897197F09  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>> UserWiseSDK.PlayerEvent/<>c__DisplayClass6_0::serializedAttributes
	List_1_t3CAEFF22F70FA8270239B1324BE3AABD8B5BD0C0 * ___serializedAttributes_0;

public:
	inline static int32_t get_offset_of_serializedAttributes_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_t35C2E77CF792ED0E19199BDF44B18E8897197F09, ___serializedAttributes_0)); }
	inline List_1_t3CAEFF22F70FA8270239B1324BE3AABD8B5BD0C0 * get_serializedAttributes_0() const { return ___serializedAttributes_0; }
	inline List_1_t3CAEFF22F70FA8270239B1324BE3AABD8B5BD0C0 ** get_address_of_serializedAttributes_0() { return &___serializedAttributes_0; }
	inline void set_serializedAttributes_0(List_1_t3CAEFF22F70FA8270239B1324BE3AABD8B5BD0C0 * value)
	{
		___serializedAttributes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serializedAttributes_0), (void*)value);
	}
};


// UserWiseSDK.Region/<>c__DisplayClass6_0
struct  U3CU3Ec__DisplayClass6_0_tD07C02F88A629829CA14D23ADD791EFC038D0A81  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>> UserWiseSDK.Region/<>c__DisplayClass6_0::serializedMetadata
	List_1_t3CAEFF22F70FA8270239B1324BE3AABD8B5BD0C0 * ___serializedMetadata_0;

public:
	inline static int32_t get_offset_of_serializedMetadata_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_tD07C02F88A629829CA14D23ADD791EFC038D0A81, ___serializedMetadata_0)); }
	inline List_1_t3CAEFF22F70FA8270239B1324BE3AABD8B5BD0C0 * get_serializedMetadata_0() const { return ___serializedMetadata_0; }
	inline List_1_t3CAEFF22F70FA8270239B1324BE3AABD8B5BD0C0 ** get_address_of_serializedMetadata_0() { return &___serializedMetadata_0; }
	inline void set_serializedMetadata_0(List_1_t3CAEFF22F70FA8270239B1324BE3AABD8B5BD0C0 * value)
	{
		___serializedMetadata_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serializedMetadata_0), (void*)value);
	}
};


// UserWiseSDK.Internal.Scheduled.SchedulableContentController/<>c__DisplayClass7_0
struct  U3CU3Ec__DisplayClass7_0_tA8C9B8C22D85B3D1346E1F9891EDA1AD5D61DCBE  : public RuntimeObject
{
public:
	// UserWiseSDK.Internal.Scheduled.ISchedulable UserWiseSDK.Internal.Scheduled.SchedulableContentController/<>c__DisplayClass7_0::schedulable
	RuntimeObject* ___schedulable_0;
	// UserWiseSDK.Internal.Scheduled.SchedulableContentController UserWiseSDK.Internal.Scheduled.SchedulableContentController/<>c__DisplayClass7_0::<>4__this
	SchedulableContentController_tF564CB4B9771BDD8B86048FDEFA58468DFCAA995 * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_schedulable_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_tA8C9B8C22D85B3D1346E1F9891EDA1AD5D61DCBE, ___schedulable_0)); }
	inline RuntimeObject* get_schedulable_0() const { return ___schedulable_0; }
	inline RuntimeObject** get_address_of_schedulable_0() { return &___schedulable_0; }
	inline void set_schedulable_0(RuntimeObject* value)
	{
		___schedulable_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___schedulable_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_tA8C9B8C22D85B3D1346E1F9891EDA1AD5D61DCBE, ___U3CU3E4__this_1)); }
	inline SchedulableContentController_tF564CB4B9771BDD8B86048FDEFA58468DFCAA995 * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline SchedulableContentController_tF564CB4B9771BDD8B86048FDEFA58468DFCAA995 ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(SchedulableContentController_tF564CB4B9771BDD8B86048FDEFA58468DFCAA995 * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// UserWiseSDK.Internal.Scheduled.SchedulableContentController/<>c__DisplayClass9_0
struct  U3CU3Ec__DisplayClass9_0_tB70C1EF881D32041E6E9B57A4D778A93FA207FDF  : public RuntimeObject
{
public:
	// UserWiseSDK.Internal.Scheduled.ISchedulable UserWiseSDK.Internal.Scheduled.SchedulableContentController/<>c__DisplayClass9_0::schedulable
	RuntimeObject* ___schedulable_0;
	// UserWiseSDK.Internal.Scheduled.SchedulableContentController UserWiseSDK.Internal.Scheduled.SchedulableContentController/<>c__DisplayClass9_0::<>4__this
	SchedulableContentController_tF564CB4B9771BDD8B86048FDEFA58468DFCAA995 * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_schedulable_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_tB70C1EF881D32041E6E9B57A4D778A93FA207FDF, ___schedulable_0)); }
	inline RuntimeObject* get_schedulable_0() const { return ___schedulable_0; }
	inline RuntimeObject** get_address_of_schedulable_0() { return &___schedulable_0; }
	inline void set_schedulable_0(RuntimeObject* value)
	{
		___schedulable_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___schedulable_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_tB70C1EF881D32041E6E9B57A4D778A93FA207FDF, ___U3CU3E4__this_1)); }
	inline SchedulableContentController_tF564CB4B9771BDD8B86048FDEFA58468DFCAA995 * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline SchedulableContentController_tF564CB4B9771BDD8B86048FDEFA58468DFCAA995 ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(SchedulableContentController_tF564CB4B9771BDD8B86048FDEFA58468DFCAA995 * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// UserWiseSDK.Variables.Types.StringVariable/<>c__DisplayClass1_0
struct  U3CU3Ec__DisplayClass1_0_t3B7E60D8AB61E67E26DC21327E12026D249099C7  : public RuntimeObject
{
public:
	// UserWiseSDK.Variables.Types.StringVariable UserWiseSDK.Variables.Types.StringVariable/<>c__DisplayClass1_0::<>4__this
	StringVariable_t5D1782F60CD7D6C7FE378A53EED1F99D47EF2BE5 * ___U3CU3E4__this_0;
	// System.Object UserWiseSDK.Variables.Types.StringVariable/<>c__DisplayClass1_0::newValue
	RuntimeObject * ___newValue_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_t3B7E60D8AB61E67E26DC21327E12026D249099C7, ___U3CU3E4__this_0)); }
	inline StringVariable_t5D1782F60CD7D6C7FE378A53EED1F99D47EF2BE5 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline StringVariable_t5D1782F60CD7D6C7FE378A53EED1F99D47EF2BE5 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(StringVariable_t5D1782F60CD7D6C7FE378A53EED1F99D47EF2BE5 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_newValue_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_t3B7E60D8AB61E67E26DC21327E12026D249099C7, ___newValue_1)); }
	inline RuntimeObject * get_newValue_1() const { return ___newValue_1; }
	inline RuntimeObject ** get_address_of_newValue_1() { return &___newValue_1; }
	inline void set_newValue_1(RuntimeObject * value)
	{
		___newValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___newValue_1), (void*)value);
	}
};


// UserWiseSDK.Surveys.SurveysModule/<>c__DisplayClass45_0
struct  U3CU3Ec__DisplayClass45_0_tE0D83E2E7B92042CA32F0F7DCDB563071B846225  : public RuntimeObject
{
public:
	// UserWiseSDK.Surveys.SurveysModule UserWiseSDK.Surveys.SurveysModule/<>c__DisplayClass45_0::<>4__this
	SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A * ___U3CU3E4__this_0;
	// UserWiseSDK.Surveys.Survey UserWiseSDK.Surveys.SurveysModule/<>c__DisplayClass45_0::survey
	Survey_t63EBCA3CF9AB2225CD1CF20B3E7B854C7846832A * ___survey_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass45_0_tE0D83E2E7B92042CA32F0F7DCDB563071B846225, ___U3CU3E4__this_0)); }
	inline SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_survey_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass45_0_tE0D83E2E7B92042CA32F0F7DCDB563071B846225, ___survey_1)); }
	inline Survey_t63EBCA3CF9AB2225CD1CF20B3E7B854C7846832A * get_survey_1() const { return ___survey_1; }
	inline Survey_t63EBCA3CF9AB2225CD1CF20B3E7B854C7846832A ** get_address_of_survey_1() { return &___survey_1; }
	inline void set_survey_1(Survey_t63EBCA3CF9AB2225CD1CF20B3E7B854C7846832A * value)
	{
		___survey_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___survey_1), (void*)value);
	}
};


// UserWiseSDK.Surveys.SurveysModule/<>c__DisplayClass46_0
struct  U3CU3Ec__DisplayClass46_0_t855782F0F5F68CBF9C9BB773F47B63ED0A87F8D0  : public RuntimeObject
{
public:
	// UserWiseSDK.Surveys.SurveysModule UserWiseSDK.Surveys.SurveysModule/<>c__DisplayClass46_0::<>4__this
	SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A * ___U3CU3E4__this_0;
	// UserWiseSDK.Surveys.Survey UserWiseSDK.Surveys.SurveysModule/<>c__DisplayClass46_0::survey
	Survey_t63EBCA3CF9AB2225CD1CF20B3E7B854C7846832A * ___survey_1;
	// System.String UserWiseSDK.Surveys.SurveysModule/<>c__DisplayClass46_0::responseId
	String_t* ___responseId_2;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass46_0_t855782F0F5F68CBF9C9BB773F47B63ED0A87F8D0, ___U3CU3E4__this_0)); }
	inline SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_survey_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass46_0_t855782F0F5F68CBF9C9BB773F47B63ED0A87F8D0, ___survey_1)); }
	inline Survey_t63EBCA3CF9AB2225CD1CF20B3E7B854C7846832A * get_survey_1() const { return ___survey_1; }
	inline Survey_t63EBCA3CF9AB2225CD1CF20B3E7B854C7846832A ** get_address_of_survey_1() { return &___survey_1; }
	inline void set_survey_1(Survey_t63EBCA3CF9AB2225CD1CF20B3E7B854C7846832A * value)
	{
		___survey_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___survey_1), (void*)value);
	}

	inline static int32_t get_offset_of_responseId_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass46_0_t855782F0F5F68CBF9C9BB773F47B63ED0A87F8D0, ___responseId_2)); }
	inline String_t* get_responseId_2() const { return ___responseId_2; }
	inline String_t** get_address_of_responseId_2() { return &___responseId_2; }
	inline void set_responseId_2(String_t* value)
	{
		___responseId_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___responseId_2), (void*)value);
	}
};


// UserWiseSDK.Surveys.SurveysModule/<>c__DisplayClass47_0
struct  U3CU3Ec__DisplayClass47_0_t2A6AC13E2429211AD116ED1F6632EAE25A407BCB  : public RuntimeObject
{
public:
	// System.Boolean UserWiseSDK.Surveys.SurveysModule/<>c__DisplayClass47_0::wasAccepted
	bool ___wasAccepted_0;
	// UserWiseSDK.Surveys.SurveysModule UserWiseSDK.Surveys.SurveysModule/<>c__DisplayClass47_0::<>4__this
	SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A * ___U3CU3E4__this_1;
	// UserWiseSDK.Surveys.Survey UserWiseSDK.Surveys.SurveysModule/<>c__DisplayClass47_0::survey
	Survey_t63EBCA3CF9AB2225CD1CF20B3E7B854C7846832A * ___survey_2;
	// System.String UserWiseSDK.Surveys.SurveysModule/<>c__DisplayClass47_0::responseId
	String_t* ___responseId_3;

public:
	inline static int32_t get_offset_of_wasAccepted_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass47_0_t2A6AC13E2429211AD116ED1F6632EAE25A407BCB, ___wasAccepted_0)); }
	inline bool get_wasAccepted_0() const { return ___wasAccepted_0; }
	inline bool* get_address_of_wasAccepted_0() { return &___wasAccepted_0; }
	inline void set_wasAccepted_0(bool value)
	{
		___wasAccepted_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass47_0_t2A6AC13E2429211AD116ED1F6632EAE25A407BCB, ___U3CU3E4__this_1)); }
	inline SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}

	inline static int32_t get_offset_of_survey_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass47_0_t2A6AC13E2429211AD116ED1F6632EAE25A407BCB, ___survey_2)); }
	inline Survey_t63EBCA3CF9AB2225CD1CF20B3E7B854C7846832A * get_survey_2() const { return ___survey_2; }
	inline Survey_t63EBCA3CF9AB2225CD1CF20B3E7B854C7846832A ** get_address_of_survey_2() { return &___survey_2; }
	inline void set_survey_2(Survey_t63EBCA3CF9AB2225CD1CF20B3E7B854C7846832A * value)
	{
		___survey_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___survey_2), (void*)value);
	}

	inline static int32_t get_offset_of_responseId_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass47_0_t2A6AC13E2429211AD116ED1F6632EAE25A407BCB, ___responseId_3)); }
	inline String_t* get_responseId_3() const { return ___responseId_3; }
	inline String_t** get_address_of_responseId_3() { return &___responseId_3; }
	inline void set_responseId_3(String_t* value)
	{
		___responseId_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___responseId_3), (void*)value);
	}
};


// UserWiseSDK.Surveys.SurveysModule/<>c__DisplayClass48_0
struct  U3CU3Ec__DisplayClass48_0_tF729482103EAE6A557BB049FE81D346236E4582B  : public RuntimeObject
{
public:
	// UserWiseSDK.Surveys.SurveysModule UserWiseSDK.Surveys.SurveysModule/<>c__DisplayClass48_0::<>4__this
	SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A * ___U3CU3E4__this_0;
	// UserWiseSDK.Surveys.Survey UserWiseSDK.Surveys.SurveysModule/<>c__DisplayClass48_0::survey
	Survey_t63EBCA3CF9AB2225CD1CF20B3E7B854C7846832A * ___survey_1;
	// System.String UserWiseSDK.Surveys.SurveysModule/<>c__DisplayClass48_0::responseId
	String_t* ___responseId_2;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass48_0_tF729482103EAE6A557BB049FE81D346236E4582B, ___U3CU3E4__this_0)); }
	inline SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_survey_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass48_0_tF729482103EAE6A557BB049FE81D346236E4582B, ___survey_1)); }
	inline Survey_t63EBCA3CF9AB2225CD1CF20B3E7B854C7846832A * get_survey_1() const { return ___survey_1; }
	inline Survey_t63EBCA3CF9AB2225CD1CF20B3E7B854C7846832A ** get_address_of_survey_1() { return &___survey_1; }
	inline void set_survey_1(Survey_t63EBCA3CF9AB2225CD1CF20B3E7B854C7846832A * value)
	{
		___survey_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___survey_1), (void*)value);
	}

	inline static int32_t get_offset_of_responseId_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass48_0_tF729482103EAE6A557BB049FE81D346236E4582B, ___responseId_2)); }
	inline String_t* get_responseId_2() const { return ___responseId_2; }
	inline String_t** get_address_of_responseId_2() { return &___responseId_2; }
	inline void set_responseId_2(String_t* value)
	{
		___responseId_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___responseId_2), (void*)value);
	}
};


// UserWiseSDK.Campaigns.Internal.TriggerableCampaign/<>c__DisplayClass31_0
struct  U3CU3Ec__DisplayClass31_0_t3162AB2F18601EF78435ACE2B3CA7299CA2EDE84  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>> UserWiseSDK.Campaigns.Internal.TriggerableCampaign/<>c__DisplayClass31_0::serializedEvents
	List_1_t3CAEFF22F70FA8270239B1324BE3AABD8B5BD0C0 * ___serializedEvents_0;
	// System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>> UserWiseSDK.Campaigns.Internal.TriggerableCampaign/<>c__DisplayClass31_0::serializedMessages
	List_1_t3CAEFF22F70FA8270239B1324BE3AABD8B5BD0C0 * ___serializedMessages_1;
	// System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>> UserWiseSDK.Campaigns.Internal.TriggerableCampaign/<>c__DisplayClass31_0::serializedOffers
	List_1_t3CAEFF22F70FA8270239B1324BE3AABD8B5BD0C0 * ___serializedOffers_2;
	// System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>> UserWiseSDK.Campaigns.Internal.TriggerableCampaign/<>c__DisplayClass31_0::serializedSurveys
	List_1_t3CAEFF22F70FA8270239B1324BE3AABD8B5BD0C0 * ___serializedSurveys_3;

public:
	inline static int32_t get_offset_of_serializedEvents_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass31_0_t3162AB2F18601EF78435ACE2B3CA7299CA2EDE84, ___serializedEvents_0)); }
	inline List_1_t3CAEFF22F70FA8270239B1324BE3AABD8B5BD0C0 * get_serializedEvents_0() const { return ___serializedEvents_0; }
	inline List_1_t3CAEFF22F70FA8270239B1324BE3AABD8B5BD0C0 ** get_address_of_serializedEvents_0() { return &___serializedEvents_0; }
	inline void set_serializedEvents_0(List_1_t3CAEFF22F70FA8270239B1324BE3AABD8B5BD0C0 * value)
	{
		___serializedEvents_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serializedEvents_0), (void*)value);
	}

	inline static int32_t get_offset_of_serializedMessages_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass31_0_t3162AB2F18601EF78435ACE2B3CA7299CA2EDE84, ___serializedMessages_1)); }
	inline List_1_t3CAEFF22F70FA8270239B1324BE3AABD8B5BD0C0 * get_serializedMessages_1() const { return ___serializedMessages_1; }
	inline List_1_t3CAEFF22F70FA8270239B1324BE3AABD8B5BD0C0 ** get_address_of_serializedMessages_1() { return &___serializedMessages_1; }
	inline void set_serializedMessages_1(List_1_t3CAEFF22F70FA8270239B1324BE3AABD8B5BD0C0 * value)
	{
		___serializedMessages_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serializedMessages_1), (void*)value);
	}

	inline static int32_t get_offset_of_serializedOffers_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass31_0_t3162AB2F18601EF78435ACE2B3CA7299CA2EDE84, ___serializedOffers_2)); }
	inline List_1_t3CAEFF22F70FA8270239B1324BE3AABD8B5BD0C0 * get_serializedOffers_2() const { return ___serializedOffers_2; }
	inline List_1_t3CAEFF22F70FA8270239B1324BE3AABD8B5BD0C0 ** get_address_of_serializedOffers_2() { return &___serializedOffers_2; }
	inline void set_serializedOffers_2(List_1_t3CAEFF22F70FA8270239B1324BE3AABD8B5BD0C0 * value)
	{
		___serializedOffers_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serializedOffers_2), (void*)value);
	}

	inline static int32_t get_offset_of_serializedSurveys_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass31_0_t3162AB2F18601EF78435ACE2B3CA7299CA2EDE84, ___serializedSurveys_3)); }
	inline List_1_t3CAEFF22F70FA8270239B1324BE3AABD8B5BD0C0 * get_serializedSurveys_3() const { return ___serializedSurveys_3; }
	inline List_1_t3CAEFF22F70FA8270239B1324BE3AABD8B5BD0C0 ** get_address_of_serializedSurveys_3() { return &___serializedSurveys_3; }
	inline void set_serializedSurveys_3(List_1_t3CAEFF22F70FA8270239B1324BE3AABD8B5BD0C0 * value)
	{
		___serializedSurveys_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serializedSurveys_3), (void*)value);
	}
};


// UserWiseSDK.Campaigns.Internal.TriggerableCampaign/<>c__DisplayClass35_0
struct  U3CU3Ec__DisplayClass35_0_t5273E630404198372B6E589574E69230FFCD8274  : public RuntimeObject
{
public:
	// UserWiseSDK.Events.EventsModule UserWiseSDK.Campaigns.Internal.TriggerableCampaign/<>c__DisplayClass35_0::eventsModule
	EventsModule_t4DAC0631F19FA41A3CA16E5C6B8F9732A7B43A20 * ___eventsModule_0;
	// UserWiseSDK.Messages.MessagesModule UserWiseSDK.Campaigns.Internal.TriggerableCampaign/<>c__DisplayClass35_0::messagesModule
	MessagesModule_t77B236E65D4003E98ED18F92F6A2FF781F5D5AC8 * ___messagesModule_1;
	// UserWiseSDK.Offers.OffersModule UserWiseSDK.Campaigns.Internal.TriggerableCampaign/<>c__DisplayClass35_0::offersModule
	OffersModule_t6F8C5C3B400904E3CBFB8EC6ACC9D02C8FD81737 * ___offersModule_2;
	// UserWiseSDK.Surveys.SurveysModule UserWiseSDK.Campaigns.Internal.TriggerableCampaign/<>c__DisplayClass35_0::surveysModule
	SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A * ___surveysModule_3;
	// System.Collections.Generic.List`1<UserWiseSDK.Variables.Types.IVariable> UserWiseSDK.Campaigns.Internal.TriggerableCampaign/<>c__DisplayClass35_0::variables
	List_1_t6A199232F00F6677AE80AA4F32F24C6B986CC7E2 * ___variables_4;

public:
	inline static int32_t get_offset_of_eventsModule_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass35_0_t5273E630404198372B6E589574E69230FFCD8274, ___eventsModule_0)); }
	inline EventsModule_t4DAC0631F19FA41A3CA16E5C6B8F9732A7B43A20 * get_eventsModule_0() const { return ___eventsModule_0; }
	inline EventsModule_t4DAC0631F19FA41A3CA16E5C6B8F9732A7B43A20 ** get_address_of_eventsModule_0() { return &___eventsModule_0; }
	inline void set_eventsModule_0(EventsModule_t4DAC0631F19FA41A3CA16E5C6B8F9732A7B43A20 * value)
	{
		___eventsModule_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventsModule_0), (void*)value);
	}

	inline static int32_t get_offset_of_messagesModule_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass35_0_t5273E630404198372B6E589574E69230FFCD8274, ___messagesModule_1)); }
	inline MessagesModule_t77B236E65D4003E98ED18F92F6A2FF781F5D5AC8 * get_messagesModule_1() const { return ___messagesModule_1; }
	inline MessagesModule_t77B236E65D4003E98ED18F92F6A2FF781F5D5AC8 ** get_address_of_messagesModule_1() { return &___messagesModule_1; }
	inline void set_messagesModule_1(MessagesModule_t77B236E65D4003E98ED18F92F6A2FF781F5D5AC8 * value)
	{
		___messagesModule_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___messagesModule_1), (void*)value);
	}

	inline static int32_t get_offset_of_offersModule_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass35_0_t5273E630404198372B6E589574E69230FFCD8274, ___offersModule_2)); }
	inline OffersModule_t6F8C5C3B400904E3CBFB8EC6ACC9D02C8FD81737 * get_offersModule_2() const { return ___offersModule_2; }
	inline OffersModule_t6F8C5C3B400904E3CBFB8EC6ACC9D02C8FD81737 ** get_address_of_offersModule_2() { return &___offersModule_2; }
	inline void set_offersModule_2(OffersModule_t6F8C5C3B400904E3CBFB8EC6ACC9D02C8FD81737 * value)
	{
		___offersModule_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___offersModule_2), (void*)value);
	}

	inline static int32_t get_offset_of_surveysModule_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass35_0_t5273E630404198372B6E589574E69230FFCD8274, ___surveysModule_3)); }
	inline SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A * get_surveysModule_3() const { return ___surveysModule_3; }
	inline SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A ** get_address_of_surveysModule_3() { return &___surveysModule_3; }
	inline void set_surveysModule_3(SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A * value)
	{
		___surveysModule_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___surveysModule_3), (void*)value);
	}

	inline static int32_t get_offset_of_variables_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass35_0_t5273E630404198372B6E589574E69230FFCD8274, ___variables_4)); }
	inline List_1_t6A199232F00F6677AE80AA4F32F24C6B986CC7E2 * get_variables_4() const { return ___variables_4; }
	inline List_1_t6A199232F00F6677AE80AA4F32F24C6B986CC7E2 ** get_address_of_variables_4() { return &___variables_4; }
	inline void set_variables_4(List_1_t6A199232F00F6677AE80AA4F32F24C6B986CC7E2 * value)
	{
		___variables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___variables_4), (void*)value);
	}
};


// UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c
struct  U3CU3Ec_tE93B34597CA2E728710340B7EB2214EB39639A45  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tE93B34597CA2E728710340B7EB2214EB39639A45_StaticFields
{
public:
	// UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c::<>9
	U3CU3Ec_tE93B34597CA2E728710340B7EB2214EB39639A45 * ___U3CU3E9_0;
	// System.Predicate`1<UserWiseSDK.Internal.Triggers.ITriggerable> UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c::<>9__6_0
	Predicate_1_tC9CACB45F6A8CDB31F794FE9910F7A85B14C445C * ___U3CU3E9__6_0_1;
	// System.Predicate`1<UserWiseSDK.Internal.Triggers.ITriggerable> UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c::<>9__7_0
	Predicate_1_tC9CACB45F6A8CDB31F794FE9910F7A85B14C445C * ___U3CU3E9__7_0_2;
	// System.Predicate`1<UserWiseSDK.Internal.Triggers.ITriggerable> UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c::<>9__8_0
	Predicate_1_tC9CACB45F6A8CDB31F794FE9910F7A85B14C445C * ___U3CU3E9__8_0_3;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE93B34597CA2E728710340B7EB2214EB39639A45_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tE93B34597CA2E728710340B7EB2214EB39639A45 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tE93B34597CA2E728710340B7EB2214EB39639A45 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tE93B34597CA2E728710340B7EB2214EB39639A45 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__6_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE93B34597CA2E728710340B7EB2214EB39639A45_StaticFields, ___U3CU3E9__6_0_1)); }
	inline Predicate_1_tC9CACB45F6A8CDB31F794FE9910F7A85B14C445C * get_U3CU3E9__6_0_1() const { return ___U3CU3E9__6_0_1; }
	inline Predicate_1_tC9CACB45F6A8CDB31F794FE9910F7A85B14C445C ** get_address_of_U3CU3E9__6_0_1() { return &___U3CU3E9__6_0_1; }
	inline void set_U3CU3E9__6_0_1(Predicate_1_tC9CACB45F6A8CDB31F794FE9910F7A85B14C445C * value)
	{
		___U3CU3E9__6_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__6_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__7_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE93B34597CA2E728710340B7EB2214EB39639A45_StaticFields, ___U3CU3E9__7_0_2)); }
	inline Predicate_1_tC9CACB45F6A8CDB31F794FE9910F7A85B14C445C * get_U3CU3E9__7_0_2() const { return ___U3CU3E9__7_0_2; }
	inline Predicate_1_tC9CACB45F6A8CDB31F794FE9910F7A85B14C445C ** get_address_of_U3CU3E9__7_0_2() { return &___U3CU3E9__7_0_2; }
	inline void set_U3CU3E9__7_0_2(Predicate_1_tC9CACB45F6A8CDB31F794FE9910F7A85B14C445C * value)
	{
		___U3CU3E9__7_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__7_0_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__8_0_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE93B34597CA2E728710340B7EB2214EB39639A45_StaticFields, ___U3CU3E9__8_0_3)); }
	inline Predicate_1_tC9CACB45F6A8CDB31F794FE9910F7A85B14C445C * get_U3CU3E9__8_0_3() const { return ___U3CU3E9__8_0_3; }
	inline Predicate_1_tC9CACB45F6A8CDB31F794FE9910F7A85B14C445C ** get_address_of_U3CU3E9__8_0_3() { return &___U3CU3E9__8_0_3; }
	inline void set_U3CU3E9__8_0_3(Predicate_1_tC9CACB45F6A8CDB31F794FE9910F7A85B14C445C * value)
	{
		___U3CU3E9__8_0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__8_0_3), (void*)value);
	}
};


// UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c__DisplayClass10_0
struct  U3CU3Ec__DisplayClass10_0_t431E0569A6A79C9269B1F3F801FC650C9633C98D  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.String> UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c__DisplayClass10_0::testValues
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___testValues_0;
	// System.String UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c__DisplayClass10_0::attributableValue
	String_t* ___attributableValue_1;

public:
	inline static int32_t get_offset_of_testValues_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_t431E0569A6A79C9269B1F3F801FC650C9633C98D, ___testValues_0)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_testValues_0() const { return ___testValues_0; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_testValues_0() { return &___testValues_0; }
	inline void set_testValues_0(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___testValues_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___testValues_0), (void*)value);
	}

	inline static int32_t get_offset_of_attributableValue_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_t431E0569A6A79C9269B1F3F801FC650C9633C98D, ___attributableValue_1)); }
	inline String_t* get_attributableValue_1() const { return ___attributableValue_1; }
	inline String_t** get_address_of_attributableValue_1() { return &___attributableValue_1; }
	inline void set_attributableValue_1(String_t* value)
	{
		___attributableValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attributableValue_1), (void*)value);
	}
};


// UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c__DisplayClass10_1
struct  U3CU3Ec__DisplayClass10_1_tEC2CC51281D844DB2994000721DC385D6D966A67  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Int64> UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c__DisplayClass10_1::testValues
	List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4 * ___testValues_0;

public:
	inline static int32_t get_offset_of_testValues_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_1_tEC2CC51281D844DB2994000721DC385D6D966A67, ___testValues_0)); }
	inline List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4 * get_testValues_0() const { return ___testValues_0; }
	inline List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4 ** get_address_of_testValues_0() { return &___testValues_0; }
	inline void set_testValues_0(List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4 * value)
	{
		___testValues_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___testValues_0), (void*)value);
	}
};


// UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c__DisplayClass10_2
struct  U3CU3Ec__DisplayClass10_2_tFB10A80CBF0C5E1A13CD00ADECCB414D13C09DCC  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Double> UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c__DisplayClass10_2::testValues
	List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * ___testValues_0;

public:
	inline static int32_t get_offset_of_testValues_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_2_tFB10A80CBF0C5E1A13CD00ADECCB414D13C09DCC, ___testValues_0)); }
	inline List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * get_testValues_0() const { return ___testValues_0; }
	inline List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC ** get_address_of_testValues_0() { return &___testValues_0; }
	inline void set_testValues_0(List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * value)
	{
		___testValues_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___testValues_0), (void*)value);
	}
};


// UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c__DisplayClass10_3
struct  U3CU3Ec__DisplayClass10_3_t12BDF41E90B1A66EB112830F8F67AA2A4CD10206  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.DateTime> UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c__DisplayClass10_3::testValues
	List_1_t7240E3382CB212F4FEB22D7A3E93EE9152E03CBC * ___testValues_0;

public:
	inline static int32_t get_offset_of_testValues_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_3_t12BDF41E90B1A66EB112830F8F67AA2A4CD10206, ___testValues_0)); }
	inline List_1_t7240E3382CB212F4FEB22D7A3E93EE9152E03CBC * get_testValues_0() const { return ___testValues_0; }
	inline List_1_t7240E3382CB212F4FEB22D7A3E93EE9152E03CBC ** get_address_of_testValues_0() { return &___testValues_0; }
	inline void set_testValues_0(List_1_t7240E3382CB212F4FEB22D7A3E93EE9152E03CBC * value)
	{
		___testValues_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___testValues_0), (void*)value);
	}
};


// UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c__DisplayClass7_1
struct  U3CU3Ec__DisplayClass7_1_tBC31731EF0C31056D82DBD574B2F05178C1BC5FE  : public RuntimeObject
{
public:
	// System.String UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c__DisplayClass7_1::triggerAttributeName
	String_t* ___triggerAttributeName_0;

public:
	inline static int32_t get_offset_of_triggerAttributeName_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_1_tBC31731EF0C31056D82DBD574B2F05178C1BC5FE, ___triggerAttributeName_0)); }
	inline String_t* get_triggerAttributeName_0() const { return ___triggerAttributeName_0; }
	inline String_t** get_address_of_triggerAttributeName_0() { return &___triggerAttributeName_0; }
	inline void set_triggerAttributeName_0(String_t* value)
	{
		___triggerAttributeName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___triggerAttributeName_0), (void*)value);
	}
};


// UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c__DisplayClass8_1
struct  U3CU3Ec__DisplayClass8_1_t9127E4A745BC257B855FE111D2BE5323F13E0747  : public RuntimeObject
{
public:
	// System.String UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c__DisplayClass8_1::triggerMetadatumName
	String_t* ___triggerMetadatumName_0;

public:
	inline static int32_t get_offset_of_triggerMetadatumName_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass8_1_t9127E4A745BC257B855FE111D2BE5323F13E0747, ___triggerMetadatumName_0)); }
	inline String_t* get_triggerMetadatumName_0() const { return ___triggerMetadatumName_0; }
	inline String_t** get_address_of_triggerMetadatumName_0() { return &___triggerMetadatumName_0; }
	inline void set_triggerMetadatumName_0(String_t* value)
	{
		___triggerMetadatumName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___triggerMetadatumName_0), (void*)value);
	}
};


// UserWiseSDK.UserWise/<>c
struct  U3CU3Ec_t30C593BF3D9A31C5EA7C390D973DA18D86183222  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t30C593BF3D9A31C5EA7C390D973DA18D86183222_StaticFields
{
public:
	// UserWiseSDK.UserWise/<>c UserWiseSDK.UserWise/<>c::<>9
	U3CU3Ec_t30C593BF3D9A31C5EA7C390D973DA18D86183222 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t30C593BF3D9A31C5EA7C390D973DA18D86183222_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t30C593BF3D9A31C5EA7C390D973DA18D86183222 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t30C593BF3D9A31C5EA7C390D973DA18D86183222 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t30C593BF3D9A31C5EA7C390D973DA18D86183222 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// UserWiseSDK.UserWise/<>c__DisplayClass71_0
struct  U3CU3Ec__DisplayClass71_0_tE8E7523B9BFF87C3D354E48684A61D61AA9033DC  : public RuntimeObject
{
public:
	// System.Action`2<System.Boolean,UserWiseSDK.MediaInfo> UserWiseSDK.UserWise/<>c__DisplayClass71_0::handler
	Action_2_tC9B6AFEE9B1498523B4F9EBDBC90FA84E9EB9393 * ___handler_0;

public:
	inline static int32_t get_offset_of_handler_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass71_0_tE8E7523B9BFF87C3D354E48684A61D61AA9033DC, ___handler_0)); }
	inline Action_2_tC9B6AFEE9B1498523B4F9EBDBC90FA84E9EB9393 * get_handler_0() const { return ___handler_0; }
	inline Action_2_tC9B6AFEE9B1498523B4F9EBDBC90FA84E9EB9393 ** get_address_of_handler_0() { return &___handler_0; }
	inline void set_handler_0(Action_2_tC9B6AFEE9B1498523B4F9EBDBC90FA84E9EB9393 * value)
	{
		___handler_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handler_0), (void*)value);
	}
};


// UserWiseSDK.UserWise/<>c__DisplayClass72_0
struct  U3CU3Ec__DisplayClass72_0_t6FF290DA27F97ED6AF22D3C3154ED6348D79F9BD  : public RuntimeObject
{
public:
	// UserWiseSDK.UserWise UserWiseSDK.UserWise/<>c__DisplayClass72_0::<>4__this
	UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47 * ___U3CU3E4__this_0;
	// System.Boolean UserWiseSDK.UserWise/<>c__DisplayClass72_0::ignoreCache
	bool ___ignoreCache_1;
	// System.Action`2<System.Boolean,System.Byte[]> UserWiseSDK.UserWise/<>c__DisplayClass72_0::handler
	Action_2_t6AE767DB2F0E371CDCC9FC496C39B598B1D20B3E * ___handler_2;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass72_0_t6FF290DA27F97ED6AF22D3C3154ED6348D79F9BD, ___U3CU3E4__this_0)); }
	inline UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_ignoreCache_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass72_0_t6FF290DA27F97ED6AF22D3C3154ED6348D79F9BD, ___ignoreCache_1)); }
	inline bool get_ignoreCache_1() const { return ___ignoreCache_1; }
	inline bool* get_address_of_ignoreCache_1() { return &___ignoreCache_1; }
	inline void set_ignoreCache_1(bool value)
	{
		___ignoreCache_1 = value;
	}

	inline static int32_t get_offset_of_handler_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass72_0_t6FF290DA27F97ED6AF22D3C3154ED6348D79F9BD, ___handler_2)); }
	inline Action_2_t6AE767DB2F0E371CDCC9FC496C39B598B1D20B3E * get_handler_2() const { return ___handler_2; }
	inline Action_2_t6AE767DB2F0E371CDCC9FC496C39B598B1D20B3E ** get_address_of_handler_2() { return &___handler_2; }
	inline void set_handler_2(Action_2_t6AE767DB2F0E371CDCC9FC496C39B598B1D20B3E * value)
	{
		___handler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handler_2), (void*)value);
	}
};


// UserWiseSDK.UserWise/<>c__DisplayClass73_0
struct  U3CU3Ec__DisplayClass73_0_tC6DD8E3ECD116B9E73C70616D961173597483F0E  : public RuntimeObject
{
public:
	// System.Action`2<System.Boolean,System.Byte[]> UserWiseSDK.UserWise/<>c__DisplayClass73_0::handler
	Action_2_t6AE767DB2F0E371CDCC9FC496C39B598B1D20B3E * ___handler_0;
	// System.String UserWiseSDK.UserWise/<>c__DisplayClass73_0::mediaPath
	String_t* ___mediaPath_1;

public:
	inline static int32_t get_offset_of_handler_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass73_0_tC6DD8E3ECD116B9E73C70616D961173597483F0E, ___handler_0)); }
	inline Action_2_t6AE767DB2F0E371CDCC9FC496C39B598B1D20B3E * get_handler_0() const { return ___handler_0; }
	inline Action_2_t6AE767DB2F0E371CDCC9FC496C39B598B1D20B3E ** get_address_of_handler_0() { return &___handler_0; }
	inline void set_handler_0(Action_2_t6AE767DB2F0E371CDCC9FC496C39B598B1D20B3E * value)
	{
		___handler_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handler_0), (void*)value);
	}

	inline static int32_t get_offset_of_mediaPath_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass73_0_tC6DD8E3ECD116B9E73C70616D961173597483F0E, ___mediaPath_1)); }
	inline String_t* get_mediaPath_1() const { return ___mediaPath_1; }
	inline String_t** get_address_of_mediaPath_1() { return &___mediaPath_1; }
	inline void set_mediaPath_1(String_t* value)
	{
		___mediaPath_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mediaPath_1), (void*)value);
	}
};


// UserWiseSDK.UserWise/<>c__DisplayClass74_0
struct  U3CU3Ec__DisplayClass74_0_tC4503649DCCA22323FC3EC0F35A7ED9931278163  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.String> UserWiseSDK.UserWise/<>c__DisplayClass74_0::triggeredImpressionIds
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___triggeredImpressionIds_0;
	// System.Action`1<System.Boolean> UserWiseSDK.UserWise/<>c__DisplayClass74_0::callback
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___callback_1;

public:
	inline static int32_t get_offset_of_triggeredImpressionIds_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass74_0_tC4503649DCCA22323FC3EC0F35A7ED9931278163, ___triggeredImpressionIds_0)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_triggeredImpressionIds_0() const { return ___triggeredImpressionIds_0; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_triggeredImpressionIds_0() { return &___triggeredImpressionIds_0; }
	inline void set_triggeredImpressionIds_0(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___triggeredImpressionIds_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___triggeredImpressionIds_0), (void*)value);
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass74_0_tC4503649DCCA22323FC3EC0F35A7ED9931278163, ___callback_1)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_callback_1() const { return ___callback_1; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_1), (void*)value);
	}
};


// UserWiseSDK.UserWise/<>c__DisplayClass75_0
struct  U3CU3Ec__DisplayClass75_0_t5F4373B0C09706AB93E576B8CCCBEC11F9D414B6  : public RuntimeObject
{
public:
	// UserWiseSDK.UserWise UserWiseSDK.UserWise/<>c__DisplayClass75_0::<>4__this
	UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47 * ___U3CU3E4__this_0;
	// System.Collections.Generic.List`1<System.String> UserWiseSDK.UserWise/<>c__DisplayClass75_0::triggeredImpressionIds
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___triggeredImpressionIds_1;
	// System.Action`1<System.Boolean> UserWiseSDK.UserWise/<>c__DisplayClass75_0::callback
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___callback_2;
	// System.Action`1<UserWiseSDK.Internal.Triggers.ITriggerable> UserWiseSDK.UserWise/<>c__DisplayClass75_0::<>9__2
	Action_1_t8B9D154E6AC4F2C06ED9B8727E61F426060B7170 * ___U3CU3E9__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass75_0_t5F4373B0C09706AB93E576B8CCCBEC11F9D414B6, ___U3CU3E4__this_0)); }
	inline UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_triggeredImpressionIds_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass75_0_t5F4373B0C09706AB93E576B8CCCBEC11F9D414B6, ___triggeredImpressionIds_1)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_triggeredImpressionIds_1() const { return ___triggeredImpressionIds_1; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_triggeredImpressionIds_1() { return &___triggeredImpressionIds_1; }
	inline void set_triggeredImpressionIds_1(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___triggeredImpressionIds_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___triggeredImpressionIds_1), (void*)value);
	}

	inline static int32_t get_offset_of_callback_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass75_0_t5F4373B0C09706AB93E576B8CCCBEC11F9D414B6, ___callback_2)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_callback_2() const { return ___callback_2; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_callback_2() { return &___callback_2; }
	inline void set_callback_2(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___callback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass75_0_t5F4373B0C09706AB93E576B8CCCBEC11F9D414B6, ___U3CU3E9__2_3)); }
	inline Action_1_t8B9D154E6AC4F2C06ED9B8727E61F426060B7170 * get_U3CU3E9__2_3() const { return ___U3CU3E9__2_3; }
	inline Action_1_t8B9D154E6AC4F2C06ED9B8727E61F426060B7170 ** get_address_of_U3CU3E9__2_3() { return &___U3CU3E9__2_3; }
	inline void set_U3CU3E9__2_3(Action_1_t8B9D154E6AC4F2C06ED9B8727E61F426060B7170 * value)
	{
		___U3CU3E9__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_3), (void*)value);
	}
};


// UserWiseSDK.UserWise/<>c__DisplayClass76_0
struct  U3CU3Ec__DisplayClass76_0_t056ADACB6A54861ADC969AB31BB7698303319F19  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.String> UserWiseSDK.UserWise/<>c__DisplayClass76_0::triggeredImpressionIds
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___triggeredImpressionIds_0;
	// System.Action`1<System.Boolean> UserWiseSDK.UserWise/<>c__DisplayClass76_0::callback
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___callback_1;

public:
	inline static int32_t get_offset_of_triggeredImpressionIds_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass76_0_t056ADACB6A54861ADC969AB31BB7698303319F19, ___triggeredImpressionIds_0)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_triggeredImpressionIds_0() const { return ___triggeredImpressionIds_0; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_triggeredImpressionIds_0() { return &___triggeredImpressionIds_0; }
	inline void set_triggeredImpressionIds_0(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___triggeredImpressionIds_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___triggeredImpressionIds_0), (void*)value);
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass76_0_t056ADACB6A54861ADC969AB31BB7698303319F19, ___callback_1)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_callback_1() const { return ___callback_1; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_1), (void*)value);
	}
};


// UserWiseSDK.Variables.VariablesModule/<>c
struct  U3CU3Ec_t5FAF232BE15C02F5CE897D67871FB54B80E8E5B5  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t5FAF232BE15C02F5CE897D67871FB54B80E8E5B5_StaticFields
{
public:
	// UserWiseSDK.Variables.VariablesModule/<>c UserWiseSDK.Variables.VariablesModule/<>c::<>9
	U3CU3Ec_t5FAF232BE15C02F5CE897D67871FB54B80E8E5B5 * ___U3CU3E9_0;
	// System.Action`1<UserWiseSDK.Internal.API.APIResponse> UserWiseSDK.Variables.VariablesModule/<>c::<>9__17_0
	Action_1_tFCB412D46FF51645C0DC0D13515EF4C0D61FEFFB * ___U3CU3E9__17_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5FAF232BE15C02F5CE897D67871FB54B80E8E5B5_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t5FAF232BE15C02F5CE897D67871FB54B80E8E5B5 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t5FAF232BE15C02F5CE897D67871FB54B80E8E5B5 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t5FAF232BE15C02F5CE897D67871FB54B80E8E5B5 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__17_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5FAF232BE15C02F5CE897D67871FB54B80E8E5B5_StaticFields, ___U3CU3E9__17_0_1)); }
	inline Action_1_tFCB412D46FF51645C0DC0D13515EF4C0D61FEFFB * get_U3CU3E9__17_0_1() const { return ___U3CU3E9__17_0_1; }
	inline Action_1_tFCB412D46FF51645C0DC0D13515EF4C0D61FEFFB ** get_address_of_U3CU3E9__17_0_1() { return &___U3CU3E9__17_0_1; }
	inline void set_U3CU3E9__17_0_1(Action_1_tFCB412D46FF51645C0DC0D13515EF4C0D61FEFFB * value)
	{
		___U3CU3E9__17_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__17_0_1), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
struct  KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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


// System.Byte
struct  Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.DateTime
struct  DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Double
struct  Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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


// System.Int64
struct  Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
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


// UserWiseSDK.Messages.MessageEventArgs
struct  MessageEventArgs_t2F5E385C2CA07A1D68DB2081FBD8E55F59445797  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// UserWiseSDK.Messages.Message UserWiseSDK.Messages.MessageEventArgs::Message
	Message_t994A7D958E14F464F785BFB6864280005103A91D * ___Message_1;

public:
	inline static int32_t get_offset_of_Message_1() { return static_cast<int32_t>(offsetof(MessageEventArgs_t2F5E385C2CA07A1D68DB2081FBD8E55F59445797, ___Message_1)); }
	inline Message_t994A7D958E14F464F785BFB6864280005103A91D * get_Message_1() const { return ___Message_1; }
	inline Message_t994A7D958E14F464F785BFB6864280005103A91D ** get_address_of_Message_1() { return &___Message_1; }
	inline void set_Message_1(Message_t994A7D958E14F464F785BFB6864280005103A91D * value)
	{
		___Message_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Message_1), (void*)value);
	}
};


// UserWiseSDK.Offers.OfferEventArgs
struct  OfferEventArgs_t058E3ED8601ECACF7282CFF140768C5CF6B44170  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// UserWiseSDK.Offers.Offer UserWiseSDK.Offers.OfferEventArgs::Offer
	Offer_tF5EB0445F358ACF0E545C2B513B39B63804190A7 * ___Offer_1;

public:
	inline static int32_t get_offset_of_Offer_1() { return static_cast<int32_t>(offsetof(OfferEventArgs_t058E3ED8601ECACF7282CFF140768C5CF6B44170, ___Offer_1)); }
	inline Offer_tF5EB0445F358ACF0E545C2B513B39B63804190A7 * get_Offer_1() const { return ___Offer_1; }
	inline Offer_tF5EB0445F358ACF0E545C2B513B39B63804190A7 ** get_address_of_Offer_1() { return &___Offer_1; }
	inline void set_Offer_1(Offer_tF5EB0445F358ACF0E545C2B513B39B63804190A7 * value)
	{
		___Offer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Offer_1), (void*)value);
	}
};


// UserWiseSDK.Offers.OfferImpressionEventArgs
struct  OfferImpressionEventArgs_tC118DB83F1F30158A6C86A7AB84901E11677E2C9  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// UserWiseSDK.Offers.OfferImpression UserWiseSDK.Offers.OfferImpressionEventArgs::OfferImpression
	OfferImpression_t93005F7531AFF65592176D6B1A40B085819AB2EE * ___OfferImpression_1;

public:
	inline static int32_t get_offset_of_OfferImpression_1() { return static_cast<int32_t>(offsetof(OfferImpressionEventArgs_tC118DB83F1F30158A6C86A7AB84901E11677E2C9, ___OfferImpression_1)); }
	inline OfferImpression_t93005F7531AFF65592176D6B1A40B085819AB2EE * get_OfferImpression_1() const { return ___OfferImpression_1; }
	inline OfferImpression_t93005F7531AFF65592176D6B1A40B085819AB2EE ** get_address_of_OfferImpression_1() { return &___OfferImpression_1; }
	inline void set_OfferImpression_1(OfferImpression_t93005F7531AFF65592176D6B1A40B085819AB2EE * value)
	{
		___OfferImpression_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OfferImpression_1), (void*)value);
	}
};


// UserWiseSDK.PlayerEvent
struct  PlayerEvent_t3544668D82C9BE28DFC46846C2734FE1E4DED671 
{
public:
	// System.String UserWiseSDK.PlayerEvent::EventId
	String_t* ___EventId_0;
	// System.Collections.Generic.List`1<UserWiseSDK.PlayerEventAttribute> UserWiseSDK.PlayerEvent::Attributes
	List_1_tDF5AFDD3A0DE5C7C3DEB594CF5CE6A7F5FE34BD2 * ___Attributes_1;

public:
	inline static int32_t get_offset_of_EventId_0() { return static_cast<int32_t>(offsetof(PlayerEvent_t3544668D82C9BE28DFC46846C2734FE1E4DED671, ___EventId_0)); }
	inline String_t* get_EventId_0() const { return ___EventId_0; }
	inline String_t** get_address_of_EventId_0() { return &___EventId_0; }
	inline void set_EventId_0(String_t* value)
	{
		___EventId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EventId_0), (void*)value);
	}

	inline static int32_t get_offset_of_Attributes_1() { return static_cast<int32_t>(offsetof(PlayerEvent_t3544668D82C9BE28DFC46846C2734FE1E4DED671, ___Attributes_1)); }
	inline List_1_tDF5AFDD3A0DE5C7C3DEB594CF5CE6A7F5FE34BD2 * get_Attributes_1() const { return ___Attributes_1; }
	inline List_1_tDF5AFDD3A0DE5C7C3DEB594CF5CE6A7F5FE34BD2 ** get_address_of_Attributes_1() { return &___Attributes_1; }
	inline void set_Attributes_1(List_1_tDF5AFDD3A0DE5C7C3DEB594CF5CE6A7F5FE34BD2 * value)
	{
		___Attributes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Attributes_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UserWiseSDK.PlayerEvent
struct PlayerEvent_t3544668D82C9BE28DFC46846C2734FE1E4DED671_marshaled_pinvoke
{
	char* ___EventId_0;
	List_1_tDF5AFDD3A0DE5C7C3DEB594CF5CE6A7F5FE34BD2 * ___Attributes_1;
};
// Native definition for COM marshalling of UserWiseSDK.PlayerEvent
struct PlayerEvent_t3544668D82C9BE28DFC46846C2734FE1E4DED671_marshaled_com
{
	Il2CppChar* ___EventId_0;
	List_1_tDF5AFDD3A0DE5C7C3DEB594CF5CE6A7F5FE34BD2 * ___Attributes_1;
};

// UserWiseSDK.Region
struct  Region_t5CBD733F45A3A23BF304DC0D377ECBEE69EBF3E4 
{
public:
	// System.String UserWiseSDK.Region::Name
	String_t* ___Name_0;
	// System.Collections.Generic.List`1<UserWiseSDK.RegionMetadata> UserWiseSDK.Region::Metadata
	List_1_tEB7D3C41B15A71A632C4C4CB9B05C477B19E524A * ___Metadata_1;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(Region_t5CBD733F45A3A23BF304DC0D377ECBEE69EBF3E4, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_Metadata_1() { return static_cast<int32_t>(offsetof(Region_t5CBD733F45A3A23BF304DC0D377ECBEE69EBF3E4, ___Metadata_1)); }
	inline List_1_tEB7D3C41B15A71A632C4C4CB9B05C477B19E524A * get_Metadata_1() const { return ___Metadata_1; }
	inline List_1_tEB7D3C41B15A71A632C4C4CB9B05C477B19E524A ** get_address_of_Metadata_1() { return &___Metadata_1; }
	inline void set_Metadata_1(List_1_tEB7D3C41B15A71A632C4C4CB9B05C477B19E524A * value)
	{
		___Metadata_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Metadata_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UserWiseSDK.Region
struct Region_t5CBD733F45A3A23BF304DC0D377ECBEE69EBF3E4_marshaled_pinvoke
{
	char* ___Name_0;
	List_1_tEB7D3C41B15A71A632C4C4CB9B05C477B19E524A * ___Metadata_1;
};
// Native definition for COM marshalling of UserWiseSDK.Region
struct Region_t5CBD733F45A3A23BF304DC0D377ECBEE69EBF3E4_marshaled_com
{
	Il2CppChar* ___Name_0;
	List_1_tEB7D3C41B15A71A632C4C4CB9B05C477B19E524A * ___Metadata_1;
};

// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
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


// UserWiseSDK.Surveys.SurveyInviteInitializedEventArgs
struct  SurveyInviteInitializedEventArgs_tDEB6C9961E8D2629015B58F402585DA112B5B8D0  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// UserWiseSDK.Surveys.Survey UserWiseSDK.Surveys.SurveyInviteInitializedEventArgs::<Survey>k__BackingField
	Survey_t63EBCA3CF9AB2225CD1CF20B3E7B854C7846832A * ___U3CSurveyU3Ek__BackingField_1;
	// System.Boolean UserWiseSDK.Surveys.SurveyInviteInitializedEventArgs::<WasInitialized>k__BackingField
	bool ___U3CWasInitializedU3Ek__BackingField_2;
	// System.String UserWiseSDK.Surveys.SurveyInviteInitializedEventArgs::<ResponseId>k__BackingField
	String_t* ___U3CResponseIdU3Ek__BackingField_3;
	// System.String UserWiseSDK.Surveys.SurveyInviteInitializedEventArgs::<InviteId>k__BackingField
	String_t* ___U3CInviteIdU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CSurveyU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SurveyInviteInitializedEventArgs_tDEB6C9961E8D2629015B58F402585DA112B5B8D0, ___U3CSurveyU3Ek__BackingField_1)); }
	inline Survey_t63EBCA3CF9AB2225CD1CF20B3E7B854C7846832A * get_U3CSurveyU3Ek__BackingField_1() const { return ___U3CSurveyU3Ek__BackingField_1; }
	inline Survey_t63EBCA3CF9AB2225CD1CF20B3E7B854C7846832A ** get_address_of_U3CSurveyU3Ek__BackingField_1() { return &___U3CSurveyU3Ek__BackingField_1; }
	inline void set_U3CSurveyU3Ek__BackingField_1(Survey_t63EBCA3CF9AB2225CD1CF20B3E7B854C7846832A * value)
	{
		___U3CSurveyU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSurveyU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CWasInitializedU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SurveyInviteInitializedEventArgs_tDEB6C9961E8D2629015B58F402585DA112B5B8D0, ___U3CWasInitializedU3Ek__BackingField_2)); }
	inline bool get_U3CWasInitializedU3Ek__BackingField_2() const { return ___U3CWasInitializedU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CWasInitializedU3Ek__BackingField_2() { return &___U3CWasInitializedU3Ek__BackingField_2; }
	inline void set_U3CWasInitializedU3Ek__BackingField_2(bool value)
	{
		___U3CWasInitializedU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CResponseIdU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SurveyInviteInitializedEventArgs_tDEB6C9961E8D2629015B58F402585DA112B5B8D0, ___U3CResponseIdU3Ek__BackingField_3)); }
	inline String_t* get_U3CResponseIdU3Ek__BackingField_3() const { return ___U3CResponseIdU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CResponseIdU3Ek__BackingField_3() { return &___U3CResponseIdU3Ek__BackingField_3; }
	inline void set_U3CResponseIdU3Ek__BackingField_3(String_t* value)
	{
		___U3CResponseIdU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResponseIdU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CInviteIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SurveyInviteInitializedEventArgs_tDEB6C9961E8D2629015B58F402585DA112B5B8D0, ___U3CInviteIdU3Ek__BackingField_4)); }
	inline String_t* get_U3CInviteIdU3Ek__BackingField_4() const { return ___U3CInviteIdU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CInviteIdU3Ek__BackingField_4() { return &___U3CInviteIdU3Ek__BackingField_4; }
	inline void set_U3CInviteIdU3Ek__BackingField_4(String_t* value)
	{
		___U3CInviteIdU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInviteIdU3Ek__BackingField_4), (void*)value);
	}
};


// UserWiseSDK.Surveys.SurveyResponseIdEventArgs
struct  SurveyResponseIdEventArgs_t834D0F47C4D59C6297F6A4EE164ED1D27F34ECB0  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// UserWiseSDK.Surveys.Survey UserWiseSDK.Surveys.SurveyResponseIdEventArgs::<Survey>k__BackingField
	Survey_t63EBCA3CF9AB2225CD1CF20B3E7B854C7846832A * ___U3CSurveyU3Ek__BackingField_1;
	// System.String UserWiseSDK.Surveys.SurveyResponseIdEventArgs::<ResponseId>k__BackingField
	String_t* ___U3CResponseIdU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CSurveyU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SurveyResponseIdEventArgs_t834D0F47C4D59C6297F6A4EE164ED1D27F34ECB0, ___U3CSurveyU3Ek__BackingField_1)); }
	inline Survey_t63EBCA3CF9AB2225CD1CF20B3E7B854C7846832A * get_U3CSurveyU3Ek__BackingField_1() const { return ___U3CSurveyU3Ek__BackingField_1; }
	inline Survey_t63EBCA3CF9AB2225CD1CF20B3E7B854C7846832A ** get_address_of_U3CSurveyU3Ek__BackingField_1() { return &___U3CSurveyU3Ek__BackingField_1; }
	inline void set_U3CSurveyU3Ek__BackingField_1(Survey_t63EBCA3CF9AB2225CD1CF20B3E7B854C7846832A * value)
	{
		___U3CSurveyU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSurveyU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResponseIdU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SurveyResponseIdEventArgs_t834D0F47C4D59C6297F6A4EE164ED1D27F34ECB0, ___U3CResponseIdU3Ek__BackingField_2)); }
	inline String_t* get_U3CResponseIdU3Ek__BackingField_2() const { return ___U3CResponseIdU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CResponseIdU3Ek__BackingField_2() { return &___U3CResponseIdU3Ek__BackingField_2; }
	inline void set_U3CResponseIdU3Ek__BackingField_2(String_t* value)
	{
		___U3CResponseIdU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResponseIdU3Ek__BackingField_2), (void*)value);
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// UnityEngine.WaitForSecondsRealtime
struct  WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// System.Single UnityEngine.WaitForSecondsRealtime::<waitTime>k__BackingField
	float ___U3CwaitTimeU3Ek__BackingField_0;
	// System.Single UnityEngine.WaitForSecondsRealtime::m_WaitUntilTime
	float ___m_WaitUntilTime_1;

public:
	inline static int32_t get_offset_of_U3CwaitTimeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40, ___U3CwaitTimeU3Ek__BackingField_0)); }
	inline float get_U3CwaitTimeU3Ek__BackingField_0() const { return ___U3CwaitTimeU3Ek__BackingField_0; }
	inline float* get_address_of_U3CwaitTimeU3Ek__BackingField_0() { return &___U3CwaitTimeU3Ek__BackingField_0; }
	inline void set_U3CwaitTimeU3Ek__BackingField_0(float value)
	{
		___U3CwaitTimeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_WaitUntilTime_1() { return static_cast<int32_t>(offsetof(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40, ___m_WaitUntilTime_1)); }
	inline float get_m_WaitUntilTime_1() const { return ___m_WaitUntilTime_1; }
	inline float* get_address_of_m_WaitUntilTime_1() { return &___m_WaitUntilTime_1; }
	inline void set_m_WaitUntilTime_1(float value)
	{
		___m_WaitUntilTime_1 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct  Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___dictionary_0)); }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___current_3)); }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>
struct  Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15, ___dictionary_0)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15, ___current_3)); }
	inline KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// UserWiseSDK.AttributableDataType
struct  AttributableDataType_tAF02CF1C4288BE356A9C957BB7C649BAB9A95EE7 
{
public:
	// System.Int32 UserWiseSDK.AttributableDataType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AttributableDataType_tAF02CF1C4288BE356A9C957BB7C649BAB9A95EE7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
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

// System.IO.FileAttributes
struct  FileAttributes_t47DBB9A73CF80C7CA21C9AAB8D5336C92D32C1AE 
{
public:
	// System.Int32 System.IO.FileAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAttributes_t47DBB9A73CF80C7CA21C9AAB8D5336C92D32C1AE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
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

// UserWiseSDK.Internal.Scheduled.SchedulableTimezoneType
struct  SchedulableTimezoneType_tD1C62A0E8A2CC83336F42EA1CF7CC228FA056232 
{
public:
	// System.Int32 UserWiseSDK.Internal.Scheduled.SchedulableTimezoneType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SchedulableTimezoneType_tD1C62A0E8A2CC83336F42EA1CF7CC228FA056232, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TimeSpan
struct  TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_0)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_2)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};


// UserWiseSDK.Internal.Triggers.TriggerType
struct  TriggerType_t210ADEA91AB1EF5C6423358ADCD7053183D75746 
{
public:
	// System.Int32 UserWiseSDK.Internal.Triggers.TriggerType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TriggerType_t210ADEA91AB1EF5C6423358ADCD7053183D75746, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UserWiseSDK.Variables.Types.VariableType
struct  VariableType_tE6437FBA301CA0BC64D0735495B392A8E99927EF 
{
public:
	// System.Int32 UserWiseSDK.Variables.Types.VariableType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VariableType_tE6437FBA301CA0BC64D0735495B392A8E99927EF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UserWiseSDK.Offers.OfferImpression/ImpressionState
struct  ImpressionState_t6385AC91838AD8D46E3BDF41CCFFC0A918F827A0 
{
public:
	// System.Int32 UserWiseSDK.Offers.OfferImpression/ImpressionState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ImpressionState_t6385AC91838AD8D46E3BDF41CCFFC0A918F827A0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UserWiseSDK.Campaigns.Internal.TriggerableCampaign/<>c__DisplayClass35_1
struct  U3CU3Ec__DisplayClass35_1_t8B58EB44020D9FBD8BCFECEC7B2DE1DE5D9BF747  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<System.String,System.Object> UserWiseSDK.Campaigns.Internal.TriggerableCampaign/<>c__DisplayClass35_1::keyValuePair
	KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  ___keyValuePair_0;

public:
	inline static int32_t get_offset_of_keyValuePair_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass35_1_t8B58EB44020D9FBD8BCFECEC7B2DE1DE5D9BF747, ___keyValuePair_0)); }
	inline KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  get_keyValuePair_0() const { return ___keyValuePair_0; }
	inline KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE * get_address_of_keyValuePair_0() { return &___keyValuePair_0; }
	inline void set_keyValuePair_0(KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  value)
	{
		___keyValuePair_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___keyValuePair_0))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___keyValuePair_0))->___value_1), (void*)NULL);
		#endif
	}
};


// UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c__DisplayClass7_0
struct  U3CU3Ec__DisplayClass7_0_t546D5442D40E2EC33D281012C7E5AA4DBD1F8AF9  : public RuntimeObject
{
public:
	// UserWiseSDK.PlayerEvent UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c__DisplayClass7_0::playerEvent
	PlayerEvent_t3544668D82C9BE28DFC46846C2734FE1E4DED671  ___playerEvent_0;
	// UserWiseSDK.Internal.Triggers.TriggerableContentController UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c__DisplayClass7_0::<>4__this
	TriggerableContentController_t879B381534ABAAA2D45C76715E084E80D900D57D * ___U3CU3E4__this_1;
	// System.Collections.Generic.List`1<UserWiseSDK.Internal.Triggers.ITriggerable> UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c__DisplayClass7_0::triggeredTriggerables
	List_1_t92B053769F1F29417E25AE8F630FE7F9B7911437 * ___triggeredTriggerables_2;

public:
	inline static int32_t get_offset_of_playerEvent_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_t546D5442D40E2EC33D281012C7E5AA4DBD1F8AF9, ___playerEvent_0)); }
	inline PlayerEvent_t3544668D82C9BE28DFC46846C2734FE1E4DED671  get_playerEvent_0() const { return ___playerEvent_0; }
	inline PlayerEvent_t3544668D82C9BE28DFC46846C2734FE1E4DED671 * get_address_of_playerEvent_0() { return &___playerEvent_0; }
	inline void set_playerEvent_0(PlayerEvent_t3544668D82C9BE28DFC46846C2734FE1E4DED671  value)
	{
		___playerEvent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___playerEvent_0))->___EventId_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___playerEvent_0))->___Attributes_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_t546D5442D40E2EC33D281012C7E5AA4DBD1F8AF9, ___U3CU3E4__this_1)); }
	inline TriggerableContentController_t879B381534ABAAA2D45C76715E084E80D900D57D * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline TriggerableContentController_t879B381534ABAAA2D45C76715E084E80D900D57D ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(TriggerableContentController_t879B381534ABAAA2D45C76715E084E80D900D57D * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}

	inline static int32_t get_offset_of_triggeredTriggerables_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_t546D5442D40E2EC33D281012C7E5AA4DBD1F8AF9, ___triggeredTriggerables_2)); }
	inline List_1_t92B053769F1F29417E25AE8F630FE7F9B7911437 * get_triggeredTriggerables_2() const { return ___triggeredTriggerables_2; }
	inline List_1_t92B053769F1F29417E25AE8F630FE7F9B7911437 ** get_address_of_triggeredTriggerables_2() { return &___triggeredTriggerables_2; }
	inline void set_triggeredTriggerables_2(List_1_t92B053769F1F29417E25AE8F630FE7F9B7911437 * value)
	{
		___triggeredTriggerables_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___triggeredTriggerables_2), (void*)value);
	}
};


// UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c__DisplayClass8_0
struct  U3CU3Ec__DisplayClass8_0_tFFDE3CB9337715BA3168135D5042BAEDFF1BE179  : public RuntimeObject
{
public:
	// UserWiseSDK.Region UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c__DisplayClass8_0::region
	Region_t5CBD733F45A3A23BF304DC0D377ECBEE69EBF3E4  ___region_0;
	// UserWiseSDK.Internal.Triggers.TriggerableContentController UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c__DisplayClass8_0::<>4__this
	TriggerableContentController_t879B381534ABAAA2D45C76715E084E80D900D57D * ___U3CU3E4__this_1;
	// System.Collections.Generic.List`1<UserWiseSDK.Internal.Triggers.ITriggerable> UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c__DisplayClass8_0::triggeredTriggerables
	List_1_t92B053769F1F29417E25AE8F630FE7F9B7911437 * ___triggeredTriggerables_2;

public:
	inline static int32_t get_offset_of_region_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass8_0_tFFDE3CB9337715BA3168135D5042BAEDFF1BE179, ___region_0)); }
	inline Region_t5CBD733F45A3A23BF304DC0D377ECBEE69EBF3E4  get_region_0() const { return ___region_0; }
	inline Region_t5CBD733F45A3A23BF304DC0D377ECBEE69EBF3E4 * get_address_of_region_0() { return &___region_0; }
	inline void set_region_0(Region_t5CBD733F45A3A23BF304DC0D377ECBEE69EBF3E4  value)
	{
		___region_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___region_0))->___Name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___region_0))->___Metadata_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass8_0_tFFDE3CB9337715BA3168135D5042BAEDFF1BE179, ___U3CU3E4__this_1)); }
	inline TriggerableContentController_t879B381534ABAAA2D45C76715E084E80D900D57D * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline TriggerableContentController_t879B381534ABAAA2D45C76715E084E80D900D57D ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(TriggerableContentController_t879B381534ABAAA2D45C76715E084E80D900D57D * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}

	inline static int32_t get_offset_of_triggeredTriggerables_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass8_0_tFFDE3CB9337715BA3168135D5042BAEDFF1BE179, ___triggeredTriggerables_2)); }
	inline List_1_t92B053769F1F29417E25AE8F630FE7F9B7911437 * get_triggeredTriggerables_2() const { return ___triggeredTriggerables_2; }
	inline List_1_t92B053769F1F29417E25AE8F630FE7F9B7911437 ** get_address_of_triggeredTriggerables_2() { return &___triggeredTriggerables_2; }
	inline void set_triggeredTriggerables_2(List_1_t92B053769F1F29417E25AE8F630FE7F9B7911437 * value)
	{
		___triggeredTriggerables_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___triggeredTriggerables_2), (void*)value);
	}
};


// UserWiseSDK.Internal.Utilities.Json/Parser/TOKEN
struct  TOKEN_t3DE512961D2BAA2E39940E69BBA3B23BA8AE6387 
{
public:
	// System.Int32 UserWiseSDK.Internal.Utilities.Json/Parser/TOKEN::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TOKEN_t3DE512961D2BAA2E39940E69BBA3B23BA8AE6387, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UserWiseSDK.Variables.Types.Variable`1<System.String>
struct  Variable_1_t5176D87E316D748175C0D26DD2EAA638B2827252  : public RuntimeObject
{
public:
	// System.EventHandler`1<UserWiseSDK.Variables.Types.OnValueChangeEventArgs> UserWiseSDK.Variables.Types.Variable`1::OnValueChange
	EventHandler_1_t8BA7C98495FFAC2626F102D680E05F7066D6E69C * ___OnValueChange_0;
	// System.String UserWiseSDK.Variables.Types.Variable`1::Name
	String_t* ___Name_1;
	// T UserWiseSDK.Variables.Types.Variable`1::DefaultValue
	String_t* ___DefaultValue_2;
	// UserWiseSDK.Variables.Types.VariableType UserWiseSDK.Variables.Types.Variable`1::Type
	int32_t ___Type_3;
	// T UserWiseSDK.Variables.Types.Variable`1::<CurrentValue>k__BackingField
	String_t* ___U3CCurrentValueU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_OnValueChange_0() { return static_cast<int32_t>(offsetof(Variable_1_t5176D87E316D748175C0D26DD2EAA638B2827252, ___OnValueChange_0)); }
	inline EventHandler_1_t8BA7C98495FFAC2626F102D680E05F7066D6E69C * get_OnValueChange_0() const { return ___OnValueChange_0; }
	inline EventHandler_1_t8BA7C98495FFAC2626F102D680E05F7066D6E69C ** get_address_of_OnValueChange_0() { return &___OnValueChange_0; }
	inline void set_OnValueChange_0(EventHandler_1_t8BA7C98495FFAC2626F102D680E05F7066D6E69C * value)
	{
		___OnValueChange_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnValueChange_0), (void*)value);
	}

	inline static int32_t get_offset_of_Name_1() { return static_cast<int32_t>(offsetof(Variable_1_t5176D87E316D748175C0D26DD2EAA638B2827252, ___Name_1)); }
	inline String_t* get_Name_1() const { return ___Name_1; }
	inline String_t** get_address_of_Name_1() { return &___Name_1; }
	inline void set_Name_1(String_t* value)
	{
		___Name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_1), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultValue_2() { return static_cast<int32_t>(offsetof(Variable_1_t5176D87E316D748175C0D26DD2EAA638B2827252, ___DefaultValue_2)); }
	inline String_t* get_DefaultValue_2() const { return ___DefaultValue_2; }
	inline String_t** get_address_of_DefaultValue_2() { return &___DefaultValue_2; }
	inline void set_DefaultValue_2(String_t* value)
	{
		___DefaultValue_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultValue_2), (void*)value);
	}

	inline static int32_t get_offset_of_Type_3() { return static_cast<int32_t>(offsetof(Variable_1_t5176D87E316D748175C0D26DD2EAA638B2827252, ___Type_3)); }
	inline int32_t get_Type_3() const { return ___Type_3; }
	inline int32_t* get_address_of_Type_3() { return &___Type_3; }
	inline void set_Type_3(int32_t value)
	{
		___Type_3 = value;
	}

	inline static int32_t get_offset_of_U3CCurrentValueU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Variable_1_t5176D87E316D748175C0D26DD2EAA638B2827252, ___U3CCurrentValueU3Ek__BackingField_4)); }
	inline String_t* get_U3CCurrentValueU3Ek__BackingField_4() const { return ___U3CCurrentValueU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CCurrentValueU3Ek__BackingField_4() { return &___U3CCurrentValueU3Ek__BackingField_4; }
	inline void set_U3CCurrentValueU3Ek__BackingField_4(String_t* value)
	{
		___U3CCurrentValueU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCurrentValueU3Ek__BackingField_4), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UserWiseSDK.Events.GameEvent
struct  GameEvent_tF75EAF1479A5119F3188123C4694630955553B53  : public RuntimeObject
{
public:
	// System.String UserWiseSDK.Events.GameEvent::<Id>k__BackingField
	String_t* ___U3CIdU3Ek__BackingField_0;
	// System.String UserWiseSDK.Events.GameEvent::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> UserWiseSDK.Events.GameEvent::<Data>k__BackingField
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___U3CDataU3Ek__BackingField_2;
	// System.String UserWiseSDK.Events.GameEvent::<ExternalId>k__BackingField
	String_t* ___U3CExternalIdU3Ek__BackingField_3;
	// System.String UserWiseSDK.Events.GameEvent::<ExternalEventType>k__BackingField
	String_t* ___U3CExternalEventTypeU3Ek__BackingField_4;
	// System.DateTime UserWiseSDK.Events.GameEvent::<StartAt>k__BackingField
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CStartAtU3Ek__BackingField_5;
	// UserWiseSDK.Internal.Scheduled.SchedulableTimezoneType UserWiseSDK.Events.GameEvent::<StartAtTz>k__BackingField
	int32_t ___U3CStartAtTzU3Ek__BackingField_6;
	// System.DateTime UserWiseSDK.Events.GameEvent::<EndAt>k__BackingField
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CEndAtU3Ek__BackingField_7;
	// UserWiseSDK.Internal.Scheduled.SchedulableTimezoneType UserWiseSDK.Events.GameEvent::<EndAtTz>k__BackingField
	int32_t ___U3CEndAtTzU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(GameEvent_tF75EAF1479A5119F3188123C4694630955553B53, ___U3CIdU3Ek__BackingField_0)); }
	inline String_t* get_U3CIdU3Ek__BackingField_0() const { return ___U3CIdU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CIdU3Ek__BackingField_0() { return &___U3CIdU3Ek__BackingField_0; }
	inline void set_U3CIdU3Ek__BackingField_0(String_t* value)
	{
		___U3CIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIdU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(GameEvent_tF75EAF1479A5119F3188123C4694630955553B53, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDataU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(GameEvent_tF75EAF1479A5119F3188123C4694630955553B53, ___U3CDataU3Ek__BackingField_2)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_U3CDataU3Ek__BackingField_2() const { return ___U3CDataU3Ek__BackingField_2; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_U3CDataU3Ek__BackingField_2() { return &___U3CDataU3Ek__BackingField_2; }
	inline void set_U3CDataU3Ek__BackingField_2(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___U3CDataU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDataU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CExternalIdU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(GameEvent_tF75EAF1479A5119F3188123C4694630955553B53, ___U3CExternalIdU3Ek__BackingField_3)); }
	inline String_t* get_U3CExternalIdU3Ek__BackingField_3() const { return ___U3CExternalIdU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CExternalIdU3Ek__BackingField_3() { return &___U3CExternalIdU3Ek__BackingField_3; }
	inline void set_U3CExternalIdU3Ek__BackingField_3(String_t* value)
	{
		___U3CExternalIdU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CExternalIdU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CExternalEventTypeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(GameEvent_tF75EAF1479A5119F3188123C4694630955553B53, ___U3CExternalEventTypeU3Ek__BackingField_4)); }
	inline String_t* get_U3CExternalEventTypeU3Ek__BackingField_4() const { return ___U3CExternalEventTypeU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CExternalEventTypeU3Ek__BackingField_4() { return &___U3CExternalEventTypeU3Ek__BackingField_4; }
	inline void set_U3CExternalEventTypeU3Ek__BackingField_4(String_t* value)
	{
		___U3CExternalEventTypeU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CExternalEventTypeU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStartAtU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(GameEvent_tF75EAF1479A5119F3188123C4694630955553B53, ___U3CStartAtU3Ek__BackingField_5)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CStartAtU3Ek__BackingField_5() const { return ___U3CStartAtU3Ek__BackingField_5; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CStartAtU3Ek__BackingField_5() { return &___U3CStartAtU3Ek__BackingField_5; }
	inline void set_U3CStartAtU3Ek__BackingField_5(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CStartAtU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CStartAtTzU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(GameEvent_tF75EAF1479A5119F3188123C4694630955553B53, ___U3CStartAtTzU3Ek__BackingField_6)); }
	inline int32_t get_U3CStartAtTzU3Ek__BackingField_6() const { return ___U3CStartAtTzU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CStartAtTzU3Ek__BackingField_6() { return &___U3CStartAtTzU3Ek__BackingField_6; }
	inline void set_U3CStartAtTzU3Ek__BackingField_6(int32_t value)
	{
		___U3CStartAtTzU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CEndAtU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(GameEvent_tF75EAF1479A5119F3188123C4694630955553B53, ___U3CEndAtU3Ek__BackingField_7)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CEndAtU3Ek__BackingField_7() const { return ___U3CEndAtU3Ek__BackingField_7; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CEndAtU3Ek__BackingField_7() { return &___U3CEndAtU3Ek__BackingField_7; }
	inline void set_U3CEndAtU3Ek__BackingField_7(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CEndAtU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CEndAtTzU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(GameEvent_tF75EAF1479A5119F3188123C4694630955553B53, ___U3CEndAtTzU3Ek__BackingField_8)); }
	inline int32_t get_U3CEndAtTzU3Ek__BackingField_8() const { return ___U3CEndAtTzU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CEndAtTzU3Ek__BackingField_8() { return &___U3CEndAtTzU3Ek__BackingField_8; }
	inline void set_U3CEndAtTzU3Ek__BackingField_8(int32_t value)
	{
		___U3CEndAtTzU3Ek__BackingField_8 = value;
	}
};


// UserWiseSDK.Messages.Message
struct  Message_t994A7D958E14F464F785BFB6864280005103A91D  : public RuntimeObject
{
public:
	// System.String UserWiseSDK.Messages.Message::<Id>k__BackingField
	String_t* ___U3CIdU3Ek__BackingField_0;
	// System.String UserWiseSDK.Messages.Message::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.String UserWiseSDK.Messages.Message::<Title>k__BackingField
	String_t* ___U3CTitleU3Ek__BackingField_2;
	// System.String UserWiseSDK.Messages.Message::<Body>k__BackingField
	String_t* ___U3CBodyU3Ek__BackingField_3;
	// System.String UserWiseSDK.Messages.Message::<MessageType>k__BackingField
	String_t* ___U3CMessageTypeU3Ek__BackingField_4;
	// System.String UserWiseSDK.Messages.Message::<PortraitImageId>k__BackingField
	String_t* ___U3CPortraitImageIdU3Ek__BackingField_5;
	// System.String UserWiseSDK.Messages.Message::<LandscapeImageId>k__BackingField
	String_t* ___U3CLandscapeImageIdU3Ek__BackingField_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> UserWiseSDK.Messages.Message::<AdditionalFields>k__BackingField
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___U3CAdditionalFieldsU3Ek__BackingField_7;
	// System.DateTime UserWiseSDK.Messages.Message::<StartAt>k__BackingField
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CStartAtU3Ek__BackingField_8;
	// UserWiseSDK.Internal.Scheduled.SchedulableTimezoneType UserWiseSDK.Messages.Message::<StartAtTz>k__BackingField
	int32_t ___U3CStartAtTzU3Ek__BackingField_9;
	// System.DateTime UserWiseSDK.Messages.Message::<EndAt>k__BackingField
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CEndAtU3Ek__BackingField_10;
	// UserWiseSDK.Internal.Scheduled.SchedulableTimezoneType UserWiseSDK.Messages.Message::<EndAtTz>k__BackingField
	int32_t ___U3CEndAtTzU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Message_t994A7D958E14F464F785BFB6864280005103A91D, ___U3CIdU3Ek__BackingField_0)); }
	inline String_t* get_U3CIdU3Ek__BackingField_0() const { return ___U3CIdU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CIdU3Ek__BackingField_0() { return &___U3CIdU3Ek__BackingField_0; }
	inline void set_U3CIdU3Ek__BackingField_0(String_t* value)
	{
		___U3CIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIdU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Message_t994A7D958E14F464F785BFB6864280005103A91D, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTitleU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Message_t994A7D958E14F464F785BFB6864280005103A91D, ___U3CTitleU3Ek__BackingField_2)); }
	inline String_t* get_U3CTitleU3Ek__BackingField_2() const { return ___U3CTitleU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CTitleU3Ek__BackingField_2() { return &___U3CTitleU3Ek__BackingField_2; }
	inline void set_U3CTitleU3Ek__BackingField_2(String_t* value)
	{
		___U3CTitleU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTitleU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBodyU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Message_t994A7D958E14F464F785BFB6864280005103A91D, ___U3CBodyU3Ek__BackingField_3)); }
	inline String_t* get_U3CBodyU3Ek__BackingField_3() const { return ___U3CBodyU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CBodyU3Ek__BackingField_3() { return &___U3CBodyU3Ek__BackingField_3; }
	inline void set_U3CBodyU3Ek__BackingField_3(String_t* value)
	{
		___U3CBodyU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBodyU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMessageTypeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Message_t994A7D958E14F464F785BFB6864280005103A91D, ___U3CMessageTypeU3Ek__BackingField_4)); }
	inline String_t* get_U3CMessageTypeU3Ek__BackingField_4() const { return ___U3CMessageTypeU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CMessageTypeU3Ek__BackingField_4() { return &___U3CMessageTypeU3Ek__BackingField_4; }
	inline void set_U3CMessageTypeU3Ek__BackingField_4(String_t* value)
	{
		___U3CMessageTypeU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMessageTypeU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPortraitImageIdU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Message_t994A7D958E14F464F785BFB6864280005103A91D, ___U3CPortraitImageIdU3Ek__BackingField_5)); }
	inline String_t* get_U3CPortraitImageIdU3Ek__BackingField_5() const { return ___U3CPortraitImageIdU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CPortraitImageIdU3Ek__BackingField_5() { return &___U3CPortraitImageIdU3Ek__BackingField_5; }
	inline void set_U3CPortraitImageIdU3Ek__BackingField_5(String_t* value)
	{
		___U3CPortraitImageIdU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPortraitImageIdU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLandscapeImageIdU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Message_t994A7D958E14F464F785BFB6864280005103A91D, ___U3CLandscapeImageIdU3Ek__BackingField_6)); }
	inline String_t* get_U3CLandscapeImageIdU3Ek__BackingField_6() const { return ___U3CLandscapeImageIdU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CLandscapeImageIdU3Ek__BackingField_6() { return &___U3CLandscapeImageIdU3Ek__BackingField_6; }
	inline void set_U3CLandscapeImageIdU3Ek__BackingField_6(String_t* value)
	{
		___U3CLandscapeImageIdU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLandscapeImageIdU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAdditionalFieldsU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Message_t994A7D958E14F464F785BFB6864280005103A91D, ___U3CAdditionalFieldsU3Ek__BackingField_7)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_U3CAdditionalFieldsU3Ek__BackingField_7() const { return ___U3CAdditionalFieldsU3Ek__BackingField_7; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_U3CAdditionalFieldsU3Ek__BackingField_7() { return &___U3CAdditionalFieldsU3Ek__BackingField_7; }
	inline void set_U3CAdditionalFieldsU3Ek__BackingField_7(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___U3CAdditionalFieldsU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAdditionalFieldsU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStartAtU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Message_t994A7D958E14F464F785BFB6864280005103A91D, ___U3CStartAtU3Ek__BackingField_8)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CStartAtU3Ek__BackingField_8() const { return ___U3CStartAtU3Ek__BackingField_8; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CStartAtU3Ek__BackingField_8() { return &___U3CStartAtU3Ek__BackingField_8; }
	inline void set_U3CStartAtU3Ek__BackingField_8(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CStartAtU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CStartAtTzU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(Message_t994A7D958E14F464F785BFB6864280005103A91D, ___U3CStartAtTzU3Ek__BackingField_9)); }
	inline int32_t get_U3CStartAtTzU3Ek__BackingField_9() const { return ___U3CStartAtTzU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CStartAtTzU3Ek__BackingField_9() { return &___U3CStartAtTzU3Ek__BackingField_9; }
	inline void set_U3CStartAtTzU3Ek__BackingField_9(int32_t value)
	{
		___U3CStartAtTzU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CEndAtU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(Message_t994A7D958E14F464F785BFB6864280005103A91D, ___U3CEndAtU3Ek__BackingField_10)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CEndAtU3Ek__BackingField_10() const { return ___U3CEndAtU3Ek__BackingField_10; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CEndAtU3Ek__BackingField_10() { return &___U3CEndAtU3Ek__BackingField_10; }
	inline void set_U3CEndAtU3Ek__BackingField_10(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CEndAtU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CEndAtTzU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(Message_t994A7D958E14F464F785BFB6864280005103A91D, ___U3CEndAtTzU3Ek__BackingField_11)); }
	inline int32_t get_U3CEndAtTzU3Ek__BackingField_11() const { return ___U3CEndAtTzU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CEndAtTzU3Ek__BackingField_11() { return &___U3CEndAtTzU3Ek__BackingField_11; }
	inline void set_U3CEndAtTzU3Ek__BackingField_11(int32_t value)
	{
		___U3CEndAtTzU3Ek__BackingField_11 = value;
	}
};


// System.IO.MonoIOStat
struct  MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71 
{
public:
	// System.IO.FileAttributes System.IO.MonoIOStat::fileAttributes
	int32_t ___fileAttributes_0;
	// System.Int64 System.IO.MonoIOStat::Length
	int64_t ___Length_1;
	// System.Int64 System.IO.MonoIOStat::CreationTime
	int64_t ___CreationTime_2;
	// System.Int64 System.IO.MonoIOStat::LastAccessTime
	int64_t ___LastAccessTime_3;
	// System.Int64 System.IO.MonoIOStat::LastWriteTime
	int64_t ___LastWriteTime_4;

public:
	inline static int32_t get_offset_of_fileAttributes_0() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___fileAttributes_0)); }
	inline int32_t get_fileAttributes_0() const { return ___fileAttributes_0; }
	inline int32_t* get_address_of_fileAttributes_0() { return &___fileAttributes_0; }
	inline void set_fileAttributes_0(int32_t value)
	{
		___fileAttributes_0 = value;
	}

	inline static int32_t get_offset_of_Length_1() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___Length_1)); }
	inline int64_t get_Length_1() const { return ___Length_1; }
	inline int64_t* get_address_of_Length_1() { return &___Length_1; }
	inline void set_Length_1(int64_t value)
	{
		___Length_1 = value;
	}

	inline static int32_t get_offset_of_CreationTime_2() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___CreationTime_2)); }
	inline int64_t get_CreationTime_2() const { return ___CreationTime_2; }
	inline int64_t* get_address_of_CreationTime_2() { return &___CreationTime_2; }
	inline void set_CreationTime_2(int64_t value)
	{
		___CreationTime_2 = value;
	}

	inline static int32_t get_offset_of_LastAccessTime_3() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___LastAccessTime_3)); }
	inline int64_t get_LastAccessTime_3() const { return ___LastAccessTime_3; }
	inline int64_t* get_address_of_LastAccessTime_3() { return &___LastAccessTime_3; }
	inline void set_LastAccessTime_3(int64_t value)
	{
		___LastAccessTime_3 = value;
	}

	inline static int32_t get_offset_of_LastWriteTime_4() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___LastWriteTime_4)); }
	inline int64_t get_LastWriteTime_4() const { return ___LastWriteTime_4; }
	inline int64_t* get_address_of_LastWriteTime_4() { return &___LastWriteTime_4; }
	inline void set_LastWriteTime_4(int64_t value)
	{
		___LastWriteTime_4 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UserWiseSDK.Offers.Offer
struct  Offer_tF5EB0445F358ACF0E545C2B513B39B63804190A7  : public RuntimeObject
{
public:
	// System.String UserWiseSDK.Offers.Offer::<Id>k__BackingField
	String_t* ___U3CIdU3Ek__BackingField_0;
	// System.String UserWiseSDK.Offers.Offer::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.String UserWiseSDK.Offers.Offer::<Title>k__BackingField
	String_t* ___U3CTitleU3Ek__BackingField_2;
	// System.String UserWiseSDK.Offers.Offer::<Body>k__BackingField
	String_t* ___U3CBodyU3Ek__BackingField_3;
	// System.String UserWiseSDK.Offers.Offer::<PortraitImageId>k__BackingField
	String_t* ___U3CPortraitImageIdU3Ek__BackingField_4;
	// System.String UserWiseSDK.Offers.Offer::<LandscapeImageId>k__BackingField
	String_t* ___U3CLandscapeImageIdU3Ek__BackingField_5;
	// System.Double UserWiseSDK.Offers.Offer::<Cost>k__BackingField
	double ___U3CCostU3Ek__BackingField_6;
	// System.String UserWiseSDK.Offers.Offer::<IOSProductId>k__BackingField
	String_t* ___U3CIOSProductIdU3Ek__BackingField_7;
	// System.String UserWiseSDK.Offers.Offer::<AndroidProductId>k__BackingField
	String_t* ___U3CAndroidProductIdU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UserWiseSDK.Offers.Offer::<Currencies>k__BackingField
	Dictionary_2_t89F1337E661E2EFCB4C0B7F9C0FE6C3BC09383E9 * ___U3CCurrenciesU3Ek__BackingField_9;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UserWiseSDK.Offers.Offer::<Items>k__BackingField
	Dictionary_2_t89F1337E661E2EFCB4C0B7F9C0FE6C3BC09383E9 * ___U3CItemsU3Ek__BackingField_10;
	// System.DateTime UserWiseSDK.Offers.Offer::<StartAt>k__BackingField
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CStartAtU3Ek__BackingField_11;
	// UserWiseSDK.Internal.Scheduled.SchedulableTimezoneType UserWiseSDK.Offers.Offer::<StartAtTz>k__BackingField
	int32_t ___U3CStartAtTzU3Ek__BackingField_12;
	// System.DateTime UserWiseSDK.Offers.Offer::<EndAt>k__BackingField
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CEndAtU3Ek__BackingField_13;
	// UserWiseSDK.Internal.Scheduled.SchedulableTimezoneType UserWiseSDK.Offers.Offer::<EndAtTz>k__BackingField
	int32_t ___U3CEndAtTzU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Offer_tF5EB0445F358ACF0E545C2B513B39B63804190A7, ___U3CIdU3Ek__BackingField_0)); }
	inline String_t* get_U3CIdU3Ek__BackingField_0() const { return ___U3CIdU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CIdU3Ek__BackingField_0() { return &___U3CIdU3Ek__BackingField_0; }
	inline void set_U3CIdU3Ek__BackingField_0(String_t* value)
	{
		___U3CIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIdU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Offer_tF5EB0445F358ACF0E545C2B513B39B63804190A7, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTitleU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Offer_tF5EB0445F358ACF0E545C2B513B39B63804190A7, ___U3CTitleU3Ek__BackingField_2)); }
	inline String_t* get_U3CTitleU3Ek__BackingField_2() const { return ___U3CTitleU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CTitleU3Ek__BackingField_2() { return &___U3CTitleU3Ek__BackingField_2; }
	inline void set_U3CTitleU3Ek__BackingField_2(String_t* value)
	{
		___U3CTitleU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTitleU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBodyU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Offer_tF5EB0445F358ACF0E545C2B513B39B63804190A7, ___U3CBodyU3Ek__BackingField_3)); }
	inline String_t* get_U3CBodyU3Ek__BackingField_3() const { return ___U3CBodyU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CBodyU3Ek__BackingField_3() { return &___U3CBodyU3Ek__BackingField_3; }
	inline void set_U3CBodyU3Ek__BackingField_3(String_t* value)
	{
		___U3CBodyU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBodyU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPortraitImageIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Offer_tF5EB0445F358ACF0E545C2B513B39B63804190A7, ___U3CPortraitImageIdU3Ek__BackingField_4)); }
	inline String_t* get_U3CPortraitImageIdU3Ek__BackingField_4() const { return ___U3CPortraitImageIdU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CPortraitImageIdU3Ek__BackingField_4() { return &___U3CPortraitImageIdU3Ek__BackingField_4; }
	inline void set_U3CPortraitImageIdU3Ek__BackingField_4(String_t* value)
	{
		___U3CPortraitImageIdU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPortraitImageIdU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLandscapeImageIdU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Offer_tF5EB0445F358ACF0E545C2B513B39B63804190A7, ___U3CLandscapeImageIdU3Ek__BackingField_5)); }
	inline String_t* get_U3CLandscapeImageIdU3Ek__BackingField_5() const { return ___U3CLandscapeImageIdU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CLandscapeImageIdU3Ek__BackingField_5() { return &___U3CLandscapeImageIdU3Ek__BackingField_5; }
	inline void set_U3CLandscapeImageIdU3Ek__BackingField_5(String_t* value)
	{
		___U3CLandscapeImageIdU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLandscapeImageIdU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCostU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Offer_tF5EB0445F358ACF0E545C2B513B39B63804190A7, ___U3CCostU3Ek__BackingField_6)); }
	inline double get_U3CCostU3Ek__BackingField_6() const { return ___U3CCostU3Ek__BackingField_6; }
	inline double* get_address_of_U3CCostU3Ek__BackingField_6() { return &___U3CCostU3Ek__BackingField_6; }
	inline void set_U3CCostU3Ek__BackingField_6(double value)
	{
		___U3CCostU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CIOSProductIdU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Offer_tF5EB0445F358ACF0E545C2B513B39B63804190A7, ___U3CIOSProductIdU3Ek__BackingField_7)); }
	inline String_t* get_U3CIOSProductIdU3Ek__BackingField_7() const { return ___U3CIOSProductIdU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CIOSProductIdU3Ek__BackingField_7() { return &___U3CIOSProductIdU3Ek__BackingField_7; }
	inline void set_U3CIOSProductIdU3Ek__BackingField_7(String_t* value)
	{
		___U3CIOSProductIdU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIOSProductIdU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAndroidProductIdU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Offer_tF5EB0445F358ACF0E545C2B513B39B63804190A7, ___U3CAndroidProductIdU3Ek__BackingField_8)); }
	inline String_t* get_U3CAndroidProductIdU3Ek__BackingField_8() const { return ___U3CAndroidProductIdU3Ek__BackingField_8; }
	inline String_t** get_address_of_U3CAndroidProductIdU3Ek__BackingField_8() { return &___U3CAndroidProductIdU3Ek__BackingField_8; }
	inline void set_U3CAndroidProductIdU3Ek__BackingField_8(String_t* value)
	{
		___U3CAndroidProductIdU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAndroidProductIdU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCurrenciesU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(Offer_tF5EB0445F358ACF0E545C2B513B39B63804190A7, ___U3CCurrenciesU3Ek__BackingField_9)); }
	inline Dictionary_2_t89F1337E661E2EFCB4C0B7F9C0FE6C3BC09383E9 * get_U3CCurrenciesU3Ek__BackingField_9() const { return ___U3CCurrenciesU3Ek__BackingField_9; }
	inline Dictionary_2_t89F1337E661E2EFCB4C0B7F9C0FE6C3BC09383E9 ** get_address_of_U3CCurrenciesU3Ek__BackingField_9() { return &___U3CCurrenciesU3Ek__BackingField_9; }
	inline void set_U3CCurrenciesU3Ek__BackingField_9(Dictionary_2_t89F1337E661E2EFCB4C0B7F9C0FE6C3BC09383E9 * value)
	{
		___U3CCurrenciesU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCurrenciesU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CItemsU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(Offer_tF5EB0445F358ACF0E545C2B513B39B63804190A7, ___U3CItemsU3Ek__BackingField_10)); }
	inline Dictionary_2_t89F1337E661E2EFCB4C0B7F9C0FE6C3BC09383E9 * get_U3CItemsU3Ek__BackingField_10() const { return ___U3CItemsU3Ek__BackingField_10; }
	inline Dictionary_2_t89F1337E661E2EFCB4C0B7F9C0FE6C3BC09383E9 ** get_address_of_U3CItemsU3Ek__BackingField_10() { return &___U3CItemsU3Ek__BackingField_10; }
	inline void set_U3CItemsU3Ek__BackingField_10(Dictionary_2_t89F1337E661E2EFCB4C0B7F9C0FE6C3BC09383E9 * value)
	{
		___U3CItemsU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CItemsU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStartAtU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(Offer_tF5EB0445F358ACF0E545C2B513B39B63804190A7, ___U3CStartAtU3Ek__BackingField_11)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CStartAtU3Ek__BackingField_11() const { return ___U3CStartAtU3Ek__BackingField_11; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CStartAtU3Ek__BackingField_11() { return &___U3CStartAtU3Ek__BackingField_11; }
	inline void set_U3CStartAtU3Ek__BackingField_11(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CStartAtU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CStartAtTzU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(Offer_tF5EB0445F358ACF0E545C2B513B39B63804190A7, ___U3CStartAtTzU3Ek__BackingField_12)); }
	inline int32_t get_U3CStartAtTzU3Ek__BackingField_12() const { return ___U3CStartAtTzU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CStartAtTzU3Ek__BackingField_12() { return &___U3CStartAtTzU3Ek__BackingField_12; }
	inline void set_U3CStartAtTzU3Ek__BackingField_12(int32_t value)
	{
		___U3CStartAtTzU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CEndAtU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(Offer_tF5EB0445F358ACF0E545C2B513B39B63804190A7, ___U3CEndAtU3Ek__BackingField_13)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CEndAtU3Ek__BackingField_13() const { return ___U3CEndAtU3Ek__BackingField_13; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CEndAtU3Ek__BackingField_13() { return &___U3CEndAtU3Ek__BackingField_13; }
	inline void set_U3CEndAtU3Ek__BackingField_13(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CEndAtU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CEndAtTzU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(Offer_tF5EB0445F358ACF0E545C2B513B39B63804190A7, ___U3CEndAtTzU3Ek__BackingField_14)); }
	inline int32_t get_U3CEndAtTzU3Ek__BackingField_14() const { return ___U3CEndAtTzU3Ek__BackingField_14; }
	inline int32_t* get_address_of_U3CEndAtTzU3Ek__BackingField_14() { return &___U3CEndAtTzU3Ek__BackingField_14; }
	inline void set_U3CEndAtTzU3Ek__BackingField_14(int32_t value)
	{
		___U3CEndAtTzU3Ek__BackingField_14 = value;
	}
};


// UserWiseSDK.Offers.OfferImpression
struct  OfferImpression_t93005F7531AFF65592176D6B1A40B085819AB2EE  : public RuntimeObject
{
public:
	// System.String UserWiseSDK.Offers.OfferImpression::<Id>k__BackingField
	String_t* ___U3CIdU3Ek__BackingField_0;
	// UserWiseSDK.Offers.Offer UserWiseSDK.Offers.OfferImpression::<Offer>k__BackingField
	Offer_tF5EB0445F358ACF0E545C2B513B39B63804190A7 * ___U3COfferU3Ek__BackingField_1;
	// UserWiseSDK.Offers.OfferImpression/ImpressionState UserWiseSDK.Offers.OfferImpression::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(OfferImpression_t93005F7531AFF65592176D6B1A40B085819AB2EE, ___U3CIdU3Ek__BackingField_0)); }
	inline String_t* get_U3CIdU3Ek__BackingField_0() const { return ___U3CIdU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CIdU3Ek__BackingField_0() { return &___U3CIdU3Ek__BackingField_0; }
	inline void set_U3CIdU3Ek__BackingField_0(String_t* value)
	{
		___U3CIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIdU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3COfferU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(OfferImpression_t93005F7531AFF65592176D6B1A40B085819AB2EE, ___U3COfferU3Ek__BackingField_1)); }
	inline Offer_tF5EB0445F358ACF0E545C2B513B39B63804190A7 * get_U3COfferU3Ek__BackingField_1() const { return ___U3COfferU3Ek__BackingField_1; }
	inline Offer_tF5EB0445F358ACF0E545C2B513B39B63804190A7 ** get_address_of_U3COfferU3Ek__BackingField_1() { return &___U3COfferU3Ek__BackingField_1; }
	inline void set_U3COfferU3Ek__BackingField_1(Offer_tF5EB0445F358ACF0E545C2B513B39B63804190A7 * value)
	{
		___U3COfferU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COfferU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStateU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(OfferImpression_t93005F7531AFF65592176D6B1A40B085819AB2EE, ___U3CStateU3Ek__BackingField_2)); }
	inline int32_t get_U3CStateU3Ek__BackingField_2() const { return ___U3CStateU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CStateU3Ek__BackingField_2() { return &___U3CStateU3Ek__BackingField_2; }
	inline void set_U3CStateU3Ek__BackingField_2(int32_t value)
	{
		___U3CStateU3Ek__BackingField_2 = value;
	}
};


// UserWiseSDK.PlayerAttribute
struct  PlayerAttribute_tFEE261801264075772E64E9C9823AE73B88747BB 
{
public:
	// System.String UserWiseSDK.PlayerAttribute::Name
	String_t* ___Name_0;
	// System.Object UserWiseSDK.PlayerAttribute::Value
	RuntimeObject * ___Value_1;
	// UserWiseSDK.AttributableDataType UserWiseSDK.PlayerAttribute::DataType
	int32_t ___DataType_2;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(PlayerAttribute_tFEE261801264075772E64E9C9823AE73B88747BB, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_Value_1() { return static_cast<int32_t>(offsetof(PlayerAttribute_tFEE261801264075772E64E9C9823AE73B88747BB, ___Value_1)); }
	inline RuntimeObject * get_Value_1() const { return ___Value_1; }
	inline RuntimeObject ** get_address_of_Value_1() { return &___Value_1; }
	inline void set_Value_1(RuntimeObject * value)
	{
		___Value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_1), (void*)value);
	}

	inline static int32_t get_offset_of_DataType_2() { return static_cast<int32_t>(offsetof(PlayerAttribute_tFEE261801264075772E64E9C9823AE73B88747BB, ___DataType_2)); }
	inline int32_t get_DataType_2() const { return ___DataType_2; }
	inline int32_t* get_address_of_DataType_2() { return &___DataType_2; }
	inline void set_DataType_2(int32_t value)
	{
		___DataType_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UserWiseSDK.PlayerAttribute
struct PlayerAttribute_tFEE261801264075772E64E9C9823AE73B88747BB_marshaled_pinvoke
{
	char* ___Name_0;
	Il2CppIUnknown* ___Value_1;
	int32_t ___DataType_2;
};
// Native definition for COM marshalling of UserWiseSDK.PlayerAttribute
struct PlayerAttribute_tFEE261801264075772E64E9C9823AE73B88747BB_marshaled_com
{
	Il2CppChar* ___Name_0;
	Il2CppIUnknown* ___Value_1;
	int32_t ___DataType_2;
};

// UserWiseSDK.PlayerEventAttribute
struct  PlayerEventAttribute_t8DCB62015FEE0EAC58B720075BAD7BA8B6A67154 
{
public:
	// System.String UserWiseSDK.PlayerEventAttribute::Name
	String_t* ___Name_0;
	// System.Object UserWiseSDK.PlayerEventAttribute::Value
	RuntimeObject * ___Value_1;
	// UserWiseSDK.AttributableDataType UserWiseSDK.PlayerEventAttribute::DataType
	int32_t ___DataType_2;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(PlayerEventAttribute_t8DCB62015FEE0EAC58B720075BAD7BA8B6A67154, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_Value_1() { return static_cast<int32_t>(offsetof(PlayerEventAttribute_t8DCB62015FEE0EAC58B720075BAD7BA8B6A67154, ___Value_1)); }
	inline RuntimeObject * get_Value_1() const { return ___Value_1; }
	inline RuntimeObject ** get_address_of_Value_1() { return &___Value_1; }
	inline void set_Value_1(RuntimeObject * value)
	{
		___Value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_1), (void*)value);
	}

	inline static int32_t get_offset_of_DataType_2() { return static_cast<int32_t>(offsetof(PlayerEventAttribute_t8DCB62015FEE0EAC58B720075BAD7BA8B6A67154, ___DataType_2)); }
	inline int32_t get_DataType_2() const { return ___DataType_2; }
	inline int32_t* get_address_of_DataType_2() { return &___DataType_2; }
	inline void set_DataType_2(int32_t value)
	{
		___DataType_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UserWiseSDK.PlayerEventAttribute
struct PlayerEventAttribute_t8DCB62015FEE0EAC58B720075BAD7BA8B6A67154_marshaled_pinvoke
{
	char* ___Name_0;
	Il2CppIUnknown* ___Value_1;
	int32_t ___DataType_2;
};
// Native definition for COM marshalling of UserWiseSDK.PlayerEventAttribute
struct PlayerEventAttribute_t8DCB62015FEE0EAC58B720075BAD7BA8B6A67154_marshaled_com
{
	Il2CppChar* ___Name_0;
	Il2CppIUnknown* ___Value_1;
	int32_t ___DataType_2;
};

// UserWiseSDK.RegionMetadata
struct  RegionMetadata_tF86DE590B11B13AAD85D1595B383D4D180ECFCAE 
{
public:
	// System.String UserWiseSDK.RegionMetadata::Name
	String_t* ___Name_0;
	// System.Object UserWiseSDK.RegionMetadata::Value
	RuntimeObject * ___Value_1;
	// UserWiseSDK.AttributableDataType UserWiseSDK.RegionMetadata::DataType
	int32_t ___DataType_2;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(RegionMetadata_tF86DE590B11B13AAD85D1595B383D4D180ECFCAE, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_Value_1() { return static_cast<int32_t>(offsetof(RegionMetadata_tF86DE590B11B13AAD85D1595B383D4D180ECFCAE, ___Value_1)); }
	inline RuntimeObject * get_Value_1() const { return ___Value_1; }
	inline RuntimeObject ** get_address_of_Value_1() { return &___Value_1; }
	inline void set_Value_1(RuntimeObject * value)
	{
		___Value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_1), (void*)value);
	}

	inline static int32_t get_offset_of_DataType_2() { return static_cast<int32_t>(offsetof(RegionMetadata_tF86DE590B11B13AAD85D1595B383D4D180ECFCAE, ___DataType_2)); }
	inline int32_t get_DataType_2() const { return ___DataType_2; }
	inline int32_t* get_address_of_DataType_2() { return &___DataType_2; }
	inline void set_DataType_2(int32_t value)
	{
		___DataType_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UserWiseSDK.RegionMetadata
struct RegionMetadata_tF86DE590B11B13AAD85D1595B383D4D180ECFCAE_marshaled_pinvoke
{
	char* ___Name_0;
	Il2CppIUnknown* ___Value_1;
	int32_t ___DataType_2;
};
// Native definition for COM marshalling of UserWiseSDK.RegionMetadata
struct RegionMetadata_tF86DE590B11B13AAD85D1595B383D4D180ECFCAE_marshaled_com
{
	Il2CppChar* ___Name_0;
	Il2CppIUnknown* ___Value_1;
	int32_t ___DataType_2;
};

// UserWiseSDK.Surveys.Survey
struct  Survey_t63EBCA3CF9AB2225CD1CF20B3E7B854C7846832A  : public RuntimeObject
{
public:
	// System.String UserWiseSDK.Surveys.Survey::<Id>k__BackingField
	String_t* ___U3CIdU3Ek__BackingField_0;
	// System.String UserWiseSDK.Surveys.Survey::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.Int64 UserWiseSDK.Surveys.Survey::<QuestionsCount>k__BackingField
	int64_t ___U3CQuestionsCountU3Ek__BackingField_2;
	// System.DateTime UserWiseSDK.Surveys.Survey::<StartAt>k__BackingField
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CStartAtU3Ek__BackingField_3;
	// UserWiseSDK.Internal.Scheduled.SchedulableTimezoneType UserWiseSDK.Surveys.Survey::<StartAtTz>k__BackingField
	int32_t ___U3CStartAtTzU3Ek__BackingField_4;
	// System.DateTime UserWiseSDK.Surveys.Survey::<EndAt>k__BackingField
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CEndAtU3Ek__BackingField_5;
	// UserWiseSDK.Internal.Scheduled.SchedulableTimezoneType UserWiseSDK.Surveys.Survey::<EndAtTz>k__BackingField
	int32_t ___U3CEndAtTzU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Survey_t63EBCA3CF9AB2225CD1CF20B3E7B854C7846832A, ___U3CIdU3Ek__BackingField_0)); }
	inline String_t* get_U3CIdU3Ek__BackingField_0() const { return ___U3CIdU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CIdU3Ek__BackingField_0() { return &___U3CIdU3Ek__BackingField_0; }
	inline void set_U3CIdU3Ek__BackingField_0(String_t* value)
	{
		___U3CIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIdU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Survey_t63EBCA3CF9AB2225CD1CF20B3E7B854C7846832A, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CQuestionsCountU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Survey_t63EBCA3CF9AB2225CD1CF20B3E7B854C7846832A, ___U3CQuestionsCountU3Ek__BackingField_2)); }
	inline int64_t get_U3CQuestionsCountU3Ek__BackingField_2() const { return ___U3CQuestionsCountU3Ek__BackingField_2; }
	inline int64_t* get_address_of_U3CQuestionsCountU3Ek__BackingField_2() { return &___U3CQuestionsCountU3Ek__BackingField_2; }
	inline void set_U3CQuestionsCountU3Ek__BackingField_2(int64_t value)
	{
		___U3CQuestionsCountU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CStartAtU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Survey_t63EBCA3CF9AB2225CD1CF20B3E7B854C7846832A, ___U3CStartAtU3Ek__BackingField_3)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CStartAtU3Ek__BackingField_3() const { return ___U3CStartAtU3Ek__BackingField_3; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CStartAtU3Ek__BackingField_3() { return &___U3CStartAtU3Ek__BackingField_3; }
	inline void set_U3CStartAtU3Ek__BackingField_3(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CStartAtU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CStartAtTzU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Survey_t63EBCA3CF9AB2225CD1CF20B3E7B854C7846832A, ___U3CStartAtTzU3Ek__BackingField_4)); }
	inline int32_t get_U3CStartAtTzU3Ek__BackingField_4() const { return ___U3CStartAtTzU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CStartAtTzU3Ek__BackingField_4() { return &___U3CStartAtTzU3Ek__BackingField_4; }
	inline void set_U3CStartAtTzU3Ek__BackingField_4(int32_t value)
	{
		___U3CStartAtTzU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CEndAtU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Survey_t63EBCA3CF9AB2225CD1CF20B3E7B854C7846832A, ___U3CEndAtU3Ek__BackingField_5)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CEndAtU3Ek__BackingField_5() const { return ___U3CEndAtU3Ek__BackingField_5; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CEndAtU3Ek__BackingField_5() { return &___U3CEndAtU3Ek__BackingField_5; }
	inline void set_U3CEndAtU3Ek__BackingField_5(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CEndAtU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CEndAtTzU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Survey_t63EBCA3CF9AB2225CD1CF20B3E7B854C7846832A, ___U3CEndAtTzU3Ek__BackingField_6)); }
	inline int32_t get_U3CEndAtTzU3Ek__BackingField_6() const { return ___U3CEndAtTzU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CEndAtTzU3Ek__BackingField_6() { return &___U3CEndAtTzU3Ek__BackingField_6; }
	inline void set_U3CEndAtTzU3Ek__BackingField_6(int32_t value)
	{
		___U3CEndAtTzU3Ek__BackingField_6 = value;
	}
};


// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UserWiseSDK.Internal.Triggers.TriggerData
struct  TriggerData_t40BC1C042F41DAE8FD2282A4205ECA50429A7EE6  : public RuntimeObject
{
public:
	// UserWiseSDK.Internal.Triggers.TriggerType UserWiseSDK.Internal.Triggers.TriggerData::<Type>k__BackingField
	int32_t ___U3CTypeU3Ek__BackingField_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> UserWiseSDK.Internal.Triggers.TriggerData::<Logic>k__BackingField
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___U3CLogicU3Ek__BackingField_1;
	// UserWiseSDK.Internal.Triggers.TriggerQuota UserWiseSDK.Internal.Triggers.TriggerData::<Quota>k__BackingField
	TriggerQuota_tD1BA9066B490D48E86E8BF9D5E65B46AD38576E3 * ___U3CQuotaU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TriggerData_t40BC1C042F41DAE8FD2282A4205ECA50429A7EE6, ___U3CTypeU3Ek__BackingField_0)); }
	inline int32_t get_U3CTypeU3Ek__BackingField_0() const { return ___U3CTypeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CTypeU3Ek__BackingField_0() { return &___U3CTypeU3Ek__BackingField_0; }
	inline void set_U3CTypeU3Ek__BackingField_0(int32_t value)
	{
		___U3CTypeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CLogicU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TriggerData_t40BC1C042F41DAE8FD2282A4205ECA50429A7EE6, ___U3CLogicU3Ek__BackingField_1)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_U3CLogicU3Ek__BackingField_1() const { return ___U3CLogicU3Ek__BackingField_1; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_U3CLogicU3Ek__BackingField_1() { return &___U3CLogicU3Ek__BackingField_1; }
	inline void set_U3CLogicU3Ek__BackingField_1(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___U3CLogicU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLogicU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CQuotaU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TriggerData_t40BC1C042F41DAE8FD2282A4205ECA50429A7EE6, ___U3CQuotaU3Ek__BackingField_2)); }
	inline TriggerQuota_tD1BA9066B490D48E86E8BF9D5E65B46AD38576E3 * get_U3CQuotaU3Ek__BackingField_2() const { return ___U3CQuotaU3Ek__BackingField_2; }
	inline TriggerQuota_tD1BA9066B490D48E86E8BF9D5E65B46AD38576E3 ** get_address_of_U3CQuotaU3Ek__BackingField_2() { return &___U3CQuotaU3Ek__BackingField_2; }
	inline void set_U3CQuotaU3Ek__BackingField_2(TriggerQuota_tD1BA9066B490D48E86E8BF9D5E65B46AD38576E3 * value)
	{
		___U3CQuotaU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CQuotaU3Ek__BackingField_2), (void*)value);
	}
};


// UserWiseSDK.Internal.Scheduled.SchedulableContentController/<GenerateEnumerator>d__11
struct  U3CGenerateEnumeratorU3Ed__11_t34C1BB0F622A0EBED3287CDF04F1739C2CD798DA  : public RuntimeObject
{
public:
	// System.Int32 UserWiseSDK.Internal.Scheduled.SchedulableContentController/<GenerateEnumerator>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UserWiseSDK.Internal.Scheduled.SchedulableContentController/<GenerateEnumerator>d__11::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.TimeSpan UserWiseSDK.Internal.Scheduled.SchedulableContentController/<GenerateEnumerator>d__11::timeSpan
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___timeSpan_2;
	// System.Action UserWiseSDK.Internal.Scheduled.SchedulableContentController/<GenerateEnumerator>d__11::callback
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGenerateEnumeratorU3Ed__11_t34C1BB0F622A0EBED3287CDF04F1739C2CD798DA, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGenerateEnumeratorU3Ed__11_t34C1BB0F622A0EBED3287CDF04F1739C2CD798DA, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_timeSpan_2() { return static_cast<int32_t>(offsetof(U3CGenerateEnumeratorU3Ed__11_t34C1BB0F622A0EBED3287CDF04F1739C2CD798DA, ___timeSpan_2)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_timeSpan_2() const { return ___timeSpan_2; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_timeSpan_2() { return &___timeSpan_2; }
	inline void set_timeSpan_2(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___timeSpan_2 = value;
	}

	inline static int32_t get_offset_of_callback_3() { return static_cast<int32_t>(offsetof(U3CGenerateEnumeratorU3Ed__11_t34C1BB0F622A0EBED3287CDF04F1739C2CD798DA, ___callback_3)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_callback_3() const { return ___callback_3; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_callback_3() { return &___callback_3; }
	inline void set_callback_3(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___callback_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_3), (void*)value);
	}
};


// System.Action`1<System.Boolean>
struct  Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UserWiseSDK.Internal.Triggers.ITriggerable>
struct  Action_1_t8B9D154E6AC4F2C06ED9B8727E61F426060B7170  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<System.Boolean,System.Byte[]>
struct  Action_2_t6AE767DB2F0E371CDCC9FC496C39B598B1D20B3E  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<System.Boolean,UserWiseSDK.MediaInfo>
struct  Action_2_tC9B6AFEE9B1498523B4F9EBDBC90FA84E9EB9393  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<UserWiseSDK.Messages.MessageEventArgs>
struct  EventHandler_1_t7A31148CCAB55ABA8B9E4FA24AFED408F0E6DB9D  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<UserWiseSDK.Offers.OfferEventArgs>
struct  EventHandler_1_t7827DEAD0F31A439E5160F227B30EA39AF88FCBA  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<UserWiseSDK.Offers.OfferImpressionEventArgs>
struct  EventHandler_1_tE5C3802BDD10C52FDA59E18CC1D58768C92E0A57  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<UserWiseSDK.Surveys.SurveyInviteInitializedEventArgs>
struct  EventHandler_1_t7E16AEA66F6C4636B6E10A9A2ADCD1429BE4F555  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<UserWiseSDK.Surveys.SurveyResponseIdEventArgs>
struct  EventHandler_1_t1BEB15B2B124055FE88D844DA101A6E2D5F07668  : public MulticastDelegate_t
{
public:

public:
};


// System.Nullable`1<UserWiseSDK.PlayerEventAttribute>
struct  Nullable_1_tC4FB4BB8479F72D16C842427383E6E3BE652C9A5 
{
public:
	// T System.Nullable`1::value
	PlayerEventAttribute_t8DCB62015FEE0EAC58B720075BAD7BA8B6A67154  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tC4FB4BB8479F72D16C842427383E6E3BE652C9A5, ___value_0)); }
	inline PlayerEventAttribute_t8DCB62015FEE0EAC58B720075BAD7BA8B6A67154  get_value_0() const { return ___value_0; }
	inline PlayerEventAttribute_t8DCB62015FEE0EAC58B720075BAD7BA8B6A67154 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(PlayerEventAttribute_t8DCB62015FEE0EAC58B720075BAD7BA8B6A67154  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___Name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___Value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tC4FB4BB8479F72D16C842427383E6E3BE652C9A5, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<UserWiseSDK.RegionMetadata>
struct  Nullable_1_t0D5CA762E667CF24B1BFBE05DD585E367D814023 
{
public:
	// T System.Nullable`1::value
	RegionMetadata_tF86DE590B11B13AAD85D1595B383D4D180ECFCAE  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0D5CA762E667CF24B1BFBE05DD585E367D814023, ___value_0)); }
	inline RegionMetadata_tF86DE590B11B13AAD85D1595B383D4D180ECFCAE  get_value_0() const { return ___value_0; }
	inline RegionMetadata_tF86DE590B11B13AAD85D1595B383D4D180ECFCAE * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(RegionMetadata_tF86DE590B11B13AAD85D1595B383D4D180ECFCAE  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___Name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___Value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0D5CA762E667CF24B1BFBE05DD585E367D814023, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Predicate`1<UserWiseSDK.Variables.Types.IVariable>
struct  Predicate_1_t252A4131FBF10F595F30D77DD5DCC10EAF91F1E1  : public MulticastDelegate_t
{
public:

public:
};


// System.Predicate`1<UserWiseSDK.PlayerEventAttribute>
struct  Predicate_1_t6DC00870BCCD3170671403014C65A17A3E69834C  : public MulticastDelegate_t
{
public:

public:
};


// System.Predicate`1<UserWiseSDK.RegionMetadata>
struct  Predicate_1_tB2799FC3E18B34B2340D143078E9F4D980992FF9  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.IO.FileSystemInfo
struct  FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.MonoIOStat System.IO.FileSystemInfo::_data
	MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71  ____data_1;
	// System.Int32 System.IO.FileSystemInfo::_dataInitialised
	int32_t ____dataInitialised_2;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_3;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_4;
	// System.String System.IO.FileSystemInfo::_displayPath
	String_t* ____displayPath_5;

public:
	inline static int32_t get_offset_of__data_1() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ____data_1)); }
	inline MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71  get__data_1() const { return ____data_1; }
	inline MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71 * get_address_of__data_1() { return &____data_1; }
	inline void set__data_1(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71  value)
	{
		____data_1 = value;
	}

	inline static int32_t get_offset_of__dataInitialised_2() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ____dataInitialised_2)); }
	inline int32_t get__dataInitialised_2() const { return ____dataInitialised_2; }
	inline int32_t* get_address_of__dataInitialised_2() { return &____dataInitialised_2; }
	inline void set__dataInitialised_2(int32_t value)
	{
		____dataInitialised_2 = value;
	}

	inline static int32_t get_offset_of_FullPath_3() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ___FullPath_3)); }
	inline String_t* get_FullPath_3() const { return ___FullPath_3; }
	inline String_t** get_address_of_FullPath_3() { return &___FullPath_3; }
	inline void set_FullPath_3(String_t* value)
	{
		___FullPath_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FullPath_3), (void*)value);
	}

	inline static int32_t get_offset_of_OriginalPath_4() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ___OriginalPath_4)); }
	inline String_t* get_OriginalPath_4() const { return ___OriginalPath_4; }
	inline String_t** get_address_of_OriginalPath_4() { return &___OriginalPath_4; }
	inline void set_OriginalPath_4(String_t* value)
	{
		___OriginalPath_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OriginalPath_4), (void*)value);
	}

	inline static int32_t get_offset_of__displayPath_5() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ____displayPath_5)); }
	inline String_t* get__displayPath_5() const { return ____displayPath_5; }
	inline String_t** get_address_of__displayPath_5() { return &____displayPath_5; }
	inline void set__displayPath_5(String_t* value)
	{
		____displayPath_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____displayPath_5), (void*)value);
	}
};


// System.NotSupportedException
struct  NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UserWiseSDK.Variables.Types.StringVariable
struct  StringVariable_t5D1782F60CD7D6C7FE378A53EED1F99D47EF2BE5  : public Variable_1_t5176D87E316D748175C0D26DD2EAA638B2827252
{
public:

public:
};


// UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c__DisplayClass6_0
struct  U3CU3Ec__DisplayClass6_0_tE709B9673098A3DE2A7919BAFDFA06436B0A2C6A  : public RuntimeObject
{
public:
	// UserWiseSDK.PlayerAttribute UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c__DisplayClass6_0::attribute
	PlayerAttribute_tFEE261801264075772E64E9C9823AE73B88747BB  ___attribute_0;
	// UserWiseSDK.Internal.Triggers.TriggerableContentController UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c__DisplayClass6_0::<>4__this
	TriggerableContentController_t879B381534ABAAA2D45C76715E084E80D900D57D * ___U3CU3E4__this_1;
	// System.Collections.Generic.List`1<UserWiseSDK.Internal.Triggers.ITriggerable> UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c__DisplayClass6_0::triggeredTriggerables
	List_1_t92B053769F1F29417E25AE8F630FE7F9B7911437 * ___triggeredTriggerables_2;

public:
	inline static int32_t get_offset_of_attribute_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_tE709B9673098A3DE2A7919BAFDFA06436B0A2C6A, ___attribute_0)); }
	inline PlayerAttribute_tFEE261801264075772E64E9C9823AE73B88747BB  get_attribute_0() const { return ___attribute_0; }
	inline PlayerAttribute_tFEE261801264075772E64E9C9823AE73B88747BB * get_address_of_attribute_0() { return &___attribute_0; }
	inline void set_attribute_0(PlayerAttribute_tFEE261801264075772E64E9C9823AE73B88747BB  value)
	{
		___attribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___attribute_0))->___Name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___attribute_0))->___Value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_tE709B9673098A3DE2A7919BAFDFA06436B0A2C6A, ___U3CU3E4__this_1)); }
	inline TriggerableContentController_t879B381534ABAAA2D45C76715E084E80D900D57D * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline TriggerableContentController_t879B381534ABAAA2D45C76715E084E80D900D57D ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(TriggerableContentController_t879B381534ABAAA2D45C76715E084E80D900D57D * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}

	inline static int32_t get_offset_of_triggeredTriggerables_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_tE709B9673098A3DE2A7919BAFDFA06436B0A2C6A, ___triggeredTriggerables_2)); }
	inline List_1_t92B053769F1F29417E25AE8F630FE7F9B7911437 * get_triggeredTriggerables_2() const { return ___triggeredTriggerables_2; }
	inline List_1_t92B053769F1F29417E25AE8F630FE7F9B7911437 ** get_address_of_triggeredTriggerables_2() { return &___triggeredTriggerables_2; }
	inline void set_triggeredTriggerables_2(List_1_t92B053769F1F29417E25AE8F630FE7F9B7911437 * value)
	{
		___triggeredTriggerables_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___triggeredTriggerables_2), (void*)value);
	}
};


// System.IO.DirectoryInfo
struct  DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD  : public FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246
{
public:
	// System.String System.IO.DirectoryInfo::current
	String_t* ___current_6;
	// System.String System.IO.DirectoryInfo::parent
	String_t* ___parent_7;

public:
	inline static int32_t get_offset_of_current_6() { return static_cast<int32_t>(offsetof(DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD, ___current_6)); }
	inline String_t* get_current_6() const { return ___current_6; }
	inline String_t** get_address_of_current_6() { return &___current_6; }
	inline void set_current_6(String_t* value)
	{
		___current_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_6), (void*)value);
	}

	inline static int32_t get_offset_of_parent_7() { return static_cast<int32_t>(offsetof(DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD, ___parent_7)); }
	inline String_t* get_parent_7() const { return ___parent_7; }
	inline String_t** get_address_of_parent_7() { return &___parent_7; }
	inline void set_parent_7(String_t* value)
	{
		___parent_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_7), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UserWiseSDK.Unity.UWHandlerGameObject/UWProxyEventHandler
struct  UWProxyEventHandler_t8164F2CF63723BF90005F32FF7216645A65428E9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared (EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB * __this, RuntimeObject * ___sender0, RuntimeObject * ___e1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// TValue UserWiseSDK.Internal.Extensions.DictionaryExtensionsClass::GetValueOrDefault<System.Object,System.Object>(System.Collections.Generic.Dictionary`2<TKey,System.Object>,TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * DictionaryExtensionsClass_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_mF34D323B18F3224F2D8FEA73FB3D4C754B5AB378_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___data0, RuntimeObject * ___key1, RuntimeObject * ___defaultValue2, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void UserWiseSDK.Variables.Types.Variable`1<System.Object>::SetCurrentValue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Variable_1_SetCurrentValue_m51979A37993B796692A81337944D8BE2DAAD3BA6_gshared (Variable_1_t5EC5F7553D41F631E59F07E69F8AD3D773497278 * __this, RuntimeObject * ___newValue0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0  Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3F41E32C976C3C48B3FC63FBFD3FBBC5B5F23EDD_gshared (Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * List_1_Find_mBE8A91B51D29EC296321E6070FCD76081576B31E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___match0, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int64>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m3AA13B63BAEF6C890A4EAF571DD1E4C9245A3493_gshared (List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4 * __this, int64_t ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Double>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m56E93B74F5254C198272F09C8E4B09483184B929_gshared (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * __this, double ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.DateTime>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m186BDFBE15172FEE311041A38252C8B10444E63B_gshared (List_1_t7240E3382CB212F4FEB22D7A3E93EE9152E03CBC * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Predicate`1<UserWiseSDK.PlayerEventAttribute>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m2CC94284D0661A08DDAE49AFAEEFEF6F0F77F483_gshared (Predicate_1_t6DC00870BCCD3170671403014C65A17A3E69834C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UserWiseSDK.PlayerEventAttribute>::Find(System.Predicate`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerEventAttribute_t8DCB62015FEE0EAC58B720075BAD7BA8B6A67154  List_1_Find_m8F84724E3B9CF39244F178118AFE40F3C62CBC8F_gshared (List_1_tDF5AFDD3A0DE5C7C3DEB594CF5CE6A7F5FE34BD2 * __this, Predicate_1_t6DC00870BCCD3170671403014C65A17A3E69834C * ___match0, const RuntimeMethod* method);
// System.Void System.Nullable`1<UserWiseSDK.PlayerEventAttribute>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m162D2EC9E315E003217699D359B316C5CF375941_gshared (Nullable_1_tC4FB4BB8479F72D16C842427383E6E3BE652C9A5 * __this, PlayerEventAttribute_t8DCB62015FEE0EAC58B720075BAD7BA8B6A67154  ___value0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UserWiseSDK.PlayerEventAttribute>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC0848B1E8B9FCB262EA335141C667FFCFBBFBCD0_gshared_inline (Nullable_1_tC4FB4BB8479F72D16C842427383E6E3BE652C9A5 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Predicate`1<UserWiseSDK.RegionMetadata>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m6AAB73662593F005CC537DA195F5B46CE38A1499_gshared (Predicate_1_tB2799FC3E18B34B2340D143078E9F4D980992FF9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UserWiseSDK.RegionMetadata>::Find(System.Predicate`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegionMetadata_tF86DE590B11B13AAD85D1595B383D4D180ECFCAE  List_1_Find_m896D2FC9958E06E63EBA462B0F84DF8FB38C94BC_gshared (List_1_tEB7D3C41B15A71A632C4C4CB9B05C477B19E524A * __this, Predicate_1_tB2799FC3E18B34B2340D143078E9F4D980992FF9 * ___match0, const RuntimeMethod* method);
// System.Void System.Nullable`1<UserWiseSDK.RegionMetadata>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m3913E4FE07DE0534B318191A3D508DBCF094A1CB_gshared (Nullable_1_t0D5CA762E667CF24B1BFBE05DD585E367D814023 * __this, RegionMetadata_tF86DE590B11B13AAD85D1595B383D4D180ECFCAE  ___value0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UserWiseSDK.RegionMetadata>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB4A325AB11A5E20ADCE6DDD6978D49D2CF0DDAD5_gshared_inline (Nullable_1_t0D5CA762E667CF24B1BFBE05DD585E367D814023 * __this, const RuntimeMethod* method);
// System.Void System.Action`2<System.Boolean,System.Object>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_m05992ABB52C04142026677BB6BA902C49CB197EF_gshared (Action_2_t48DF0C0D4F3A3AB463DECA881851C95F1A5B0E72 * __this, bool ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_gshared (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, bool ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::ForEach(System.Action`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_m1C08725A39127C32D56B9E8A36D813F08D3BFF4D_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___action0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean UserWiseSDK.Internal.API.APIResponse::IsError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool APIResponse_IsError_m63697CBE18F9F784F4CFCD41124EF3C175952D36 (APIResponse_t04D6883FBCAF2557AC604DFC943CD759DE8556C8 * __this, const RuntimeMethod* method);
// System.String UserWiseSDK.Messages.Message::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Message_get_Id_m4B5858F7ACE7E9FF0C7B35E3C7F29A4EEB6ED61E_inline (Message_t994A7D958E14F464F785BFB6864280005103A91D * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void UserWiseSDK.Internal.Logger::Log(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_Log_mD812E8836FE8B23379FCD434AD8A984B2CAA1B19 (String_t* ___msg0, bool ___sensitive1, const RuntimeMethod* method);
// System.Void UserWiseSDK.Messages.MessageEventArgs::.ctor(UserWiseSDK.Messages.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageEventArgs__ctor_m253A894A4FDED5E0B8FDEA51231E7F17A595EE00 (MessageEventArgs_t2F5E385C2CA07A1D68DB2081FBD8E55F59445797 * __this, Message_t994A7D958E14F464F785BFB6864280005103A91D * ___message0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<UserWiseSDK.Messages.MessageEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m0C912722C5458101F71073C2356CED75B53591C9 (EventHandler_1_t7A31148CCAB55ABA8B9E4FA24AFED408F0E6DB9D * __this, RuntimeObject * ___sender0, MessageEventArgs_t2F5E385C2CA07A1D68DB2081FBD8E55F59445797 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t7A31148CCAB55ABA8B9E4FA24AFED408F0E6DB9D *, RuntimeObject *, MessageEventArgs_t2F5E385C2CA07A1D68DB2081FBD8E55F59445797 *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Object>>::get_Item(!0)
inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * Dictionary_2_get_Item_m1BA889A31BFF75A026EE37C812DE8D320EB9573C (Dictionary_2_tBC3D75391B3A91841136B660BDB52AABDF625D3C * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * (*) (Dictionary_2_tBC3D75391B3A91841136B660BDB52AABDF625D3C *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
inline void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, RuntimeObject *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void UserWiseSDK.Offers.OffersModule/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m772BF30A71679D56835D75FCD1338B604D4546F3 (U3CU3Ec_t43D16DAD4F56F4F796AB9EB26DC1797E5519B895 * __this, const RuntimeMethod* method);
// System.Void UserWiseSDK.Offers.OffersModule::set_IsInitializationActive(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OffersModule_set_IsInitializationActive_mCD6F02B9E79B798028C58309DFAD133DF2D3C922_inline (OffersModule_t6F8C5C3B400904E3CBFB8EC6ACC9D02C8FD81737 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UserWiseSDK.Offers.OfferEventArgs::.ctor(UserWiseSDK.Offers.Offer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OfferEventArgs__ctor_mBD69F9673B043A59AA0255FBE6BBD704D6124F29 (OfferEventArgs_t058E3ED8601ECACF7282CFF140768C5CF6B44170 * __this, Offer_tF5EB0445F358ACF0E545C2B513B39B63804190A7 * ___offer0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<UserWiseSDK.Offers.OfferEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_mF2554C1A499FE332F9781B4BAA50FCDBADDAFCAC (EventHandler_1_t7827DEAD0F31A439E5160F227B30EA39AF88FCBA * __this, RuntimeObject * ___sender0, OfferEventArgs_t058E3ED8601ECACF7282CFF140768C5CF6B44170 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t7827DEAD0F31A439E5160F227B30EA39AF88FCBA *, RuntimeObject *, OfferEventArgs_t058E3ED8601ECACF7282CFF140768C5CF6B44170 *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> UserWiseSDK.Internal.API.APIResponse::GetParsedJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * APIResponse_GetParsedJson_m41C7B08DD0BEA034C9E6A566F7FD8B543237E491 (APIResponse_t04D6883FBCAF2557AC604DFC943CD759DE8556C8 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// TValue UserWiseSDK.Internal.Extensions.DictionaryExtensionsClass::GetValueOrDefault<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>>(System.Collections.Generic.Dictionary`2<TKey,System.Object>,TKey,TValue)
inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisDictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_m82627B9461A9F7E3BD090C37A69A9C392F4CA138 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___data0, String_t* ___key1, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___defaultValue2, const RuntimeMethod* method)
{
	return ((  Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, String_t*, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*))DictionaryExtensionsClass_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_mF34D323B18F3224F2D8FEA73FB3D4C754B5AB378_gshared)(___data0, ___key1, ___defaultValue2, method);
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Count()
inline int32_t Dictionary_2_get_Count_m41D28F48221F99DB3016C0F5CF4B210291338546 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*))Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA_gshared)(__this, method);
}
// System.Void UserWiseSDK.Offers.OfferImpression::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OfferImpression__ctor_mEBBDDBC603E4872036B5852A7810DFD7F8EA0C52 (OfferImpression_t93005F7531AFF65592176D6B1A40B085819AB2EE * __this, const RuntimeMethod* method);
// System.Void UserWiseSDK.Offers.OfferImpressionEventArgs::.ctor(UserWiseSDK.Offers.OfferImpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OfferImpressionEventArgs__ctor_m908AAE9D9BFF69AF77B191D1F1F3A9938EFC58F9 (OfferImpressionEventArgs_tC118DB83F1F30158A6C86A7AB84901E11677E2C9 * __this, OfferImpression_t93005F7531AFF65592176D6B1A40B085819AB2EE * ___offerImpression0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<UserWiseSDK.Offers.OfferImpressionEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m39D7C8CE4211C8D2C9E06013F87216811ABEB0CA (EventHandler_1_tE5C3802BDD10C52FDA59E18CC1D58768C92E0A57 * __this, RuntimeObject * ___sender0, OfferImpressionEventArgs_tC118DB83F1F30158A6C86A7AB84901E11677E2C9 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tE5C3802BDD10C52FDA59E18CC1D58768C92E0A57 *, RuntimeObject *, OfferImpressionEventArgs_tC118DB83F1F30158A6C86A7AB84901E11677E2C9 *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> UserWiseSDK.PlayerEventAttribute::UserWiseSDK.IDictSerializable<UserWiseSDK.PlayerEventAttribute>.Serialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * PlayerEventAttribute_UserWiseSDK_IDictSerializableU3CUserWiseSDK_PlayerEventAttributeU3E_Serialize_m86AE703E4EFBA7E08F467EEC2AE7EF0E14C65C7A (PlayerEventAttribute_t8DCB62015FEE0EAC58B720075BAD7BA8B6A67154 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>::Add(!0)
inline void List_1_Add_m4C8CE184D497D4EA29D3963CCAC07D7D995A847A (List_1_t3CAEFF22F70FA8270239B1324BE3AABD8B5BD0C0 * __this, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3CAEFF22F70FA8270239B1324BE3AABD8B5BD0C0 *, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> UserWiseSDK.RegionMetadata::UserWiseSDK.IDictSerializable<UserWiseSDK.RegionMetadata>.Serialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * RegionMetadata_UserWiseSDK_IDictSerializableU3CUserWiseSDK_RegionMetadataU3E_Serialize_m6309648853CD68B4A8CED0A9DDD7B6F3DB7B5738 (RegionMetadata_tF86DE590B11B13AAD85D1595B383D4D180ECFCAE * __this, const RuntimeMethod* method);
// System.Void UserWiseSDK.Internal.Scheduled.SchedulableContentController::RemoveUpcomingSchedulable(UserWiseSDK.Internal.Scheduled.ISchedulable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SchedulableContentController_RemoveUpcomingSchedulable_m8793C49F98F921416719BF29441D80F79DE0644E (SchedulableContentController_tF564CB4B9771BDD8B86048FDEFA58468DFCAA995 * __this, RuntimeObject* ___schedulable0, const RuntimeMethod* method);
// System.Void UserWiseSDK.Internal.Scheduled.SchedulableContentController::RemoveEndingSchedulable(UserWiseSDK.Internal.Scheduled.ISchedulable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SchedulableContentController_RemoveEndingSchedulable_mA6B0C091AD334F2BC315125A8F95A8FFF43664B8 (SchedulableContentController_tF564CB4B9771BDD8B86048FDEFA58468DFCAA995 * __this, RuntimeObject* ___schedulable0, const RuntimeMethod* method);
// System.Double System.TimeSpan::get_TotalSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalSeconds_m28CDC7B9ADFEAFF912CC9B66984090CFE60B9AA4 (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSecondsRealtime::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSecondsRealtime__ctor_m7A69DE38F96121145BE8108B5AA62C789059F225 (WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * __this, float ___time0, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void UserWiseSDK.Variables.Types.Variable`1<System.String>::SetCurrentValue(T)
inline void Variable_1_SetCurrentValue_mD343EA3FC5C7490CB34739959A5A0A94535152FB (Variable_1_t5176D87E316D748175C0D26DD2EAA638B2827252 * __this, String_t* ___newValue0, const RuntimeMethod* method)
{
	((  void (*) (Variable_1_t5176D87E316D748175C0D26DD2EAA638B2827252 *, String_t*, const RuntimeMethod*))Variable_1_SetCurrentValue_m51979A37993B796692A81337944D8BE2DAAD3BA6_gshared)(__this, ___newValue0, method);
}
// System.Void UserWiseSDK.Surveys.SurveyInviteInitializedEventArgs::.ctor(UserWiseSDK.Surveys.Survey,System.Boolean,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurveyInviteInitializedEventArgs__ctor_m8D98B9C08999E7157C56956285BDDE7368AB9939 (SurveyInviteInitializedEventArgs_tDEB6C9961E8D2629015B58F402585DA112B5B8D0 * __this, Survey_t63EBCA3CF9AB2225CD1CF20B3E7B854C7846832A * ___survey0, bool ___wasInitialized1, String_t* ___responseId2, String_t* ___inviteId3, const RuntimeMethod* method);
// System.Void System.EventHandler`1<UserWiseSDK.Surveys.SurveyInviteInitializedEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m17391176FA563A9E5A747FB7FDD148BEBFF704F2 (EventHandler_1_t7E16AEA66F6C4636B6E10A9A2ADCD1429BE4F555 * __this, RuntimeObject * ___sender0, SurveyInviteInitializedEventArgs_tDEB6C9961E8D2629015B58F402585DA112B5B8D0 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t7E16AEA66F6C4636B6E10A9A2ADCD1429BE4F555 *, RuntimeObject *, SurveyInviteInitializedEventArgs_tDEB6C9961E8D2629015B58F402585DA112B5B8D0 *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// TValue UserWiseSDK.Internal.Extensions.DictionaryExtensionsClass::GetValueOrDefault<System.String,System.String>(System.Collections.Generic.Dictionary`2<TKey,System.Object>,TKey,TValue)
inline String_t* DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisString_t_m650E3E6854ED4FFA1F3A5E002E72DBFC0B7AFD04 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___data0, String_t* ___key1, String_t* ___defaultValue2, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, String_t*, String_t*, const RuntimeMethod*))DictionaryExtensionsClass_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_mF34D323B18F3224F2D8FEA73FB3D4C754B5AB378_gshared)(___data0, ___key1, ___defaultValue2, method);
}
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Void UserWiseSDK.Surveys.SurveysModule::InitializeSurveyInvite(UserWiseSDK.Surveys.Survey,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurveysModule_InitializeSurveyInvite_mB72C9D67E4977534ACA27DC37B5E0893A66CC229 (SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A * __this, Survey_t63EBCA3CF9AB2225CD1CF20B3E7B854C7846832A * ___survey0, String_t* ___responseId1, const RuntimeMethod* method);
// TValue UserWiseSDK.Internal.Extensions.DictionaryExtensionsClass::GetValueOrDefault<System.String,System.Object>(System.Collections.Generic.Dictionary`2<TKey,System.Object>,TKey,TValue)
inline RuntimeObject * DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisRuntimeObject_m3A39ABACAB51C059B4B2C3863AB540D0008EA256 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___data0, String_t* ___key1, RuntimeObject * ___defaultValue2, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, String_t*, RuntimeObject *, const RuntimeMethod*))DictionaryExtensionsClass_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_mF34D323B18F3224F2D8FEA73FB3D4C754B5AB378_gshared)(___data0, ___key1, ___defaultValue2, method);
}
// System.Void UserWiseSDK.Surveys.SurveysModule::OpenSurveyFromResponseId(UserWiseSDK.Surveys.Survey,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurveysModule_OpenSurveyFromResponseId_mD14B0EF8BCC036CCF4AD4C57BE19EB09FD154F5E (SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A * __this, Survey_t63EBCA3CF9AB2225CD1CF20B3E7B854C7846832A * ___survey0, String_t* ___responseId1, const RuntimeMethod* method);
// System.Void UserWiseSDK.Surveys.SurveyResponseIdEventArgs::.ctor(UserWiseSDK.Surveys.Survey,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurveyResponseIdEventArgs__ctor_mFA7EEF8EB6F97A42E8ABE76C2AED6968324A8B63 (SurveyResponseIdEventArgs_t834D0F47C4D59C6297F6A4EE164ED1D27F34ECB0 * __this, Survey_t63EBCA3CF9AB2225CD1CF20B3E7B854C7846832A * ___survey0, String_t* ___responseId1, const RuntimeMethod* method);
// System.Void System.EventHandler`1<UserWiseSDK.Surveys.SurveyResponseIdEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m3A913729344A711379818904A0BD83EA71DC1BFE (EventHandler_1_t1BEB15B2B124055FE88D844DA101A6E2D5F07668 * __this, RuntimeObject * ___sender0, SurveyResponseIdEventArgs_t834D0F47C4D59C6297F6A4EE164ED1D27F34ECB0 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t1BEB15B2B124055FE88D844DA101A6E2D5F07668 *, RuntimeObject *, SurveyResponseIdEventArgs_t834D0F47C4D59C6297F6A4EE164ED1D27F34ECB0 *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UserWiseSDK.Surveys.SurveysModule::LoadWebViewController(UserWiseSDK.Surveys.Survey,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurveysModule_LoadWebViewController_m743EA3ADC5CBCEC49797EBFC6BFCA42DA99AAECD (SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A * __this, Survey_t63EBCA3CF9AB2225CD1CF20B3E7B854C7846832A * ___survey0, String_t* ___surveyUrl1, String_t* ___responseId2, const RuntimeMethod* method);
// System.Void UserWiseSDK.Events.EventsModule::AddGameEventAsActive(UserWiseSDK.Events.GameEvent,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventsModule_AddGameEventAsActive_m88E854EA8F813984957E5A08FEF1C253B0E2B385 (EventsModule_t4DAC0631F19FA41A3CA16E5C6B8F9732A7B43A20 * __this, GameEvent_tF75EAF1479A5119F3188123C4694630955553B53 * ___gameEvent0, bool ___wasScheduled1, const RuntimeMethod* method);
// System.Void UserWiseSDK.Messages.MessagesModule::AddMessageAsActive(UserWiseSDK.Messages.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessagesModule_AddMessageAsActive_mAF116FD7756A6AE1671735CECA01F500D7A7BC87 (MessagesModule_t77B236E65D4003E98ED18F92F6A2FF781F5D5AC8 * __this, Message_t994A7D958E14F464F785BFB6864280005103A91D * ___message0, const RuntimeMethod* method);
// System.Void UserWiseSDK.Offers.OffersModule::AddOfferAsActive(UserWiseSDK.Offers.Offer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OffersModule_AddOfferAsActive_mD7759BC39BF8D960CE53D44609B5BA071B476295 (OffersModule_t6F8C5C3B400904E3CBFB8EC6ACC9D02C8FD81737 * __this, Offer_tF5EB0445F358ACF0E545C2B513B39B63804190A7 * ___offer0, const RuntimeMethod* method);
// System.Void UserWiseSDK.Surveys.SurveysModule::AddSurveyAsActive(UserWiseSDK.Surveys.Survey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurveysModule_AddSurveyAsActive_mF33018DF73BE91B289623448D52433B88DF266FC (SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A * __this, Survey_t63EBCA3CF9AB2225CD1CF20B3E7B854C7846832A * ___survey0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.Object>::GetEnumerator()
inline Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15  Dictionary_2_GetEnumerator_m2081C22E67B979AFF0710DA64B3BFE895BAE1635 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15  (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared)(__this, method);
}
// System.Void UserWiseSDK.Campaigns.Internal.TriggerableCampaign/<>c__DisplayClass35_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass35_1__ctor_mC41B2C6AB3E7383E988DC43F56B39FECC10D9BF6 (U3CU3Ec__DisplayClass35_1_t8B58EB44020D9FBD8BCFECEC7B2DE1DE5D9BF747 * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::get_Current()
inline KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  Enumerator_get_Current_m5D01A6607C2199E7A7B5856E49119C26FE5327BB_inline (Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  (*) (Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15 *, const RuntimeMethod*))Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline)(__this, method);
}
// System.Void System.Predicate`1<UserWiseSDK.Variables.Types.IVariable>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m1CB6EB50499523977C9D42EDBEF45CC9F5BF4707 (Predicate_1_t252A4131FBF10F595F30D77DD5DCC10EAF91F1E1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t252A4131FBF10F595F30D77DD5DCC10EAF91F1E1 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3F41E32C976C3C48B3FC63FBFD3FBBC5B5F23EDD_gshared)(__this, ___object0, ___method1, method);
}
// !0 System.Collections.Generic.List`1<UserWiseSDK.Variables.Types.IVariable>::Find(System.Predicate`1<!0>)
inline RuntimeObject* List_1_Find_m2C28DEE7A09BB3786F7CF2AC537C1CE44D6DF7EF (List_1_t6A199232F00F6677AE80AA4F32F24C6B986CC7E2 * __this, Predicate_1_t252A4131FBF10F595F30D77DD5DCC10EAF91F1E1 * ___match0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_t6A199232F00F6677AE80AA4F32F24C6B986CC7E2 *, Predicate_1_t252A4131FBF10F595F30D77DD5DCC10EAF91F1E1 *, const RuntimeMethod*))List_1_Find_mBE8A91B51D29EC296321E6070FCD76081576B31E_gshared)(__this, ___match0, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Value()
inline RuntimeObject * KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_inline (KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::MoveNext()
inline bool Enumerator_MoveNext_m27DDAE22558733AB59D955136A7EF5AF05B1F4CE (Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15 *, const RuntimeMethod*))Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::Dispose()
inline void Enumerator_Dispose_m7D3C5AB9967DFDFE269DC54DF367D0B21C59E356 (Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15 *, const RuntimeMethod*))Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_inline (KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD2F50D4E28D9995DA6B62C0E1155BB95170307CE (U3CU3Ec_tE93B34597CA2E728710340B7EB2214EB39639A45 * __this, const RuntimeMethod* method);
// System.Boolean UserWiseSDK.Internal.Triggers.TriggerData::CanTriggerNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TriggerData_CanTriggerNow_mAD7021CBB62EA8457C59814693DEBA18ECCA3E17 (TriggerData_t40BC1C042F41DAE8FD2282A4205ECA50429A7EE6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int64>::Add(!0)
inline void List_1_Add_m3AA13B63BAEF6C890A4EAF571DD1E4C9245A3493 (List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4 * __this, int64_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4 *, int64_t, const RuntimeMethod*))List_1_Add_m3AA13B63BAEF6C890A4EAF571DD1E4C9245A3493_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Double>::Add(!0)
inline void List_1_Add_m56E93B74F5254C198272F09C8E4B09483184B929 (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * __this, double ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC *, double, const RuntimeMethod*))List_1_Add_m56E93B74F5254C198272F09C8E4B09483184B929_gshared)(__this, ___item0, method);
}
// System.DateTime System.DateTime::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_Parse_m15F41E956747FC3E7EEBB24E45AA8733C1966989 (String_t* ___s0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.DateTime>::Add(!0)
inline void List_1_Add_m186BDFBE15172FEE311041A38252C8B10444E63B (List_1_t7240E3382CB212F4FEB22D7A3E93EE9152E03CBC * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7240E3382CB212F4FEB22D7A3E93EE9152E03CBC *, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 , const RuntimeMethod*))List_1_Add_m186BDFBE15172FEE311041A38252C8B10444E63B_gshared)(__this, ___item0, method);
}
// UserWiseSDK.Internal.Triggers.TriggerType UserWiseSDK.Internal.Triggers.TriggerData::get_Type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TriggerData_get_Type_mC53165ADE924E5153B1EB68898C33FEE948E1E06_inline (TriggerData_t40BC1C042F41DAE8FD2282A4205ECA50429A7EE6 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.Object> UserWiseSDK.Internal.Triggers.TriggerData::get_Logic()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * TriggerData_get_Logic_mB5278AFADAF2C07F7DEE932374EC4ACBD75E45F4_inline (TriggerData_t40BC1C042F41DAE8FD2282A4205ECA50429A7EE6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
inline void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// TValue UserWiseSDK.Internal.Extensions.DictionaryExtensionsClass::GetValueOrDefault<System.String,System.Collections.Generic.List`1<System.Object>>(System.Collections.Generic.Dictionary`2<TKey,System.Object>,TKey,TValue)
inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisList_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_mF1D55797C8C6B9A6BE3787B18EF18D3082C81177 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___data0, String_t* ___key1, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___defaultValue2, const RuntimeMethod* method)
{
	return ((  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, String_t*, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))DictionaryExtensionsClass_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_mF34D323B18F3224F2D8FEA73FB3D4C754B5AB378_gshared)(___data0, ___key1, ___defaultValue2, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
inline int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.String UserWiseSDK.PlayerAttribute::GetName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PlayerAttribute_GetName_m7EFB255927A35FD6D777C4E861F37303841F2435_inline (PlayerAttribute_tFEE261801264075772E64E9C9823AE73B88747BB * __this, const RuntimeMethod* method);
// System.Boolean UserWiseSDK.Internal.Triggers.TriggerableContentController::IsAttributableLogicalExpressionValid(System.String,System.String,UserWiseSDK.IAttributable,System.Collections.Generic.List`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TriggerableContentController_IsAttributableLogicalExpressionValid_m4213D6FCB46D9BB453945C6187EDBCA45B07C99D (TriggerableContentController_t879B381534ABAAA2D45C76715E084E80D900D57D * __this, String_t* ___dataType0, String_t* ___expressionOperator1, RuntimeObject* ___attributable2, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___values3, const RuntimeMethod* method);
// System.Void UserWiseSDK.Internal.Triggers.TriggerableContentController::TriggerTriggerable(UserWiseSDK.Internal.Triggers.ITriggerable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerableContentController_TriggerTriggerable_m304704A453EC38B3FF77950942E56D6F99945848 (TriggerableContentController_t879B381534ABAAA2D45C76715E084E80D900D57D * __this, RuntimeObject* ___triggerable0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UserWiseSDK.Internal.Triggers.ITriggerable>::Add(!0)
inline void List_1_Add_m6A1C4A27FCE1C8E658902185D1D8713EB33C4562 (List_1_t92B053769F1F29417E25AE8F630FE7F9B7911437 * __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t92B053769F1F29417E25AE8F630FE7F9B7911437 *, RuntimeObject*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233 (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
inline RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Void UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c__DisplayClass7_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_1__ctor_m342EEAB62883C56442615B06A7573417B2C10EBC (U3CU3Ec__DisplayClass7_1_tBC31731EF0C31056D82DBD574B2F05178C1BC5FE * __this, const RuntimeMethod* method);
// System.Void System.Predicate`1<UserWiseSDK.PlayerEventAttribute>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m2CC94284D0661A08DDAE49AFAEEFEF6F0F77F483 (Predicate_1_t6DC00870BCCD3170671403014C65A17A3E69834C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t6DC00870BCCD3170671403014C65A17A3E69834C *, RuntimeObject *, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m2CC94284D0661A08DDAE49AFAEEFEF6F0F77F483_gshared)(__this, ___object0, ___method1, method);
}
// !0 System.Collections.Generic.List`1<UserWiseSDK.PlayerEventAttribute>::Find(System.Predicate`1<!0>)
inline PlayerEventAttribute_t8DCB62015FEE0EAC58B720075BAD7BA8B6A67154  List_1_Find_m8F84724E3B9CF39244F178118AFE40F3C62CBC8F (List_1_tDF5AFDD3A0DE5C7C3DEB594CF5CE6A7F5FE34BD2 * __this, Predicate_1_t6DC00870BCCD3170671403014C65A17A3E69834C * ___match0, const RuntimeMethod* method)
{
	return ((  PlayerEventAttribute_t8DCB62015FEE0EAC58B720075BAD7BA8B6A67154  (*) (List_1_tDF5AFDD3A0DE5C7C3DEB594CF5CE6A7F5FE34BD2 *, Predicate_1_t6DC00870BCCD3170671403014C65A17A3E69834C *, const RuntimeMethod*))List_1_Find_m8F84724E3B9CF39244F178118AFE40F3C62CBC8F_gshared)(__this, ___match0, method);
}
// System.Void System.Nullable`1<UserWiseSDK.PlayerEventAttribute>::.ctor(!0)
inline void Nullable_1__ctor_m162D2EC9E315E003217699D359B316C5CF375941 (Nullable_1_tC4FB4BB8479F72D16C842427383E6E3BE652C9A5 * __this, PlayerEventAttribute_t8DCB62015FEE0EAC58B720075BAD7BA8B6A67154  ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tC4FB4BB8479F72D16C842427383E6E3BE652C9A5 *, PlayerEventAttribute_t8DCB62015FEE0EAC58B720075BAD7BA8B6A67154 , const RuntimeMethod*))Nullable_1__ctor_m162D2EC9E315E003217699D359B316C5CF375941_gshared)(__this, ___value0, method);
}
// System.Boolean System.Nullable`1<UserWiseSDK.PlayerEventAttribute>::get_HasValue()
inline bool Nullable_1_get_HasValue_mC0848B1E8B9FCB262EA335141C667FFCFBBFBCD0_inline (Nullable_1_tC4FB4BB8479F72D16C842427383E6E3BE652C9A5 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tC4FB4BB8479F72D16C842427383E6E3BE652C9A5 *, const RuntimeMethod*))Nullable_1_get_HasValue_mC0848B1E8B9FCB262EA335141C667FFCFBBFBCD0_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
inline bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0 (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
inline void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8 (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.String UserWiseSDK.PlayerEventAttribute::GetName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PlayerEventAttribute_GetName_m6B7B0E4890C15074D5EA65200902F2FF0D22491A_inline (PlayerEventAttribute_t8DCB62015FEE0EAC58B720075BAD7BA8B6A67154 * __this, const RuntimeMethod* method);
// System.Void UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c__DisplayClass8_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_1__ctor_m86E9E67B997870D6CB40286B17660564E7CB0F48 (U3CU3Ec__DisplayClass8_1_t9127E4A745BC257B855FE111D2BE5323F13E0747 * __this, const RuntimeMethod* method);
// System.Void System.Predicate`1<UserWiseSDK.RegionMetadata>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m6AAB73662593F005CC537DA195F5B46CE38A1499 (Predicate_1_tB2799FC3E18B34B2340D143078E9F4D980992FF9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_tB2799FC3E18B34B2340D143078E9F4D980992FF9 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m6AAB73662593F005CC537DA195F5B46CE38A1499_gshared)(__this, ___object0, ___method1, method);
}
// !0 System.Collections.Generic.List`1<UserWiseSDK.RegionMetadata>::Find(System.Predicate`1<!0>)
inline RegionMetadata_tF86DE590B11B13AAD85D1595B383D4D180ECFCAE  List_1_Find_m896D2FC9958E06E63EBA462B0F84DF8FB38C94BC (List_1_tEB7D3C41B15A71A632C4C4CB9B05C477B19E524A * __this, Predicate_1_tB2799FC3E18B34B2340D143078E9F4D980992FF9 * ___match0, const RuntimeMethod* method)
{
	return ((  RegionMetadata_tF86DE590B11B13AAD85D1595B383D4D180ECFCAE  (*) (List_1_tEB7D3C41B15A71A632C4C4CB9B05C477B19E524A *, Predicate_1_tB2799FC3E18B34B2340D143078E9F4D980992FF9 *, const RuntimeMethod*))List_1_Find_m896D2FC9958E06E63EBA462B0F84DF8FB38C94BC_gshared)(__this, ___match0, method);
}
// System.Void System.Nullable`1<UserWiseSDK.RegionMetadata>::.ctor(!0)
inline void Nullable_1__ctor_m3913E4FE07DE0534B318191A3D508DBCF094A1CB (Nullable_1_t0D5CA762E667CF24B1BFBE05DD585E367D814023 * __this, RegionMetadata_tF86DE590B11B13AAD85D1595B383D4D180ECFCAE  ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t0D5CA762E667CF24B1BFBE05DD585E367D814023 *, RegionMetadata_tF86DE590B11B13AAD85D1595B383D4D180ECFCAE , const RuntimeMethod*))Nullable_1__ctor_m3913E4FE07DE0534B318191A3D508DBCF094A1CB_gshared)(__this, ___value0, method);
}
// System.Boolean System.Nullable`1<UserWiseSDK.RegionMetadata>::get_HasValue()
inline bool Nullable_1_get_HasValue_mB4A325AB11A5E20ADCE6DDD6978D49D2CF0DDAD5_inline (Nullable_1_t0D5CA762E667CF24B1BFBE05DD585E367D814023 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t0D5CA762E667CF24B1BFBE05DD585E367D814023 *, const RuntimeMethod*))Nullable_1_get_HasValue_mB4A325AB11A5E20ADCE6DDD6978D49D2CF0DDAD5_gshared_inline)(__this, method);
}
// System.String UserWiseSDK.RegionMetadata::GetName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RegionMetadata_GetName_mBED75A69DD35C55C998043BA18B41CF4415612F9_inline (RegionMetadata_tF86DE590B11B13AAD85D1595B383D4D180ECFCAE * __this, const RuntimeMethod* method);
// System.Void UserWiseSDK.Unity.UWHandlerGameObject::AttachGameObjectToNativeListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UWHandlerGameObject_AttachGameObjectToNativeListener_m5FE802A8CCFCBB2799BEC5F5BFCFBC6BD27295AF (const RuntimeMethod* method);
// UserWiseSDK.UserWise UserWiseSDK.UserWise::get_INSTANCE()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47 * UserWise_get_INSTANCE_m364CD6F590656E79E64CCEBEE41CB6EAE39C0939 (const RuntimeMethod* method);
// UserWiseSDK.Surveys.SurveysModule UserWiseSDK.UserWise::get_SurveysModule()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A * UserWise_get_SurveysModule_m54534AEBE0A8D15A50887902CD79D87582350D2F_inline (UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47 * __this, const RuntimeMethod* method);
// System.Void UserWiseSDK.Surveys.SurveysModule::EmitSurveyEntered(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurveysModule_EmitSurveyEntered_m9F5E4F1427084EC1B2A14455E258F16F02EFF4F4 (SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A * __this, String_t* ___responseId0, const RuntimeMethod* method);
// System.Void UserWiseSDK.Surveys.SurveysModule::EmitSurveyEnterFailed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurveysModule_EmitSurveyEnterFailed_m9D075716B6EF536A2EC19EABEEED2B0BD0AF645F (SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A * __this, String_t* ___responseId0, const RuntimeMethod* method);
// System.Void UserWiseSDK.Surveys.SurveysModule::EmitSurveyClosed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurveysModule_EmitSurveyClosed_m41A8AAAD75A46036BDEAE980FE3C58E21703BACE (SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A * __this, String_t* ___responseId0, const RuntimeMethod* method);
// System.Void UserWiseSDK.Surveys.SurveysModule::EmitSurveyCompleted(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurveysModule_EmitSurveyCompleted_m9E7945EE3701232DDD0D5C497E211011336533EB (SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A * __this, String_t* ___responseId0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void UserWiseSDK.UserWise/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5ABAD22665692BD4F7DB8BC23B5DAE055BD42121 (U3CU3Ec_t30C593BF3D9A31C5EA7C390D973DA18D86183222 * __this, const RuntimeMethod* method);
// System.Void UserWiseSDK.Internal.SessionData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionData__ctor_mD397643AA00B40DD9D004E8826C943D225E27AD6 (SessionData_tA252CE97293037E48AE88E446107D0BBFF599001 * __this, const RuntimeMethod* method);
// System.Void UserWiseSDK.UserWise::.ctor(UserWiseSDK.Internal.SessionData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserWise__ctor_mC1343EF7F26E19681D618223A4E688A8481F667B (UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47 * __this, SessionData_tA252CE97293037E48AE88E446107D0BBFF599001 * ___sessionData0, const RuntimeMethod* method);
// System.Void System.Action`2<System.Boolean,UserWiseSDK.MediaInfo>::Invoke(!0,!1)
inline void Action_2_Invoke_m3138C8470F2E807600E5B1B36D4BD259DEDDB6DD (Action_2_tC9B6AFEE9B1498523B4F9EBDBC90FA84E9EB9393 * __this, bool ___arg10, MediaInfo_tD5FD6440EA9A916214A52B032E95F87043900686 * ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tC9B6AFEE9B1498523B4F9EBDBC90FA84E9EB9393 *, bool, MediaInfo_tD5FD6440EA9A916214A52B032E95F87043900686 *, const RuntimeMethod*))Action_2_Invoke_m05992ABB52C04142026677BB6BA902C49CB197EF_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Void UserWiseSDK.MediaInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaInfo__ctor_m7697FA000B184AC4582787F05D4FE31B2C0F7D83 (MediaInfo_tD5FD6440EA9A916214A52B032E95F87043900686 * __this, const RuntimeMethod* method);
// System.String UserWiseSDK.MediaInfo::get_Url()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MediaInfo_get_Url_m7ED1A79426EB043653C4E2D6A0DA028E374887C7_inline (MediaInfo_tD5FD6440EA9A916214A52B032E95F87043900686 * __this, const RuntimeMethod* method);
// System.Void UserWiseSDK.UserWise::GetRawDataFromUrl(System.String,System.Boolean,System.Action`2<System.Boolean,System.Byte[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserWise_GetRawDataFromUrl_m64BDB1AEB30E9063AA15CCDB36F02CBCA5B98F75 (UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47 * __this, String_t* ___url0, bool ___ignoreCache1, Action_2_t6AE767DB2F0E371CDCC9FC496C39B598B1D20B3E * ___handler2, const RuntimeMethod* method);
// System.Void System.Action`2<System.Boolean,System.Byte[]>::Invoke(!0,!1)
inline void Action_2_Invoke_mA5259ECBF33EBA0C89A44BD230DC3223C41C0EDC (Action_2_t6AE767DB2F0E371CDCC9FC496C39B598B1D20B3E * __this, bool ___arg10, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t6AE767DB2F0E371CDCC9FC496C39B598B1D20B3E *, bool, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*))Action_2_Invoke_m05992ABB52C04142026677BB6BA902C49CB197EF_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Byte[] UserWiseSDK.Internal.API.APIResponse::GetRawBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* APIResponse_GetRawBytes_mE7286F4DC53187F27B47DA06D6BB3C35C5C387F4 (APIResponse_t04D6883FBCAF2557AC604DFC943CD759DE8556C8 * __this, const RuntimeMethod* method);
// System.String System.IO.Path::GetDirectoryName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetDirectoryName_mFF7B47C1E2D3A3FD4B769257808A619D7117BEDE (String_t* ___path0, const RuntimeMethod* method);
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A (String_t* ___path0, const RuntimeMethod* method);
// System.Void System.IO.File::WriteAllBytes(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_WriteAllBytes_m1E88860F73A6A2150FAB97D9BF3F44596F06036F (String_t* ___path0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
inline void Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5 (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, bool ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *, bool, const RuntimeMethod*))Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_gshared)(__this, ___obj0, method);
}
// System.Collections.Generic.List`1<UserWiseSDK.Internal.Triggers.ITriggerable> UserWiseSDK.Internal.Triggers.TriggerableContentController::HandleTriggerAction(UserWiseSDK.PlayerAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t92B053769F1F29417E25AE8F630FE7F9B7911437 * TriggerableContentController_HandleTriggerAction_mDCC9A0457F3CE13C8BC4BF3DEC8545ACBB59BE2D (TriggerableContentController_t879B381534ABAAA2D45C76715E084E80D900D57D * __this, PlayerAttribute_tFEE261801264075772E64E9C9823AE73B88747BB  ___attribute0, const RuntimeMethod* method);
// System.Void System.Action`1<UserWiseSDK.Internal.Triggers.ITriggerable>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA5A36B6CBCF2BFB650C6BFA51ECCFDB0AE976506 (Action_1_t8B9D154E6AC4F2C06ED9B8727E61F426060B7170 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t8B9D154E6AC4F2C06ED9B8727E61F426060B7170 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Collections.Generic.List`1<UserWiseSDK.Internal.Triggers.ITriggerable>::ForEach(System.Action`1<!0>)
inline void List_1_ForEach_m875ED8D875B2C3BFBAF73C83492173CEBF00014D (List_1_t92B053769F1F29417E25AE8F630FE7F9B7911437 * __this, Action_1_t8B9D154E6AC4F2C06ED9B8727E61F426060B7170 * ___action0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t92B053769F1F29417E25AE8F630FE7F9B7911437 *, Action_1_t8B9D154E6AC4F2C06ED9B8727E61F426060B7170 *, const RuntimeMethod*))List_1_ForEach_m1C08725A39127C32D56B9E8A36D813F08D3BFF4D_gshared)(__this, ___action0, method);
}
// System.Void UserWiseSDK.Variables.VariablesModule/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9A808DE8420FEA32F9ACE0D0763927E70A399051 (U3CU3Ec_t5FAF232BE15C02F5CE897D67871FB54B80E8E5B5 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UserWiseSDK.Messages.MessagesModule/<>c__DisplayClass25_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass25_0__ctor_mA99985424C7E85B5FF6F552BAFB0350B7C84FD48 (U3CU3Ec__DisplayClass25_0_t6BF097B330FC68C168CF6F78E6154E937879D9F1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UserWiseSDK.Messages.MessagesModule/<>c__DisplayClass25_0::<SetMessageAsInitialized>b__0(UserWiseSDK.Internal.API.APIResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass25_0_U3CSetMessageAsInitializedU3Eb__0_mD5A01B2499CE491F4861E0CA7FA0E9D306AED6D1 (U3CU3Ec__DisplayClass25_0_t6BF097B330FC68C168CF6F78E6154E937879D9F1 * __this, APIResponse_t04D6883FBCAF2557AC604DFC943CD759DE8556C8 * ___response0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m0C912722C5458101F71073C2356CED75B53591C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageEventArgs_t2F5E385C2CA07A1D68DB2081FBD8E55F59445797_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC64B72E24F04209EF5F1891842A7D197197F6141);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t7A31148CCAB55ABA8B9E4FA24AFED408F0E6DB9D * G_B4_0 = NULL;
	EventHandler_1_t7A31148CCAB55ABA8B9E4FA24AFED408F0E6DB9D * G_B3_0 = NULL;
	{
		APIResponse_t04D6883FBCAF2557AC604DFC943CD759DE8556C8 * L_0 = ___response0;
		NullCheck(L_0);
		bool L_1;
		L_1 = APIResponse_IsError_m63697CBE18F9F784F4CFCD41124EF3C175952D36(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		Message_t994A7D958E14F464F785BFB6864280005103A91D * L_2 = __this->get_message_0();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Message_get_Id_m4B5858F7ACE7E9FF0C7B35E3C7F29A4EEB6ED61E_inline(L_2, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralC64B72E24F04209EF5F1891842A7D197197F6141, L_3, /*hidden argument*/NULL);
		Logger_Log_mD812E8836FE8B23379FCD434AD8A984B2CAA1B19(L_4, (bool)0, /*hidden argument*/NULL);
		return;
	}

IL_0024:
	{
		MessagesModule_t77B236E65D4003E98ED18F92F6A2FF781F5D5AC8 * L_5 = __this->get_U3CU3E4__this_1();
		NullCheck(L_5);
		EventHandler_1_t7A31148CCAB55ABA8B9E4FA24AFED408F0E6DB9D * L_6 = L_5->get_OnMessageAvailable_1();
		EventHandler_1_t7A31148CCAB55ABA8B9E4FA24AFED408F0E6DB9D * L_7 = L_6;
		G_B3_0 = L_7;
		if (L_7)
		{
			G_B4_0 = L_7;
			goto IL_0034;
		}
	}
	{
		return;
	}

IL_0034:
	{
		MessagesModule_t77B236E65D4003E98ED18F92F6A2FF781F5D5AC8 * L_8 = __this->get_U3CU3E4__this_1();
		Message_t994A7D958E14F464F785BFB6864280005103A91D * L_9 = __this->get_message_0();
		MessageEventArgs_t2F5E385C2CA07A1D68DB2081FBD8E55F59445797 * L_10 = (MessageEventArgs_t2F5E385C2CA07A1D68DB2081FBD8E55F59445797 *)il2cpp_codegen_object_new(MessageEventArgs_t2F5E385C2CA07A1D68DB2081FBD8E55F59445797_il2cpp_TypeInfo_var);
		MessageEventArgs__ctor_m253A894A4FDED5E0B8FDEA51231E7F17A595EE00(L_10, L_9, /*hidden argument*/NULL);
		NullCheck(G_B4_0);
		EventHandler_1_Invoke_m0C912722C5458101F71073C2356CED75B53591C9(G_B4_0, L_8, L_10, /*hidden argument*/EventHandler_1_Invoke_m0C912722C5458101F71073C2356CED75B53591C9_RuntimeMethod_var);
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
// System.Void UserWiseSDK.Messages.MessagesModule/<>c__DisplayClass33_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass33_0__ctor_mAE3A3698537EDB1D47675EEAD04F3E306E8DD623 (U3CU3Ec__DisplayClass33_0_t85D2ED8887F3E354C84F7CB192B1906A3A2A5B83 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UserWiseSDK.Messages.MessagesModule/<>c__DisplayClass33_0::<WriteToCache>b__0(UserWiseSDK.Messages.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass33_0_U3CWriteToCacheU3Eb__0_mD3116F2BF0526629EDEAC680C8C0950C2FD23093 (U3CU3Ec__DisplayClass33_0_t85D2ED8887F3E354C84F7CB192B1906A3A2A5B83 * __this, Message_t994A7D958E14F464F785BFB6864280005103A91D * ___activeMessage0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m1BA889A31BFF75A026EE37C812DE8D320EB9573C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictSerializable_1_t0C36D241D1667DB34433BC8786A454390EB7F3E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral734D834219E25F6AC949E3C4A33AA80BB578DC1A);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_tBC3D75391B3A91841136B660BDB52AABDF625D3C * L_0 = __this->get_data_0();
		NullCheck(L_0);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_1;
		L_1 = Dictionary_2_get_Item_m1BA889A31BFF75A026EE37C812DE8D320EB9573C(L_0, _stringLiteral734D834219E25F6AC949E3C4A33AA80BB578DC1A, /*hidden argument*/Dictionary_2_get_Item_m1BA889A31BFF75A026EE37C812DE8D320EB9573C_RuntimeMethod_var);
		Message_t994A7D958E14F464F785BFB6864280005103A91D * L_2 = ___activeMessage0;
		NullCheck(L_2);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_3;
		L_3 = InterfaceFuncInvoker0< Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * >::Invoke(0 /* System.Collections.Generic.Dictionary`2<System.String,System.Object> UserWiseSDK.IDictSerializable`1<UserWiseSDK.Messages.Message>::Serialize() */, IDictSerializable_1_t0C36D241D1667DB34433BC8786A454390EB7F3E9_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_1);
		List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E(L_1, L_3, /*hidden argument*/List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
		return;
	}
}
// System.Void UserWiseSDK.Messages.MessagesModule/<>c__DisplayClass33_0::<WriteToCache>b__1(UserWiseSDK.Messages.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass33_0_U3CWriteToCacheU3Eb__1_m8ADCBDA2FB26BC01893457A4FCBDF24DF3AD28ED (U3CU3Ec__DisplayClass33_0_t85D2ED8887F3E354C84F7CB192B1906A3A2A5B83 * __this, Message_t994A7D958E14F464F785BFB6864280005103A91D * ___upcomingMessage0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m1BA889A31BFF75A026EE37C812DE8D320EB9573C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictSerializable_1_t0C36D241D1667DB34433BC8786A454390EB7F3E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DE41EF8F355D6A9E58DF7425B17C46D79207B11);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_tBC3D75391B3A91841136B660BDB52AABDF625D3C * L_0 = __this->get_data_0();
		NullCheck(L_0);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_1;
		L_1 = Dictionary_2_get_Item_m1BA889A31BFF75A026EE37C812DE8D320EB9573C(L_0, _stringLiteral6DE41EF8F355D6A9E58DF7425B17C46D79207B11, /*hidden argument*/Dictionary_2_get_Item_m1BA889A31BFF75A026EE37C812DE8D320EB9573C_RuntimeMethod_var);
		Message_t994A7D958E14F464F785BFB6864280005103A91D * L_2 = ___upcomingMessage0;
		NullCheck(L_2);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_3;
		L_3 = InterfaceFuncInvoker0< Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * >::Invoke(0 /* System.Collections.Generic.Dictionary`2<System.String,System.Object> UserWiseSDK.IDictSerializable`1<UserWiseSDK.Messages.Message>::Serialize() */, IDictSerializable_1_t0C36D241D1667DB34433BC8786A454390EB7F3E9_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_1);
		List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E(L_1, L_3, /*hidden argument*/List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UserWiseSDK.Offers.OffersModule/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m6D7792430641132F4DF04B53FD24C4B77A3EF11F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t43D16DAD4F56F4F796AB9EB26DC1797E5519B895_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t43D16DAD4F56F4F796AB9EB26DC1797E5519B895 * L_0 = (U3CU3Ec_t43D16DAD4F56F4F796AB9EB26DC1797E5519B895 *)il2cpp_codegen_object_new(U3CU3Ec_t43D16DAD4F56F4F796AB9EB26DC1797E5519B895_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m772BF30A71679D56835D75FCD1338B604D4546F3(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t43D16DAD4F56F4F796AB9EB26DC1797E5519B895_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t43D16DAD4F56F4F796AB9EB26DC1797E5519B895_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UserWiseSDK.Offers.OffersModule/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m772BF30A71679D56835D75FCD1338B604D4546F3 (U3CU3Ec_t43D16DAD4F56F4F796AB9EB26DC1797E5519B895 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UserWiseSDK.Offers.OffersModule/<>c::<UpdateOfferImpressionState>b__34_0(UserWiseSDK.Internal.API.APIResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CUpdateOfferImpressionStateU3Eb__34_0_m1CA4F8B890F1103BA9F4EAD3EBEBA4B73C3663B8 (U3CU3Ec_t43D16DAD4F56F4F796AB9EB26DC1797E5519B895 * __this, APIResponse_t04D6883FBCAF2557AC604DFC943CD759DE8556C8 * ___response0, const RuntimeMethod* method)
{
	{
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
// System.Void UserWiseSDK.Offers.OffersModule/<>c__DisplayClass33_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass33_0__ctor_m220D4012895A5F741C371EE640F4C8169C9D85AF (U3CU3Ec__DisplayClass33_0_t2BFC0CE3A8E7CFC3BAF951E217BB46D3BF0EB5F7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UserWiseSDK.Offers.OffersModule/<>c__DisplayClass33_0::<InitializeOfferImpression>b__0(UserWiseSDK.Internal.API.APIResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass33_0_U3CInitializeOfferImpressionU3Eb__0_mC1CCB7E1438B65C5CB63B64D70F90EE45E9FCE66 (U3CU3Ec__DisplayClass33_0_t2BFC0CE3A8E7CFC3BAF951E217BB46D3BF0EB5F7 * __this, APIResponse_t04D6883FBCAF2557AC604DFC943CD759DE8556C8 * ___response0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisDictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_m82627B9461A9F7E3BD090C37A69A9C392F4CA138_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m41D28F48221F99DB3016C0F5CF4B210291338546_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m39D7C8CE4211C8D2C9E06013F87216811ABEB0CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mF2554C1A499FE332F9781B4BAA50FCDBADDAFCAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictSerializable_1_t97D0EAF4BEB6BB5B32F53623EEF18EB15C605899_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OfferEventArgs_t058E3ED8601ECACF7282CFF140768C5CF6B44170_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OfferImpressionEventArgs_tC118DB83F1F30158A6C86A7AB84901E11677E2C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OfferImpression_t93005F7531AFF65592176D6B1A40B085819AB2EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2BF959D011B7C1F6B935008613645AA99D9A123);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_0 = NULL;
	OfferImpression_t93005F7531AFF65592176D6B1A40B085819AB2EE * V_1 = NULL;
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_2 = NULL;
	EventHandler_1_t7827DEAD0F31A439E5160F227B30EA39AF88FCBA * G_B3_0 = NULL;
	EventHandler_1_t7827DEAD0F31A439E5160F227B30EA39AF88FCBA * G_B2_0 = NULL;
	EventHandler_1_t7827DEAD0F31A439E5160F227B30EA39AF88FCBA * G_B10_0 = NULL;
	EventHandler_1_t7827DEAD0F31A439E5160F227B30EA39AF88FCBA * G_B9_0 = NULL;
	EventHandler_1_tE5C3802BDD10C52FDA59E18CC1D58768C92E0A57 * G_B13_0 = NULL;
	EventHandler_1_tE5C3802BDD10C52FDA59E18CC1D58768C92E0A57 * G_B12_0 = NULL;
	{
		OffersModule_t6F8C5C3B400904E3CBFB8EC6ACC9D02C8FD81737 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		OffersModule_set_IsInitializationActive_mCD6F02B9E79B798028C58309DFAD133DF2D3C922_inline(L_0, (bool)0, /*hidden argument*/NULL);
		APIResponse_t04D6883FBCAF2557AC604DFC943CD759DE8556C8 * L_1 = ___response0;
		NullCheck(L_1);
		bool L_2;
		L_2 = APIResponse_IsError_m63697CBE18F9F784F4CFCD41124EF3C175952D36(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003b;
		}
	}
	{
		OffersModule_t6F8C5C3B400904E3CBFB8EC6ACC9D02C8FD81737 * L_3 = __this->get_U3CU3E4__this_0();
		NullCheck(L_3);
		EventHandler_1_t7827DEAD0F31A439E5160F227B30EA39AF88FCBA * L_4 = L_3->get_OnOfferImpressionInitializationFailed_3();
		EventHandler_1_t7827DEAD0F31A439E5160F227B30EA39AF88FCBA * L_5 = L_4;
		G_B2_0 = L_5;
		if (L_5)
		{
			G_B3_0 = L_5;
			goto IL_0024;
		}
	}
	{
		return;
	}

IL_0024:
	{
		OffersModule_t6F8C5C3B400904E3CBFB8EC6ACC9D02C8FD81737 * L_6 = __this->get_U3CU3E4__this_0();
		Offer_tF5EB0445F358ACF0E545C2B513B39B63804190A7 * L_7 = __this->get_offer_1();
		OfferEventArgs_t058E3ED8601ECACF7282CFF140768C5CF6B44170 * L_8 = (OfferEventArgs_t058E3ED8601ECACF7282CFF140768C5CF6B44170 *)il2cpp_codegen_object_new(OfferEventArgs_t058E3ED8601ECACF7282CFF140768C5CF6B44170_il2cpp_TypeInfo_var);
		OfferEventArgs__ctor_mBD69F9673B043A59AA0255FBE6BBD704D6124F29(L_8, L_7, /*hidden argument*/NULL);
		NullCheck(G_B3_0);
		EventHandler_1_Invoke_mF2554C1A499FE332F9781B4BAA50FCDBADDAFCAC(G_B3_0, L_6, L_8, /*hidden argument*/EventHandler_1_Invoke_mF2554C1A499FE332F9781B4BAA50FCDBADDAFCAC_RuntimeMethod_var);
		return;
	}

IL_003b:
	{
		APIResponse_t04D6883FBCAF2557AC604DFC943CD759DE8556C8 * L_9 = ___response0;
		NullCheck(L_9);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_10;
		L_10 = APIResponse_GetParsedJson_m41C7B08DD0BEA034C9E6A566F7FD8B543237E491(L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		V_1 = (OfferImpression_t93005F7531AFF65592176D6B1A40B085819AB2EE *)NULL;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_11 = V_0;
		if (!L_11)
		{
			goto IL_006d;
		}
	}
	{
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_12 = V_0;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_13 = (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)il2cpp_codegen_object_new(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63(L_13, /*hidden argument*/Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_14;
		L_14 = DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisDictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_m82627B9461A9F7E3BD090C37A69A9C392F4CA138(L_12, _stringLiteralC2BF959D011B7C1F6B935008613645AA99D9A123, L_13, /*hidden argument*/DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisDictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_m82627B9461A9F7E3BD090C37A69A9C392F4CA138_RuntimeMethod_var);
		V_2 = L_14;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = Dictionary_2_get_Count_m41D28F48221F99DB3016C0F5CF4B210291338546(L_15, /*hidden argument*/Dictionary_2_get_Count_m41D28F48221F99DB3016C0F5CF4B210291338546_RuntimeMethod_var);
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_006d;
		}
	}
	{
		OfferImpression_t93005F7531AFF65592176D6B1A40B085819AB2EE * L_17 = (OfferImpression_t93005F7531AFF65592176D6B1A40B085819AB2EE *)il2cpp_codegen_object_new(OfferImpression_t93005F7531AFF65592176D6B1A40B085819AB2EE_il2cpp_TypeInfo_var);
		OfferImpression__ctor_mEBBDDBC603E4872036B5852A7810DFD7F8EA0C52(L_17, /*hidden argument*/NULL);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_18 = V_2;
		NullCheck(L_17);
		OfferImpression_t93005F7531AFF65592176D6B1A40B085819AB2EE * L_19;
		L_19 = InterfaceFuncInvoker1< OfferImpression_t93005F7531AFF65592176D6B1A40B085819AB2EE *, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * >::Invoke(1 /* T UserWiseSDK.IDictSerializable`1<UserWiseSDK.Offers.OfferImpression>::Deserialize(System.Collections.Generic.Dictionary`2<System.String,System.Object>) */, IDictSerializable_1_t97D0EAF4BEB6BB5B32F53623EEF18EB15C605899_il2cpp_TypeInfo_var, L_17, L_18);
		V_1 = L_19;
	}

IL_006d:
	{
		OfferImpression_t93005F7531AFF65592176D6B1A40B085819AB2EE * L_20 = V_1;
		if (L_20)
		{
			goto IL_0097;
		}
	}
	{
		OffersModule_t6F8C5C3B400904E3CBFB8EC6ACC9D02C8FD81737 * L_21 = __this->get_U3CU3E4__this_0();
		NullCheck(L_21);
		EventHandler_1_t7827DEAD0F31A439E5160F227B30EA39AF88FCBA * L_22 = L_21->get_OnOfferImpressionInitializationFailed_3();
		EventHandler_1_t7827DEAD0F31A439E5160F227B30EA39AF88FCBA * L_23 = L_22;
		G_B9_0 = L_23;
		if (L_23)
		{
			G_B10_0 = L_23;
			goto IL_0080;
		}
	}
	{
		return;
	}

IL_0080:
	{
		OffersModule_t6F8C5C3B400904E3CBFB8EC6ACC9D02C8FD81737 * L_24 = __this->get_U3CU3E4__this_0();
		Offer_tF5EB0445F358ACF0E545C2B513B39B63804190A7 * L_25 = __this->get_offer_1();
		OfferEventArgs_t058E3ED8601ECACF7282CFF140768C5CF6B44170 * L_26 = (OfferEventArgs_t058E3ED8601ECACF7282CFF140768C5CF6B44170 *)il2cpp_codegen_object_new(OfferEventArgs_t058E3ED8601ECACF7282CFF140768C5CF6B44170_il2cpp_TypeInfo_var);
		OfferEventArgs__ctor_mBD69F9673B043A59AA0255FBE6BBD704D6124F29(L_26, L_25, /*hidden argument*/NULL);
		NullCheck(G_B10_0);
		EventHandler_1_Invoke_mF2554C1A499FE332F9781B4BAA50FCDBADDAFCAC(G_B10_0, L_24, L_26, /*hidden argument*/EventHandler_1_Invoke_mF2554C1A499FE332F9781B4BAA50FCDBADDAFCAC_RuntimeMethod_var);
		return;
	}

IL_0097:
	{
		OffersModule_t6F8C5C3B400904E3CBFB8EC6ACC9D02C8FD81737 * L_27 = __this->get_U3CU3E4__this_0();
		NullCheck(L_27);
		EventHandler_1_tE5C3802BDD10C52FDA59E18CC1D58768C92E0A57 * L_28 = L_27->get_OnOfferImpressionInitialized_4();
		EventHandler_1_tE5C3802BDD10C52FDA59E18CC1D58768C92E0A57 * L_29 = L_28;
		G_B12_0 = L_29;
		if (L_29)
		{
			G_B13_0 = L_29;
			goto IL_00a7;
		}
	}
	{
		return;
	}

IL_00a7:
	{
		OffersModule_t6F8C5C3B400904E3CBFB8EC6ACC9D02C8FD81737 * L_30 = __this->get_U3CU3E4__this_0();
		OfferImpression_t93005F7531AFF65592176D6B1A40B085819AB2EE * L_31 = V_1;
		OfferImpressionEventArgs_tC118DB83F1F30158A6C86A7AB84901E11677E2C9 * L_32 = (OfferImpressionEventArgs_tC118DB83F1F30158A6C86A7AB84901E11677E2C9 *)il2cpp_codegen_object_new(OfferImpressionEventArgs_tC118DB83F1F30158A6C86A7AB84901E11677E2C9_il2cpp_TypeInfo_var);
		OfferImpressionEventArgs__ctor_m908AAE9D9BFF69AF77B191D1F1F3A9938EFC58F9(L_32, L_31, /*hidden argument*/NULL);
		NullCheck(G_B13_0);
		EventHandler_1_Invoke_m39D7C8CE4211C8D2C9E06013F87216811ABEB0CA(G_B13_0, L_30, L_32, /*hidden argument*/EventHandler_1_Invoke_m39D7C8CE4211C8D2C9E06013F87216811ABEB0CA_RuntimeMethod_var);
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
// System.Void UserWiseSDK.PlayerEvent/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m289BC66F5D477A81875BFEFF245CC154260B8207 (U3CU3Ec__DisplayClass6_0_t35C2E77CF792ED0E19199BDF44B18E8897197F09 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UserWiseSDK.PlayerEvent/<>c__DisplayClass6_0::<UserWiseSDK.IDictSerializable<UserWiseSDK.PlayerEvent>.Serialize>b__0(UserWiseSDK.PlayerEventAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_U3CUserWiseSDK_IDictSerializableU3CUserWiseSDK_PlayerEventU3E_SerializeU3Eb__0_m7FF27485B8D0F2472907DB641E4134B88D5FEBC2 (U3CU3Ec__DisplayClass6_0_t35C2E77CF792ED0E19199BDF44B18E8897197F09 * __this, PlayerEventAttribute_t8DCB62015FEE0EAC58B720075BAD7BA8B6A67154  ___attribute0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m4C8CE184D497D4EA29D3963CCAC07D7D995A847A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerEventAttribute_t8DCB62015FEE0EAC58B720075BAD7BA8B6A67154_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t3CAEFF22F70FA8270239B1324BE3AABD8B5BD0C0 * L_0 = __this->get_serializedAttributes_0();
		PlayerEventAttribute_t8DCB62015FEE0EAC58B720075BAD7BA8B6A67154  L_1 = ___attribute0;
		PlayerEventAttribute_t8DCB62015FEE0EAC58B720075BAD7BA8B6A67154  L_2 = L_1;
		RuntimeObject * L_3 = Box(PlayerEventAttribute_t8DCB62015FEE0EAC58B720075BAD7BA8B6A67154_il2cpp_TypeInfo_var, &L_2);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_4;
		L_4 = PlayerEventAttribute_UserWiseSDK_IDictSerializableU3CUserWiseSDK_PlayerEventAttributeU3E_Serialize_m86AE703E4EFBA7E08F467EEC2AE7EF0E14C65C7A((PlayerEventAttribute_t8DCB62015FEE0EAC58B720075BAD7BA8B6A67154 *)UnBox(L_3, PlayerEventAttribute_t8DCB62015FEE0EAC58B720075BAD7BA8B6A67154_il2cpp_TypeInfo_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		List_1_Add_m4C8CE184D497D4EA29D3963CCAC07D7D995A847A(L_0, L_4, /*hidden argument*/List_1_Add_m4C8CE184D497D4EA29D3963CCAC07D7D995A847A_RuntimeMethod_var);
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
// System.Void UserWiseSDK.Region/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_mBFB2BEB82933A4A3B469F3D934B4C916F3A2D807 (U3CU3Ec__DisplayClass6_0_tD07C02F88A629829CA14D23ADD791EFC038D0A81 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UserWiseSDK.Region/<>c__DisplayClass6_0::<UserWiseSDK.IDictSerializable<UserWiseSDK.Region>.Serialize>b__0(UserWiseSDK.RegionMetadata)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_U3CUserWiseSDK_IDictSerializableU3CUserWiseSDK_RegionU3E_SerializeU3Eb__0_m3E79FFB20BE176987A37AC0D599D28013C0D2D47 (U3CU3Ec__DisplayClass6_0_tD07C02F88A629829CA14D23ADD791EFC038D0A81 * __this, RegionMetadata_tF86DE590B11B13AAD85D1595B383D4D180ECFCAE  ___metadatum0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m4C8CE184D497D4EA29D3963CCAC07D7D995A847A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegionMetadata_tF86DE590B11B13AAD85D1595B383D4D180ECFCAE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t3CAEFF22F70FA8270239B1324BE3AABD8B5BD0C0 * L_0 = __this->get_serializedMetadata_0();
		RegionMetadata_tF86DE590B11B13AAD85D1595B383D4D180ECFCAE  L_1 = ___metadatum0;
		RegionMetadata_tF86DE590B11B13AAD85D1595B383D4D180ECFCAE  L_2 = L_1;
		RuntimeObject * L_3 = Box(RegionMetadata_tF86DE590B11B13AAD85D1595B383D4D180ECFCAE_il2cpp_TypeInfo_var, &L_2);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_4;
		L_4 = RegionMetadata_UserWiseSDK_IDictSerializableU3CUserWiseSDK_RegionMetadataU3E_Serialize_m6309648853CD68B4A8CED0A9DDD7B6F3DB7B5738((RegionMetadata_tF86DE590B11B13AAD85D1595B383D4D180ECFCAE *)UnBox(L_3, RegionMetadata_tF86DE590B11B13AAD85D1595B383D4D180ECFCAE_il2cpp_TypeInfo_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		List_1_Add_m4C8CE184D497D4EA29D3963CCAC07D7D995A847A(L_0, L_4, /*hidden argument*/List_1_Add_m4C8CE184D497D4EA29D3963CCAC07D7D995A847A_RuntimeMethod_var);
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
// System.Void UserWiseSDK.Internal.Scheduled.SchedulableContentController/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m3BC3D825953F879158C6C4B92BBCB8E8F66B93A1 (U3CU3Ec__DisplayClass7_0_tA8C9B8C22D85B3D1346E1F9891EDA1AD5D61DCBE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UserWiseSDK.Internal.Scheduled.SchedulableContentController/<>c__DisplayClass7_0::<AddUpcomingSchedulable>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0_U3CAddUpcomingSchedulableU3Eb__0_mCC0B445D658A822E94751C0A7E61F98A69E1F10E (U3CU3Ec__DisplayClass7_0_tA8C9B8C22D85B3D1346E1F9891EDA1AD5D61DCBE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISchedulable_t0F46D447C9047499E88CF10E8CC603C68644FF01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_schedulable_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void UserWiseSDK.Internal.Scheduled.ISchedulable::StartTrigger() */, ISchedulable_t0F46D447C9047499E88CF10E8CC603C68644FF01_il2cpp_TypeInfo_var, L_0);
		SchedulableContentController_tF564CB4B9771BDD8B86048FDEFA58468DFCAA995 * L_1 = __this->get_U3CU3E4__this_1();
		RuntimeObject* L_2 = __this->get_schedulable_0();
		NullCheck(L_1);
		SchedulableContentController_RemoveUpcomingSchedulable_m8793C49F98F921416719BF29441D80F79DE0644E(L_1, L_2, /*hidden argument*/NULL);
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
// System.Void UserWiseSDK.Internal.Scheduled.SchedulableContentController/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_mB366471679A695B438109A0EBC3932FE5D56C926 (U3CU3Ec__DisplayClass9_0_tB70C1EF881D32041E6E9B57A4D778A93FA207FDF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UserWiseSDK.Internal.Scheduled.SchedulableContentController/<>c__DisplayClass9_0::<AddEndingSchedulable>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0_U3CAddEndingSchedulableU3Eb__0_mB08CBF6AC9F7C8048D88BEF80B4CD81E19EE800A (U3CU3Ec__DisplayClass9_0_tB70C1EF881D32041E6E9B57A4D778A93FA207FDF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISchedulable_t0F46D447C9047499E88CF10E8CC603C68644FF01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_schedulable_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(4 /* System.Void UserWiseSDK.Internal.Scheduled.ISchedulable::EndTrigger() */, ISchedulable_t0F46D447C9047499E88CF10E8CC603C68644FF01_il2cpp_TypeInfo_var, L_0);
		SchedulableContentController_tF564CB4B9771BDD8B86048FDEFA58468DFCAA995 * L_1 = __this->get_U3CU3E4__this_1();
		RuntimeObject* L_2 = __this->get_schedulable_0();
		NullCheck(L_1);
		SchedulableContentController_RemoveEndingSchedulable_mA6B0C091AD334F2BC315125A8F95A8FFF43664B8(L_1, L_2, /*hidden argument*/NULL);
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
// System.Void UserWiseSDK.Internal.Scheduled.SchedulableContentController/<GenerateEnumerator>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGenerateEnumeratorU3Ed__11__ctor_m5A92D95D2B752BC0C0387361496EA51F7C8BE307 (U3CGenerateEnumeratorU3Ed__11_t34C1BB0F622A0EBED3287CDF04F1739C2CD798DA * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UserWiseSDK.Internal.Scheduled.SchedulableContentController/<GenerateEnumerator>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGenerateEnumeratorU3Ed__11_System_IDisposable_Dispose_m7233DFC08AD739FACEEED0CCF30F6C900DFF0597 (U3CGenerateEnumeratorU3Ed__11_t34C1BB0F622A0EBED3287CDF04F1739C2CD798DA * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UserWiseSDK.Internal.Scheduled.SchedulableContentController/<GenerateEnumerator>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGenerateEnumeratorU3Ed__11_MoveNext_m61A478BFC0E1C018B3491829B5E5D73AA4F49EC4 (U3CGenerateEnumeratorU3Ed__11_t34C1BB0F622A0EBED3287CDF04F1739C2CD798DA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * L_3 = __this->get_address_of_timeSpan_2();
		double L_4;
		L_4 = TimeSpan_get_TotalSeconds_m28CDC7B9ADFEAFF912CC9B66984090CFE60B9AA4((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)L_3, /*hidden argument*/NULL);
		WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * L_5 = (WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 *)il2cpp_codegen_object_new(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40_il2cpp_TypeInfo_var);
		WaitForSecondsRealtime__ctor_m7A69DE38F96121145BE8108B5AA62C789059F225(L_5, ((float)((float)L_4)), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0037:
	{
		__this->set_U3CU3E1__state_0((-1));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = __this->get_callback_3();
		NullCheck(L_6);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_6, /*hidden argument*/NULL);
		return (bool)0;
	}
}
// System.Object UserWiseSDK.Internal.Scheduled.SchedulableContentController/<GenerateEnumerator>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGenerateEnumeratorU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8A56EC7F0199B17BD92B118BF5875F6B853A0730 (U3CGenerateEnumeratorU3Ed__11_t34C1BB0F622A0EBED3287CDF04F1739C2CD798DA * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UserWiseSDK.Internal.Scheduled.SchedulableContentController/<GenerateEnumerator>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGenerateEnumeratorU3Ed__11_System_Collections_IEnumerator_Reset_m63417FA8996EA6F0DA018D1FCF4E20FA14FDAD54 (U3CGenerateEnumeratorU3Ed__11_t34C1BB0F622A0EBED3287CDF04F1739C2CD798DA * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGenerateEnumeratorU3Ed__11_System_Collections_IEnumerator_Reset_m63417FA8996EA6F0DA018D1FCF4E20FA14FDAD54_RuntimeMethod_var)));
	}
}
// System.Object UserWiseSDK.Internal.Scheduled.SchedulableContentController/<GenerateEnumerator>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGenerateEnumeratorU3Ed__11_System_Collections_IEnumerator_get_Current_m128C5FB2F25C3E58A094DF660B403EB9C8E9BC29 (U3CGenerateEnumeratorU3Ed__11_t34C1BB0F622A0EBED3287CDF04F1739C2CD798DA * __this, const RuntimeMethod* method)
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
// System.Void UserWiseSDK.Variables.Types.StringVariable/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_mDBB6A1F10A368F807558A3D367985289F6B5FCD6 (U3CU3Ec__DisplayClass1_0_t3B7E60D8AB61E67E26DC21327E12026D249099C7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UserWiseSDK.Variables.Types.StringVariable/<>c__DisplayClass1_0::<UpdateValueFromAPI>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0_U3CUpdateValueFromAPIU3Eb__0_m6AB2E49C424FD80E7D962A81FF663FDD56606447 (U3CU3Ec__DisplayClass1_0_t3B7E60D8AB61E67E26DC21327E12026D249099C7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Variable_1_SetCurrentValue_mD343EA3FC5C7490CB34739959A5A0A94535152FB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringVariable_t5D1782F60CD7D6C7FE378A53EED1F99D47EF2BE5 * L_0 = __this->get_U3CU3E4__this_0();
		RuntimeObject * L_1 = __this->get_newValue_1();
		NullCheck(L_0);
		Variable_1_SetCurrentValue_mD343EA3FC5C7490CB34739959A5A0A94535152FB(L_0, ((String_t*)CastclassSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/Variable_1_SetCurrentValue_mD343EA3FC5C7490CB34739959A5A0A94535152FB_RuntimeMethod_var);
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
// System.Void UserWiseSDK.Surveys.SurveysModule/<>c__DisplayClass45_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass45_0__ctor_m3293DD777444443C7A0A6592A2D1BA9D773421D7 (U3CU3Ec__DisplayClass45_0_tE0D83E2E7B92042CA32F0F7DCDB563071B846225 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UserWiseSDK.Surveys.SurveysModule/<>c__DisplayClass45_0::<InitializeSurveyInvite>b__0(UserWiseSDK.Internal.API.APIResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass45_0_U3CInitializeSurveyInviteU3Eb__0_m999F87E07A1067BE067174DA08C314277FABF236 (U3CU3Ec__DisplayClass45_0_tE0D83E2E7B92042CA32F0F7DCDB563071B846225 * __this, APIResponse_t04D6883FBCAF2557AC604DFC943CD759DE8556C8 * ___response0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisString_t_m650E3E6854ED4FFA1F3A5E002E72DBFC0B7AFD04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m17391176FA563A9E5A747FB7FDD148BEBFF704F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SurveyInviteInitializedEventArgs_tDEB6C9961E8D2629015B58F402585DA112B5B8D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E4A8C9408E7D1E41EAF79C6A17D5B0971EBD7F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	EventHandler_1_t7E16AEA66F6C4636B6E10A9A2ADCD1429BE4F555 * G_B3_0 = NULL;
	EventHandler_1_t7E16AEA66F6C4636B6E10A9A2ADCD1429BE4F555 * G_B2_0 = NULL;
	EventHandler_1_t7E16AEA66F6C4636B6E10A9A2ADCD1429BE4F555 * G_B7_0 = NULL;
	EventHandler_1_t7E16AEA66F6C4636B6E10A9A2ADCD1429BE4F555 * G_B6_0 = NULL;
	{
		APIResponse_t04D6883FBCAF2557AC604DFC943CD759DE8556C8 * L_0 = ___response0;
		NullCheck(L_0);
		bool L_1;
		L_1 = APIResponse_IsError_m63697CBE18F9F784F4CFCD41124EF3C175952D36(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A * L_2 = __this->get_U3CU3E4__this_0();
		NullCheck(L_2);
		EventHandler_1_t7E16AEA66F6C4636B6E10A9A2ADCD1429BE4F555 * L_3 = L_2->get_OnSurveyInviteInitialized_3();
		EventHandler_1_t7E16AEA66F6C4636B6E10A9A2ADCD1429BE4F555 * L_4 = L_3;
		G_B2_0 = L_4;
		if (L_4)
		{
			G_B3_0 = L_4;
			goto IL_0019;
		}
	}
	{
		goto IL_0032;
	}

IL_0019:
	{
		SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A * L_5 = __this->get_U3CU3E4__this_0();
		Survey_t63EBCA3CF9AB2225CD1CF20B3E7B854C7846832A * L_6 = __this->get_survey_1();
		SurveyInviteInitializedEventArgs_tDEB6C9961E8D2629015B58F402585DA112B5B8D0 * L_7 = (SurveyInviteInitializedEventArgs_tDEB6C9961E8D2629015B58F402585DA112B5B8D0 *)il2cpp_codegen_object_new(SurveyInviteInitializedEventArgs_tDEB6C9961E8D2629015B58F402585DA112B5B8D0_il2cpp_TypeInfo_var);
		SurveyInviteInitializedEventArgs__ctor_m8D98B9C08999E7157C56956285BDDE7368AB9939(L_7, L_6, (bool)0, (String_t*)NULL, (String_t*)NULL, /*hidden argument*/NULL);
		NullCheck(G_B3_0);
		EventHandler_1_Invoke_m17391176FA563A9E5A747FB7FDD148BEBFF704F2(G_B3_0, L_5, L_7, /*hidden argument*/EventHandler_1_Invoke_m17391176FA563A9E5A747FB7FDD148BEBFF704F2_RuntimeMethod_var);
	}

IL_0032:
	{
		APIResponse_t04D6883FBCAF2557AC604DFC943CD759DE8556C8 * L_8 = ___response0;
		NullCheck(L_8);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_9;
		L_9 = APIResponse_GetParsedJson_m41C7B08DD0BEA034C9E6A566F7FD8B543237E491(L_8, /*hidden argument*/NULL);
		String_t* L_10;
		L_10 = DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisString_t_m650E3E6854ED4FFA1F3A5E002E72DBFC0B7AFD04(L_9, _stringLiteral3E4A8C9408E7D1E41EAF79C6A17D5B0971EBD7F6, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisString_t_m650E3E6854ED4FFA1F3A5E002E72DBFC0B7AFD04_RuntimeMethod_var);
		V_0 = L_10;
		String_t* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_007a;
		}
	}
	{
		SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A * L_13 = __this->get_U3CU3E4__this_0();
		NullCheck(L_13);
		EventHandler_1_t7E16AEA66F6C4636B6E10A9A2ADCD1429BE4F555 * L_14 = L_13->get_OnSurveyInviteInitialized_3();
		EventHandler_1_t7E16AEA66F6C4636B6E10A9A2ADCD1429BE4F555 * L_15 = L_14;
		G_B6_0 = L_15;
		if (L_15)
		{
			G_B7_0 = L_15;
			goto IL_0061;
		}
	}
	{
		goto IL_007a;
	}

IL_0061:
	{
		SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A * L_16 = __this->get_U3CU3E4__this_0();
		Survey_t63EBCA3CF9AB2225CD1CF20B3E7B854C7846832A * L_17 = __this->get_survey_1();
		SurveyInviteInitializedEventArgs_tDEB6C9961E8D2629015B58F402585DA112B5B8D0 * L_18 = (SurveyInviteInitializedEventArgs_tDEB6C9961E8D2629015B58F402585DA112B5B8D0 *)il2cpp_codegen_object_new(SurveyInviteInitializedEventArgs_tDEB6C9961E8D2629015B58F402585DA112B5B8D0_il2cpp_TypeInfo_var);
		SurveyInviteInitializedEventArgs__ctor_m8D98B9C08999E7157C56956285BDDE7368AB9939(L_18, L_17, (bool)0, (String_t*)NULL, (String_t*)NULL, /*hidden argument*/NULL);
		NullCheck(G_B7_0);
		EventHandler_1_Invoke_m17391176FA563A9E5A747FB7FDD148BEBFF704F2(G_B7_0, L_16, L_18, /*hidden argument*/EventHandler_1_Invoke_m17391176FA563A9E5A747FB7FDD148BEBFF704F2_RuntimeMethod_var);
	}

IL_007a:
	{
		SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A * L_19 = __this->get_U3CU3E4__this_0();
		Survey_t63EBCA3CF9AB2225CD1CF20B3E7B854C7846832A * L_20 = __this->get_survey_1();
		String_t* L_21 = V_0;
		NullCheck(L_19);
		SurveysModule_InitializeSurveyInvite_mB72C9D67E4977534ACA27DC37B5E0893A66CC229(L_19, L_20, L_21, /*hidden argument*/NULL);
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
// System.Void UserWiseSDK.Surveys.SurveysModule/<>c__DisplayClass46_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass46_0__ctor_m3631B268F036744AE724A587F358C8E0A11B17F1 (U3CU3Ec__DisplayClass46_0_t855782F0F5F68CBF9C9BB773F47B63ED0A87F8D0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UserWiseSDK.Surveys.SurveysModule/<>c__DisplayClass46_0::<InitializeSurveyInvite>b__0(UserWiseSDK.Internal.API.APIResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass46_0_U3CInitializeSurveyInviteU3Eb__0_m473D6BC164E81887E157DD1897D7764581FB6D42 (U3CU3Ec__DisplayClass46_0_t855782F0F5F68CBF9C9BB773F47B63ED0A87F8D0 * __this, APIResponse_t04D6883FBCAF2557AC604DFC943CD759DE8556C8 * ___response0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisRuntimeObject_m3A39ABACAB51C059B4B2C3863AB540D0008EA256_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m17391176FA563A9E5A747FB7FDD148BEBFF704F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SurveyInviteInitializedEventArgs_tDEB6C9961E8D2629015B58F402585DA112B5B8D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D5AF3EDA16DFA5320D5D7F1531831A947B07025);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	EventHandler_1_t7E16AEA66F6C4636B6E10A9A2ADCD1429BE4F555 * G_B3_0 = NULL;
	EventHandler_1_t7E16AEA66F6C4636B6E10A9A2ADCD1429BE4F555 * G_B2_0 = NULL;
	EventHandler_1_t7E16AEA66F6C4636B6E10A9A2ADCD1429BE4F555 * G_B7_0 = NULL;
	EventHandler_1_t7E16AEA66F6C4636B6E10A9A2ADCD1429BE4F555 * G_B6_0 = NULL;
	EventHandler_1_t7E16AEA66F6C4636B6E10A9A2ADCD1429BE4F555 * G_B10_0 = NULL;
	EventHandler_1_t7E16AEA66F6C4636B6E10A9A2ADCD1429BE4F555 * G_B9_0 = NULL;
	{
		APIResponse_t04D6883FBCAF2557AC604DFC943CD759DE8556C8 * L_0 = ___response0;
		NullCheck(L_0);
		bool L_1;
		L_1 = APIResponse_IsError_m63697CBE18F9F784F4CFCD41124EF3C175952D36(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A * L_2 = __this->get_U3CU3E4__this_0();
		NullCheck(L_2);
		EventHandler_1_t7E16AEA66F6C4636B6E10A9A2ADCD1429BE4F555 * L_3 = L_2->get_OnSurveyInviteInitialized_3();
		EventHandler_1_t7E16AEA66F6C4636B6E10A9A2ADCD1429BE4F555 * L_4 = L_3;
		G_B2_0 = L_4;
		if (L_4)
		{
			G_B3_0 = L_4;
			goto IL_0018;
		}
	}
	{
		return;
	}

IL_0018:
	{
		SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A * L_5 = __this->get_U3CU3E4__this_0();
		Survey_t63EBCA3CF9AB2225CD1CF20B3E7B854C7846832A * L_6 = __this->get_survey_1();
		SurveyInviteInitializedEventArgs_tDEB6C9961E8D2629015B58F402585DA112B5B8D0 * L_7 = (SurveyInviteInitializedEventArgs_tDEB6C9961E8D2629015B58F402585DA112B5B8D0 *)il2cpp_codegen_object_new(SurveyInviteInitializedEventArgs_tDEB6C9961E8D2629015B58F402585DA112B5B8D0_il2cpp_TypeInfo_var);
		SurveyInviteInitializedEventArgs__ctor_m8D98B9C08999E7157C56956285BDDE7368AB9939(L_7, L_6, (bool)0, (String_t*)NULL, (String_t*)NULL, /*hidden argument*/NULL);
		NullCheck(G_B3_0);
		EventHandler_1_Invoke_m17391176FA563A9E5A747FB7FDD148BEBFF704F2(G_B3_0, L_5, L_7, /*hidden argument*/EventHandler_1_Invoke_m17391176FA563A9E5A747FB7FDD148BEBFF704F2_RuntimeMethod_var);
		return;
	}

IL_0032:
	{
		APIResponse_t04D6883FBCAF2557AC604DFC943CD759DE8556C8 * L_8 = ___response0;
		NullCheck(L_8);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_9;
		L_9 = APIResponse_GetParsedJson_m41C7B08DD0BEA034C9E6A566F7FD8B543237E491(L_8, /*hidden argument*/NULL);
		RuntimeObject * L_10;
		L_10 = DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisRuntimeObject_m3A39ABACAB51C059B4B2C3863AB540D0008EA256(L_9, _stringLiteral7D5AF3EDA16DFA5320D5D7F1531831A947B07025, NULL, /*hidden argument*/DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisRuntimeObject_m3A39ABACAB51C059B4B2C3863AB540D0008EA256_RuntimeMethod_var);
		V_0 = L_10;
		RuntimeObject * L_11 = V_0;
		if (L_11)
		{
			goto IL_0071;
		}
	}
	{
		SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A * L_12 = __this->get_U3CU3E4__this_0();
		NullCheck(L_12);
		EventHandler_1_t7E16AEA66F6C4636B6E10A9A2ADCD1429BE4F555 * L_13 = L_12->get_OnSurveyInviteInitialized_3();
		EventHandler_1_t7E16AEA66F6C4636B6E10A9A2ADCD1429BE4F555 * L_14 = L_13;
		G_B6_0 = L_14;
		if (L_14)
		{
			G_B7_0 = L_14;
			goto IL_0057;
		}
	}
	{
		return;
	}

IL_0057:
	{
		SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A * L_15 = __this->get_U3CU3E4__this_0();
		Survey_t63EBCA3CF9AB2225CD1CF20B3E7B854C7846832A * L_16 = __this->get_survey_1();
		SurveyInviteInitializedEventArgs_tDEB6C9961E8D2629015B58F402585DA112B5B8D0 * L_17 = (SurveyInviteInitializedEventArgs_tDEB6C9961E8D2629015B58F402585DA112B5B8D0 *)il2cpp_codegen_object_new(SurveyInviteInitializedEventArgs_tDEB6C9961E8D2629015B58F402585DA112B5B8D0_il2cpp_TypeInfo_var);
		SurveyInviteInitializedEventArgs__ctor_m8D98B9C08999E7157C56956285BDDE7368AB9939(L_17, L_16, (bool)0, (String_t*)NULL, (String_t*)NULL, /*hidden argument*/NULL);
		NullCheck(G_B7_0);
		EventHandler_1_Invoke_m17391176FA563A9E5A747FB7FDD148BEBFF704F2(G_B7_0, L_15, L_17, /*hidden argument*/EventHandler_1_Invoke_m17391176FA563A9E5A747FB7FDD148BEBFF704F2_RuntimeMethod_var);
		return;
	}

IL_0071:
	{
		SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A * L_18 = __this->get_U3CU3E4__this_0();
		NullCheck(L_18);
		EventHandler_1_t7E16AEA66F6C4636B6E10A9A2ADCD1429BE4F555 * L_19 = L_18->get_OnSurveyInviteInitialized_3();
		EventHandler_1_t7E16AEA66F6C4636B6E10A9A2ADCD1429BE4F555 * L_20 = L_19;
		G_B9_0 = L_20;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0081;
		}
	}
	{
		return;
	}

IL_0081:
	{
		SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A * L_21 = __this->get_U3CU3E4__this_0();
		Survey_t63EBCA3CF9AB2225CD1CF20B3E7B854C7846832A * L_22 = __this->get_survey_1();
		String_t* L_23 = __this->get_responseId_2();
		RuntimeObject * L_24 = V_0;
		SurveyInviteInitializedEventArgs_tDEB6C9961E8D2629015B58F402585DA112B5B8D0 * L_25 = (SurveyInviteInitializedEventArgs_tDEB6C9961E8D2629015B58F402585DA112B5B8D0 *)il2cpp_codegen_object_new(SurveyInviteInitializedEventArgs_tDEB6C9961E8D2629015B58F402585DA112B5B8D0_il2cpp_TypeInfo_var);
		SurveyInviteInitializedEventArgs__ctor_m8D98B9C08999E7157C56956285BDDE7368AB9939(L_25, L_22, (bool)1, L_23, ((String_t*)CastclassSealed((RuntimeObject*)L_24, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		NullCheck(G_B10_0);
		EventHandler_1_Invoke_m17391176FA563A9E5A747FB7FDD148BEBFF704F2(G_B10_0, L_21, L_25, /*hidden argument*/EventHandler_1_Invoke_m17391176FA563A9E5A747FB7FDD148BEBFF704F2_RuntimeMethod_var);
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
// System.Void UserWiseSDK.Surveys.SurveysModule/<>c__DisplayClass47_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass47_0__ctor_m11D79DD62613ACBEBC8E219286AA785621FADBCD (U3CU3Ec__DisplayClass47_0_t2A6AC13E2429211AD116ED1F6632EAE25A407BCB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UserWiseSDK.Surveys.SurveysModule/<>c__DisplayClass47_0::<SetSurveyInviteResponse>b__0(UserWiseSDK.Internal.API.APIResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass47_0_U3CSetSurveyInviteResponseU3Eb__0_m2DAA6A4FBD4A4972C07DE96E5BA9B80AB9DCE61D (U3CU3Ec__DisplayClass47_0_t2A6AC13E2429211AD116ED1F6632EAE25A407BCB * __this, APIResponse_t04D6883FBCAF2557AC604DFC943CD759DE8556C8 * ___response0, const RuntimeMethod* method)
{
	{
		APIResponse_t04D6883FBCAF2557AC604DFC943CD759DE8556C8 * L_0 = ___response0;
		NullCheck(L_0);
		bool L_1;
		L_1 = APIResponse_IsError_m63697CBE18F9F784F4CFCD41124EF3C175952D36(L_0, /*hidden argument*/NULL);
		bool L_2 = __this->get_wasAccepted_0();
		if (!((int32_t)((int32_t)((((int32_t)L_1) == ((int32_t)0))? 1 : 0)&(int32_t)L_2)))
		{
			goto IL_0029;
		}
	}
	{
		SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A * L_3 = __this->get_U3CU3E4__this_1();
		Survey_t63EBCA3CF9AB2225CD1CF20B3E7B854C7846832A * L_4 = __this->get_survey_2();
		String_t* L_5 = __this->get_responseId_3();
		NullCheck(L_3);
		SurveysModule_OpenSurveyFromResponseId_mD14B0EF8BCC036CCF4AD4C57BE19EB09FD154F5E(L_3, L_4, L_5, /*hidden argument*/NULL);
	}

IL_0029:
	{
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
// System.Void UserWiseSDK.Surveys.SurveysModule/<>c__DisplayClass48_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass48_0__ctor_m48444AF388A98AF34DA8FA16B47F0558E30D5C78 (U3CU3Ec__DisplayClass48_0_tF729482103EAE6A557BB049FE81D346236E4582B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UserWiseSDK.Surveys.SurveysModule/<>c__DisplayClass48_0::<OpenSurveyFromResponseId>b__0(UserWiseSDK.Internal.API.APIResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass48_0_U3COpenSurveyFromResponseIdU3Eb__0_m07EF269E9B061A3A2F65771B2D2DE80F8BDA4573 (U3CU3Ec__DisplayClass48_0_tF729482103EAE6A557BB049FE81D346236E4582B * __this, APIResponse_t04D6883FBCAF2557AC604DFC943CD759DE8556C8 * ___response0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisString_t_m650E3E6854ED4FFA1F3A5E002E72DBFC0B7AFD04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m3A913729344A711379818904A0BD83EA71DC1BFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SurveyResponseIdEventArgs_t834D0F47C4D59C6297F6A4EE164ED1D27F34ECB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral742BB80CE36C1930E5C1022A988EF1BAB5512E0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA140C1F41F25B028A946446019BD278916B2C3B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		APIResponse_t04D6883FBCAF2557AC604DFC943CD759DE8556C8 * L_0 = ___response0;
		NullCheck(L_0);
		bool L_1;
		L_1 = APIResponse_IsError_m63697CBE18F9F784F4CFCD41124EF3C175952D36(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A * L_2 = __this->get_U3CU3E4__this_0();
		NullCheck(L_2);
		EventHandler_1_t1BEB15B2B124055FE88D844DA101A6E2D5F07668 * L_3 = L_2->get_OnSurveyEnterFailed_5();
		SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A * L_4 = __this->get_U3CU3E4__this_0();
		Survey_t63EBCA3CF9AB2225CD1CF20B3E7B854C7846832A * L_5 = __this->get_survey_1();
		String_t* L_6 = __this->get_responseId_2();
		SurveyResponseIdEventArgs_t834D0F47C4D59C6297F6A4EE164ED1D27F34ECB0 * L_7 = (SurveyResponseIdEventArgs_t834D0F47C4D59C6297F6A4EE164ED1D27F34ECB0 *)il2cpp_codegen_object_new(SurveyResponseIdEventArgs_t834D0F47C4D59C6297F6A4EE164ED1D27F34ECB0_il2cpp_TypeInfo_var);
		SurveyResponseIdEventArgs__ctor_mFA7EEF8EB6F97A42E8ABE76C2AED6968324A8B63(L_7, L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_3);
		EventHandler_1_Invoke_m3A913729344A711379818904A0BD83EA71DC1BFE(L_3, L_4, L_7, /*hidden argument*/EventHandler_1_Invoke_m3A913729344A711379818904A0BD83EA71DC1BFE_RuntimeMethod_var);
		return;
	}

IL_0030:
	{
		APIResponse_t04D6883FBCAF2557AC604DFC943CD759DE8556C8 * L_8 = ___response0;
		NullCheck(L_8);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_9;
		L_9 = APIResponse_GetParsedJson_m41C7B08DD0BEA034C9E6A566F7FD8B543237E491(L_8, /*hidden argument*/NULL);
		String_t* L_10;
		L_10 = DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisString_t_m650E3E6854ED4FFA1F3A5E002E72DBFC0B7AFD04(L_9, _stringLiteral742BB80CE36C1930E5C1022A988EF1BAB5512E0A, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisString_t_m650E3E6854ED4FFA1F3A5E002E72DBFC0B7AFD04_RuntimeMethod_var);
		V_0 = L_10;
		String_t* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0076;
		}
	}
	{
		SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A * L_13 = __this->get_U3CU3E4__this_0();
		NullCheck(L_13);
		EventHandler_1_t1BEB15B2B124055FE88D844DA101A6E2D5F07668 * L_14 = L_13->get_OnSurveyEnterFailed_5();
		SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A * L_15 = __this->get_U3CU3E4__this_0();
		Survey_t63EBCA3CF9AB2225CD1CF20B3E7B854C7846832A * L_16 = __this->get_survey_1();
		String_t* L_17 = __this->get_responseId_2();
		SurveyResponseIdEventArgs_t834D0F47C4D59C6297F6A4EE164ED1D27F34ECB0 * L_18 = (SurveyResponseIdEventArgs_t834D0F47C4D59C6297F6A4EE164ED1D27F34ECB0 *)il2cpp_codegen_object_new(SurveyResponseIdEventArgs_t834D0F47C4D59C6297F6A4EE164ED1D27F34ECB0_il2cpp_TypeInfo_var);
		SurveyResponseIdEventArgs__ctor_mFA7EEF8EB6F97A42E8ABE76C2AED6968324A8B63(L_18, L_16, L_17, /*hidden argument*/NULL);
		NullCheck(L_14);
		EventHandler_1_Invoke_m3A913729344A711379818904A0BD83EA71DC1BFE(L_14, L_15, L_18, /*hidden argument*/EventHandler_1_Invoke_m3A913729344A711379818904A0BD83EA71DC1BFE_RuntimeMethod_var);
		return;
	}

IL_0076:
	{
		String_t* L_19 = V_0;
		String_t* L_20;
		L_20 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralA140C1F41F25B028A946446019BD278916B2C3B1, L_19, /*hidden argument*/NULL);
		Logger_Log_mD812E8836FE8B23379FCD434AD8A984B2CAA1B19(L_20, (bool)0, /*hidden argument*/NULL);
		SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A * L_21 = __this->get_U3CU3E4__this_0();
		Survey_t63EBCA3CF9AB2225CD1CF20B3E7B854C7846832A * L_22 = __this->get_survey_1();
		String_t* L_23 = V_0;
		String_t* L_24 = __this->get_responseId_2();
		NullCheck(L_21);
		SurveysModule_LoadWebViewController_m743EA3ADC5CBCEC49797EBFC6BFCA42DA99AAECD(L_21, L_22, L_23, L_24, /*hidden argument*/NULL);
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
// System.Void UserWiseSDK.Campaigns.Internal.TriggerableCampaign/<>c__DisplayClass31_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0__ctor_mFD8E73C5F8EC7F1149F5221C5A01860DB8BD3178 (U3CU3Ec__DisplayClass31_0_t3162AB2F18601EF78435ACE2B3CA7299CA2EDE84 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UserWiseSDK.Campaigns.Internal.TriggerableCampaign/<>c__DisplayClass31_0::<Serialize>b__0(UserWiseSDK.Events.GameEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0_U3CSerializeU3Eb__0_m56DABA5FD2DBC8E7B40E41B8509FE9FC6049AC3F (U3CU3Ec__DisplayClass31_0_t3162AB2F18601EF78435ACE2B3CA7299CA2EDE84 * __this, GameEvent_tF75EAF1479A5119F3188123C4694630955553B53 * ___gameEvent0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictSerializable_1_t1E98E47070925B225B8A5FE8F59CECD657EDBEDD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m4C8CE184D497D4EA29D3963CCAC07D7D995A847A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t3CAEFF22F70FA8270239B1324BE3AABD8B5BD0C0 * L_0 = __this->get_serializedEvents_0();
		GameEvent_tF75EAF1479A5119F3188123C4694630955553B53 * L_1 = ___gameEvent0;
		NullCheck(L_1);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_2;
		L_2 = InterfaceFuncInvoker0< Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * >::Invoke(0 /* System.Collections.Generic.Dictionary`2<System.String,System.Object> UserWiseSDK.IDictSerializable`1<UserWiseSDK.Events.GameEvent>::Serialize() */, IDictSerializable_1_t1E98E47070925B225B8A5FE8F59CECD657EDBEDD_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_0);
		List_1_Add_m4C8CE184D497D4EA29D3963CCAC07D7D995A847A(L_0, L_2, /*hidden argument*/List_1_Add_m4C8CE184D497D4EA29D3963CCAC07D7D995A847A_RuntimeMethod_var);
		return;
	}
}
// System.Void UserWiseSDK.Campaigns.Internal.TriggerableCampaign/<>c__DisplayClass31_0::<Serialize>b__1(UserWiseSDK.Messages.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0_U3CSerializeU3Eb__1_m0851DA0A1D0C8CA3E156576E64E58CAD9E5C1815 (U3CU3Ec__DisplayClass31_0_t3162AB2F18601EF78435ACE2B3CA7299CA2EDE84 * __this, Message_t994A7D958E14F464F785BFB6864280005103A91D * ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictSerializable_1_t0C36D241D1667DB34433BC8786A454390EB7F3E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m4C8CE184D497D4EA29D3963CCAC07D7D995A847A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t3CAEFF22F70FA8270239B1324BE3AABD8B5BD0C0 * L_0 = __this->get_serializedMessages_1();
		Message_t994A7D958E14F464F785BFB6864280005103A91D * L_1 = ___message0;
		NullCheck(L_1);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_2;
		L_2 = InterfaceFuncInvoker0< Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * >::Invoke(0 /* System.Collections.Generic.Dictionary`2<System.String,System.Object> UserWiseSDK.IDictSerializable`1<UserWiseSDK.Messages.Message>::Serialize() */, IDictSerializable_1_t0C36D241D1667DB34433BC8786A454390EB7F3E9_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_0);
		List_1_Add_m4C8CE184D497D4EA29D3963CCAC07D7D995A847A(L_0, L_2, /*hidden argument*/List_1_Add_m4C8CE184D497D4EA29D3963CCAC07D7D995A847A_RuntimeMethod_var);
		return;
	}
}
// System.Void UserWiseSDK.Campaigns.Internal.TriggerableCampaign/<>c__DisplayClass31_0::<Serialize>b__2(UserWiseSDK.Offers.Offer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0_U3CSerializeU3Eb__2_m03155F200B5E192BF54F95FBD3E26E7B860D4625 (U3CU3Ec__DisplayClass31_0_t3162AB2F18601EF78435ACE2B3CA7299CA2EDE84 * __this, Offer_tF5EB0445F358ACF0E545C2B513B39B63804190A7 * ___offer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictSerializable_1_tC4E7F28E4044EFB36EDCB7A10ECDEA25C7D5B306_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m4C8CE184D497D4EA29D3963CCAC07D7D995A847A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t3CAEFF22F70FA8270239B1324BE3AABD8B5BD0C0 * L_0 = __this->get_serializedOffers_2();
		Offer_tF5EB0445F358ACF0E545C2B513B39B63804190A7 * L_1 = ___offer0;
		NullCheck(L_1);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_2;
		L_2 = InterfaceFuncInvoker0< Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * >::Invoke(0 /* System.Collections.Generic.Dictionary`2<System.String,System.Object> UserWiseSDK.IDictSerializable`1<UserWiseSDK.Offers.Offer>::Serialize() */, IDictSerializable_1_tC4E7F28E4044EFB36EDCB7A10ECDEA25C7D5B306_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_0);
		List_1_Add_m4C8CE184D497D4EA29D3963CCAC07D7D995A847A(L_0, L_2, /*hidden argument*/List_1_Add_m4C8CE184D497D4EA29D3963CCAC07D7D995A847A_RuntimeMethod_var);
		return;
	}
}
// System.Void UserWiseSDK.Campaigns.Internal.TriggerableCampaign/<>c__DisplayClass31_0::<Serialize>b__3(UserWiseSDK.Surveys.Survey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0_U3CSerializeU3Eb__3_m393EE252CFE69DEC1605A14DD36530DE0CAE1C4C (U3CU3Ec__DisplayClass31_0_t3162AB2F18601EF78435ACE2B3CA7299CA2EDE84 * __this, Survey_t63EBCA3CF9AB2225CD1CF20B3E7B854C7846832A * ___survey0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictSerializable_1_t959AEAA0C7615DD60788B60E9F83CBD5871239D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m4C8CE184D497D4EA29D3963CCAC07D7D995A847A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t3CAEFF22F70FA8270239B1324BE3AABD8B5BD0C0 * L_0 = __this->get_serializedSurveys_3();
		Survey_t63EBCA3CF9AB2225CD1CF20B3E7B854C7846832A * L_1 = ___survey0;
		NullCheck(L_1);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_2;
		L_2 = InterfaceFuncInvoker0< Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * >::Invoke(0 /* System.Collections.Generic.Dictionary`2<System.String,System.Object> UserWiseSDK.IDictSerializable`1<UserWiseSDK.Surveys.Survey>::Serialize() */, IDictSerializable_1_t959AEAA0C7615DD60788B60E9F83CBD5871239D0_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_0);
		List_1_Add_m4C8CE184D497D4EA29D3963CCAC07D7D995A847A(L_0, L_2, /*hidden argument*/List_1_Add_m4C8CE184D497D4EA29D3963CCAC07D7D995A847A_RuntimeMethod_var);
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
// System.Void UserWiseSDK.Campaigns.Internal.TriggerableCampaign/<>c__DisplayClass35_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass35_0__ctor_m6F281B26397EBD10F92DAE7FD39CE653A2F16F24 (U3CU3Ec__DisplayClass35_0_t5273E630404198372B6E589574E69230FFCD8274 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UserWiseSDK.Campaigns.Internal.TriggerableCampaign/<>c__DisplayClass35_0::<UserWiseSDK.Internal.Triggers.ITriggerable.Trigger>b__0(UserWiseSDK.Events.GameEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass35_0_U3CUserWiseSDK_Internal_Triggers_ITriggerable_TriggerU3Eb__0_mA4EC73E0E576CA78D1AE76E3613E8EB71842810D (U3CU3Ec__DisplayClass35_0_t5273E630404198372B6E589574E69230FFCD8274 * __this, GameEvent_tF75EAF1479A5119F3188123C4694630955553B53 * ___gameEvent0, const RuntimeMethod* method)
{
	{
		EventsModule_t4DAC0631F19FA41A3CA16E5C6B8F9732A7B43A20 * L_0 = __this->get_eventsModule_0();
		GameEvent_tF75EAF1479A5119F3188123C4694630955553B53 * L_1 = ___gameEvent0;
		NullCheck(L_0);
		EventsModule_AddGameEventAsActive_m88E854EA8F813984957E5A08FEF1C253B0E2B385(L_0, L_1, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UserWiseSDK.Campaigns.Internal.TriggerableCampaign/<>c__DisplayClass35_0::<UserWiseSDK.Internal.Triggers.ITriggerable.Trigger>b__1(UserWiseSDK.Messages.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass35_0_U3CUserWiseSDK_Internal_Triggers_ITriggerable_TriggerU3Eb__1_mEAEEA427F4C6579E124FD59181D3E219669E0DB6 (U3CU3Ec__DisplayClass35_0_t5273E630404198372B6E589574E69230FFCD8274 * __this, Message_t994A7D958E14F464F785BFB6864280005103A91D * ___message0, const RuntimeMethod* method)
{
	{
		MessagesModule_t77B236E65D4003E98ED18F92F6A2FF781F5D5AC8 * L_0 = __this->get_messagesModule_1();
		Message_t994A7D958E14F464F785BFB6864280005103A91D * L_1 = ___message0;
		NullCheck(L_0);
		MessagesModule_AddMessageAsActive_mAF116FD7756A6AE1671735CECA01F500D7A7BC87(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UserWiseSDK.Campaigns.Internal.TriggerableCampaign/<>c__DisplayClass35_0::<UserWiseSDK.Internal.Triggers.ITriggerable.Trigger>b__2(UserWiseSDK.Offers.Offer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass35_0_U3CUserWiseSDK_Internal_Triggers_ITriggerable_TriggerU3Eb__2_m1C2592E2453260F91950E14E66FC57386A4F0C13 (U3CU3Ec__DisplayClass35_0_t5273E630404198372B6E589574E69230FFCD8274 * __this, Offer_tF5EB0445F358ACF0E545C2B513B39B63804190A7 * ___offer0, const RuntimeMethod* method)
{
	{
		OffersModule_t6F8C5C3B400904E3CBFB8EC6ACC9D02C8FD81737 * L_0 = __this->get_offersModule_2();
		Offer_tF5EB0445F358ACF0E545C2B513B39B63804190A7 * L_1 = ___offer0;
		NullCheck(L_0);
		OffersModule_AddOfferAsActive_mD7759BC39BF8D960CE53D44609B5BA071B476295(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UserWiseSDK.Campaigns.Internal.TriggerableCampaign/<>c__DisplayClass35_0::<UserWiseSDK.Internal.Triggers.ITriggerable.Trigger>b__3(UserWiseSDK.Surveys.Survey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass35_0_U3CUserWiseSDK_Internal_Triggers_ITriggerable_TriggerU3Eb__3_m857C4527CE2B4A91F80C905CFCFA1F0B71AA917F (U3CU3Ec__DisplayClass35_0_t5273E630404198372B6E589574E69230FFCD8274 * __this, Survey_t63EBCA3CF9AB2225CD1CF20B3E7B854C7846832A * ___survey0, const RuntimeMethod* method)
{
	{
		SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A * L_0 = __this->get_surveysModule_3();
		Survey_t63EBCA3CF9AB2225CD1CF20B3E7B854C7846832A * L_1 = ___survey0;
		NullCheck(L_0);
		SurveysModule_AddSurveyAsActive_mF33018DF73BE91B289623448D52433B88DF266FC(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UserWiseSDK.Campaigns.Internal.TriggerableCampaign/<>c__DisplayClass35_0::<UserWiseSDK.Internal.Triggers.ITriggerable.Trigger>b__4(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass35_0_U3CUserWiseSDK_Internal_Triggers_ITriggerable_TriggerU3Eb__4_m7B117702AAA4A97A2314B3DEB806B09C4A9A474B (U3CU3Ec__DisplayClass35_0_t5273E630404198372B6E589574E69230FFCD8274 * __this, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___rawVariableGroup0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m2081C22E67B979AFF0710DA64B3BFE895BAE1635_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7D3C5AB9967DFDFE269DC54DF367D0B21C59E356_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m27DDAE22558733AB59D955136A7EF5AF05B1F4CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m5D01A6607C2199E7A7B5856E49119C26FE5327BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVariable_tF3AA49B2528F27A4EACB63B3D53EF63FAFB493EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Find_m2C28DEE7A09BB3786F7CF2AC537C1CE44D6DF7EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1__ctor_m1CB6EB50499523977C9D42EDBEF45CC9F5BF4707_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t252A4131FBF10F595F30D77DD5DCC10EAF91F1E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass35_1_U3CUserWiseSDK_Internal_Triggers_ITriggerable_TriggerU3Eb__5_m82E8FD325E4AE2EAAD5CF4D4E1D4F0F26280672C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass35_1_t8B58EB44020D9FBD8BCFECEC7B2DE1DE5D9BF747_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15  V_0;
	memset((&V_0), 0, sizeof(V_0));
	U3CU3Ec__DisplayClass35_1_t8B58EB44020D9FBD8BCFECEC7B2DE1DE5D9BF747 * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_0 = ___rawVariableGroup0;
		NullCheck(L_0);
		Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15  L_1;
		L_1 = Dictionary_2_GetEnumerator_m2081C22E67B979AFF0710DA64B3BFE895BAE1635(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_m2081C22E67B979AFF0710DA64B3BFE895BAE1635_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0048;
		}

IL_0009:
		{
			U3CU3Ec__DisplayClass35_1_t8B58EB44020D9FBD8BCFECEC7B2DE1DE5D9BF747 * L_2 = (U3CU3Ec__DisplayClass35_1_t8B58EB44020D9FBD8BCFECEC7B2DE1DE5D9BF747 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass35_1_t8B58EB44020D9FBD8BCFECEC7B2DE1DE5D9BF747_il2cpp_TypeInfo_var);
			U3CU3Ec__DisplayClass35_1__ctor_mC41B2C6AB3E7383E988DC43F56B39FECC10D9BF6(L_2, /*hidden argument*/NULL);
			V_1 = L_2;
			U3CU3Ec__DisplayClass35_1_t8B58EB44020D9FBD8BCFECEC7B2DE1DE5D9BF747 * L_3 = V_1;
			KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  L_4;
			L_4 = Enumerator_get_Current_m5D01A6607C2199E7A7B5856E49119C26FE5327BB_inline((Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m5D01A6607C2199E7A7B5856E49119C26FE5327BB_RuntimeMethod_var);
			NullCheck(L_3);
			L_3->set_keyValuePair_0(L_4);
			List_1_t6A199232F00F6677AE80AA4F32F24C6B986CC7E2 * L_5 = __this->get_variables_4();
			U3CU3Ec__DisplayClass35_1_t8B58EB44020D9FBD8BCFECEC7B2DE1DE5D9BF747 * L_6 = V_1;
			Predicate_1_t252A4131FBF10F595F30D77DD5DCC10EAF91F1E1 * L_7 = (Predicate_1_t252A4131FBF10F595F30D77DD5DCC10EAF91F1E1 *)il2cpp_codegen_object_new(Predicate_1_t252A4131FBF10F595F30D77DD5DCC10EAF91F1E1_il2cpp_TypeInfo_var);
			Predicate_1__ctor_m1CB6EB50499523977C9D42EDBEF45CC9F5BF4707(L_7, L_6, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass35_1_U3CUserWiseSDK_Internal_Triggers_ITriggerable_TriggerU3Eb__5_m82E8FD325E4AE2EAAD5CF4D4E1D4F0F26280672C_RuntimeMethod_var), /*hidden argument*/Predicate_1__ctor_m1CB6EB50499523977C9D42EDBEF45CC9F5BF4707_RuntimeMethod_var);
			NullCheck(L_5);
			RuntimeObject* L_8;
			L_8 = List_1_Find_m2C28DEE7A09BB3786F7CF2AC537C1CE44D6DF7EF(L_5, L_7, /*hidden argument*/List_1_Find_m2C28DEE7A09BB3786F7CF2AC537C1CE44D6DF7EF_RuntimeMethod_var);
			V_2 = L_8;
			RuntimeObject* L_9 = V_2;
			if (!L_9)
			{
				goto IL_0048;
			}
		}

IL_0037:
		{
			RuntimeObject* L_10 = V_2;
			U3CU3Ec__DisplayClass35_1_t8B58EB44020D9FBD8BCFECEC7B2DE1DE5D9BF747 * L_11 = V_1;
			NullCheck(L_11);
			KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE * L_12 = L_11->get_address_of_keyValuePair_0();
			RuntimeObject * L_13;
			L_13 = KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_inline((KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *)L_12, /*hidden argument*/KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_RuntimeMethod_var);
			NullCheck(L_10);
			InterfaceActionInvoker1< RuntimeObject * >::Invoke(6 /* System.Void UserWiseSDK.Variables.Types.IVariable::UpdateValueFromAPI(System.Object) */, IVariable_tF3AA49B2528F27A4EACB63B3D53EF63FAFB493EB_il2cpp_TypeInfo_var, L_10, L_13);
		}

IL_0048:
		{
			bool L_14;
			L_14 = Enumerator_MoveNext_m27DDAE22558733AB59D955136A7EF5AF05B1F4CE((Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m27DDAE22558733AB59D955136A7EF5AF05B1F4CE_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_0009;
			}
		}

IL_0051:
		{
			IL2CPP_LEAVE(0x61, FINALLY_0053);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0053;
	}

FINALLY_0053:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m7D3C5AB9967DFDFE269DC54DF367D0B21C59E356((Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m7D3C5AB9967DFDFE269DC54DF367D0B21C59E356_RuntimeMethod_var);
		IL2CPP_END_FINALLY(83)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(83)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x61, IL_0061)
	}

IL_0061:
	{
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
// System.Void UserWiseSDK.Campaigns.Internal.TriggerableCampaign/<>c__DisplayClass35_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass35_1__ctor_mC41B2C6AB3E7383E988DC43F56B39FECC10D9BF6 (U3CU3Ec__DisplayClass35_1_t8B58EB44020D9FBD8BCFECEC7B2DE1DE5D9BF747 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UserWiseSDK.Campaigns.Internal.TriggerableCampaign/<>c__DisplayClass35_1::<UserWiseSDK.Internal.Triggers.ITriggerable.Trigger>b__5(UserWiseSDK.Variables.Types.IVariable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass35_1_U3CUserWiseSDK_Internal_Triggers_ITriggerable_TriggerU3Eb__5_m82E8FD325E4AE2EAAD5CF4D4E1D4F0F26280672C (U3CU3Ec__DisplayClass35_1_t8B58EB44020D9FBD8BCFECEC7B2DE1DE5D9BF747 * __this, RuntimeObject* ___lVar0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVariable_tF3AA49B2528F27A4EACB63B3D53EF63FAFB493EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___lVar0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String UserWiseSDK.Variables.Types.IVariable::GetName() */, IVariable_tF3AA49B2528F27A4EACB63B3D53EF63FAFB493EB_il2cpp_TypeInfo_var, L_0);
		KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE * L_2 = __this->get_address_of_keyValuePair_0();
		String_t* L_3;
		L_3 = KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_inline((KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *)L_2, /*hidden argument*/KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_RuntimeMethod_var);
		bool L_4;
		L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_3, /*hidden argument*/NULL);
		return L_4;
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
// System.Void UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m320174B13ED07B76D0FB31665D78B0BC63E2122F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tE93B34597CA2E728710340B7EB2214EB39639A45_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tE93B34597CA2E728710340B7EB2214EB39639A45 * L_0 = (U3CU3Ec_tE93B34597CA2E728710340B7EB2214EB39639A45 *)il2cpp_codegen_object_new(U3CU3Ec_tE93B34597CA2E728710340B7EB2214EB39639A45_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mD2F50D4E28D9995DA6B62C0E1155BB95170307CE(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tE93B34597CA2E728710340B7EB2214EB39639A45_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE93B34597CA2E728710340B7EB2214EB39639A45_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD2F50D4E28D9995DA6B62C0E1155BB95170307CE (U3CU3Ec_tE93B34597CA2E728710340B7EB2214EB39639A45 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c::<HandleTriggerAction>b__6_0(UserWiseSDK.Internal.Triggers.ITriggerable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CHandleTriggerActionU3Eb__6_0_mEB64C679A6EE5A72BA15E8F273E81BCE76165A15 (U3CU3Ec_tE93B34597CA2E728710340B7EB2214EB39639A45 * __this, RuntimeObject* ___triggerable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITriggerable_t6048D1AAF66C6D53CDC7D75F692C3AB1FB333174_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___triggerable0;
		NullCheck(L_0);
		TriggerData_t40BC1C042F41DAE8FD2282A4205ECA50429A7EE6 * L_1;
		L_1 = InterfaceFuncInvoker0< TriggerData_t40BC1C042F41DAE8FD2282A4205ECA50429A7EE6 * >::Invoke(1 /* UserWiseSDK.Internal.Triggers.TriggerData UserWiseSDK.Internal.Triggers.ITriggerable::GetTriggerData() */, ITriggerable_t6048D1AAF66C6D53CDC7D75F692C3AB1FB333174_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		bool L_2;
		L_2 = TriggerData_CanTriggerNow_mAD7021CBB62EA8457C59814693DEBA18ECCA3E17(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c::<HandleTriggerAction>b__7_0(UserWiseSDK.Internal.Triggers.ITriggerable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CHandleTriggerActionU3Eb__7_0_m2FF231C89197C19FF33FA67B9CC9553492E39FFB (U3CU3Ec_tE93B34597CA2E728710340B7EB2214EB39639A45 * __this, RuntimeObject* ___triggerable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITriggerable_t6048D1AAF66C6D53CDC7D75F692C3AB1FB333174_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___triggerable0;
		NullCheck(L_0);
		TriggerData_t40BC1C042F41DAE8FD2282A4205ECA50429A7EE6 * L_1;
		L_1 = InterfaceFuncInvoker0< TriggerData_t40BC1C042F41DAE8FD2282A4205ECA50429A7EE6 * >::Invoke(1 /* UserWiseSDK.Internal.Triggers.TriggerData UserWiseSDK.Internal.Triggers.ITriggerable::GetTriggerData() */, ITriggerable_t6048D1AAF66C6D53CDC7D75F692C3AB1FB333174_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		bool L_2;
		L_2 = TriggerData_CanTriggerNow_mAD7021CBB62EA8457C59814693DEBA18ECCA3E17(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c::<HandleTriggerAction>b__8_0(UserWiseSDK.Internal.Triggers.ITriggerable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CHandleTriggerActionU3Eb__8_0_m6B686B60969F2B19A8D38F526EB10EC3BA195756 (U3CU3Ec_tE93B34597CA2E728710340B7EB2214EB39639A45 * __this, RuntimeObject* ___triggerable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITriggerable_t6048D1AAF66C6D53CDC7D75F692C3AB1FB333174_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___triggerable0;
		NullCheck(L_0);
		TriggerData_t40BC1C042F41DAE8FD2282A4205ECA50429A7EE6 * L_1;
		L_1 = InterfaceFuncInvoker0< TriggerData_t40BC1C042F41DAE8FD2282A4205ECA50429A7EE6 * >::Invoke(1 /* UserWiseSDK.Internal.Triggers.TriggerData UserWiseSDK.Internal.Triggers.ITriggerable::GetTriggerData() */, ITriggerable_t6048D1AAF66C6D53CDC7D75F692C3AB1FB333174_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		bool L_2;
		L_2 = TriggerData_CanTriggerNow_mAD7021CBB62EA8457C59814693DEBA18ECCA3E17(L_1, /*hidden argument*/NULL);
		return L_2;
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
// System.Void UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_m9F45C8C2E475A09CEB4E3A2DA25E896C7536E32C (U3CU3Ec__DisplayClass10_0_t431E0569A6A79C9269B1F3F801FC650C9633C98D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c__DisplayClass10_0::<IsAttributableLogicalExpressionValid>b__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3CIsAttributableLogicalExpressionValidU3Eb__0_m4F7AD0D21C94B28CC66D162E127CBEEA047F4674 (U3CU3Ec__DisplayClass10_0_t431E0569A6A79C9269B1F3F801FC650C9633C98D * __this, RuntimeObject * ___testValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = __this->get_testValues_0();
		RuntimeObject * L_1 = ___testValue0;
		NullCheck(L_0);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_0, ((String_t*)CastclassSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		return;
	}
}
// System.Boolean UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c__DisplayClass10_0::<IsAttributableLogicalExpressionValid>b__1(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass10_0_U3CIsAttributableLogicalExpressionValidU3Eb__1_m19F5BBCB2F8E9BE6982EE4C353F5714C426459D5 (U3CU3Ec__DisplayClass10_0_t431E0569A6A79C9269B1F3F801FC650C9633C98D * __this, String_t* ___testValue0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___testValue0;
		String_t* L_1 = __this->get_attributableValue_1();
		NullCheck(L_0);
		bool L_2;
		L_2 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
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
// System.Void UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c__DisplayClass10_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_1__ctor_m879B272EA853CA1BF26E08E1AC7530630195FA78 (U3CU3Ec__DisplayClass10_1_tEC2CC51281D844DB2994000721DC385D6D966A67 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c__DisplayClass10_1::<IsAttributableLogicalExpressionValid>b__2(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_1_U3CIsAttributableLogicalExpressionValidU3Eb__2_m8A71D5B3E77955948D9B78492CB0E3497A08FF9E (U3CU3Ec__DisplayClass10_1_tEC2CC51281D844DB2994000721DC385D6D966A67 * __this, RuntimeObject * ___testValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3AA13B63BAEF6C890A4EAF571DD1E4C9245A3493_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4 * L_0 = __this->get_testValues_0();
		RuntimeObject * L_1 = ___testValue0;
		NullCheck(L_0);
		List_1_Add_m3AA13B63BAEF6C890A4EAF571DD1E4C9245A3493(L_0, ((*(int64_t*)((int64_t*)UnBox(L_1, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var)))), /*hidden argument*/List_1_Add_m3AA13B63BAEF6C890A4EAF571DD1E4C9245A3493_RuntimeMethod_var);
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
// System.Void UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c__DisplayClass10_2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_2__ctor_m671C994083BAA5114154BA828ADA5598445FA399 (U3CU3Ec__DisplayClass10_2_tFB10A80CBF0C5E1A13CD00ADECCB414D13C09DCC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c__DisplayClass10_2::<IsAttributableLogicalExpressionValid>b__3(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_2_U3CIsAttributableLogicalExpressionValidU3Eb__3_mE91014A8DD564BDE49E98E3486C32FEF80D91DCD (U3CU3Ec__DisplayClass10_2_tFB10A80CBF0C5E1A13CD00ADECCB414D13C09DCC * __this, RuntimeObject * ___testValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m56E93B74F5254C198272F09C8E4B09483184B929_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___testValue0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))
		{
			goto IL_001b;
		}
	}
	{
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_1 = __this->get_testValues_0();
		RuntimeObject * L_2 = ___testValue0;
		NullCheck(L_1);
		List_1_Add_m56E93B74F5254C198272F09C8E4B09483184B929(L_1, ((double)((double)((*(int32_t*)((int32_t*)UnBox(L_2, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))))), /*hidden argument*/List_1_Add_m56E93B74F5254C198272F09C8E4B09483184B929_RuntimeMethod_var);
		return;
	}

IL_001b:
	{
		RuntimeObject * L_3 = ___testValue0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_3, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var)))
		{
			goto IL_0035;
		}
	}
	{
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_4 = __this->get_testValues_0();
		RuntimeObject * L_5 = ___testValue0;
		NullCheck(L_4);
		List_1_Add_m56E93B74F5254C198272F09C8E4B09483184B929(L_4, ((*(double*)((double*)UnBox(L_5, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var)))), /*hidden argument*/List_1_Add_m56E93B74F5254C198272F09C8E4B09483184B929_RuntimeMethod_var);
		return;
	}

IL_0035:
	{
		RuntimeObject * L_6 = ___testValue0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_6, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var)))
		{
			goto IL_004f;
		}
	}
	{
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_7 = __this->get_testValues_0();
		RuntimeObject * L_8 = ___testValue0;
		NullCheck(L_7);
		List_1_Add_m56E93B74F5254C198272F09C8E4B09483184B929(L_7, ((double)((double)((*(int64_t*)((int64_t*)UnBox(L_8, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var)))))), /*hidden argument*/List_1_Add_m56E93B74F5254C198272F09C8E4B09483184B929_RuntimeMethod_var);
	}

IL_004f:
	{
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
// System.Void UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c__DisplayClass10_3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_3__ctor_m4A232C4011EB3E8E9C771B7B74A2CC7CBDD07374 (U3CU3Ec__DisplayClass10_3_t12BDF41E90B1A66EB112830F8F67AA2A4CD10206 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c__DisplayClass10_3::<IsAttributableLogicalExpressionValid>b__4(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_3_U3CIsAttributableLogicalExpressionValidU3Eb__4_m4DDFACB1FF849C5C976AA570D01AF7D6A2CD529C (U3CU3Ec__DisplayClass10_3_t12BDF41E90B1A66EB112830F8F67AA2A4CD10206 * __this, RuntimeObject * ___testValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m186BDFBE15172FEE311041A38252C8B10444E63B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t7240E3382CB212F4FEB22D7A3E93EE9152E03CBC * L_0 = __this->get_testValues_0();
		RuntimeObject * L_1 = ___testValue0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_2;
		L_2 = DateTime_Parse_m15F41E956747FC3E7EEBB24E45AA8733C1966989(((String_t*)CastclassSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		NullCheck(L_0);
		List_1_Add_m186BDFBE15172FEE311041A38252C8B10444E63B(L_0, L_2, /*hidden argument*/List_1_Add_m186BDFBE15172FEE311041A38252C8B10444E63B_RuntimeMethod_var);
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
// System.Void UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m5FE1300A02FA147E323AE9A763953ABA71F31ABB (U3CU3Ec__DisplayClass6_0_tE709B9673098A3DE2A7919BAFDFA06436B0A2C6A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c__DisplayClass6_0::<HandleTriggerAction>b__1(UserWiseSDK.Internal.Triggers.ITriggerable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass6_0_U3CHandleTriggerActionU3Eb__1_mE562119CA88E5F0DC39BF8C1F2FAE30431B54191 (U3CU3Ec__DisplayClass6_0_tE709B9673098A3DE2A7919BAFDFA06436B0A2C6A * __this, RuntimeObject* ___triggerable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisList_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_mF1D55797C8C6B9A6BE3787B18EF18D3082C81177_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisString_t_m650E3E6854ED4FFA1F3A5E002E72DBFC0B7AFD04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITriggerable_t6048D1AAF66C6D53CDC7D75F692C3AB1FB333174_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerAttribute_tFEE261801264075772E64E9C9823AE73B88747BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB896D5816D050F21687F4F9FA4CFDF883EC8A23E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC203279FC91536021E64CC54092300BDE54D3FEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE35A021C33238EC8095FC12ADC3E92FB384ACEBE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBFED6DEA5A92748E7B7A0A236B4FBA1EFEF38C6);
		s_Il2CppMethodInitialized = true;
	}
	TriggerData_t40BC1C042F41DAE8FD2282A4205ECA50429A7EE6 * V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * V_4 = NULL;
	{
		RuntimeObject* L_0 = ___triggerable0;
		NullCheck(L_0);
		TriggerData_t40BC1C042F41DAE8FD2282A4205ECA50429A7EE6 * L_1;
		L_1 = InterfaceFuncInvoker0< TriggerData_t40BC1C042F41DAE8FD2282A4205ECA50429A7EE6 * >::Invoke(1 /* UserWiseSDK.Internal.Triggers.TriggerData UserWiseSDK.Internal.Triggers.ITriggerable::GetTriggerData() */, ITriggerable_t6048D1AAF66C6D53CDC7D75F692C3AB1FB333174_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		TriggerData_t40BC1C042F41DAE8FD2282A4205ECA50429A7EE6 * L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = TriggerData_get_Type_mC53165ADE924E5153B1EB68898C33FEE948E1E06_inline(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		TriggerData_t40BC1C042F41DAE8FD2282A4205ECA50429A7EE6 * L_4 = V_0;
		NullCheck(L_4);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_5;
		L_5 = TriggerData_get_Logic_mB5278AFADAF2C07F7DEE932374EC4ACBD75E45F4_inline(L_4, /*hidden argument*/NULL);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_6 = L_5;
		String_t* L_7;
		L_7 = DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisString_t_m650E3E6854ED4FFA1F3A5E002E72DBFC0B7AFD04(L_6, _stringLiteralB896D5816D050F21687F4F9FA4CFDF883EC8A23E, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisString_t_m650E3E6854ED4FFA1F3A5E002E72DBFC0B7AFD04_RuntimeMethod_var);
		V_1 = L_7;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_8 = L_6;
		String_t* L_9;
		L_9 = DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisString_t_m650E3E6854ED4FFA1F3A5E002E72DBFC0B7AFD04(L_8, _stringLiteralC203279FC91536021E64CC54092300BDE54D3FEB, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisString_t_m650E3E6854ED4FFA1F3A5E002E72DBFC0B7AFD04_RuntimeMethod_var);
		V_2 = L_9;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_10 = L_8;
		String_t* L_11;
		L_11 = DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisString_t_m650E3E6854ED4FFA1F3A5E002E72DBFC0B7AFD04(L_10, _stringLiteralE35A021C33238EC8095FC12ADC3E92FB384ACEBE, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisString_t_m650E3E6854ED4FFA1F3A5E002E72DBFC0B7AFD04_RuntimeMethod_var);
		V_3 = L_11;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_12 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)il2cpp_codegen_object_new(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var);
		List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B(L_12, /*hidden argument*/List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_13;
		L_13 = DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisList_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_mF1D55797C8C6B9A6BE3787B18EF18D3082C81177(L_10, _stringLiteralFBFED6DEA5A92748E7B7A0A236B4FBA1EFEF38C6, L_12, /*hidden argument*/DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisList_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_mF1D55797C8C6B9A6BE3787B18EF18D3082C81177_RuntimeMethod_var);
		V_4 = L_13;
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_14, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_008c;
		}
	}
	{
		String_t* L_16 = V_2;
		bool L_17;
		L_17 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_16, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_008c;
		}
	}
	{
		String_t* L_18 = V_3;
		bool L_19;
		L_19 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_18, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_008c;
		}
	}
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_20 = V_4;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_inline(L_20, /*hidden argument*/List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		if (L_21)
		{
			goto IL_008e;
		}
	}

IL_008c:
	{
		return (bool)0;
	}

IL_008e:
	{
		String_t* L_22 = V_1;
		PlayerAttribute_tFEE261801264075772E64E9C9823AE73B88747BB * L_23 = __this->get_address_of_attribute_0();
		String_t* L_24;
		L_24 = PlayerAttribute_GetName_m7EFB255927A35FD6D777C4E861F37303841F2435_inline((PlayerAttribute_tFEE261801264075772E64E9C9823AE73B88747BB *)L_23, /*hidden argument*/NULL);
		bool L_25;
		L_25 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_22, L_24, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00bc;
		}
	}
	{
		TriggerableContentController_t879B381534ABAAA2D45C76715E084E80D900D57D * L_26 = __this->get_U3CU3E4__this_1();
		String_t* L_27 = V_3;
		String_t* L_28 = V_2;
		PlayerAttribute_tFEE261801264075772E64E9C9823AE73B88747BB  L_29 = __this->get_attribute_0();
		PlayerAttribute_tFEE261801264075772E64E9C9823AE73B88747BB  L_30 = L_29;
		RuntimeObject * L_31 = Box(PlayerAttribute_tFEE261801264075772E64E9C9823AE73B88747BB_il2cpp_TypeInfo_var, &L_30);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_32 = V_4;
		NullCheck(L_26);
		bool L_33;
		L_33 = TriggerableContentController_IsAttributableLogicalExpressionValid_m4213D6FCB46D9BB453945C6187EDBCA45B07C99D(L_26, L_27, L_28, (RuntimeObject*)L_31, L_32, /*hidden argument*/NULL);
		return L_33;
	}

IL_00bc:
	{
		return (bool)0;
	}
}
// System.Void UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c__DisplayClass6_0::<HandleTriggerAction>b__2(UserWiseSDK.Internal.Triggers.ITriggerable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_U3CHandleTriggerActionU3Eb__2_mB0D2BDD92A88FF64D6C5ED7775507C2D230CAB13 (U3CU3Ec__DisplayClass6_0_tE709B9673098A3DE2A7919BAFDFA06436B0A2C6A * __this, RuntimeObject* ___triggerable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6A1C4A27FCE1C8E658902185D1D8713EB33C4562_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TriggerableContentController_t879B381534ABAAA2D45C76715E084E80D900D57D * L_0 = __this->get_U3CU3E4__this_1();
		RuntimeObject* L_1 = ___triggerable0;
		NullCheck(L_0);
		TriggerableContentController_TriggerTriggerable_m304704A453EC38B3FF77950942E56D6F99945848(L_0, L_1, /*hidden argument*/NULL);
		List_1_t92B053769F1F29417E25AE8F630FE7F9B7911437 * L_2 = __this->get_triggeredTriggerables_2();
		RuntimeObject* L_3 = ___triggerable0;
		NullCheck(L_2);
		List_1_Add_m6A1C4A27FCE1C8E658902185D1D8713EB33C4562(L_2, L_3, /*hidden argument*/List_1_Add_m6A1C4A27FCE1C8E658902185D1D8713EB33C4562_RuntimeMethod_var);
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
// System.Void UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m68A7FD575F75211D7E71EA568FE486957AAD39A3 (U3CU3Ec__DisplayClass7_0_t546D5442D40E2EC33D281012C7E5AA4DBD1F8AF9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c__DisplayClass7_0::<HandleTriggerAction>b__1(UserWiseSDK.Internal.Triggers.ITriggerable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass7_0_U3CHandleTriggerActionU3Eb__1_mD5BC622C4408BC9CB448D9395C89F1C364E9D64D (U3CU3Ec__DisplayClass7_0_t546D5442D40E2EC33D281012C7E5AA4DBD1F8AF9 * __this, RuntimeObject* ___triggerable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisList_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_mF1D55797C8C6B9A6BE3787B18EF18D3082C81177_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisString_t_m650E3E6854ED4FFA1F3A5E002E72DBFC0B7AFD04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITriggerable_t6048D1AAF66C6D53CDC7D75F692C3AB1FB333174_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Find_m8F84724E3B9CF39244F178118AFE40F3C62CBC8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m162D2EC9E315E003217699D359B316C5CF375941_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC0848B1E8B9FCB262EA335141C667FFCFBBFBCD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tC4FB4BB8479F72D16C842427383E6E3BE652C9A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1__ctor_m2CC94284D0661A08DDAE49AFAEEFEF6F0F77F483_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t6DC00870BCCD3170671403014C65A17A3E69834C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_1_U3CHandleTriggerActionU3Eb__3_mBE8241147C2AE1DD8B78EE0B7B646334A8B30AD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_1_tBC31731EF0C31056D82DBD574B2F05178C1BC5FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB896D5816D050F21687F4F9FA4CFDF883EC8A23E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC203279FC91536021E64CC54092300BDE54D3FEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3CA097F57BB42BDA87A7FB14F36DAD5C901524A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE35A021C33238EC8095FC12ADC3E92FB384ACEBE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE3C8DF7A1486448449F3C76D937019689DFCBE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBFED6DEA5A92748E7B7A0A236B4FBA1EFEF38C6);
		s_Il2CppMethodInitialized = true;
	}
	TriggerData_t40BC1C042F41DAE8FD2282A4205ECA50429A7EE6 * V_0 = NULL;
	String_t* V_1 = NULL;
	Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_3 = NULL;
	U3CU3Ec__DisplayClass7_1_tBC31731EF0C31056D82DBD574B2F05178C1BC5FE * V_4 = NULL;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * V_7 = NULL;
	Nullable_1_tC4FB4BB8479F72D16C842427383E6E3BE652C9A5  V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		RuntimeObject* L_0 = ___triggerable0;
		NullCheck(L_0);
		TriggerData_t40BC1C042F41DAE8FD2282A4205ECA50429A7EE6 * L_1;
		L_1 = InterfaceFuncInvoker0< TriggerData_t40BC1C042F41DAE8FD2282A4205ECA50429A7EE6 * >::Invoke(1 /* UserWiseSDK.Internal.Triggers.TriggerData UserWiseSDK.Internal.Triggers.ITriggerable::GetTriggerData() */, ITriggerable_t6048D1AAF66C6D53CDC7D75F692C3AB1FB333174_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		TriggerData_t40BC1C042F41DAE8FD2282A4205ECA50429A7EE6 * L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = TriggerData_get_Type_mC53165ADE924E5153B1EB68898C33FEE948E1E06_inline(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		TriggerData_t40BC1C042F41DAE8FD2282A4205ECA50429A7EE6 * L_4 = V_0;
		NullCheck(L_4);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_5;
		L_5 = TriggerData_get_Logic_mB5278AFADAF2C07F7DEE932374EC4ACBD75E45F4_inline(L_4, /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisString_t_m650E3E6854ED4FFA1F3A5E002E72DBFC0B7AFD04(L_5, _stringLiteralEE3C8DF7A1486448449F3C76D937019689DFCBE9, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisString_t_m650E3E6854ED4FFA1F3A5E002E72DBFC0B7AFD04_RuntimeMethod_var);
		V_1 = L_6;
		PlayerEvent_t3544668D82C9BE28DFC46846C2734FE1E4DED671 * L_7 = __this->get_address_of_playerEvent_0();
		String_t* L_8 = L_7->get_EventId_0();
		String_t* L_9 = V_1;
		bool L_10;
		L_10 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_003d;
		}
	}
	{
		return (bool)0;
	}

IL_003d:
	{
		TriggerData_t40BC1C042F41DAE8FD2282A4205ECA50429A7EE6 * L_11 = V_0;
		NullCheck(L_11);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_12;
		L_12 = TriggerData_get_Logic_mB5278AFADAF2C07F7DEE932374EC4ACBD75E45F4_inline(L_11, /*hidden argument*/NULL);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_13 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)il2cpp_codegen_object_new(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var);
		List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B(L_13, /*hidden argument*/List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_14;
		L_14 = DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisList_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_mF1D55797C8C6B9A6BE3787B18EF18D3082C81177(L_12, _stringLiteralD3CA097F57BB42BDA87A7FB14F36DAD5C901524A, L_13, /*hidden argument*/DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisList_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_mF1D55797C8C6B9A6BE3787B18EF18D3082C81177_RuntimeMethod_var);
		NullCheck(L_14);
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  L_15;
		L_15 = List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233(L_14, /*hidden argument*/List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_RuntimeMethod_var);
		V_2 = L_15;
	}

IL_0058:
	try
	{ // begin try (depth: 1)
		{
			goto IL_014c;
		}

IL_005d:
		{
			RuntimeObject * L_16;
			L_16 = Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_RuntimeMethod_var);
			V_3 = ((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)CastclassClass((RuntimeObject*)L_16, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var));
			U3CU3Ec__DisplayClass7_1_tBC31731EF0C31056D82DBD574B2F05178C1BC5FE * L_17 = (U3CU3Ec__DisplayClass7_1_tBC31731EF0C31056D82DBD574B2F05178C1BC5FE *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass7_1_tBC31731EF0C31056D82DBD574B2F05178C1BC5FE_il2cpp_TypeInfo_var);
			U3CU3Ec__DisplayClass7_1__ctor_m342EEAB62883C56442615B06A7573417B2C10EBC(L_17, /*hidden argument*/NULL);
			V_4 = L_17;
			U3CU3Ec__DisplayClass7_1_tBC31731EF0C31056D82DBD574B2F05178C1BC5FE * L_18 = V_4;
			Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_19 = V_3;
			String_t* L_20;
			L_20 = DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisString_t_m650E3E6854ED4FFA1F3A5E002E72DBFC0B7AFD04(L_19, _stringLiteralB896D5816D050F21687F4F9FA4CFDF883EC8A23E, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisString_t_m650E3E6854ED4FFA1F3A5E002E72DBFC0B7AFD04_RuntimeMethod_var);
			NullCheck(L_18);
			L_18->set_triggerAttributeName_0(L_20);
			Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_21 = V_3;
			String_t* L_22;
			L_22 = DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisString_t_m650E3E6854ED4FFA1F3A5E002E72DBFC0B7AFD04(L_21, _stringLiteralC203279FC91536021E64CC54092300BDE54D3FEB, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisString_t_m650E3E6854ED4FFA1F3A5E002E72DBFC0B7AFD04_RuntimeMethod_var);
			V_5 = L_22;
			Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_23 = V_3;
			String_t* L_24;
			L_24 = DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisString_t_m650E3E6854ED4FFA1F3A5E002E72DBFC0B7AFD04(L_23, _stringLiteralE35A021C33238EC8095FC12ADC3E92FB384ACEBE, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisString_t_m650E3E6854ED4FFA1F3A5E002E72DBFC0B7AFD04_RuntimeMethod_var);
			V_6 = L_24;
			Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_25 = V_3;
			List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_26 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)il2cpp_codegen_object_new(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var);
			List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B(L_26, /*hidden argument*/List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var);
			List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_27;
			L_27 = DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisList_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_mF1D55797C8C6B9A6BE3787B18EF18D3082C81177(L_25, _stringLiteralFBFED6DEA5A92748E7B7A0A236B4FBA1EFEF38C6, L_26, /*hidden argument*/DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisList_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_mF1D55797C8C6B9A6BE3787B18EF18D3082C81177_RuntimeMethod_var);
			V_7 = L_27;
			U3CU3Ec__DisplayClass7_1_tBC31731EF0C31056D82DBD574B2F05178C1BC5FE * L_28 = V_4;
			NullCheck(L_28);
			String_t* L_29 = L_28->get_triggerAttributeName_0();
			bool L_30;
			L_30 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_29, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
			if (L_30)
			{
				goto IL_00f6;
			}
		}

IL_00d1:
		{
			String_t* L_31 = V_5;
			bool L_32;
			L_32 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_31, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
			if (L_32)
			{
				goto IL_00f6;
			}
		}

IL_00df:
		{
			String_t* L_33 = V_6;
			bool L_34;
			L_34 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_33, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
			if (L_34)
			{
				goto IL_00f6;
			}
		}

IL_00ed:
		{
			List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_35 = V_7;
			NullCheck(L_35);
			int32_t L_36;
			L_36 = List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_inline(L_35, /*hidden argument*/List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
			if (L_36)
			{
				goto IL_00fb;
			}
		}

IL_00f6:
		{
			V_9 = (bool)0;
			IL2CPP_LEAVE(0x16A, FINALLY_015a);
		}

IL_00fb:
		{
			PlayerEvent_t3544668D82C9BE28DFC46846C2734FE1E4DED671 * L_37 = __this->get_address_of_playerEvent_0();
			List_1_tDF5AFDD3A0DE5C7C3DEB594CF5CE6A7F5FE34BD2 * L_38 = L_37->get_Attributes_1();
			U3CU3Ec__DisplayClass7_1_tBC31731EF0C31056D82DBD574B2F05178C1BC5FE * L_39 = V_4;
			Predicate_1_t6DC00870BCCD3170671403014C65A17A3E69834C * L_40 = (Predicate_1_t6DC00870BCCD3170671403014C65A17A3E69834C *)il2cpp_codegen_object_new(Predicate_1_t6DC00870BCCD3170671403014C65A17A3E69834C_il2cpp_TypeInfo_var);
			Predicate_1__ctor_m2CC94284D0661A08DDAE49AFAEEFEF6F0F77F483(L_40, L_39, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass7_1_U3CHandleTriggerActionU3Eb__3_mBE8241147C2AE1DD8B78EE0B7B646334A8B30AD3_RuntimeMethod_var), /*hidden argument*/Predicate_1__ctor_m2CC94284D0661A08DDAE49AFAEEFEF6F0F77F483_RuntimeMethod_var);
			NullCheck(L_38);
			PlayerEventAttribute_t8DCB62015FEE0EAC58B720075BAD7BA8B6A67154  L_41;
			L_41 = List_1_Find_m8F84724E3B9CF39244F178118AFE40F3C62CBC8F(L_38, L_40, /*hidden argument*/List_1_Find_m8F84724E3B9CF39244F178118AFE40F3C62CBC8F_RuntimeMethod_var);
			Nullable_1__ctor_m162D2EC9E315E003217699D359B316C5CF375941((Nullable_1_tC4FB4BB8479F72D16C842427383E6E3BE652C9A5 *)(&V_8), L_41, /*hidden argument*/Nullable_1__ctor_m162D2EC9E315E003217699D359B316C5CF375941_RuntimeMethod_var);
			bool L_42;
			L_42 = Nullable_1_get_HasValue_mC0848B1E8B9FCB262EA335141C667FFCFBBFBCD0_inline((Nullable_1_tC4FB4BB8479F72D16C842427383E6E3BE652C9A5 *)(&V_8), /*hidden argument*/Nullable_1_get_HasValue_mC0848B1E8B9FCB262EA335141C667FFCFBBFBCD0_RuntimeMethod_var);
			if (L_42)
			{
				goto IL_012d;
			}
		}

IL_0128:
		{
			V_9 = (bool)0;
			IL2CPP_LEAVE(0x16A, FINALLY_015a);
		}

IL_012d:
		{
			TriggerableContentController_t879B381534ABAAA2D45C76715E084E80D900D57D * L_43 = __this->get_U3CU3E4__this_1();
			String_t* L_44 = V_6;
			String_t* L_45 = V_5;
			Nullable_1_tC4FB4BB8479F72D16C842427383E6E3BE652C9A5  L_46 = V_8;
			Nullable_1_tC4FB4BB8479F72D16C842427383E6E3BE652C9A5  L_47 = L_46;
			RuntimeObject * L_48 = Box(Nullable_1_tC4FB4BB8479F72D16C842427383E6E3BE652C9A5_il2cpp_TypeInfo_var, &L_47);
			List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_49 = V_7;
			NullCheck(L_43);
			bool L_50;
			L_50 = TriggerableContentController_IsAttributableLogicalExpressionValid_m4213D6FCB46D9BB453945C6187EDBCA45B07C99D(L_43, L_44, L_45, (RuntimeObject*)L_48, L_49, /*hidden argument*/NULL);
			if (L_50)
			{
				goto IL_014c;
			}
		}

IL_0147:
		{
			V_9 = (bool)0;
			IL2CPP_LEAVE(0x16A, FINALLY_015a);
		}

IL_014c:
		{
			bool L_51;
			L_51 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_RuntimeMethod_var);
			if (L_51)
			{
				goto IL_005d;
			}
		}

IL_0158:
		{
			IL2CPP_LEAVE(0x168, FINALLY_015a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_015a;
	}

FINALLY_015a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(&V_2), /*hidden argument*/Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_RuntimeMethod_var);
		IL2CPP_END_FINALLY(346)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(346)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x16A, IL_016a)
		IL2CPP_JUMP_TBL(0x168, IL_0168)
	}

IL_0168:
	{
		return (bool)1;
	}

IL_016a:
	{
		bool L_52 = V_9;
		return L_52;
	}
}
// System.Void UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c__DisplayClass7_0::<HandleTriggerAction>b__2(UserWiseSDK.Internal.Triggers.ITriggerable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0_U3CHandleTriggerActionU3Eb__2_m1AED8AB60EDAD06F09F7EF8CA4324A8DA64A8268 (U3CU3Ec__DisplayClass7_0_t546D5442D40E2EC33D281012C7E5AA4DBD1F8AF9 * __this, RuntimeObject* ___triggerable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6A1C4A27FCE1C8E658902185D1D8713EB33C4562_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TriggerableContentController_t879B381534ABAAA2D45C76715E084E80D900D57D * L_0 = __this->get_U3CU3E4__this_1();
		RuntimeObject* L_1 = ___triggerable0;
		NullCheck(L_0);
		TriggerableContentController_TriggerTriggerable_m304704A453EC38B3FF77950942E56D6F99945848(L_0, L_1, /*hidden argument*/NULL);
		List_1_t92B053769F1F29417E25AE8F630FE7F9B7911437 * L_2 = __this->get_triggeredTriggerables_2();
		RuntimeObject* L_3 = ___triggerable0;
		NullCheck(L_2);
		List_1_Add_m6A1C4A27FCE1C8E658902185D1D8713EB33C4562(L_2, L_3, /*hidden argument*/List_1_Add_m6A1C4A27FCE1C8E658902185D1D8713EB33C4562_RuntimeMethod_var);
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
// System.Void UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c__DisplayClass7_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_1__ctor_m342EEAB62883C56442615B06A7573417B2C10EBC (U3CU3Ec__DisplayClass7_1_tBC31731EF0C31056D82DBD574B2F05178C1BC5FE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c__DisplayClass7_1::<HandleTriggerAction>b__3(UserWiseSDK.PlayerEventAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass7_1_U3CHandleTriggerActionU3Eb__3_mBE8241147C2AE1DD8B78EE0B7B646334A8B30AD3 (U3CU3Ec__DisplayClass7_1_tBC31731EF0C31056D82DBD574B2F05178C1BC5FE * __this, PlayerEventAttribute_t8DCB62015FEE0EAC58B720075BAD7BA8B6A67154  ___attribute0, const RuntimeMethod* method)
{
	{
		String_t* L_0;
		L_0 = PlayerEventAttribute_GetName_m6B7B0E4890C15074D5EA65200902F2FF0D22491A_inline((PlayerEventAttribute_t8DCB62015FEE0EAC58B720075BAD7BA8B6A67154 *)(&___attribute0), /*hidden argument*/NULL);
		String_t* L_1 = __this->get_triggerAttributeName_0();
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
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
// System.Void UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m201B86EE28A741FCD8AEEF6C9BE90696C75D9073 (U3CU3Ec__DisplayClass8_0_tFFDE3CB9337715BA3168135D5042BAEDFF1BE179 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c__DisplayClass8_0::<HandleTriggerAction>b__1(UserWiseSDK.Internal.Triggers.ITriggerable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass8_0_U3CHandleTriggerActionU3Eb__1_m94356A3B0DF42D813B2D024523A22FB49741EF15 (U3CU3Ec__DisplayClass8_0_tFFDE3CB9337715BA3168135D5042BAEDFF1BE179 * __this, RuntimeObject* ___triggerable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisList_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_mF1D55797C8C6B9A6BE3787B18EF18D3082C81177_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisString_t_m650E3E6854ED4FFA1F3A5E002E72DBFC0B7AFD04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITriggerable_t6048D1AAF66C6D53CDC7D75F692C3AB1FB333174_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Find_m896D2FC9958E06E63EBA462B0F84DF8FB38C94BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m3913E4FE07DE0534B318191A3D508DBCF094A1CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mB4A325AB11A5E20ADCE6DDD6978D49D2CF0DDAD5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t0D5CA762E667CF24B1BFBE05DD585E367D814023_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1__ctor_m6AAB73662593F005CC537DA195F5B46CE38A1499_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_tB2799FC3E18B34B2340D143078E9F4D980992FF9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_1_U3CHandleTriggerActionU3Eb__3_m2D94FA2A6AE686689C0895A67B2AD182A9E2931C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_1_t9127E4A745BC257B855FE111D2BE5323F13E0747_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20BB23A674F385779F076FBBECD1E67230DE5751);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B6F140D032754F02246C343F0CE5D4A4B7A4FF2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC203279FC91536021E64CC54092300BDE54D3FEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE35A021C33238EC8095FC12ADC3E92FB384ACEBE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1EA647BFF3142DDA57C410AC7E3DF7EDF88FC1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBFED6DEA5A92748E7B7A0A236B4FBA1EFEF38C6);
		s_Il2CppMethodInitialized = true;
	}
	TriggerData_t40BC1C042F41DAE8FD2282A4205ECA50429A7EE6 * V_0 = NULL;
	String_t* V_1 = NULL;
	Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_3 = NULL;
	U3CU3Ec__DisplayClass8_1_t9127E4A745BC257B855FE111D2BE5323F13E0747 * V_4 = NULL;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * V_7 = NULL;
	Nullable_1_t0D5CA762E667CF24B1BFBE05DD585E367D814023  V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		RuntimeObject* L_0 = ___triggerable0;
		NullCheck(L_0);
		TriggerData_t40BC1C042F41DAE8FD2282A4205ECA50429A7EE6 * L_1;
		L_1 = InterfaceFuncInvoker0< TriggerData_t40BC1C042F41DAE8FD2282A4205ECA50429A7EE6 * >::Invoke(1 /* UserWiseSDK.Internal.Triggers.TriggerData UserWiseSDK.Internal.Triggers.ITriggerable::GetTriggerData() */, ITriggerable_t6048D1AAF66C6D53CDC7D75F692C3AB1FB333174_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		TriggerData_t40BC1C042F41DAE8FD2282A4205ECA50429A7EE6 * L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = TriggerData_get_Type_mC53165ADE924E5153B1EB68898C33FEE948E1E06_inline(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		TriggerData_t40BC1C042F41DAE8FD2282A4205ECA50429A7EE6 * L_4 = V_0;
		NullCheck(L_4);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_5;
		L_5 = TriggerData_get_Logic_mB5278AFADAF2C07F7DEE932374EC4ACBD75E45F4_inline(L_4, /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisString_t_m650E3E6854ED4FFA1F3A5E002E72DBFC0B7AFD04(L_5, _stringLiteral8B6F140D032754F02246C343F0CE5D4A4B7A4FF2, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisString_t_m650E3E6854ED4FFA1F3A5E002E72DBFC0B7AFD04_RuntimeMethod_var);
		V_1 = L_6;
		Region_t5CBD733F45A3A23BF304DC0D377ECBEE69EBF3E4 * L_7 = __this->get_address_of_region_0();
		String_t* L_8 = L_7->get_Name_0();
		String_t* L_9 = V_1;
		bool L_10;
		L_10 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_003c;
		}
	}
	{
		return (bool)0;
	}

IL_003c:
	{
		TriggerData_t40BC1C042F41DAE8FD2282A4205ECA50429A7EE6 * L_11 = V_0;
		NullCheck(L_11);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_12;
		L_12 = TriggerData_get_Logic_mB5278AFADAF2C07F7DEE932374EC4ACBD75E45F4_inline(L_11, /*hidden argument*/NULL);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_13 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)il2cpp_codegen_object_new(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var);
		List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B(L_13, /*hidden argument*/List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_14;
		L_14 = DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisList_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_mF1D55797C8C6B9A6BE3787B18EF18D3082C81177(L_12, _stringLiteral20BB23A674F385779F076FBBECD1E67230DE5751, L_13, /*hidden argument*/DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisList_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_mF1D55797C8C6B9A6BE3787B18EF18D3082C81177_RuntimeMethod_var);
		NullCheck(L_14);
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  L_15;
		L_15 = List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233(L_14, /*hidden argument*/List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_RuntimeMethod_var);
		V_2 = L_15;
	}

IL_0057:
	try
	{ // begin try (depth: 1)
		{
			goto IL_014b;
		}

IL_005c:
		{
			RuntimeObject * L_16;
			L_16 = Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_RuntimeMethod_var);
			V_3 = ((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)CastclassClass((RuntimeObject*)L_16, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var));
			U3CU3Ec__DisplayClass8_1_t9127E4A745BC257B855FE111D2BE5323F13E0747 * L_17 = (U3CU3Ec__DisplayClass8_1_t9127E4A745BC257B855FE111D2BE5323F13E0747 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass8_1_t9127E4A745BC257B855FE111D2BE5323F13E0747_il2cpp_TypeInfo_var);
			U3CU3Ec__DisplayClass8_1__ctor_m86E9E67B997870D6CB40286B17660564E7CB0F48(L_17, /*hidden argument*/NULL);
			V_4 = L_17;
			U3CU3Ec__DisplayClass8_1_t9127E4A745BC257B855FE111D2BE5323F13E0747 * L_18 = V_4;
			Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_19 = V_3;
			String_t* L_20;
			L_20 = DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisString_t_m650E3E6854ED4FFA1F3A5E002E72DBFC0B7AFD04(L_19, _stringLiteralF1EA647BFF3142DDA57C410AC7E3DF7EDF88FC1E, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisString_t_m650E3E6854ED4FFA1F3A5E002E72DBFC0B7AFD04_RuntimeMethod_var);
			NullCheck(L_18);
			L_18->set_triggerMetadatumName_0(L_20);
			Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_21 = V_3;
			String_t* L_22;
			L_22 = DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisString_t_m650E3E6854ED4FFA1F3A5E002E72DBFC0B7AFD04(L_21, _stringLiteralC203279FC91536021E64CC54092300BDE54D3FEB, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisString_t_m650E3E6854ED4FFA1F3A5E002E72DBFC0B7AFD04_RuntimeMethod_var);
			V_5 = L_22;
			Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_23 = V_3;
			String_t* L_24;
			L_24 = DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisString_t_m650E3E6854ED4FFA1F3A5E002E72DBFC0B7AFD04(L_23, _stringLiteralE35A021C33238EC8095FC12ADC3E92FB384ACEBE, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisString_t_m650E3E6854ED4FFA1F3A5E002E72DBFC0B7AFD04_RuntimeMethod_var);
			V_6 = L_24;
			Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_25 = V_3;
			List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_26 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)il2cpp_codegen_object_new(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var);
			List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B(L_26, /*hidden argument*/List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var);
			List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_27;
			L_27 = DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisList_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_mF1D55797C8C6B9A6BE3787B18EF18D3082C81177(L_25, _stringLiteralFBFED6DEA5A92748E7B7A0A236B4FBA1EFEF38C6, L_26, /*hidden argument*/DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisList_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_mF1D55797C8C6B9A6BE3787B18EF18D3082C81177_RuntimeMethod_var);
			V_7 = L_27;
			U3CU3Ec__DisplayClass8_1_t9127E4A745BC257B855FE111D2BE5323F13E0747 * L_28 = V_4;
			NullCheck(L_28);
			String_t* L_29 = L_28->get_triggerMetadatumName_0();
			bool L_30;
			L_30 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_29, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
			if (L_30)
			{
				goto IL_00f5;
			}
		}

IL_00d0:
		{
			String_t* L_31 = V_5;
			bool L_32;
			L_32 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_31, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
			if (L_32)
			{
				goto IL_00f5;
			}
		}

IL_00de:
		{
			String_t* L_33 = V_6;
			bool L_34;
			L_34 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_33, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
			if (L_34)
			{
				goto IL_00f5;
			}
		}

IL_00ec:
		{
			List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_35 = V_7;
			NullCheck(L_35);
			int32_t L_36;
			L_36 = List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_inline(L_35, /*hidden argument*/List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
			if (L_36)
			{
				goto IL_00fa;
			}
		}

IL_00f5:
		{
			V_9 = (bool)0;
			IL2CPP_LEAVE(0x169, FINALLY_0159);
		}

IL_00fa:
		{
			Region_t5CBD733F45A3A23BF304DC0D377ECBEE69EBF3E4 * L_37 = __this->get_address_of_region_0();
			List_1_tEB7D3C41B15A71A632C4C4CB9B05C477B19E524A * L_38 = L_37->get_Metadata_1();
			U3CU3Ec__DisplayClass8_1_t9127E4A745BC257B855FE111D2BE5323F13E0747 * L_39 = V_4;
			Predicate_1_tB2799FC3E18B34B2340D143078E9F4D980992FF9 * L_40 = (Predicate_1_tB2799FC3E18B34B2340D143078E9F4D980992FF9 *)il2cpp_codegen_object_new(Predicate_1_tB2799FC3E18B34B2340D143078E9F4D980992FF9_il2cpp_TypeInfo_var);
			Predicate_1__ctor_m6AAB73662593F005CC537DA195F5B46CE38A1499(L_40, L_39, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass8_1_U3CHandleTriggerActionU3Eb__3_m2D94FA2A6AE686689C0895A67B2AD182A9E2931C_RuntimeMethod_var), /*hidden argument*/Predicate_1__ctor_m6AAB73662593F005CC537DA195F5B46CE38A1499_RuntimeMethod_var);
			NullCheck(L_38);
			RegionMetadata_tF86DE590B11B13AAD85D1595B383D4D180ECFCAE  L_41;
			L_41 = List_1_Find_m896D2FC9958E06E63EBA462B0F84DF8FB38C94BC(L_38, L_40, /*hidden argument*/List_1_Find_m896D2FC9958E06E63EBA462B0F84DF8FB38C94BC_RuntimeMethod_var);
			Nullable_1__ctor_m3913E4FE07DE0534B318191A3D508DBCF094A1CB((Nullable_1_t0D5CA762E667CF24B1BFBE05DD585E367D814023 *)(&V_8), L_41, /*hidden argument*/Nullable_1__ctor_m3913E4FE07DE0534B318191A3D508DBCF094A1CB_RuntimeMethod_var);
			bool L_42;
			L_42 = Nullable_1_get_HasValue_mB4A325AB11A5E20ADCE6DDD6978D49D2CF0DDAD5_inline((Nullable_1_t0D5CA762E667CF24B1BFBE05DD585E367D814023 *)(&V_8), /*hidden argument*/Nullable_1_get_HasValue_mB4A325AB11A5E20ADCE6DDD6978D49D2CF0DDAD5_RuntimeMethod_var);
			if (L_42)
			{
				goto IL_012c;
			}
		}

IL_0127:
		{
			V_9 = (bool)0;
			IL2CPP_LEAVE(0x169, FINALLY_0159);
		}

IL_012c:
		{
			TriggerableContentController_t879B381534ABAAA2D45C76715E084E80D900D57D * L_43 = __this->get_U3CU3E4__this_1();
			String_t* L_44 = V_6;
			String_t* L_45 = V_5;
			Nullable_1_t0D5CA762E667CF24B1BFBE05DD585E367D814023  L_46 = V_8;
			Nullable_1_t0D5CA762E667CF24B1BFBE05DD585E367D814023  L_47 = L_46;
			RuntimeObject * L_48 = Box(Nullable_1_t0D5CA762E667CF24B1BFBE05DD585E367D814023_il2cpp_TypeInfo_var, &L_47);
			List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_49 = V_7;
			NullCheck(L_43);
			bool L_50;
			L_50 = TriggerableContentController_IsAttributableLogicalExpressionValid_m4213D6FCB46D9BB453945C6187EDBCA45B07C99D(L_43, L_44, L_45, (RuntimeObject*)L_48, L_49, /*hidden argument*/NULL);
			if (L_50)
			{
				goto IL_014b;
			}
		}

IL_0146:
		{
			V_9 = (bool)0;
			IL2CPP_LEAVE(0x169, FINALLY_0159);
		}

IL_014b:
		{
			bool L_51;
			L_51 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_RuntimeMethod_var);
			if (L_51)
			{
				goto IL_005c;
			}
		}

IL_0157:
		{
			IL2CPP_LEAVE(0x167, FINALLY_0159);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0159;
	}

FINALLY_0159:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(&V_2), /*hidden argument*/Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_RuntimeMethod_var);
		IL2CPP_END_FINALLY(345)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(345)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x169, IL_0169)
		IL2CPP_JUMP_TBL(0x167, IL_0167)
	}

IL_0167:
	{
		return (bool)1;
	}

IL_0169:
	{
		bool L_52 = V_9;
		return L_52;
	}
}
// System.Void UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c__DisplayClass8_0::<HandleTriggerAction>b__2(UserWiseSDK.Internal.Triggers.ITriggerable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0_U3CHandleTriggerActionU3Eb__2_mFD62B4788F69931FE3DE65EBD3049A0DA4D265A5 (U3CU3Ec__DisplayClass8_0_tFFDE3CB9337715BA3168135D5042BAEDFF1BE179 * __this, RuntimeObject* ___triggerable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6A1C4A27FCE1C8E658902185D1D8713EB33C4562_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TriggerableContentController_t879B381534ABAAA2D45C76715E084E80D900D57D * L_0 = __this->get_U3CU3E4__this_1();
		RuntimeObject* L_1 = ___triggerable0;
		NullCheck(L_0);
		TriggerableContentController_TriggerTriggerable_m304704A453EC38B3FF77950942E56D6F99945848(L_0, L_1, /*hidden argument*/NULL);
		List_1_t92B053769F1F29417E25AE8F630FE7F9B7911437 * L_2 = __this->get_triggeredTriggerables_2();
		RuntimeObject* L_3 = ___triggerable0;
		NullCheck(L_2);
		List_1_Add_m6A1C4A27FCE1C8E658902185D1D8713EB33C4562(L_2, L_3, /*hidden argument*/List_1_Add_m6A1C4A27FCE1C8E658902185D1D8713EB33C4562_RuntimeMethod_var);
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
// System.Void UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c__DisplayClass8_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_1__ctor_m86E9E67B997870D6CB40286B17660564E7CB0F48 (U3CU3Ec__DisplayClass8_1_t9127E4A745BC257B855FE111D2BE5323F13E0747 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UserWiseSDK.Internal.Triggers.TriggerableContentController/<>c__DisplayClass8_1::<HandleTriggerAction>b__3(UserWiseSDK.RegionMetadata)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass8_1_U3CHandleTriggerActionU3Eb__3_m2D94FA2A6AE686689C0895A67B2AD182A9E2931C (U3CU3Ec__DisplayClass8_1_t9127E4A745BC257B855FE111D2BE5323F13E0747 * __this, RegionMetadata_tF86DE590B11B13AAD85D1595B383D4D180ECFCAE  ___metadata0, const RuntimeMethod* method)
{
	{
		String_t* L_0;
		L_0 = RegionMetadata_GetName_mBED75A69DD35C55C998043BA18B41CF4415612F9_inline((RegionMetadata_tF86DE590B11B13AAD85D1595B383D4D180ECFCAE *)(&___metadata0), /*hidden argument*/NULL);
		String_t* L_1 = __this->get_triggerMetadatumName_0();
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
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
// System.Void UserWiseSDK.Unity.UWHandlerGameObject/UWProxyEventHandler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UWProxyEventHandler_Start_m10D65B69394FD0C19CBF7875595D98C080DDBABE (UWProxyEventHandler_t8164F2CF63723BF90005F32FF7216645A65428E9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UWHandlerGameObject_t36CEA348DF9C545316FA3A4E94C3DEFDEC5C0F65_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UWHandlerGameObject_t36CEA348DF9C545316FA3A4E94C3DEFDEC5C0F65_il2cpp_TypeInfo_var);
		UWHandlerGameObject_AttachGameObjectToNativeListener_m5FE802A8CCFCBB2799BEC5F5BFCFBC6BD27295AF(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UserWiseSDK.Unity.UWHandlerGameObject/UWProxyEventHandler::OnSurveyEntered(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UWProxyEventHandler_OnSurveyEntered_m1A91C549CCDEA39D9F9D152FE5FE538400FA5BCF (UWProxyEventHandler_t8164F2CF63723BF90005F32FF7216645A65428E9 * __this, String_t* ___responseId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47_il2cpp_TypeInfo_var);
		UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47 * L_0;
		L_0 = UserWise_get_INSTANCE_m364CD6F590656E79E64CCEBEE41CB6EAE39C0939(/*hidden argument*/NULL);
		NullCheck(L_0);
		SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A * L_1;
		L_1 = UserWise_get_SurveysModule_m54534AEBE0A8D15A50887902CD79D87582350D2F_inline(L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___responseId0;
		NullCheck(L_1);
		SurveysModule_EmitSurveyEntered_m9F5E4F1427084EC1B2A14455E258F16F02EFF4F4(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UserWiseSDK.Unity.UWHandlerGameObject/UWProxyEventHandler::OnSurveyEnterFailed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UWProxyEventHandler_OnSurveyEnterFailed_m23C7C007706DC1814461D53E3553D083B0A0CB44 (UWProxyEventHandler_t8164F2CF63723BF90005F32FF7216645A65428E9 * __this, String_t* ___responseId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47_il2cpp_TypeInfo_var);
		UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47 * L_0;
		L_0 = UserWise_get_INSTANCE_m364CD6F590656E79E64CCEBEE41CB6EAE39C0939(/*hidden argument*/NULL);
		NullCheck(L_0);
		SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A * L_1;
		L_1 = UserWise_get_SurveysModule_m54534AEBE0A8D15A50887902CD79D87582350D2F_inline(L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___responseId0;
		NullCheck(L_1);
		SurveysModule_EmitSurveyEnterFailed_m9D075716B6EF536A2EC19EABEEED2B0BD0AF645F(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UserWiseSDK.Unity.UWHandlerGameObject/UWProxyEventHandler::OnSurveyClosed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UWProxyEventHandler_OnSurveyClosed_m2C5E8506FEE9F439B260FF27C80E06EB2781CE39 (UWProxyEventHandler_t8164F2CF63723BF90005F32FF7216645A65428E9 * __this, String_t* ___responseId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47_il2cpp_TypeInfo_var);
		UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47 * L_0;
		L_0 = UserWise_get_INSTANCE_m364CD6F590656E79E64CCEBEE41CB6EAE39C0939(/*hidden argument*/NULL);
		NullCheck(L_0);
		SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A * L_1;
		L_1 = UserWise_get_SurveysModule_m54534AEBE0A8D15A50887902CD79D87582350D2F_inline(L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___responseId0;
		NullCheck(L_1);
		SurveysModule_EmitSurveyClosed_m41A8AAAD75A46036BDEAE980FE3C58E21703BACE(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UserWiseSDK.Unity.UWHandlerGameObject/UWProxyEventHandler::OnSurveyCompleted(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UWProxyEventHandler_OnSurveyCompleted_m73663129029AFE5E79F08BC5D83F94F39CD47B76 (UWProxyEventHandler_t8164F2CF63723BF90005F32FF7216645A65428E9 * __this, String_t* ___responseId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47_il2cpp_TypeInfo_var);
		UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47 * L_0;
		L_0 = UserWise_get_INSTANCE_m364CD6F590656E79E64CCEBEE41CB6EAE39C0939(/*hidden argument*/NULL);
		NullCheck(L_0);
		SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A * L_1;
		L_1 = UserWise_get_SurveysModule_m54534AEBE0A8D15A50887902CD79D87582350D2F_inline(L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___responseId0;
		NullCheck(L_1);
		SurveysModule_EmitSurveyCompleted_m9E7945EE3701232DDD0D5C497E211011336533EB(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UserWiseSDK.Unity.UWHandlerGameObject/UWProxyEventHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UWProxyEventHandler__ctor_mE2B416221B1630228D31F1CFF8E3582CFCA1C3CA (UWProxyEventHandler_t8164F2CF63723BF90005F32FF7216645A65428E9 * __this, const RuntimeMethod* method)
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
// System.Void UserWiseSDK.UserWise/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m1275ED08C7D0F522EC08534DE2F09D837C93F3E2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t30C593BF3D9A31C5EA7C390D973DA18D86183222_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t30C593BF3D9A31C5EA7C390D973DA18D86183222 * L_0 = (U3CU3Ec_t30C593BF3D9A31C5EA7C390D973DA18D86183222 *)il2cpp_codegen_object_new(U3CU3Ec_t30C593BF3D9A31C5EA7C390D973DA18D86183222_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m5ABAD22665692BD4F7DB8BC23B5DAE055BD42121(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t30C593BF3D9A31C5EA7C390D973DA18D86183222_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t30C593BF3D9A31C5EA7C390D973DA18D86183222_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UserWiseSDK.UserWise/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5ABAD22665692BD4F7DB8BC23B5DAE055BD42121 (U3CU3Ec_t30C593BF3D9A31C5EA7C390D973DA18D86183222 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UserWiseSDK.UserWise UserWiseSDK.UserWise/<>c::<.cctor>b__84_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47 * U3CU3Ec_U3C_cctorU3Eb__84_0_m5537610BA7D4312C0AF8A04A4189ED6609223170 (U3CU3Ec_t30C593BF3D9A31C5EA7C390D973DA18D86183222 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionData_tA252CE97293037E48AE88E446107D0BBFF599001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SessionData_tA252CE97293037E48AE88E446107D0BBFF599001 * L_0 = (SessionData_tA252CE97293037E48AE88E446107D0BBFF599001 *)il2cpp_codegen_object_new(SessionData_tA252CE97293037E48AE88E446107D0BBFF599001_il2cpp_TypeInfo_var);
		SessionData__ctor_mD397643AA00B40DD9D004E8826C943D225E27AD6(L_0, /*hidden argument*/NULL);
		UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47 * L_1 = (UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47 *)il2cpp_codegen_object_new(UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47_il2cpp_TypeInfo_var);
		UserWise__ctor_mC1343EF7F26E19681D618223A4E688A8481F667B(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
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
// System.Void UserWiseSDK.UserWise/<>c__DisplayClass71_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass71_0__ctor_m0AAF10E59C08DBAE434871D45FFC70627EBBAD3D (U3CU3Ec__DisplayClass71_0_tE8E7523B9BFF87C3D354E48684A61D61AA9033DC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UserWiseSDK.UserWise/<>c__DisplayClass71_0::<GetMedia>b__0(UserWiseSDK.Internal.API.APIResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass71_0_U3CGetMediaU3Eb__0_m03DB332E935A2003A8DA636756FD15175C64F64C (U3CU3Ec__DisplayClass71_0_tE8E7523B9BFF87C3D354E48684A61D61AA9033DC * __this, APIResponse_t04D6883FBCAF2557AC604DFC943CD759DE8556C8 * ___response0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_Invoke_m3138C8470F2E807600E5B1B36D4BD259DEDDB6DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisDictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_m82627B9461A9F7E3BD090C37A69A9C392F4CA138_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictSerializable_1_t0C1905F68BCBC7CE02D817D1EED20D39CA857229_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MediaInfo_tD5FD6440EA9A916214A52B032E95F87043900686_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_0 = NULL;
	MediaInfo_tD5FD6440EA9A916214A52B032E95F87043900686 * V_1 = NULL;
	Action_2_tC9B6AFEE9B1498523B4F9EBDBC90FA84E9EB9393 * G_B3_0 = NULL;
	Action_2_tC9B6AFEE9B1498523B4F9EBDBC90FA84E9EB9393 * G_B2_0 = NULL;
	Action_2_tC9B6AFEE9B1498523B4F9EBDBC90FA84E9EB9393 * G_B6_0 = NULL;
	Action_2_tC9B6AFEE9B1498523B4F9EBDBC90FA84E9EB9393 * G_B5_0 = NULL;
	{
		APIResponse_t04D6883FBCAF2557AC604DFC943CD759DE8556C8 * L_0 = ___response0;
		NullCheck(L_0);
		bool L_1;
		L_1 = APIResponse_IsError_m63697CBE18F9F784F4CFCD41124EF3C175952D36(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		Action_2_tC9B6AFEE9B1498523B4F9EBDBC90FA84E9EB9393 * L_2 = __this->get_handler_0();
		Action_2_tC9B6AFEE9B1498523B4F9EBDBC90FA84E9EB9393 * L_3 = L_2;
		G_B2_0 = L_3;
		if (L_3)
		{
			G_B3_0 = L_3;
			goto IL_0014;
		}
	}
	{
		goto IL_001b;
	}

IL_0014:
	{
		NullCheck(G_B3_0);
		Action_2_Invoke_m3138C8470F2E807600E5B1B36D4BD259DEDDB6DD(G_B3_0, (bool)0, (MediaInfo_tD5FD6440EA9A916214A52B032E95F87043900686 *)NULL, /*hidden argument*/Action_2_Invoke_m3138C8470F2E807600E5B1B36D4BD259DEDDB6DD_RuntimeMethod_var);
	}

IL_001b:
	{
		APIResponse_t04D6883FBCAF2557AC604DFC943CD759DE8556C8 * L_4 = ___response0;
		NullCheck(L_4);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_5;
		L_5 = APIResponse_GetParsedJson_m41C7B08DD0BEA034C9E6A566F7FD8B543237E491(L_4, /*hidden argument*/NULL);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_6 = (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)il2cpp_codegen_object_new(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63(L_6, /*hidden argument*/Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_7;
		L_7 = DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisDictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_m82627B9461A9F7E3BD090C37A69A9C392F4CA138(L_5, _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469, L_6, /*hidden argument*/DictionaryExtensionsClass_GetValueOrDefault_TisString_t_TisDictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_m82627B9461A9F7E3BD090C37A69A9C392F4CA138_RuntimeMethod_var);
		V_0 = L_7;
		MediaInfo_tD5FD6440EA9A916214A52B032E95F87043900686 * L_8 = (MediaInfo_tD5FD6440EA9A916214A52B032E95F87043900686 *)il2cpp_codegen_object_new(MediaInfo_tD5FD6440EA9A916214A52B032E95F87043900686_il2cpp_TypeInfo_var);
		MediaInfo__ctor_m7697FA000B184AC4582787F05D4FE31B2C0F7D83(L_8, /*hidden argument*/NULL);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_9 = V_0;
		NullCheck(L_8);
		MediaInfo_tD5FD6440EA9A916214A52B032E95F87043900686 * L_10;
		L_10 = InterfaceFuncInvoker1< MediaInfo_tD5FD6440EA9A916214A52B032E95F87043900686 *, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * >::Invoke(1 /* T UserWiseSDK.IDictSerializable`1<UserWiseSDK.MediaInfo>::Deserialize(System.Collections.Generic.Dictionary`2<System.String,System.Object>) */, IDictSerializable_1_t0C1905F68BCBC7CE02D817D1EED20D39CA857229_il2cpp_TypeInfo_var, L_8, L_9);
		V_1 = L_10;
		Action_2_tC9B6AFEE9B1498523B4F9EBDBC90FA84E9EB9393 * L_11 = __this->get_handler_0();
		Action_2_tC9B6AFEE9B1498523B4F9EBDBC90FA84E9EB9393 * L_12 = L_11;
		G_B5_0 = L_12;
		if (L_12)
		{
			G_B6_0 = L_12;
			goto IL_0048;
		}
	}
	{
		return;
	}

IL_0048:
	{
		MediaInfo_tD5FD6440EA9A916214A52B032E95F87043900686 * L_13 = V_1;
		NullCheck(G_B6_0);
		Action_2_Invoke_m3138C8470F2E807600E5B1B36D4BD259DEDDB6DD(G_B6_0, (bool)1, L_13, /*hidden argument*/Action_2_Invoke_m3138C8470F2E807600E5B1B36D4BD259DEDDB6DD_RuntimeMethod_var);
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
// System.Void UserWiseSDK.UserWise/<>c__DisplayClass72_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass72_0__ctor_mA12DE6EB465EDB4977001CA1C5DEC7F8526A934E (U3CU3Ec__DisplayClass72_0_t6FF290DA27F97ED6AF22D3C3154ED6348D79F9BD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UserWiseSDK.UserWise/<>c__DisplayClass72_0::<GetRawDataFromMediaId>b__0(System.Boolean,UserWiseSDK.MediaInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass72_0_U3CGetRawDataFromMediaIdU3Eb__0_mD2C8DDDB14E66140FEA582E412EF155FE461FCF7 (U3CU3Ec__DisplayClass72_0_t6FF290DA27F97ED6AF22D3C3154ED6348D79F9BD * __this, bool ___successful0, MediaInfo_tD5FD6440EA9A916214A52B032E95F87043900686 * ___mediaInfo1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_Invoke_mA5259ECBF33EBA0C89A44BD230DC3223C41C0EDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_t6AE767DB2F0E371CDCC9FC496C39B598B1D20B3E * G_B4_0 = NULL;
	Action_2_t6AE767DB2F0E371CDCC9FC496C39B598B1D20B3E * G_B3_0 = NULL;
	{
		bool L_0 = ___successful0;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47 * L_1 = __this->get_U3CU3E4__this_0();
		MediaInfo_tD5FD6440EA9A916214A52B032E95F87043900686 * L_2 = ___mediaInfo1;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = MediaInfo_get_Url_m7ED1A79426EB043653C4E2D6A0DA028E374887C7_inline(L_2, /*hidden argument*/NULL);
		bool L_4 = __this->get_ignoreCache_1();
		Action_2_t6AE767DB2F0E371CDCC9FC496C39B598B1D20B3E * L_5 = __this->get_handler_2();
		NullCheck(L_1);
		UserWise_GetRawDataFromUrl_m64BDB1AEB30E9063AA15CCDB36F02CBCA5B98F75(L_1, L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}

IL_0021:
	{
		Action_2_t6AE767DB2F0E371CDCC9FC496C39B598B1D20B3E * L_6 = __this->get_handler_2();
		Action_2_t6AE767DB2F0E371CDCC9FC496C39B598B1D20B3E * L_7 = L_6;
		G_B3_0 = L_7;
		if (L_7)
		{
			G_B4_0 = L_7;
			goto IL_002c;
		}
	}
	{
		return;
	}

IL_002c:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(G_B4_0);
		Action_2_Invoke_mA5259ECBF33EBA0C89A44BD230DC3223C41C0EDC(G_B4_0, (bool)0, L_8, /*hidden argument*/Action_2_Invoke_mA5259ECBF33EBA0C89A44BD230DC3223C41C0EDC_RuntimeMethod_var);
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
// System.Void UserWiseSDK.UserWise/<>c__DisplayClass73_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass73_0__ctor_m14F5D11234E65631A81A824AB35977A4EF936D43 (U3CU3Ec__DisplayClass73_0_tC6DD8E3ECD116B9E73C70616D961173597483F0E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UserWiseSDK.UserWise/<>c__DisplayClass73_0::<GetRawDataFromUrl>b__0(UserWiseSDK.Internal.API.APIResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass73_0_U3CGetRawDataFromUrlU3Eb__0_m0E5DE7556B01C0B6899C0DE8E4AC750F6E2571C7 (U3CU3Ec__DisplayClass73_0_tC6DD8E3ECD116B9E73C70616D961173597483F0E * __this, APIResponse_t04D6883FBCAF2557AC604DFC943CD759DE8556C8 * ___response0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_Invoke_mA5259ECBF33EBA0C89A44BD230DC3223C41C0EDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	Action_2_t6AE767DB2F0E371CDCC9FC496C39B598B1D20B3E * G_B3_0 = NULL;
	Action_2_t6AE767DB2F0E371CDCC9FC496C39B598B1D20B3E * G_B2_0 = NULL;
	Action_2_t6AE767DB2F0E371CDCC9FC496C39B598B1D20B3E * G_B8_0 = NULL;
	Action_2_t6AE767DB2F0E371CDCC9FC496C39B598B1D20B3E * G_B7_0 = NULL;
	Action_2_t6AE767DB2F0E371CDCC9FC496C39B598B1D20B3E * G_B11_0 = NULL;
	Action_2_t6AE767DB2F0E371CDCC9FC496C39B598B1D20B3E * G_B10_0 = NULL;
	{
		APIResponse_t04D6883FBCAF2557AC604DFC943CD759DE8556C8 * L_0 = ___response0;
		NullCheck(L_0);
		bool L_1;
		L_1 = APIResponse_IsError_m63697CBE18F9F784F4CFCD41124EF3C175952D36(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		Action_2_t6AE767DB2F0E371CDCC9FC496C39B598B1D20B3E * L_2 = __this->get_handler_0();
		Action_2_t6AE767DB2F0E371CDCC9FC496C39B598B1D20B3E * L_3 = L_2;
		G_B2_0 = L_3;
		if (L_3)
		{
			G_B3_0 = L_3;
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(G_B3_0);
		Action_2_Invoke_mA5259ECBF33EBA0C89A44BD230DC3223C41C0EDC(G_B3_0, (bool)0, L_4, /*hidden argument*/Action_2_Invoke_mA5259ECBF33EBA0C89A44BD230DC3223C41C0EDC_RuntimeMethod_var);
		return;
	}

IL_0020:
	{
		APIResponse_t04D6883FBCAF2557AC604DFC943CD759DE8556C8 * L_5 = ___response0;
		NullCheck(L_5);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6;
		L_6 = APIResponse_GetRawBytes_mE7286F4DC53187F27B47DA06D6BB3C35C5C387F4(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = V_0;
		if (!L_7)
		{
			goto IL_002e;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = V_0;
		NullCheck(L_8);
		if ((((RuntimeArray*)L_8)->max_length))
		{
			goto IL_0046;
		}
	}

IL_002e:
	{
		Action_2_t6AE767DB2F0E371CDCC9FC496C39B598B1D20B3E * L_9 = __this->get_handler_0();
		Action_2_t6AE767DB2F0E371CDCC9FC496C39B598B1D20B3E * L_10 = L_9;
		G_B7_0 = L_10;
		if (L_10)
		{
			G_B8_0 = L_10;
			goto IL_0039;
		}
	}
	{
		return;
	}

IL_0039:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(G_B8_0);
		Action_2_Invoke_mA5259ECBF33EBA0C89A44BD230DC3223C41C0EDC(G_B8_0, (bool)0, L_11, /*hidden argument*/Action_2_Invoke_mA5259ECBF33EBA0C89A44BD230DC3223C41C0EDC_RuntimeMethod_var);
		return;
	}

IL_0046:
	{
		String_t* L_12 = __this->get_mediaPath_1();
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_13;
		L_13 = Path_GetDirectoryName_mFF7B47C1E2D3A3FD4B769257808A619D7117BEDE(L_12, /*hidden argument*/NULL);
		DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_14;
		L_14 = Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A(L_13, /*hidden argument*/NULL);
		String_t* L_15 = __this->get_mediaPath_1();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = V_0;
		File_WriteAllBytes_m1E88860F73A6A2150FAB97D9BF3F44596F06036F(L_15, L_16, /*hidden argument*/NULL);
		Action_2_t6AE767DB2F0E371CDCC9FC496C39B598B1D20B3E * L_17 = __this->get_handler_0();
		Action_2_t6AE767DB2F0E371CDCC9FC496C39B598B1D20B3E * L_18 = L_17;
		G_B10_0 = L_18;
		if (L_18)
		{
			G_B11_0 = L_18;
			goto IL_006e;
		}
	}
	{
		return;
	}

IL_006e:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_19 = V_0;
		NullCheck(G_B11_0);
		Action_2_Invoke_mA5259ECBF33EBA0C89A44BD230DC3223C41C0EDC(G_B11_0, (bool)1, L_19, /*hidden argument*/Action_2_Invoke_mA5259ECBF33EBA0C89A44BD230DC3223C41C0EDC_RuntimeMethod_var);
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
// System.Void UserWiseSDK.UserWise/<>c__DisplayClass74_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass74_0__ctor_m7D0BFCFFDC7708E90577210CAA756BC00E88AA7C (U3CU3Ec__DisplayClass74_0_tC4503649DCCA22323FC3EC0F35A7ED9931278163 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UserWiseSDK.UserWise/<>c__DisplayClass74_0::<AssignEvent>b__0(UserWiseSDK.Internal.Triggers.ITriggerable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass74_0_U3CAssignEventU3Eb__0_mC5287782A1AB4251AAC3A986E6F4B2F8BBEA4B9B (U3CU3Ec__DisplayClass74_0_tC4503649DCCA22323FC3EC0F35A7ED9931278163 * __this, RuntimeObject* ___triggerable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITriggerable_t6048D1AAF66C6D53CDC7D75F692C3AB1FB333174_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = __this->get_triggeredImpressionIds_0();
		RuntimeObject* L_1 = ___triggerable0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UserWiseSDK.Internal.Triggers.ITriggerable::GetTriggerableImpressionId() */, ITriggerable_t6048D1AAF66C6D53CDC7D75F692C3AB1FB333174_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_0);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_0, L_2, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		return;
	}
}
// System.Void UserWiseSDK.UserWise/<>c__DisplayClass74_0::<AssignEvent>b__1(UserWiseSDK.Internal.API.APIResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass74_0_U3CAssignEventU3Eb__1_m4335B21EBDA73E2D6E3AFBE05BAE8432F2E52CA4 (U3CU3Ec__DisplayClass74_0_tC4503649DCCA22323FC3EC0F35A7ED9931278163 * __this, APIResponse_t04D6883FBCAF2557AC604DFC943CD759DE8556C8 * ___response0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * G_B2_0 = NULL;
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * G_B1_0 = NULL;
	{
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_0 = __this->get_callback_1();
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		APIResponse_t04D6883FBCAF2557AC604DFC943CD759DE8556C8 * L_2 = ___response0;
		NullCheck(L_2);
		bool L_3;
		L_3 = APIResponse_IsError_m63697CBE18F9F784F4CFCD41124EF3C175952D36(L_2, /*hidden argument*/NULL);
		NullCheck(G_B2_0);
		Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5(G_B2_0, (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0), /*hidden argument*/Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
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
// System.Void UserWiseSDK.UserWise/<>c__DisplayClass75_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass75_0__ctor_m0A032116CFE094FE825BB32C85A4EB8B932B2832 (U3CU3Ec__DisplayClass75_0_t5F4373B0C09706AB93E576B8CCCBEC11F9D414B6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UserWiseSDK.UserWise/<>c__DisplayClass75_0::<SetAttributes>b__0(UserWiseSDK.PlayerAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass75_0_U3CSetAttributesU3Eb__0_m93DD6F06E35F14986B1740EF90F2DEFD3EFEAA5B (U3CU3Ec__DisplayClass75_0_t5F4373B0C09706AB93E576B8CCCBEC11F9D414B6 * __this, PlayerAttribute_tFEE261801264075772E64E9C9823AE73B88747BB  ___attribute0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mA5A36B6CBCF2BFB650C6BFA51ECCFDB0AE976506_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t8B9D154E6AC4F2C06ED9B8727E61F426060B7170_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ForEach_m875ED8D875B2C3BFBAF73C83492173CEBF00014D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass75_0_U3CSetAttributesU3Eb__2_m3D1F3FCA06FC3ABE9D2A816C870B5C368710A0AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t8B9D154E6AC4F2C06ED9B8727E61F426060B7170 * V_0 = NULL;
	Action_1_t8B9D154E6AC4F2C06ED9B8727E61F426060B7170 * G_B2_0 = NULL;
	List_1_t92B053769F1F29417E25AE8F630FE7F9B7911437 * G_B2_1 = NULL;
	Action_1_t8B9D154E6AC4F2C06ED9B8727E61F426060B7170 * G_B1_0 = NULL;
	List_1_t92B053769F1F29417E25AE8F630FE7F9B7911437 * G_B1_1 = NULL;
	{
		UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		TriggerableContentController_t879B381534ABAAA2D45C76715E084E80D900D57D * L_1 = L_0->get_triggerableContentController_15();
		PlayerAttribute_tFEE261801264075772E64E9C9823AE73B88747BB  L_2 = ___attribute0;
		NullCheck(L_1);
		List_1_t92B053769F1F29417E25AE8F630FE7F9B7911437 * L_3;
		L_3 = TriggerableContentController_HandleTriggerAction_mDCC9A0457F3CE13C8BC4BF3DEC8545ACBB59BE2D(L_1, L_2, /*hidden argument*/NULL);
		Action_1_t8B9D154E6AC4F2C06ED9B8727E61F426060B7170 * L_4 = __this->get_U3CU3E9__2_3();
		Action_1_t8B9D154E6AC4F2C06ED9B8727E61F426060B7170 * L_5 = L_4;
		G_B1_0 = L_5;
		G_B1_1 = L_3;
		if (L_5)
		{
			G_B2_0 = L_5;
			G_B2_1 = L_3;
			goto IL_0030;
		}
	}
	{
		Action_1_t8B9D154E6AC4F2C06ED9B8727E61F426060B7170 * L_6 = (Action_1_t8B9D154E6AC4F2C06ED9B8727E61F426060B7170 *)il2cpp_codegen_object_new(Action_1_t8B9D154E6AC4F2C06ED9B8727E61F426060B7170_il2cpp_TypeInfo_var);
		Action_1__ctor_mA5A36B6CBCF2BFB650C6BFA51ECCFDB0AE976506(L_6, __this, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass75_0_U3CSetAttributesU3Eb__2_m3D1F3FCA06FC3ABE9D2A816C870B5C368710A0AA_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mA5A36B6CBCF2BFB650C6BFA51ECCFDB0AE976506_RuntimeMethod_var);
		Action_1_t8B9D154E6AC4F2C06ED9B8727E61F426060B7170 * L_7 = L_6;
		V_0 = L_7;
		__this->set_U3CU3E9__2_3(L_7);
		Action_1_t8B9D154E6AC4F2C06ED9B8727E61F426060B7170 * L_8 = V_0;
		G_B2_0 = L_8;
		G_B2_1 = G_B1_1;
	}

IL_0030:
	{
		NullCheck(G_B2_1);
		List_1_ForEach_m875ED8D875B2C3BFBAF73C83492173CEBF00014D(G_B2_1, G_B2_0, /*hidden argument*/List_1_ForEach_m875ED8D875B2C3BFBAF73C83492173CEBF00014D_RuntimeMethod_var);
		return;
	}
}
// System.Void UserWiseSDK.UserWise/<>c__DisplayClass75_0::<SetAttributes>b__2(UserWiseSDK.Internal.Triggers.ITriggerable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass75_0_U3CSetAttributesU3Eb__2_m3D1F3FCA06FC3ABE9D2A816C870B5C368710A0AA (U3CU3Ec__DisplayClass75_0_t5F4373B0C09706AB93E576B8CCCBEC11F9D414B6 * __this, RuntimeObject* ___triggerable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITriggerable_t6048D1AAF66C6D53CDC7D75F692C3AB1FB333174_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = __this->get_triggeredImpressionIds_1();
		RuntimeObject* L_1 = ___triggerable0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UserWiseSDK.Internal.Triggers.ITriggerable::GetTriggerableImpressionId() */, ITriggerable_t6048D1AAF66C6D53CDC7D75F692C3AB1FB333174_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_0);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_0, L_2, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		return;
	}
}
// System.Void UserWiseSDK.UserWise/<>c__DisplayClass75_0::<SetAttributes>b__1(UserWiseSDK.Internal.API.APIResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass75_0_U3CSetAttributesU3Eb__1_m673AA8F06B36AD1148909198391B4338677EAC23 (U3CU3Ec__DisplayClass75_0_t5F4373B0C09706AB93E576B8CCCBEC11F9D414B6 * __this, APIResponse_t04D6883FBCAF2557AC604DFC943CD759DE8556C8 * ___response0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * G_B2_0 = NULL;
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * G_B1_0 = NULL;
	{
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_0 = __this->get_callback_2();
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		APIResponse_t04D6883FBCAF2557AC604DFC943CD759DE8556C8 * L_2 = ___response0;
		NullCheck(L_2);
		bool L_3;
		L_3 = APIResponse_IsError_m63697CBE18F9F784F4CFCD41124EF3C175952D36(L_2, /*hidden argument*/NULL);
		NullCheck(G_B2_0);
		Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5(G_B2_0, (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0), /*hidden argument*/Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
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
// System.Void UserWiseSDK.UserWise/<>c__DisplayClass76_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass76_0__ctor_m7DE395E7017EAB2DB5FB696D2630FA7263C7A313 (U3CU3Ec__DisplayClass76_0_t056ADACB6A54861ADC969AB31BB7698303319F19 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UserWiseSDK.UserWise/<>c__DisplayClass76_0::<TransitionToRegion>b__0(UserWiseSDK.Internal.Triggers.ITriggerable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass76_0_U3CTransitionToRegionU3Eb__0_m2D57C7ACC879FE811C70E709672CB57BA0A8A952 (U3CU3Ec__DisplayClass76_0_t056ADACB6A54861ADC969AB31BB7698303319F19 * __this, RuntimeObject* ___triggerable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITriggerable_t6048D1AAF66C6D53CDC7D75F692C3AB1FB333174_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = __this->get_triggeredImpressionIds_0();
		RuntimeObject* L_1 = ___triggerable0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UserWiseSDK.Internal.Triggers.ITriggerable::GetTriggerableImpressionId() */, ITriggerable_t6048D1AAF66C6D53CDC7D75F692C3AB1FB333174_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_0);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_0, L_2, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		return;
	}
}
// System.Void UserWiseSDK.UserWise/<>c__DisplayClass76_0::<TransitionToRegion>b__1(UserWiseSDK.Internal.API.APIResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass76_0_U3CTransitionToRegionU3Eb__1_m3A7667102467772B57525BE387D4BBF3A9729ED4 (U3CU3Ec__DisplayClass76_0_t056ADACB6A54861ADC969AB31BB7698303319F19 * __this, APIResponse_t04D6883FBCAF2557AC604DFC943CD759DE8556C8 * ___response0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * G_B2_0 = NULL;
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * G_B1_0 = NULL;
	{
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_0 = __this->get_callback_1();
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		APIResponse_t04D6883FBCAF2557AC604DFC943CD759DE8556C8 * L_2 = ___response0;
		NullCheck(L_2);
		bool L_3;
		L_3 = APIResponse_IsError_m63697CBE18F9F784F4CFCD41124EF3C175952D36(L_2, /*hidden argument*/NULL);
		NullCheck(G_B2_0);
		Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5(G_B2_0, (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0), /*hidden argument*/Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
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
// System.Void UserWiseSDK.Variables.VariablesModule/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m63068C269F24EEC7607650FE539379F7C69F0D52 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t5FAF232BE15C02F5CE897D67871FB54B80E8E5B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t5FAF232BE15C02F5CE897D67871FB54B80E8E5B5 * L_0 = (U3CU3Ec_t5FAF232BE15C02F5CE897D67871FB54B80E8E5B5 *)il2cpp_codegen_object_new(U3CU3Ec_t5FAF232BE15C02F5CE897D67871FB54B80E8E5B5_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m9A808DE8420FEA32F9ACE0D0763927E70A399051(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t5FAF232BE15C02F5CE897D67871FB54B80E8E5B5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5FAF232BE15C02F5CE897D67871FB54B80E8E5B5_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UserWiseSDK.Variables.VariablesModule/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9A808DE8420FEA32F9ACE0D0763927E70A399051 (U3CU3Ec_t5FAF232BE15C02F5CE897D67871FB54B80E8E5B5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UserWiseSDK.Variables.VariablesModule/<>c::<SendVariableDefinitionsToServer>b__17_0(UserWiseSDK.Internal.API.APIResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CSendVariableDefinitionsToServerU3Eb__17_0_m2D3C856EB15CCB936BFEA35CFEDAB2A6698CA2B7 (U3CU3Ec_t5FAF232BE15C02F5CE897D67871FB54B80E8E5B5 * __this, APIResponse_t04D6883FBCAF2557AC604DFC943CD759DE8556C8 * ___response0, const RuntimeMethod* method)
{
	{
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Message_get_Id_m4B5858F7ACE7E9FF0C7B35E3C7F29A4EEB6ED61E_inline (Message_t994A7D958E14F464F785BFB6864280005103A91D * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CIdU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OffersModule_set_IsInitializationActive_mCD6F02B9E79B798028C58309DFAD133DF2D3C922_inline (OffersModule_t6F8C5C3B400904E3CBFB8EC6ACC9D02C8FD81737 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CIsInitializationActiveU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TriggerData_get_Type_mC53165ADE924E5153B1EB68898C33FEE948E1E06_inline (TriggerData_t40BC1C042F41DAE8FD2282A4205ECA50429A7EE6 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CTypeU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * TriggerData_get_Logic_mB5278AFADAF2C07F7DEE932374EC4ACBD75E45F4_inline (TriggerData_t40BC1C042F41DAE8FD2282A4205ECA50429A7EE6 * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_0 = __this->get_U3CLogicU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PlayerAttribute_GetName_m7EFB255927A35FD6D777C4E861F37303841F2435_inline (PlayerAttribute_tFEE261801264075772E64E9C9823AE73B88747BB * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_Name_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PlayerEventAttribute_GetName_m6B7B0E4890C15074D5EA65200902F2FF0D22491A_inline (PlayerEventAttribute_t8DCB62015FEE0EAC58B720075BAD7BA8B6A67154 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_Name_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RegionMetadata_GetName_mBED75A69DD35C55C998043BA18B41CF4415612F9_inline (RegionMetadata_tF86DE590B11B13AAD85D1595B383D4D180ECFCAE * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_Name_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A * UserWise_get_SurveysModule_m54534AEBE0A8D15A50887902CD79D87582350D2F_inline (UserWise_t08A2247B98BC82EDE122CBFE5F9D85171B6F0E47 * __this, const RuntimeMethod* method)
{
	{
		SurveysModule_t4DFEB3F25128D6CBE24CA200D3E2A4A364C4750A * L_0 = __this->get_U3CSurveysModuleU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MediaInfo_get_Url_m7ED1A79426EB043653C4E2D6A0DA028E374887C7_inline (MediaInfo_tD5FD6440EA9A916214A52B032E95F87043900686 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CUrlU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_0 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )__this->get_current_3();
		return (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC0848B1E8B9FCB262EA335141C667FFCFBBFBCD0_gshared_inline (Nullable_1_tC4FB4BB8479F72D16C842427383E6E3BE652C9A5 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB4A325AB11A5E20ADCE6DDD6978D49D2CF0DDAD5_gshared_inline (Nullable_1_t0D5CA762E667CF24B1BFBE05DD585E367D814023 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
