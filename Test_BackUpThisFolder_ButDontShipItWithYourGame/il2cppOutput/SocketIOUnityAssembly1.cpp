#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Buffers.ArrayBufferWriter`1<System.Byte>
struct ArrayBufferWriter_1_t1BC1DECDD156A1043C7214DF1E3DA071F93894A3;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Type,System.Text.Json.Serialization.JsonConverter>
struct ConcurrentDictionary_2_t847EC94864EAD4D4DAAC178360D815D61414FB0D;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Type,System.Text.Json.Serialization.Metadata.JsonTypeInfo>
struct ConcurrentDictionary_2_tBB3D7D3E921EC4D2A5836C85E459C1871641CB32;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Type,System.Text.Json.Serialization.JsonConverter>
struct Dictionary_2_t0483416E2612BB76C51CC68E3BC2D3CCAB6198D9;
// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs>
struct EventHandler_1_t69462DFC2F2C8D7576BEE9D1F5BB6C2E55B2C380;
// System.Func`1<Newtonsoft.Json.Serialization.IReferenceResolver>
struct Func_1_t78E8B13F3C7D6CC3EB821B4F5D26999D062417E2;
// System.Func`1<System.Text.Json.JsonSerializerOptions>
struct Func_1_t27E25A1D7DE6C9B79FF934165133F82F6D9A05EA;
// System.Func`1<Newtonsoft.Json.JsonSerializerSettings>
struct Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08;
// System.Func`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`3<System.Type,System.Text.Json.JsonSerializerOptions,System.Text.Json.Serialization.Metadata.JsonTypeInfo>
struct Func_3_t80B18BCDC791D3FBC519B36E97931215F647CFD7;
// System.Buffers.IBufferWriter`1<System.Byte>
struct IBufferWriter_1_t09B22D28ED83DD9237FC6D4E8014388593A8C897;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B;
// System.Collections.Generic.IEnumerable`1<System.Byte>
struct IEnumerable_1_tEE97FB3EBFE8765D0E2FC164B95E82BA5D0EAE86;
// System.Collections.Generic.IEnumerable`1<System.Text.Json.JsonElement>
struct IEnumerable_1_t3573831E66714FB926CA14FC9B632C551B18695D;
// System.Collections.Generic.IEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
// System.Collections.Generic.IList`1<System.Byte[]>
struct IList_1_tDDC3FFA18EA64D141BD8A490F88DCA5704F735E2;
// System.Collections.Generic.IList`1<Newtonsoft.Json.JsonConverter>
struct IList_1_t106D4C1340745E38431865BBEA6AE170A4713431;
// System.Collections.Generic.IList`1<System.Text.Json.Serialization.JsonConverter>
struct IList_1_tC0B13B2863B707AF8F570191723FA59FC26BABEA;
// System.Text.Json.Serialization.JsonConverter`1<System.Byte[]>
struct JsonConverter_1_t87134F2FDE6C85D3BC65F2583D387D617C578287;
// System.Text.Json.Serialization.JsonConverter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct JsonConverter_1_t17672FA4B9EBBCD14EC3097715207B9266E386E8;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4;
// System.Collections.Generic.List`1<System.Text.Json.JsonElement>
struct List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6;
// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition>
struct List_1_t53E7DEFF45EC8B1D5AE04D4FC6284E617F0D79CB;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Collections.Generic.Queue`1<SocketIOClient.Messages.IMessage>
struct Queue_1_tB57FE35A0FBB199BBF4A6E0EC8C4F775F6AD265F;
// System.Reactive.Subjects.Subject`1<SocketIOClient.Messages.IMessage>
struct Subject_1_t3761EC95FD10AF7AE76907478B3488CFC22A0E99;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
// Newtonsoft.Json.JsonWriter/State[][]
struct StateU5BU5DU5BU5D_tA12046738DA5F6289ABA74ED1C079ED07EE202ED;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Text.Json.Serialization.JsonConverter[]
struct JsonConverterU5BU5D_t0049FF78489F6329358F7865EBBA6DF7B6BDA9C3;
// System.Text.Json.JsonElement[]
struct JsonElementU5BU5D_tBB2D5D0BFF97B0D11F246C88A4E6D5088CBADE2D;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// SocketIOClient.Messages.BinaryMessage
struct BinaryMessage_tD5819CFC7CC9F2CE0BC27C01B47AEF59F66CCF05;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// SocketIOClient.JsonSerializer.ByteArrayConverter
struct ByteArrayConverter_t63039C8D605504CCABFF7783367282E961DDC022;
// SocketIOClient.Newtonsoft.Json.ByteArrayConverter
struct ByteArrayConverter_tB277DA37ED5A0960062DB249ABFA11C48D13B5DD;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// SocketIOClient.Messages.ClientAckMessage
struct ClientAckMessage_t7F42DF41F6C6389FF9ADCA794D69BFA3FA15E6F9;
// SocketIOClient.Messages.ClientBinaryAckMessage
struct ClientBinaryAckMessage_tCC3843B13D5ADA726E5899C1B148AD22D1978742;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// SocketIOClient.Messages.ConnectedMessage
struct ConnectedMessage_t1A1ED2A271B81580C052B6B1B6DDFCD16CF9FC36;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// SocketIOClient.Messages.DisconnectedMessage
struct DisconnectedMessage_tEBAFB998D31AC82FE4A2515B44B1A8B4513EA6A9;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// SocketIOClient.Messages.ErrorMessage
struct ErrorMessage_tB3F1C2F4B97E449D6C38FB5E943D66F0B3F6E275;
// SocketIOClient.Messages.EventMessage
struct EventMessage_t470DDE32D55CB6E5C78B1B073D344CFD3C548748;
// System.Exception
struct Exception_t;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// SocketIOClient.Transport.IClientWebSocket
struct IClientWebSocket_tB2E04077F1A857A8174EA3A71BC3E86261FFDF35;
// Newtonsoft.Json.Serialization.IContractResolver
struct IContractResolver_t7EC502F5FCA86DD95579A92A1E0116BE32D6340B;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Collections.IEqualityComparer
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
// SocketIOClient.JsonSerializer.IJsonSerializer
struct IJsonSerializer_tD14EE4C12CB199178A9D572E1D38F6827C26C983;
// SocketIOClient.Messages.IMessage
struct IMessage_tCE27BBB1C80BF1CF37C72AC8E4E2F85EF21D5E56;
// Newtonsoft.Json.Serialization.IReferenceResolver
struct IReferenceResolver_t29B0AEAFB8A7BF2EE446320DE590343B21EA69A3;
// Newtonsoft.Json.Serialization.ISerializationBinder
struct ISerializationBinder_t3C8B850335FB40001C9201981439AE77B430031F;
// Newtonsoft.Json.Serialization.ITraceWriter
struct ITraceWriter_t44C99CB7D5AB59A077F569914E56DAD66B5A41EF;
// SocketIOClient.UriConverters.IUriConverter
struct IUriConverter_t56F13732FEC25218EBEDBFB7B9EBCF139D1C1D0C;
// System.Text.Encodings.Web.JavaScriptEncoder
struct JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2;
// Newtonsoft.Json.JsonConverter
struct JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16;
// Newtonsoft.Json.JsonConverterCollection
struct JsonConverterCollection_t6EEC84565C08B14107276B5023CE9E978DFCDF89;
// System.Text.Json.JsonDocument
struct JsonDocument_tF96A1F7D1D40932B5EA6A97DA06E150B6CBDBE6F;
// System.Text.Json.JsonNamingPolicy
struct JsonNamingPolicy_tF52DC40FDD225060731BD06BE8478CFA52216BC4;
// Newtonsoft.Json.JsonReader
struct JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765;
// SocketIOClient.JsonSerializer.JsonSerializeResult
struct JsonSerializeResult_t60648F85702617E3385A7DC76FAA88A6136ADF5F;
// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59;
// System.Text.Json.Serialization.JsonSerializerContext
struct JsonSerializerContext_t1F6CFC5FBA85D0791A1EA249238EDC2B7410BD57;
// System.Text.Json.JsonSerializerOptions
struct JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD;
// Newtonsoft.Json.JsonSerializerSettings
struct JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF;
// System.Text.Json.Serialization.Metadata.JsonTypeInfo
struct JsonTypeInfo_tA6F51E32955C59782B075F76F6918E5B97598C36;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3;
// System.Text.Json.Serialization.Metadata.MemberAccessor
struct MemberAccessor_tB287B55E0A8EBD4AA3EBF99FBCA7F7AEF76347AC;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// SocketIOClient.Newtonsoft.Json.NewtonsoftJsonSerializer
struct NewtonsoftJsonSerializer_t3EBB19A83287CFB4FBE58E1BDBBAA054E5CD14ED;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// SocketIOClient.Messages.OpenedMessage
struct OpenedMessage_tB5F1C6F098ABB481932A5728B15765F454E68806;
// SocketIOClient.Transport.Payload
struct Payload_t40222C90D284CE7D812D4D8C137225A5846030C9;
// SocketIOClient.Messages.PingMessage
struct PingMessage_t5E9292201F5D7ED22252C374CBEAA4621E8B30E7;
// SocketIOClient.Messages.PongMessage
struct PongMessage_t5FD45D5BAA78BB30EB15C7C4FA84536D61617447;
// System.Text.Json.PooledByteBufferWriter
struct PooledByteBufferWriter_tFD5CABBA6D5073D8882FE5E6A486AC288B01EE52;
// System.Text.Json.Serialization.ReferenceHandler
struct ReferenceHandler_t1630C9ADF53E934E6EE593185A0B1C4CFCED6FD5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// SocketIOClient.Messages.ServerAckMessage
struct ServerAckMessage_tC5BF3089BD75CD610CF8C015557B164CA0C353A4;
// SocketIOClient.Messages.ServerBinaryAckMessage
struct ServerBinaryAckMessage_tF981FEA898A346EA4D64137EA3E3B4A4F30E6D24;
// SocketIOClient.SocketIOOptions
struct SocketIOOptions_t82FFF45728FD73A1C3BB4EA483A822D23F16FB1F;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// SocketIOClient.JsonSerializer.SystemTextJsonSerializer
struct SystemTextJsonSerializer_tE1389CB2086D14697EC05627113C613450216EDF;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Type
struct Type_t;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.UriParser
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
// System.Text.Json.Utf8JsonWriter
struct Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// SocketIOClient.Transport.WebSocketTransport
struct WebSocketTransport_tA88D877EBA0CF8C088C3F8395F20E3CDDB6521CA;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// System.Uri/UriInfo
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;
// SocketIOClient.Transport.WebSocketTransport/<ConnectAsync>d__6
struct U3CConnectAsyncU3Ed__6_tD5DCCC944C5427F5E76F241174C5AB3B63C9A8D5;
// SocketIOClient.Transport.WebSocketTransport/<DisconnectAsync>d__7
struct U3CDisconnectAsyncU3Ed__7_tC478BFAF2B99787B82C3B70936A6E6CE41D58B60;
// SocketIOClient.Transport.WebSocketTransport/<SendAsync>d__8
struct U3CSendAsyncU3Ed__8_tBEFC093A6294B2E37CCE792AE8D1BF73CD984477;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayEnumerator_t6A32F25D9BE79D9856DA29CBAD749933F2C9C97C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryMessage_tD5819CFC7CC9F2CE0BC27C01B47AEF59F66CCF05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteArrayConverter_t63039C8D605504CCABFF7783367282E961DDC022_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteArrayConverter_tB277DA37ED5A0960062DB249ABFA11C48D13B5DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ClientAckMessage_t7F42DF41F6C6389FF9ADCA794D69BFA3FA15E6F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ClientBinaryAckMessage_tCC3843B13D5ADA726E5899C1B148AD22D1978742_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConnectedMessage_t1A1ED2A271B81580C052B6B1B6DDFCD16CF9FC36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DisconnectedMessage_tEBAFB998D31AC82FE4A2515B44B1A8B4513EA6A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ErrorMessage_tB3F1C2F4B97E449D6C38FB5E943D66F0B3F6E275_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventMessage_t470DDE32D55CB6E5C78B1B073D344CFD3C548748_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IClientWebSocket_tB2E04077F1A857A8174EA3A71BC3E86261FFDF35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t84B1DF09CB47A3D55FF1908FF2D6247CF70D44A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tBA46B0B91EBAF6B08DED48AF18B2916FC06B7FC6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMessage_tCE27BBB1C80BF1CF37C72AC8E4E2F85EF21D5E56_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonSerializeResult_t60648F85702617E3385A7DC76FAA88A6136ADF5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonSerializer_tDA5AEC22B45A1019EBFFE2599660A1B9B53BB083_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageType_tA64F8C4E7E9D2A0D2369DED0CCBA4AA5E758C2CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OpenedMessage_tB5F1C6F098ABB481932A5728B15765F454E68806_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PingMessage_t5E9292201F5D7ED22252C374CBEAA4621E8B30E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PongMessage_t5FD45D5BAA78BB30EB15C7C4FA84536D61617447_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0B6D138D8454083A41D1C936D8DFA8099F161DA8;
IL2CPP_EXTERN_C String_t* _stringLiteral1EABFF598CE5B1DE50532CB71FD74C8F1B848045;
IL2CPP_EXTERN_C String_t* _stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE;
IL2CPP_EXTERN_C String_t* _stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2;
IL2CPP_EXTERN_C String_t* _stringLiteral25C241457632965CF0415ACE6CB8DB92A7A9ADD9;
IL2CPP_EXTERN_C String_t* _stringLiteral267B04B1E250980AAB9D2E38F155C7C77365B820;
IL2CPP_EXTERN_C String_t* _stringLiteral2D907D2D106A62626644F08AEDF8E2E529B8807E;
IL2CPP_EXTERN_C String_t* _stringLiteral3952A7C46F2C9749F94659EC90D855DF03EE7B1A;
IL2CPP_EXTERN_C String_t* _stringLiteral3DDB8A5B0756C4CCEE1051FF32423C7DF524E6C5;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral5B4F028A4070094FCA4E7762E2C376A65E2D59C6;
IL2CPP_EXTERN_C String_t* _stringLiteral656F9736477335AF0B68DB002FCA2CF39D90BE17;
IL2CPP_EXTERN_C String_t* _stringLiteral76DF165E2105C1C5528E7F5AEBFD02D0CC562115;
IL2CPP_EXTERN_C String_t* _stringLiteral792BED7AE838D9267644F8329AA86A301260BB2C;
IL2CPP_EXTERN_C String_t* _stringLiteral867BCADE6C5A0BC7053FD765A6324C366FFC2CA2;
IL2CPP_EXTERN_C String_t* _stringLiteral8FE7B9E4379FA727669A5DD2E2B5591AE8C6D6FD;
IL2CPP_EXTERN_C String_t* _stringLiteralA6A6AB007C12E7673D8479299FDC94A4D003EBF9;
IL2CPP_EXTERN_C String_t* _stringLiteralBC3101BFE36604E54F5668684B113C5BF96A5EF8;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralD559C6D97E819D8E4EF7ACDC34C4E8D3DD314964;
IL2CPP_EXTERN_C String_t* _stringLiteralEC578DBE646EFE7777E9734B49B16DE9921FC04E;
IL2CPP_EXTERN_C String_t* _stringLiteralF0AB94C928A783BE1AAC7FE99970D2920FE6A1D8;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CConnectAsyncU3Ed__6_tD5DCCC944C5427F5E76F241174C5AB3B63C9A8D5_m835E1E79876D428BEBA95AA6248404952BC2A4E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CDisconnectAsyncU3Ed__7_tC478BFAF2B99787B82C3B70936A6E6CE41D58B60_m99F098A421118896F666F9376A29A88D7D7376AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSendAsyncU3Ed__8_tBEFC093A6294B2E37CCE792AE8D1BF73CD984477_m1E0EB37FE26F52B7FD84AEB34925A0119D40A5C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisJsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_m99F84A2CBED6EEF6E1F61AAE03853DB7EDF271EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mCDDC850B62D20A7AAD5DF974538393AB3A43461F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m5A8036FD044CA17B6B9F11640135700F7061BFE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m4B63F6735596A1CA8F6EEA0E6C630CACC3F3900E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ErrorMessage_Write_mCDFE6CEC0BF3F78A71AC5A115FD4FC97F95E5D63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConverter_1__ctor_mA025D83F77A55978B2D5C037B52F542FA9F38BC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonSerializer_Serialize_TisObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_mE3922625E6144137A8BC28E92E96426CB4A38BC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m54BE733D37F0BE82FCD59F3D8B06A0409EBDD327_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m7C61C1682B2BDC2599320E9B76B12AD7F6E2020D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m16D5E19B993EA46901FB2FC56C335AAFCBCC14C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m88FEB2D94E35C258B61F53400F7CA20E99A7DAD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m2C6A207D8824FE873045A66C942593AE67D90CA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OpenedMessage_GetInt32FromJsonElement_m63C5A4189BEBB440AE86ADECD7D13106A0139974_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OpenedMessage_Write_m42391F434E5771270FAFE180C881EAEA16E186AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MessageType_tA64F8C4E7E9D2A0D2369DED0CCBA4AA5E758C2CC_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Text.Json.JsonElement>
struct List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	JsonElementU5BU5D_tBB2D5D0BFF97B0D11F246C88A4E6D5088CBADE2D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// SocketIOClient.Messages.BinaryMessage
struct BinaryMessage_tD5819CFC7CC9F2CE0BC27C01B47AEF59F66CCF05  : public RuntimeObject
{
	// System.String SocketIOClient.Messages.BinaryMessage::<Namespace>k__BackingField
	String_t* ___U3CNamespaceU3Ek__BackingField_0;
	// System.String SocketIOClient.Messages.BinaryMessage::<Event>k__BackingField
	String_t* ___U3CEventU3Ek__BackingField_1;
	// System.Int32 SocketIOClient.Messages.BinaryMessage::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<System.Text.Json.JsonElement> SocketIOClient.Messages.BinaryMessage::<JsonElements>k__BackingField
	List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6* ___U3CJsonElementsU3Ek__BackingField_3;
	// System.String SocketIOClient.Messages.BinaryMessage::<Json>k__BackingField
	String_t* ___U3CJsonU3Ek__BackingField_4;
	// System.Int32 SocketIOClient.Messages.BinaryMessage::<BinaryCount>k__BackingField
	int32_t ___U3CBinaryCountU3Ek__BackingField_5;
	// System.Int32 SocketIOClient.Messages.BinaryMessage::<Eio>k__BackingField
	int32_t ___U3CEioU3Ek__BackingField_6;
	// SocketIOClient.Transport.TransportProtocol SocketIOClient.Messages.BinaryMessage::<Protocol>k__BackingField
	int32_t ___U3CProtocolU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<System.Byte[]> SocketIOClient.Messages.BinaryMessage::<OutgoingBytes>k__BackingField
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___U3COutgoingBytesU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<System.Byte[]> SocketIOClient.Messages.BinaryMessage::<IncomingBytes>k__BackingField
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___U3CIncomingBytesU3Ek__BackingField_9;
};

// SocketIOClient.Messages.ClientAckMessage
struct ClientAckMessage_t7F42DF41F6C6389FF9ADCA794D69BFA3FA15E6F9  : public RuntimeObject
{
	// System.String SocketIOClient.Messages.ClientAckMessage::<Namespace>k__BackingField
	String_t* ___U3CNamespaceU3Ek__BackingField_0;
	// System.String SocketIOClient.Messages.ClientAckMessage::<Event>k__BackingField
	String_t* ___U3CEventU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<System.Text.Json.JsonElement> SocketIOClient.Messages.ClientAckMessage::<JsonElements>k__BackingField
	List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6* ___U3CJsonElementsU3Ek__BackingField_2;
	// System.String SocketIOClient.Messages.ClientAckMessage::<Json>k__BackingField
	String_t* ___U3CJsonU3Ek__BackingField_3;
	// System.Int32 SocketIOClient.Messages.ClientAckMessage::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_4;
	// System.Collections.Generic.List`1<System.Byte[]> SocketIOClient.Messages.ClientAckMessage::<OutgoingBytes>k__BackingField
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___U3COutgoingBytesU3Ek__BackingField_5;
	// System.Collections.Generic.List`1<System.Byte[]> SocketIOClient.Messages.ClientAckMessage::<IncomingBytes>k__BackingField
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___U3CIncomingBytesU3Ek__BackingField_6;
	// System.Int32 SocketIOClient.Messages.ClientAckMessage::<BinaryCount>k__BackingField
	int32_t ___U3CBinaryCountU3Ek__BackingField_7;
	// System.Int32 SocketIOClient.Messages.ClientAckMessage::<Eio>k__BackingField
	int32_t ___U3CEioU3Ek__BackingField_8;
	// SocketIOClient.Transport.TransportProtocol SocketIOClient.Messages.ClientAckMessage::<Protocol>k__BackingField
	int32_t ___U3CProtocolU3Ek__BackingField_9;
};

// SocketIOClient.Messages.ClientBinaryAckMessage
struct ClientBinaryAckMessage_tCC3843B13D5ADA726E5899C1B148AD22D1978742  : public RuntimeObject
{
	// System.String SocketIOClient.Messages.ClientBinaryAckMessage::<Namespace>k__BackingField
	String_t* ___U3CNamespaceU3Ek__BackingField_0;
	// System.String SocketIOClient.Messages.ClientBinaryAckMessage::<Event>k__BackingField
	String_t* ___U3CEventU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<System.Text.Json.JsonElement> SocketIOClient.Messages.ClientBinaryAckMessage::<JsonElements>k__BackingField
	List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6* ___U3CJsonElementsU3Ek__BackingField_2;
	// System.String SocketIOClient.Messages.ClientBinaryAckMessage::<Json>k__BackingField
	String_t* ___U3CJsonU3Ek__BackingField_3;
	// System.Int32 SocketIOClient.Messages.ClientBinaryAckMessage::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_4;
	// System.Int32 SocketIOClient.Messages.ClientBinaryAckMessage::<BinaryCount>k__BackingField
	int32_t ___U3CBinaryCountU3Ek__BackingField_5;
	// System.Int32 SocketIOClient.Messages.ClientBinaryAckMessage::<Eio>k__BackingField
	int32_t ___U3CEioU3Ek__BackingField_6;
	// SocketIOClient.Transport.TransportProtocol SocketIOClient.Messages.ClientBinaryAckMessage::<Protocol>k__BackingField
	int32_t ___U3CProtocolU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<System.Byte[]> SocketIOClient.Messages.ClientBinaryAckMessage::<OutgoingBytes>k__BackingField
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___U3COutgoingBytesU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<System.Byte[]> SocketIOClient.Messages.ClientBinaryAckMessage::<IncomingBytes>k__BackingField
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___U3CIncomingBytesU3Ek__BackingField_9;
};

// SocketIOClient.Messages.ConnectedMessage
struct ConnectedMessage_t1A1ED2A271B81580C052B6B1B6DDFCD16CF9FC36  : public RuntimeObject
{
	// System.String SocketIOClient.Messages.ConnectedMessage::<Namespace>k__BackingField
	String_t* ___U3CNamespaceU3Ek__BackingField_0;
	// System.String SocketIOClient.Messages.ConnectedMessage::<Sid>k__BackingField
	String_t* ___U3CSidU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<System.Byte[]> SocketIOClient.Messages.ConnectedMessage::<OutgoingBytes>k__BackingField
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___U3COutgoingBytesU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<System.Byte[]> SocketIOClient.Messages.ConnectedMessage::<IncomingBytes>k__BackingField
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___U3CIncomingBytesU3Ek__BackingField_3;
	// System.Int32 SocketIOClient.Messages.ConnectedMessage::<BinaryCount>k__BackingField
	int32_t ___U3CBinaryCountU3Ek__BackingField_4;
	// System.Int32 SocketIOClient.Messages.ConnectedMessage::<Eio>k__BackingField
	int32_t ___U3CEioU3Ek__BackingField_5;
	// SocketIOClient.Transport.TransportProtocol SocketIOClient.Messages.ConnectedMessage::<Protocol>k__BackingField
	int32_t ___U3CProtocolU3Ek__BackingField_6;
	// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>> SocketIOClient.Messages.ConnectedMessage::<Query>k__BackingField
	RuntimeObject* ___U3CQueryU3Ek__BackingField_7;
	// System.String SocketIOClient.Messages.ConnectedMessage::<AuthJsonStr>k__BackingField
	String_t* ___U3CAuthJsonStrU3Ek__BackingField_8;
};

// SocketIOClient.Messages.DisconnectedMessage
struct DisconnectedMessage_tEBAFB998D31AC82FE4A2515B44B1A8B4513EA6A9  : public RuntimeObject
{
	// System.String SocketIOClient.Messages.DisconnectedMessage::<Namespace>k__BackingField
	String_t* ___U3CNamespaceU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<System.Byte[]> SocketIOClient.Messages.DisconnectedMessage::<OutgoingBytes>k__BackingField
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___U3COutgoingBytesU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<System.Byte[]> SocketIOClient.Messages.DisconnectedMessage::<IncomingBytes>k__BackingField
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___U3CIncomingBytesU3Ek__BackingField_2;
	// System.Int32 SocketIOClient.Messages.DisconnectedMessage::<BinaryCount>k__BackingField
	int32_t ___U3CBinaryCountU3Ek__BackingField_3;
	// System.Int32 SocketIOClient.Messages.DisconnectedMessage::<Eio>k__BackingField
	int32_t ___U3CEioU3Ek__BackingField_4;
	// SocketIOClient.Transport.TransportProtocol SocketIOClient.Messages.DisconnectedMessage::<Protocol>k__BackingField
	int32_t ___U3CProtocolU3Ek__BackingField_5;
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

// SocketIOClient.Messages.ErrorMessage
struct ErrorMessage_tB3F1C2F4B97E449D6C38FB5E943D66F0B3F6E275  : public RuntimeObject
{
	// System.String SocketIOClient.Messages.ErrorMessage::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_0;
	// System.String SocketIOClient.Messages.ErrorMessage::<Namespace>k__BackingField
	String_t* ___U3CNamespaceU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<System.Byte[]> SocketIOClient.Messages.ErrorMessage::<OutgoingBytes>k__BackingField
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___U3COutgoingBytesU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<System.Byte[]> SocketIOClient.Messages.ErrorMessage::<IncomingBytes>k__BackingField
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___U3CIncomingBytesU3Ek__BackingField_3;
	// System.Int32 SocketIOClient.Messages.ErrorMessage::<BinaryCount>k__BackingField
	int32_t ___U3CBinaryCountU3Ek__BackingField_4;
	// System.Int32 SocketIOClient.Messages.ErrorMessage::<Eio>k__BackingField
	int32_t ___U3CEioU3Ek__BackingField_5;
	// SocketIOClient.Transport.TransportProtocol SocketIOClient.Messages.ErrorMessage::<Protocol>k__BackingField
	int32_t ___U3CProtocolU3Ek__BackingField_6;
};

// SocketIOClient.Messages.EventMessage
struct EventMessage_t470DDE32D55CB6E5C78B1B073D344CFD3C548748  : public RuntimeObject
{
	// System.String SocketIOClient.Messages.EventMessage::<Namespace>k__BackingField
	String_t* ___U3CNamespaceU3Ek__BackingField_0;
	// System.String SocketIOClient.Messages.EventMessage::<Event>k__BackingField
	String_t* ___U3CEventU3Ek__BackingField_1;
	// System.Int32 SocketIOClient.Messages.EventMessage::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<System.Text.Json.JsonElement> SocketIOClient.Messages.EventMessage::<JsonElements>k__BackingField
	List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6* ___U3CJsonElementsU3Ek__BackingField_3;
	// System.String SocketIOClient.Messages.EventMessage::<Json>k__BackingField
	String_t* ___U3CJsonU3Ek__BackingField_4;
	// System.Collections.Generic.List`1<System.Byte[]> SocketIOClient.Messages.EventMessage::<OutgoingBytes>k__BackingField
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___U3COutgoingBytesU3Ek__BackingField_5;
	// System.Collections.Generic.List`1<System.Byte[]> SocketIOClient.Messages.EventMessage::<IncomingBytes>k__BackingField
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___U3CIncomingBytesU3Ek__BackingField_6;
	// System.Int32 SocketIOClient.Messages.EventMessage::<BinaryCount>k__BackingField
	int32_t ___U3CBinaryCountU3Ek__BackingField_7;
	// System.Int32 SocketIOClient.Messages.EventMessage::<Eio>k__BackingField
	int32_t ___U3CEioU3Ek__BackingField_8;
	// SocketIOClient.Transport.TransportProtocol SocketIOClient.Messages.EventMessage::<Protocol>k__BackingField
	int32_t ___U3CProtocolU3Ek__BackingField_9;
};

// Newtonsoft.Json.JsonConverter
struct JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16  : public RuntimeObject
{
};

// System.Text.Json.Serialization.JsonConverter
struct JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8  : public RuntimeObject
{
	// System.Boolean System.Text.Json.Serialization.JsonConverter::<CanUseDirectReadOrWrite>k__BackingField
	bool ___U3CCanUseDirectReadOrWriteU3Ek__BackingField_0;
	// System.Boolean System.Text.Json.Serialization.JsonConverter::<CanBePolymorphic>k__BackingField
	bool ___U3CCanBePolymorphicU3Ek__BackingField_1;
	// System.Boolean System.Text.Json.Serialization.JsonConverter::<IsValueType>k__BackingField
	bool ___U3CIsValueTypeU3Ek__BackingField_2;
	// System.Boolean System.Text.Json.Serialization.JsonConverter::<IsInternalConverter>k__BackingField
	bool ___U3CIsInternalConverterU3Ek__BackingField_3;
	// System.Boolean System.Text.Json.Serialization.JsonConverter::IsInternalConverterForNumberType
	bool ___IsInternalConverterForNumberType_4;
	// System.Boolean System.Text.Json.Serialization.JsonConverter::<ConstructorIsParameterized>k__BackingField
	bool ___U3CConstructorIsParameterizedU3Ek__BackingField_5;
	// System.Reflection.ConstructorInfo System.Text.Json.Serialization.JsonConverter::<ConstructorInfo>k__BackingField
	ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* ___U3CConstructorInfoU3Ek__BackingField_6;
	// System.Boolean System.Text.Json.Serialization.JsonConverter::<RequiresDynamicMemberAccessors>k__BackingField
	bool ___U3CRequiresDynamicMemberAccessorsU3Ek__BackingField_7;
};

// SocketIOClient.JsonSerializer.JsonSerializeResult
struct JsonSerializeResult_t60648F85702617E3385A7DC76FAA88A6136ADF5F  : public RuntimeObject
{
	// System.String SocketIOClient.JsonSerializer.JsonSerializeResult::<Json>k__BackingField
	String_t* ___U3CJsonU3Ek__BackingField_0;
	// System.Collections.Generic.IList`1<System.Byte[]> SocketIOClient.JsonSerializer.JsonSerializeResult::<Bytes>k__BackingField
	RuntimeObject* ___U3CBytesU3Ek__BackingField_1;
};

// System.Text.Json.JsonSerializerOptions
struct JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD  : public RuntimeObject
{
	// System.Collections.Concurrent.ConcurrentDictionary`2<System.Type,System.Text.Json.Serialization.JsonConverter> System.Text.Json.JsonSerializerOptions::_converters
	ConcurrentDictionary_2_t847EC94864EAD4D4DAAC178360D815D61414FB0D* ____converters_2;
	// System.Collections.Generic.IList`1<System.Text.Json.Serialization.JsonConverter> System.Text.Json.JsonSerializerOptions::<Converters>k__BackingField
	RuntimeObject* ___U3CConvertersU3Ek__BackingField_3;
	// System.Collections.Concurrent.ConcurrentDictionary`2<System.Type,System.Text.Json.Serialization.Metadata.JsonTypeInfo> System.Text.Json.JsonSerializerOptions::_classes
	ConcurrentDictionary_2_tBB3D7D3E921EC4D2A5836C85E459C1871641CB32* ____classes_5;
	// System.Text.Json.Serialization.Metadata.JsonTypeInfo System.Text.Json.JsonSerializerOptions::<_lastClass>k__BackingField
	JsonTypeInfo_tA6F51E32955C59782B075F76F6918E5B97598C36* ___U3C_lastClassU3Ek__BackingField_6;
	// System.Text.Json.Serialization.JsonSerializerContext System.Text.Json.JsonSerializerOptions::_context
	JsonSerializerContext_t1F6CFC5FBA85D0791A1EA249238EDC2B7410BD57* ____context_7;
	// System.Func`3<System.Type,System.Text.Json.JsonSerializerOptions,System.Text.Json.Serialization.Metadata.JsonTypeInfo> System.Text.Json.JsonSerializerOptions::_typeInfoCreationFunc
	Func_3_t80B18BCDC791D3FBC519B36E97931215F647CFD7* ____typeInfoCreationFunc_8;
	// System.Text.Json.Serialization.Metadata.MemberAccessor System.Text.Json.JsonSerializerOptions::_memberAccessorStrategy
	MemberAccessor_tB287B55E0A8EBD4AA3EBF99FBCA7F7AEF76347AC* ____memberAccessorStrategy_9;
	// System.Text.Json.JsonNamingPolicy System.Text.Json.JsonSerializerOptions::_dictionaryKeyPolicy
	JsonNamingPolicy_tF52DC40FDD225060731BD06BE8478CFA52216BC4* ____dictionaryKeyPolicy_10;
	// System.Text.Json.JsonNamingPolicy System.Text.Json.JsonSerializerOptions::_jsonPropertyNamingPolicy
	JsonNamingPolicy_tF52DC40FDD225060731BD06BE8478CFA52216BC4* ____jsonPropertyNamingPolicy_11;
	// System.Text.Json.JsonCommentHandling System.Text.Json.JsonSerializerOptions::_readCommentHandling
	uint8_t ____readCommentHandling_12;
	// System.Text.Json.Serialization.ReferenceHandler System.Text.Json.JsonSerializerOptions::_referenceHandler
	ReferenceHandler_t1630C9ADF53E934E6EE593185A0B1C4CFCED6FD5* ____referenceHandler_13;
	// System.Text.Encodings.Web.JavaScriptEncoder System.Text.Json.JsonSerializerOptions::_encoder
	JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* ____encoder_14;
	// System.Text.Json.Serialization.JsonIgnoreCondition System.Text.Json.JsonSerializerOptions::_defaultIgnoreCondition
	int32_t ____defaultIgnoreCondition_15;
	// System.Text.Json.Serialization.JsonNumberHandling System.Text.Json.JsonSerializerOptions::_numberHandling
	int32_t ____numberHandling_16;
	// System.Text.Json.Serialization.JsonUnknownTypeHandling System.Text.Json.JsonSerializerOptions::_unknownTypeHandling
	int32_t ____unknownTypeHandling_17;
	// System.Int32 System.Text.Json.JsonSerializerOptions::_defaultBufferSize
	int32_t ____defaultBufferSize_18;
	// System.Int32 System.Text.Json.JsonSerializerOptions::_maxDepth
	int32_t ____maxDepth_19;
	// System.Boolean System.Text.Json.JsonSerializerOptions::_allowTrailingCommas
	bool ____allowTrailingCommas_20;
	// System.Boolean System.Text.Json.JsonSerializerOptions::_haveTypesBeenCreated
	bool ____haveTypesBeenCreated_21;
	// System.Boolean System.Text.Json.JsonSerializerOptions::_ignoreNullValues
	bool ____ignoreNullValues_22;
	// System.Boolean System.Text.Json.JsonSerializerOptions::_ignoreReadOnlyProperties
	bool ____ignoreReadOnlyProperties_23;
	// System.Boolean System.Text.Json.JsonSerializerOptions::_ignoreReadonlyFields
	bool ____ignoreReadonlyFields_24;
	// System.Boolean System.Text.Json.JsonSerializerOptions::_includeFields
	bool ____includeFields_25;
	// System.Boolean System.Text.Json.JsonSerializerOptions::_propertyNameCaseInsensitive
	bool ____propertyNameCaseInsensitive_26;
	// System.Boolean System.Text.Json.JsonSerializerOptions::_writeIndented
	bool ____writeIndented_27;
	// System.Int32 System.Text.Json.JsonSerializerOptions::<EffectiveMaxDepth>k__BackingField
	int32_t ___U3CEffectiveMaxDepthU3Ek__BackingField_28;
	// System.Text.Json.Serialization.ReferenceHandlingStrategy System.Text.Json.JsonSerializerOptions::ReferenceHandlingStrategy
	int32_t ___ReferenceHandlingStrategy_29;
	// System.Boolean System.Text.Json.JsonSerializerOptions::<IsInitializedForReflectionSerializer>k__BackingField
	bool ___U3CIsInitializedForReflectionSerializerU3Ek__BackingField_30;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// SocketIOClient.Messages.MessageFactory
struct MessageFactory_tA7680429AF0EB6C0E748029AA74D698E949161B2  : public RuntimeObject
{
};

// SocketIOClient.Newtonsoft.Json.NewtonsoftJsonSerializer
struct NewtonsoftJsonSerializer_t3EBB19A83287CFB4FBE58E1BDBBAA054E5CD14ED  : public RuntimeObject
{
	// System.Func`1<Newtonsoft.Json.JsonSerializerSettings> SocketIOClient.Newtonsoft.Json.NewtonsoftJsonSerializer::<JsonSerializerOptions>k__BackingField
	Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08* ___U3CJsonSerializerOptionsU3Ek__BackingField_0;
	// System.Func`1<Newtonsoft.Json.JsonSerializerSettings> SocketIOClient.Newtonsoft.Json.NewtonsoftJsonSerializer::<OptionsProvider>k__BackingField
	Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08* ___U3COptionsProviderU3Ek__BackingField_1;
};

// SocketIOClient.Messages.OpenedMessage
struct OpenedMessage_tB5F1C6F098ABB481932A5728B15765F454E68806  : public RuntimeObject
{
	// System.String SocketIOClient.Messages.OpenedMessage::<Sid>k__BackingField
	String_t* ___U3CSidU3Ek__BackingField_0;
	// System.String SocketIOClient.Messages.OpenedMessage::<Namespace>k__BackingField
	String_t* ___U3CNamespaceU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<System.String> SocketIOClient.Messages.OpenedMessage::<Upgrades>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CUpgradesU3Ek__BackingField_2;
	// System.Int32 SocketIOClient.Messages.OpenedMessage::<PingInterval>k__BackingField
	int32_t ___U3CPingIntervalU3Ek__BackingField_3;
	// System.Int32 SocketIOClient.Messages.OpenedMessage::<PingTimeout>k__BackingField
	int32_t ___U3CPingTimeoutU3Ek__BackingField_4;
	// System.Collections.Generic.List`1<System.Byte[]> SocketIOClient.Messages.OpenedMessage::<OutgoingBytes>k__BackingField
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___U3COutgoingBytesU3Ek__BackingField_5;
	// System.Collections.Generic.List`1<System.Byte[]> SocketIOClient.Messages.OpenedMessage::<IncomingBytes>k__BackingField
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___U3CIncomingBytesU3Ek__BackingField_6;
	// System.Int32 SocketIOClient.Messages.OpenedMessage::<BinaryCount>k__BackingField
	int32_t ___U3CBinaryCountU3Ek__BackingField_7;
	// System.Int32 SocketIOClient.Messages.OpenedMessage::<Eio>k__BackingField
	int32_t ___U3CEioU3Ek__BackingField_8;
	// SocketIOClient.Transport.TransportProtocol SocketIOClient.Messages.OpenedMessage::<Protocol>k__BackingField
	int32_t ___U3CProtocolU3Ek__BackingField_9;
};

// SocketIOClient.Transport.Payload
struct Payload_t40222C90D284CE7D812D4D8C137225A5846030C9  : public RuntimeObject
{
	// System.String SocketIOClient.Transport.Payload::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<System.Byte[]> SocketIOClient.Transport.Payload::<Bytes>k__BackingField
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___U3CBytesU3Ek__BackingField_1;
};

// SocketIOClient.Messages.PingMessage
struct PingMessage_t5E9292201F5D7ED22252C374CBEAA4621E8B30E7  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.Byte[]> SocketIOClient.Messages.PingMessage::<OutgoingBytes>k__BackingField
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___U3COutgoingBytesU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<System.Byte[]> SocketIOClient.Messages.PingMessage::<IncomingBytes>k__BackingField
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___U3CIncomingBytesU3Ek__BackingField_1;
	// System.Int32 SocketIOClient.Messages.PingMessage::<BinaryCount>k__BackingField
	int32_t ___U3CBinaryCountU3Ek__BackingField_2;
	// System.Int32 SocketIOClient.Messages.PingMessage::<Eio>k__BackingField
	int32_t ___U3CEioU3Ek__BackingField_3;
	// SocketIOClient.Transport.TransportProtocol SocketIOClient.Messages.PingMessage::<Protocol>k__BackingField
	int32_t ___U3CProtocolU3Ek__BackingField_4;
};

// SocketIOClient.Messages.ServerAckMessage
struct ServerAckMessage_tC5BF3089BD75CD610CF8C015557B164CA0C353A4  : public RuntimeObject
{
	// System.String SocketIOClient.Messages.ServerAckMessage::<Namespace>k__BackingField
	String_t* ___U3CNamespaceU3Ek__BackingField_0;
	// System.String SocketIOClient.Messages.ServerAckMessage::<Json>k__BackingField
	String_t* ___U3CJsonU3Ek__BackingField_1;
	// System.Int32 SocketIOClient.Messages.ServerAckMessage::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<System.Byte[]> SocketIOClient.Messages.ServerAckMessage::<OutgoingBytes>k__BackingField
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___U3COutgoingBytesU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<System.Byte[]> SocketIOClient.Messages.ServerAckMessage::<IncomingBytes>k__BackingField
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___U3CIncomingBytesU3Ek__BackingField_4;
	// System.Int32 SocketIOClient.Messages.ServerAckMessage::<BinaryCount>k__BackingField
	int32_t ___U3CBinaryCountU3Ek__BackingField_5;
	// System.Int32 SocketIOClient.Messages.ServerAckMessage::<Eio>k__BackingField
	int32_t ___U3CEioU3Ek__BackingField_6;
	// SocketIOClient.Transport.TransportProtocol SocketIOClient.Messages.ServerAckMessage::<Protocol>k__BackingField
	int32_t ___U3CProtocolU3Ek__BackingField_7;
};

// SocketIOClient.Messages.ServerBinaryAckMessage
struct ServerBinaryAckMessage_tF981FEA898A346EA4D64137EA3E3B4A4F30E6D24  : public RuntimeObject
{
	// System.String SocketIOClient.Messages.ServerBinaryAckMessage::<Namespace>k__BackingField
	String_t* ___U3CNamespaceU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<System.Text.Json.JsonElement> SocketIOClient.Messages.ServerBinaryAckMessage::<JsonElements>k__BackingField
	List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6* ___U3CJsonElementsU3Ek__BackingField_1;
	// System.String SocketIOClient.Messages.ServerBinaryAckMessage::<Json>k__BackingField
	String_t* ___U3CJsonU3Ek__BackingField_2;
	// System.Int32 SocketIOClient.Messages.ServerBinaryAckMessage::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_3;
	// System.Int32 SocketIOClient.Messages.ServerBinaryAckMessage::<BinaryCount>k__BackingField
	int32_t ___U3CBinaryCountU3Ek__BackingField_4;
	// System.Int32 SocketIOClient.Messages.ServerBinaryAckMessage::<Eio>k__BackingField
	int32_t ___U3CEioU3Ek__BackingField_5;
	// SocketIOClient.Transport.TransportProtocol SocketIOClient.Messages.ServerBinaryAckMessage::<Protocol>k__BackingField
	int32_t ___U3CProtocolU3Ek__BackingField_6;
	// System.Collections.Generic.List`1<System.Byte[]> SocketIOClient.Messages.ServerBinaryAckMessage::<OutgoingBytes>k__BackingField
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___U3COutgoingBytesU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<System.Byte[]> SocketIOClient.Messages.ServerBinaryAckMessage::<IncomingBytes>k__BackingField
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___U3CIncomingBytesU3Ek__BackingField_8;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// SocketIOClient.JsonSerializer.SystemTextJsonSerializer
struct SystemTextJsonSerializer_tE1389CB2086D14697EC05627113C613450216EDF  : public RuntimeObject
{
	// System.Func`1<System.Text.Json.JsonSerializerOptions> SocketIOClient.JsonSerializer.SystemTextJsonSerializer::<OptionsProvider>k__BackingField
	Func_1_t27E25A1D7DE6C9B79FF934165133F82F6D9A05EA* ___U3COptionsProviderU3Ek__BackingField_0;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_23;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_26;
};

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E  : public RuntimeObject
{
	// System.String System.Uri::m_String
	String_t* ___m_String_16;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_17;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t920B0868286118827C08B08A15A9456AF6C19D81* ___m_Syntax_18;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_19;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_20;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09* ___m_Info_21;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_22;
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

// System.Collections.Generic.List`1/Enumerator<System.Byte[]>
struct Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF;

// System.Text.Json.Serialization.JsonConverter`1<System.Byte[]>
struct JsonConverter_1_t87134F2FDE6C85D3BC65F2583D387D617C578287  : public JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8
{
	// System.Boolean System.Text.Json.Serialization.JsonConverter`1::<HandleNullOnRead>k__BackingField
	bool ___U3CHandleNullOnReadU3Ek__BackingField_8;
	// System.Boolean System.Text.Json.Serialization.JsonConverter`1::<HandleNullOnWrite>k__BackingField
	bool ___U3CHandleNullOnWriteU3Ek__BackingField_9;
	// System.Boolean System.Text.Json.Serialization.JsonConverter`1::<CanBeNull>k__BackingField
	bool ___U3CCanBeNullU3Ek__BackingField_10;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669;

// System.Memory`1<System.Byte>
struct Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 
{
	// System.Object System.Memory`1::_object
	RuntimeObject* ____object_0;
	// System.Int32 System.Memory`1::_index
	int32_t ____index_1;
	// System.Int32 System.Memory`1::_length
	int32_t ____length_2;
};
// Native definition for P/Invoke marshalling of System.Memory`1
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif
// Native definition for COM marshalling of System.Memory`1
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.ConstructorHandling>
struct Nullable_1_tE866C25CB8A73A44077AAC48B1D406CF034E1496 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.DateFormatHandling>
struct Nullable_1_t4776B8A4D0D52AA8BDCD45E6D7070659326453D2 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.DateParseHandling>
struct Nullable_1_tDC640D18A54CA8F0A3C74518CBC15D439C8FC228 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling>
struct Nullable_1_tD88F7E37B65824D38D74608E576D1265E5A2D2B2 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.DefaultValueHandling>
struct Nullable_1_t4DEE77C12DDAF72BAE2A1FA8A8736FC478D721E8 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling>
struct Nullable_1_tEAE8D5B59DCEB4F809A8A5F390EAAC18F266B822 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.FloatParseHandling>
struct Nullable_1_tC13211A32645AE3863530378A08BC45089EE419B 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.Formatting>
struct Nullable_1_tAEE2B9C53750E53F9B91B70967290720873E8D3E 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.MetadataPropertyHandling>
struct Nullable_1_t0E2AF35997B80CE423EBCAFDC0C58FB7182CA6FE 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.MissingMemberHandling>
struct Nullable_1_t776B72BEFF6E3E2D489C4C6D855C89139D6B4CA4 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.NullValueHandling>
struct Nullable_1_tA1B6210C1924173AEFE9AF8FBDD3BA856E74A790 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.ObjectCreationHandling>
struct Nullable_1_t5ECEC9E2B3F1C050A3E9EC928487DD5C9AB0996D 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.PreserveReferencesHandling>
struct Nullable_1_t599FF2F862BEFE0F4B6BDA65B36841F4740B0D12 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling>
struct Nullable_1_t599F8D9D40143BFCB12D7085DFEA8AC7171F5E77 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling>
struct Nullable_1_t61214A44C233A0B00A9F79E380485D79D5FAA7C6 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.TypeNameAssemblyFormatHandling>
struct Nullable_1_t762E380C63D6C0CB1E8ADBCADE57240FB061367F 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.TypeNameHandling>
struct Nullable_1_tB85AB604017196E6A3D3B920121E8C3A255827F0 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.ReadOnlyMemory`1<System.Byte>
struct ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 
{
	// System.Object System.ReadOnlyMemory`1::_object
	RuntimeObject* ____object_0;
	// System.Int32 System.ReadOnlyMemory`1::_index
	int32_t ____index_1;
	// System.Int32 System.ReadOnlyMemory`1::_length
	int32_t ____length_2;
};
// Native definition for P/Invoke marshalling of System.ReadOnlyMemory`1
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif
// Native definition for COM marshalling of System.ReadOnlyMemory`1
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif

// System.Buffers.ReadOnlySequence`1<System.Byte>
struct ReadOnlySequence_1_t85097489C00952FC58DF9F3ACE926EAE9A51898A 
{
	// System.Object System.Buffers.ReadOnlySequence`1::_startObject
	RuntimeObject* ____startObject_0;
	// System.Object System.Buffers.ReadOnlySequence`1::_endObject
	RuntimeObject* ____endObject_1;
	// System.Int32 System.Buffers.ReadOnlySequence`1::_startInteger
	int32_t ____startInteger_2;
	// System.Int32 System.Buffers.ReadOnlySequence`1::_endInteger
	int32_t ____endInteger_3;
};

// System.ValueTuple`2<System.Int32,System.String>
struct ValueTuple_2_t401848AEFAD85958596581A12FE51C58224D202B 
{
	// T1 System.ValueTuple`2::Item1
	int32_t ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	String_t* ___Item2_1;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Text.Json.BitStack
struct BitStack_t460BCC3E60CEEB19DD5A9535794E2702E50121B5 
{
	// System.Int32[] System.Text.Json.BitStack::_array
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____array_0;
	// System.UInt64 System.Text.Json.BitStack::_allocationFreeContainer
	uint64_t ____allocationFreeContainer_1;
	// System.Int32 System.Text.Json.BitStack::_currentDepth
	int32_t ____currentDepth_2;
};
// Native definition for P/Invoke marshalling of System.Text.Json.BitStack
struct BitStack_t460BCC3E60CEEB19DD5A9535794E2702E50121B5_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ____array_0;
	uint64_t ____allocationFreeContainer_1;
	int32_t ____currentDepth_2;
};
// Native definition for COM marshalling of System.Text.Json.BitStack
struct BitStack_t460BCC3E60CEEB19DD5A9535794E2702E50121B5_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ____array_0;
	uint64_t ____allocationFreeContainer_1;
	int32_t ____currentDepth_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// SocketIOClient.Newtonsoft.Json.ByteArrayConverter
struct ByteArrayConverter_tB277DA37ED5A0960062DB249ABFA11C48D13B5DD  : public JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16
{
	// System.Collections.Generic.List`1<System.Byte[]> SocketIOClient.Newtonsoft.Json.ByteArrayConverter::<Bytes>k__BackingField
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___U3CBytesU3Ek__BackingField_0;
};

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
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

// System.Text.Json.JsonDocumentOptions
struct JsonDocumentOptions_t46D96C339522F4321E0FA1BD1DB3ABE2F300299B 
{
	// System.Int32 System.Text.Json.JsonDocumentOptions::_maxDepth
	int32_t ____maxDepth_0;
	// System.Text.Json.JsonCommentHandling System.Text.Json.JsonDocumentOptions::_commentHandling
	uint8_t ____commentHandling_1;
	// System.Boolean System.Text.Json.JsonDocumentOptions::<AllowTrailingCommas>k__BackingField
	bool ___U3CAllowTrailingCommasU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of System.Text.Json.JsonDocumentOptions
struct JsonDocumentOptions_t46D96C339522F4321E0FA1BD1DB3ABE2F300299B_marshaled_pinvoke
{
	int32_t ____maxDepth_0;
	uint8_t ____commentHandling_1;
	int32_t ___U3CAllowTrailingCommasU3Ek__BackingField_2;
};
// Native definition for COM marshalling of System.Text.Json.JsonDocumentOptions
struct JsonDocumentOptions_t46D96C339522F4321E0FA1BD1DB3ABE2F300299B_marshaled_com
{
	int32_t ____maxDepth_0;
	uint8_t ____commentHandling_1;
	int32_t ___U3CAllowTrailingCommasU3Ek__BackingField_2;
};

// System.Text.Json.JsonElement
struct JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 
{
	// System.Text.Json.JsonDocument System.Text.Json.JsonElement::_parent
	JsonDocument_tF96A1F7D1D40932B5EA6A97DA06E150B6CBDBE6F* ____parent_0;
	// System.Int32 System.Text.Json.JsonElement::_idx
	int32_t ____idx_1;
};
// Native definition for P/Invoke marshalling of System.Text.Json.JsonElement
struct JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_marshaled_pinvoke
{
	JsonDocument_tF96A1F7D1D40932B5EA6A97DA06E150B6CBDBE6F* ____parent_0;
	int32_t ____idx_1;
};
// Native definition for COM marshalling of System.Text.Json.JsonElement
struct JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_marshaled_com
{
	JsonDocument_tF96A1F7D1D40932B5EA6A97DA06E150B6CBDBE6F* ____parent_0;
	int32_t ____idx_1;
};

// Newtonsoft.Json.JsonPosition
struct JsonPosition_t7788656A280615072710710E8C15D23285850E8E 
{
	// Newtonsoft.Json.JsonContainerType Newtonsoft.Json.JsonPosition::Type
	int32_t ___Type_1;
	// System.Int32 Newtonsoft.Json.JsonPosition::Position
	int32_t ___Position_2;
	// System.String Newtonsoft.Json.JsonPosition::PropertyName
	String_t* ___PropertyName_3;
	// System.Boolean Newtonsoft.Json.JsonPosition::HasIndex
	bool ___HasIndex_4;
};
// Native definition for P/Invoke marshalling of Newtonsoft.Json.JsonPosition
struct JsonPosition_t7788656A280615072710710E8C15D23285850E8E_marshaled_pinvoke
{
	int32_t ___Type_1;
	int32_t ___Position_2;
	char* ___PropertyName_3;
	int32_t ___HasIndex_4;
};
// Native definition for COM marshalling of Newtonsoft.Json.JsonPosition
struct JsonPosition_t7788656A280615072710710E8C15D23285850E8E_marshaled_com
{
	int32_t ___Type_1;
	int32_t ___Position_2;
	Il2CppChar* ___PropertyName_3;
	int32_t ___HasIndex_4;
};

// System.Text.Json.JsonReaderOptions
struct JsonReaderOptions_t947F34FBFA3AD2E8E137B660EC0FAFE4571D7E32 
{
	// System.Int32 System.Text.Json.JsonReaderOptions::_maxDepth
	int32_t ____maxDepth_0;
	// System.Text.Json.JsonCommentHandling System.Text.Json.JsonReaderOptions::_commentHandling
	uint8_t ____commentHandling_1;
	// System.Boolean System.Text.Json.JsonReaderOptions::<AllowTrailingCommas>k__BackingField
	bool ___U3CAllowTrailingCommasU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of System.Text.Json.JsonReaderOptions
struct JsonReaderOptions_t947F34FBFA3AD2E8E137B660EC0FAFE4571D7E32_marshaled_pinvoke
{
	int32_t ____maxDepth_0;
	uint8_t ____commentHandling_1;
	int32_t ___U3CAllowTrailingCommasU3Ek__BackingField_2;
};
// Native definition for COM marshalling of System.Text.Json.JsonReaderOptions
struct JsonReaderOptions_t947F34FBFA3AD2E8E137B660EC0FAFE4571D7E32_marshaled_com
{
	int32_t ____maxDepth_0;
	uint8_t ____commentHandling_1;
	int32_t ___U3CAllowTrailingCommasU3Ek__BackingField_2;
};

// System.Text.Json.JsonWriterOptions
struct JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397 
{
	// System.Int32 System.Text.Json.JsonWriterOptions::_optionsMask
	int32_t ____optionsMask_0;
	// System.Text.Encodings.Web.JavaScriptEncoder System.Text.Json.JsonWriterOptions::<Encoder>k__BackingField
	JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* ___U3CEncoderU3Ek__BackingField_1;
};
// Native definition for P/Invoke marshalling of System.Text.Json.JsonWriterOptions
struct JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397_marshaled_pinvoke
{
	int32_t ____optionsMask_0;
	JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* ___U3CEncoderU3Ek__BackingField_1;
};
// Native definition for COM marshalling of System.Text.Json.JsonWriterOptions
struct JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397_marshaled_com
{
	int32_t ____optionsMask_0;
	JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* ___U3CEncoderU3Ek__BackingField_1;
};

// System.SequencePosition
struct SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14 
{
	// System.Object System.SequencePosition::_object
	RuntimeObject* ____object_0;
	// System.Int32 System.SequencePosition::_integer
	int32_t ____integer_1;
};
// Native definition for P/Invoke marshalling of System.SequencePosition
struct SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14_marshaled_pinvoke
{
	Il2CppIUnknown* ____object_0;
	int32_t ____integer_1;
};
// Native definition for COM marshalling of System.SequencePosition
struct SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14_marshaled_com
{
	Il2CppIUnknown* ____object_0;
	int32_t ____integer_1;
};

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject* ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
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

// System.Text.Json.JsonDocument/MetadataDb
struct MetadataDb_tD3FE33D093F9BFEEED874AEEAF550C2337AC7545 
{
	// System.Int32 System.Text.Json.JsonDocument/MetadataDb::<Length>k__BackingField
	int32_t ___U3CLengthU3Ek__BackingField_2;
	// System.Byte[] System.Text.Json.JsonDocument/MetadataDb::_data
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____data_3;
	// System.Boolean System.Text.Json.JsonDocument/MetadataDb::_convertToAlloc
	bool ____convertToAlloc_4;
	// System.Boolean System.Text.Json.JsonDocument/MetadataDb::_isLocked
	bool ____isLocked_5;
};
// Native definition for P/Invoke marshalling of System.Text.Json.JsonDocument/MetadataDb
struct MetadataDb_tD3FE33D093F9BFEEED874AEEAF550C2337AC7545_marshaled_pinvoke
{
	int32_t ___U3CLengthU3Ek__BackingField_2;
	Il2CppSafeArray/*NONE*/* ____data_3;
	int32_t ____convertToAlloc_4;
	int32_t ____isLocked_5;
};
// Native definition for COM marshalling of System.Text.Json.JsonDocument/MetadataDb
struct MetadataDb_tD3FE33D093F9BFEEED874AEEAF550C2337AC7545_marshaled_com
{
	int32_t ___U3CLengthU3Ek__BackingField_2;
	Il2CppSafeArray/*NONE*/* ____data_3;
	int32_t ____convertToAlloc_4;
	int32_t ____isLocked_5;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___m_task_2;
};

// System.ByReference`1<System.Byte>
struct ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
};

// System.Nullable`1<System.Runtime.Serialization.StreamingContext>
struct Nullable_1_tC3E8E254B9DCF808C08AFA1FC2151C2BC0040F3A 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___value_1;
};

// SocketIOClient.Transport.BaseTransport
struct BaseTransport_t2051933D39C32434680AEC63D3F73D0316AE895C  : public RuntimeObject
{
	// System.DateTime SocketIOClient.Transport.BaseTransport::_pingTime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____pingTime_0;
	// System.Collections.Generic.Queue`1<SocketIOClient.Messages.IMessage> SocketIOClient.Transport.BaseTransport::_messageQueue
	Queue_1_tB57FE35A0FBB199BBF4A6E0EC8C4F775F6AD265F* ____messageQueue_1;
	// SocketIOClient.SocketIOOptions SocketIOClient.Transport.BaseTransport::<Options>k__BackingField
	SocketIOOptions_t82FFF45728FD73A1C3BB4EA483A822D23F16FB1F* ___U3COptionsU3Ek__BackingField_2;
	// System.Reactive.Subjects.Subject`1<SocketIOClient.Messages.IMessage> SocketIOClient.Transport.BaseTransport::<MessageSubject>k__BackingField
	Subject_1_t3761EC95FD10AF7AE76907478B3488CFC22A0E99* ___U3CMessageSubjectU3Ek__BackingField_3;
	// SocketIOClient.JsonSerializer.IJsonSerializer SocketIOClient.Transport.BaseTransport::<JsonSerializer>k__BackingField
	RuntimeObject* ___U3CJsonSerializerU3Ek__BackingField_4;
	// System.Threading.CancellationTokenSource SocketIOClient.Transport.BaseTransport::<PingTokenSource>k__BackingField
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___U3CPingTokenSourceU3Ek__BackingField_5;
	// SocketIOClient.Messages.OpenedMessage SocketIOClient.Transport.BaseTransport::<OpenedMessage>k__BackingField
	OpenedMessage_tB5F1C6F098ABB481932A5728B15765F454E68806* ___U3COpenedMessageU3Ek__BackingField_6;
	// System.String SocketIOClient.Transport.BaseTransport::<Namespace>k__BackingField
	String_t* ___U3CNamespaceU3Ek__BackingField_7;
	// SocketIOClient.UriConverters.IUriConverter SocketIOClient.Transport.BaseTransport::<UriConverter>k__BackingField
	RuntimeObject* ___U3CUriConverterU3Ek__BackingField_8;
};

// SocketIOClient.JsonSerializer.ByteArrayConverter
struct ByteArrayConverter_t63039C8D605504CCABFF7783367282E961DDC022  : public JsonConverter_1_t87134F2FDE6C85D3BC65F2583D387D617C578287
{
	// System.Collections.Generic.List`1<System.Byte[]> SocketIOClient.JsonSerializer.ByteArrayConverter::<Bytes>k__BackingField
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___U3CBytesU3Ek__BackingField_11;
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

// System.Text.Json.JsonDocument
struct JsonDocument_tF96A1F7D1D40932B5EA6A97DA06E150B6CBDBE6F  : public RuntimeObject
{
	// System.ReadOnlyMemory`1<System.Byte> System.Text.Json.JsonDocument::_utf8Json
	ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 ____utf8Json_0;
	// System.Text.Json.JsonDocument/MetadataDb System.Text.Json.JsonDocument::_parsedData
	MetadataDb_tD3FE33D093F9BFEEED874AEEAF550C2337AC7545 ____parsedData_1;
	// System.Byte[] System.Text.Json.JsonDocument::_extraRentedArrayPoolBytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____extraRentedArrayPoolBytes_2;
	// System.Boolean System.Text.Json.JsonDocument::_hasExtraRentedArrayPoolBytes
	bool ____hasExtraRentedArrayPoolBytes_3;
	// System.Text.Json.PooledByteBufferWriter System.Text.Json.JsonDocument::_extraPooledByteBufferWriter
	PooledByteBufferWriter_tFD5CABBA6D5073D8882FE5E6A486AC288B01EE52* ____extraPooledByteBufferWriter_4;
	// System.Boolean System.Text.Json.JsonDocument::_hasExtraPooledByteBufferWriter
	bool ____hasExtraPooledByteBufferWriter_5;
	// System.ValueTuple`2<System.Int32,System.String> System.Text.Json.JsonDocument::_lastIndexAndString
	ValueTuple_2_t401848AEFAD85958596581A12FE51C58224D202B ____lastIndexAndString_6;
	// System.Boolean System.Text.Json.JsonDocument::<IsDisposable>k__BackingField
	bool ___U3CIsDisposableU3Ek__BackingField_7;
};

// Newtonsoft.Json.JsonReader
struct JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765  : public RuntimeObject
{
	// Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::_tokenType
	int32_t ____tokenType_0;
	// System.Object Newtonsoft.Json.JsonReader::_value
	RuntimeObject* ____value_1;
	// System.Char Newtonsoft.Json.JsonReader::_quoteChar
	Il2CppChar ____quoteChar_2;
	// Newtonsoft.Json.JsonReader/State Newtonsoft.Json.JsonReader::_currentState
	int32_t ____currentState_3;
	// Newtonsoft.Json.JsonPosition Newtonsoft.Json.JsonReader::_currentPosition
	JsonPosition_t7788656A280615072710710E8C15D23285850E8E ____currentPosition_4;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonReader::_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____culture_5;
	// Newtonsoft.Json.DateTimeZoneHandling Newtonsoft.Json.JsonReader::_dateTimeZoneHandling
	int32_t ____dateTimeZoneHandling_6;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonReader::_maxDepth
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ____maxDepth_7;
	// System.Boolean Newtonsoft.Json.JsonReader::_hasExceededMaxDepth
	bool ____hasExceededMaxDepth_8;
	// Newtonsoft.Json.DateParseHandling Newtonsoft.Json.JsonReader::_dateParseHandling
	int32_t ____dateParseHandling_9;
	// Newtonsoft.Json.FloatParseHandling Newtonsoft.Json.JsonReader::_floatParseHandling
	int32_t ____floatParseHandling_10;
	// System.String Newtonsoft.Json.JsonReader::_dateFormatString
	String_t* ____dateFormatString_11;
	// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition> Newtonsoft.Json.JsonReader::_stack
	List_1_t53E7DEFF45EC8B1D5AE04D4FC6284E617F0D79CB* ____stack_12;
	// System.Boolean Newtonsoft.Json.JsonReader::<CloseInput>k__BackingField
	bool ___U3CCloseInputU3Ek__BackingField_13;
	// System.Boolean Newtonsoft.Json.JsonReader::<SupportMultipleContent>k__BackingField
	bool ___U3CSupportMultipleContentU3Ek__BackingField_14;
};

// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59  : public RuntimeObject
{
	// Newtonsoft.Json.TypeNameHandling Newtonsoft.Json.JsonSerializer::_typeNameHandling
	int32_t ____typeNameHandling_0;
	// Newtonsoft.Json.TypeNameAssemblyFormatHandling Newtonsoft.Json.JsonSerializer::_typeNameAssemblyFormatHandling
	int32_t ____typeNameAssemblyFormatHandling_1;
	// Newtonsoft.Json.PreserveReferencesHandling Newtonsoft.Json.JsonSerializer::_preserveReferencesHandling
	int32_t ____preserveReferencesHandling_2;
	// Newtonsoft.Json.ReferenceLoopHandling Newtonsoft.Json.JsonSerializer::_referenceLoopHandling
	int32_t ____referenceLoopHandling_3;
	// Newtonsoft.Json.MissingMemberHandling Newtonsoft.Json.JsonSerializer::_missingMemberHandling
	int32_t ____missingMemberHandling_4;
	// Newtonsoft.Json.ObjectCreationHandling Newtonsoft.Json.JsonSerializer::_objectCreationHandling
	int32_t ____objectCreationHandling_5;
	// Newtonsoft.Json.NullValueHandling Newtonsoft.Json.JsonSerializer::_nullValueHandling
	int32_t ____nullValueHandling_6;
	// Newtonsoft.Json.DefaultValueHandling Newtonsoft.Json.JsonSerializer::_defaultValueHandling
	int32_t ____defaultValueHandling_7;
	// Newtonsoft.Json.ConstructorHandling Newtonsoft.Json.JsonSerializer::_constructorHandling
	int32_t ____constructorHandling_8;
	// Newtonsoft.Json.MetadataPropertyHandling Newtonsoft.Json.JsonSerializer::_metadataPropertyHandling
	int32_t ____metadataPropertyHandling_9;
	// Newtonsoft.Json.JsonConverterCollection Newtonsoft.Json.JsonSerializer::_converters
	JsonConverterCollection_t6EEC84565C08B14107276B5023CE9E978DFCDF89* ____converters_10;
	// Newtonsoft.Json.Serialization.IContractResolver Newtonsoft.Json.JsonSerializer::_contractResolver
	RuntimeObject* ____contractResolver_11;
	// Newtonsoft.Json.Serialization.ITraceWriter Newtonsoft.Json.JsonSerializer::_traceWriter
	RuntimeObject* ____traceWriter_12;
	// System.Collections.IEqualityComparer Newtonsoft.Json.JsonSerializer::_equalityComparer
	RuntimeObject* ____equalityComparer_13;
	// Newtonsoft.Json.Serialization.ISerializationBinder Newtonsoft.Json.JsonSerializer::_serializationBinder
	RuntimeObject* ____serializationBinder_14;
	// System.Runtime.Serialization.StreamingContext Newtonsoft.Json.JsonSerializer::_context
	StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ____context_15;
	// Newtonsoft.Json.Serialization.IReferenceResolver Newtonsoft.Json.JsonSerializer::_referenceResolver
	RuntimeObject* ____referenceResolver_16;
	// System.Nullable`1<Newtonsoft.Json.Formatting> Newtonsoft.Json.JsonSerializer::_formatting
	Nullable_1_tAEE2B9C53750E53F9B91B70967290720873E8D3E ____formatting_17;
	// System.Nullable`1<Newtonsoft.Json.DateFormatHandling> Newtonsoft.Json.JsonSerializer::_dateFormatHandling
	Nullable_1_t4776B8A4D0D52AA8BDCD45E6D7070659326453D2 ____dateFormatHandling_18;
	// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling> Newtonsoft.Json.JsonSerializer::_dateTimeZoneHandling
	Nullable_1_tD88F7E37B65824D38D74608E576D1265E5A2D2B2 ____dateTimeZoneHandling_19;
	// System.Nullable`1<Newtonsoft.Json.DateParseHandling> Newtonsoft.Json.JsonSerializer::_dateParseHandling
	Nullable_1_tDC640D18A54CA8F0A3C74518CBC15D439C8FC228 ____dateParseHandling_20;
	// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling> Newtonsoft.Json.JsonSerializer::_floatFormatHandling
	Nullable_1_tEAE8D5B59DCEB4F809A8A5F390EAAC18F266B822 ____floatFormatHandling_21;
	// System.Nullable`1<Newtonsoft.Json.FloatParseHandling> Newtonsoft.Json.JsonSerializer::_floatParseHandling
	Nullable_1_tC13211A32645AE3863530378A08BC45089EE419B ____floatParseHandling_22;
	// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling> Newtonsoft.Json.JsonSerializer::_stringEscapeHandling
	Nullable_1_t61214A44C233A0B00A9F79E380485D79D5FAA7C6 ____stringEscapeHandling_23;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonSerializer::_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____culture_24;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonSerializer::_maxDepth
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ____maxDepth_25;
	// System.Boolean Newtonsoft.Json.JsonSerializer::_maxDepthSet
	bool ____maxDepthSet_26;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.JsonSerializer::_checkAdditionalContent
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ____checkAdditionalContent_27;
	// System.String Newtonsoft.Json.JsonSerializer::_dateFormatString
	String_t* ____dateFormatString_28;
	// System.Boolean Newtonsoft.Json.JsonSerializer::_dateFormatStringSet
	bool ____dateFormatStringSet_29;
	// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs> Newtonsoft.Json.JsonSerializer::Error
	EventHandler_1_t69462DFC2F2C8D7576BEE9D1F5BB6C2E55B2C380* ___Error_30;
};

// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition> Newtonsoft.Json.JsonWriter::_stack
	List_1_t53E7DEFF45EC8B1D5AE04D4FC6284E617F0D79CB* ____stack_2;
	// Newtonsoft.Json.JsonPosition Newtonsoft.Json.JsonWriter::_currentPosition
	JsonPosition_t7788656A280615072710710E8C15D23285850E8E ____currentPosition_3;
	// Newtonsoft.Json.JsonWriter/State Newtonsoft.Json.JsonWriter::_currentState
	int32_t ____currentState_4;
	// Newtonsoft.Json.Formatting Newtonsoft.Json.JsonWriter::_formatting
	int32_t ____formatting_5;
	// System.Boolean Newtonsoft.Json.JsonWriter::<CloseOutput>k__BackingField
	bool ___U3CCloseOutputU3Ek__BackingField_6;
	// System.Boolean Newtonsoft.Json.JsonWriter::<AutoCompleteOnClose>k__BackingField
	bool ___U3CAutoCompleteOnCloseU3Ek__BackingField_7;
	// Newtonsoft.Json.DateFormatHandling Newtonsoft.Json.JsonWriter::_dateFormatHandling
	int32_t ____dateFormatHandling_8;
	// Newtonsoft.Json.DateTimeZoneHandling Newtonsoft.Json.JsonWriter::_dateTimeZoneHandling
	int32_t ____dateTimeZoneHandling_9;
	// Newtonsoft.Json.StringEscapeHandling Newtonsoft.Json.JsonWriter::_stringEscapeHandling
	int32_t ____stringEscapeHandling_10;
	// Newtonsoft.Json.FloatFormatHandling Newtonsoft.Json.JsonWriter::_floatFormatHandling
	int32_t ____floatFormatHandling_11;
	// System.String Newtonsoft.Json.JsonWriter::_dateFormatString
	String_t* ____dateFormatString_12;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonWriter::_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____culture_13;
};

// SocketIOClient.Messages.PongMessage
struct PongMessage_t5FD45D5BAA78BB30EB15C7C4FA84536D61617447  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.Byte[]> SocketIOClient.Messages.PongMessage::<OutgoingBytes>k__BackingField
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___U3COutgoingBytesU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<System.Byte[]> SocketIOClient.Messages.PongMessage::<IncomingBytes>k__BackingField
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___U3CIncomingBytesU3Ek__BackingField_1;
	// System.Int32 SocketIOClient.Messages.PongMessage::<BinaryCount>k__BackingField
	int32_t ___U3CBinaryCountU3Ek__BackingField_2;
	// System.Int32 SocketIOClient.Messages.PongMessage::<Eio>k__BackingField
	int32_t ___U3CEioU3Ek__BackingField_3;
	// SocketIOClient.Transport.TransportProtocol SocketIOClient.Messages.PongMessage::<Protocol>k__BackingField
	int32_t ___U3CProtocolU3Ek__BackingField_4;
	// System.TimeSpan SocketIOClient.Messages.PongMessage::<Duration>k__BackingField
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___U3CDurationU3Ek__BackingField_5;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Text.Json.Utf8JsonWriter
struct Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0  : public RuntimeObject
{
	// System.Buffers.IBufferWriter`1<System.Byte> System.Text.Json.Utf8JsonWriter::_output
	RuntimeObject* ____output_1;
	// System.IO.Stream System.Text.Json.Utf8JsonWriter::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_2;
	// System.Buffers.ArrayBufferWriter`1<System.Byte> System.Text.Json.Utf8JsonWriter::_arrayBufferWriter
	ArrayBufferWriter_1_t1BC1DECDD156A1043C7214DF1E3DA071F93894A3* ____arrayBufferWriter_3;
	// System.Memory`1<System.Byte> System.Text.Json.Utf8JsonWriter::_memory
	Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ____memory_4;
	// System.Boolean System.Text.Json.Utf8JsonWriter::_inObject
	bool ____inObject_5;
	// System.Text.Json.JsonTokenType System.Text.Json.Utf8JsonWriter::_tokenType
	uint8_t ____tokenType_6;
	// System.Text.Json.BitStack System.Text.Json.Utf8JsonWriter::_bitStack
	BitStack_t460BCC3E60CEEB19DD5A9535794E2702E50121B5 ____bitStack_7;
	// System.Int32 System.Text.Json.Utf8JsonWriter::_currentDepth
	int32_t ____currentDepth_8;
	// System.Text.Json.JsonWriterOptions System.Text.Json.Utf8JsonWriter::_options
	JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397 ____options_9;
	// System.Int32 System.Text.Json.Utf8JsonWriter::<BytesPending>k__BackingField
	int32_t ___U3CBytesPendingU3Ek__BackingField_10;
	// System.Int64 System.Text.Json.Utf8JsonWriter::<BytesCommitted>k__BackingField
	int64_t ___U3CBytesCommittedU3Ek__BackingField_11;
};

// System.Text.Json.JsonElement/ArrayEnumerator
struct ArrayEnumerator_t6A32F25D9BE79D9856DA29CBAD749933F2C9C97C 
{
	// System.Text.Json.JsonElement System.Text.Json.JsonElement/ArrayEnumerator::_target
	JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 ____target_0;
	// System.Int32 System.Text.Json.JsonElement/ArrayEnumerator::_curIdx
	int32_t ____curIdx_1;
	// System.Int32 System.Text.Json.JsonElement/ArrayEnumerator::_endIdxOrVersion
	int32_t ____endIdxOrVersion_2;
};
// Native definition for P/Invoke marshalling of System.Text.Json.JsonElement/ArrayEnumerator
struct ArrayEnumerator_t6A32F25D9BE79D9856DA29CBAD749933F2C9C97C_marshaled_pinvoke
{
	JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_marshaled_pinvoke ____target_0;
	int32_t ____curIdx_1;
	int32_t ____endIdxOrVersion_2;
};
// Native definition for COM marshalling of System.Text.Json.JsonElement/ArrayEnumerator
struct ArrayEnumerator_t6A32F25D9BE79D9856DA29CBAD749933F2C9C97C_marshaled_com
{
	JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_marshaled_com ____target_0;
	int32_t ____curIdx_1;
	int32_t ____endIdxOrVersion_2;
};

// System.ReadOnlySpan`1<System.Byte>
struct ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D 
{
	// System.ByReference`1<T> System.ReadOnlySpan`1::_pointer
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer_0;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_1;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 
{
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_com
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};

// Newtonsoft.Json.JsonSerializerSettings
struct JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF  : public RuntimeObject
{
	// System.Nullable`1<Newtonsoft.Json.Formatting> Newtonsoft.Json.JsonSerializerSettings::_formatting
	Nullable_1_tAEE2B9C53750E53F9B91B70967290720873E8D3E ____formatting_22;
	// System.Nullable`1<Newtonsoft.Json.DateFormatHandling> Newtonsoft.Json.JsonSerializerSettings::_dateFormatHandling
	Nullable_1_t4776B8A4D0D52AA8BDCD45E6D7070659326453D2 ____dateFormatHandling_23;
	// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling> Newtonsoft.Json.JsonSerializerSettings::_dateTimeZoneHandling
	Nullable_1_tD88F7E37B65824D38D74608E576D1265E5A2D2B2 ____dateTimeZoneHandling_24;
	// System.Nullable`1<Newtonsoft.Json.DateParseHandling> Newtonsoft.Json.JsonSerializerSettings::_dateParseHandling
	Nullable_1_tDC640D18A54CA8F0A3C74518CBC15D439C8FC228 ____dateParseHandling_25;
	// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling> Newtonsoft.Json.JsonSerializerSettings::_floatFormatHandling
	Nullable_1_tEAE8D5B59DCEB4F809A8A5F390EAAC18F266B822 ____floatFormatHandling_26;
	// System.Nullable`1<Newtonsoft.Json.FloatParseHandling> Newtonsoft.Json.JsonSerializerSettings::_floatParseHandling
	Nullable_1_tC13211A32645AE3863530378A08BC45089EE419B ____floatParseHandling_27;
	// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling> Newtonsoft.Json.JsonSerializerSettings::_stringEscapeHandling
	Nullable_1_t61214A44C233A0B00A9F79E380485D79D5FAA7C6 ____stringEscapeHandling_28;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonSerializerSettings::_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____culture_29;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.JsonSerializerSettings::_checkAdditionalContent
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ____checkAdditionalContent_30;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonSerializerSettings::_maxDepth
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ____maxDepth_31;
	// System.Boolean Newtonsoft.Json.JsonSerializerSettings::_maxDepthSet
	bool ____maxDepthSet_32;
	// System.String Newtonsoft.Json.JsonSerializerSettings::_dateFormatString
	String_t* ____dateFormatString_33;
	// System.Boolean Newtonsoft.Json.JsonSerializerSettings::_dateFormatStringSet
	bool ____dateFormatStringSet_34;
	// System.Nullable`1<Newtonsoft.Json.TypeNameAssemblyFormatHandling> Newtonsoft.Json.JsonSerializerSettings::_typeNameAssemblyFormatHandling
	Nullable_1_t762E380C63D6C0CB1E8ADBCADE57240FB061367F ____typeNameAssemblyFormatHandling_35;
	// System.Nullable`1<Newtonsoft.Json.DefaultValueHandling> Newtonsoft.Json.JsonSerializerSettings::_defaultValueHandling
	Nullable_1_t4DEE77C12DDAF72BAE2A1FA8A8736FC478D721E8 ____defaultValueHandling_36;
	// System.Nullable`1<Newtonsoft.Json.PreserveReferencesHandling> Newtonsoft.Json.JsonSerializerSettings::_preserveReferencesHandling
	Nullable_1_t599FF2F862BEFE0F4B6BDA65B36841F4740B0D12 ____preserveReferencesHandling_37;
	// System.Nullable`1<Newtonsoft.Json.NullValueHandling> Newtonsoft.Json.JsonSerializerSettings::_nullValueHandling
	Nullable_1_tA1B6210C1924173AEFE9AF8FBDD3BA856E74A790 ____nullValueHandling_38;
	// System.Nullable`1<Newtonsoft.Json.ObjectCreationHandling> Newtonsoft.Json.JsonSerializerSettings::_objectCreationHandling
	Nullable_1_t5ECEC9E2B3F1C050A3E9EC928487DD5C9AB0996D ____objectCreationHandling_39;
	// System.Nullable`1<Newtonsoft.Json.MissingMemberHandling> Newtonsoft.Json.JsonSerializerSettings::_missingMemberHandling
	Nullable_1_t776B72BEFF6E3E2D489C4C6D855C89139D6B4CA4 ____missingMemberHandling_40;
	// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling> Newtonsoft.Json.JsonSerializerSettings::_referenceLoopHandling
	Nullable_1_t599F8D9D40143BFCB12D7085DFEA8AC7171F5E77 ____referenceLoopHandling_41;
	// System.Nullable`1<System.Runtime.Serialization.StreamingContext> Newtonsoft.Json.JsonSerializerSettings::_context
	Nullable_1_tC3E8E254B9DCF808C08AFA1FC2151C2BC0040F3A ____context_42;
	// System.Nullable`1<Newtonsoft.Json.ConstructorHandling> Newtonsoft.Json.JsonSerializerSettings::_constructorHandling
	Nullable_1_tE866C25CB8A73A44077AAC48B1D406CF034E1496 ____constructorHandling_43;
	// System.Nullable`1<Newtonsoft.Json.TypeNameHandling> Newtonsoft.Json.JsonSerializerSettings::_typeNameHandling
	Nullable_1_tB85AB604017196E6A3D3B920121E8C3A255827F0 ____typeNameHandling_44;
	// System.Nullable`1<Newtonsoft.Json.MetadataPropertyHandling> Newtonsoft.Json.JsonSerializerSettings::_metadataPropertyHandling
	Nullable_1_t0E2AF35997B80CE423EBCAFDC0C58FB7182CA6FE ____metadataPropertyHandling_45;
	// System.Collections.Generic.IList`1<Newtonsoft.Json.JsonConverter> Newtonsoft.Json.JsonSerializerSettings::<Converters>k__BackingField
	RuntimeObject* ___U3CConvertersU3Ek__BackingField_46;
	// Newtonsoft.Json.Serialization.IContractResolver Newtonsoft.Json.JsonSerializerSettings::<ContractResolver>k__BackingField
	RuntimeObject* ___U3CContractResolverU3Ek__BackingField_47;
	// System.Collections.IEqualityComparer Newtonsoft.Json.JsonSerializerSettings::<EqualityComparer>k__BackingField
	RuntimeObject* ___U3CEqualityComparerU3Ek__BackingField_48;
	// System.Func`1<Newtonsoft.Json.Serialization.IReferenceResolver> Newtonsoft.Json.JsonSerializerSettings::<ReferenceResolverProvider>k__BackingField
	Func_1_t78E8B13F3C7D6CC3EB821B4F5D26999D062417E2* ___U3CReferenceResolverProviderU3Ek__BackingField_49;
	// Newtonsoft.Json.Serialization.ITraceWriter Newtonsoft.Json.JsonSerializerSettings::<TraceWriter>k__BackingField
	RuntimeObject* ___U3CTraceWriterU3Ek__BackingField_50;
	// Newtonsoft.Json.Serialization.ISerializationBinder Newtonsoft.Json.JsonSerializerSettings::<SerializationBinder>k__BackingField
	RuntimeObject* ___U3CSerializationBinderU3Ek__BackingField_51;
	// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs> Newtonsoft.Json.JsonSerializerSettings::<Error>k__BackingField
	EventHandler_1_t69462DFC2F2C8D7576BEE9D1F5BB6C2E55B2C380* ___U3CErrorU3Ek__BackingField_52;
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

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// SocketIOClient.Transport.WebSocketTransport
struct WebSocketTransport_tA88D877EBA0CF8C088C3F8395F20E3CDDB6521CA  : public BaseTransport_t2051933D39C32434680AEC63D3F73D0316AE895C
{
	// SocketIOClient.Transport.IClientWebSocket SocketIOClient.Transport.WebSocketTransport::_ws
	RuntimeObject* ____ws_11;
	// System.Threading.SemaphoreSlim SocketIOClient.Transport.WebSocketTransport::_sendLock
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____sendLock_12;
};

// System.Func`1<System.Text.Json.JsonSerializerOptions>
struct Func_1_t27E25A1D7DE6C9B79FF934165133F82F6D9A05EA  : public MulticastDelegate_t
{
};

// System.Func`1<Newtonsoft.Json.JsonSerializerSettings>
struct Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08  : public MulticastDelegate_t
{
};

// System.Func`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Text.Json.Utf8JsonReader
struct Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8 
{
	// System.ReadOnlySpan`1<System.Byte> System.Text.Json.Utf8JsonReader::_buffer
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ____buffer_0;
	// System.Boolean System.Text.Json.Utf8JsonReader::_isFinalBlock
	bool ____isFinalBlock_1;
	// System.Boolean System.Text.Json.Utf8JsonReader::_isInputSequence
	bool ____isInputSequence_2;
	// System.Int64 System.Text.Json.Utf8JsonReader::_lineNumber
	int64_t ____lineNumber_3;
	// System.Int64 System.Text.Json.Utf8JsonReader::_bytePositionInLine
	int64_t ____bytePositionInLine_4;
	// System.Int32 System.Text.Json.Utf8JsonReader::_consumed
	int32_t ____consumed_5;
	// System.Boolean System.Text.Json.Utf8JsonReader::_inObject
	bool ____inObject_6;
	// System.Boolean System.Text.Json.Utf8JsonReader::_isNotPrimitive
	bool ____isNotPrimitive_7;
	// System.Text.Json.JsonTokenType System.Text.Json.Utf8JsonReader::_tokenType
	uint8_t ____tokenType_8;
	// System.Text.Json.JsonTokenType System.Text.Json.Utf8JsonReader::_previousTokenType
	uint8_t ____previousTokenType_9;
	// System.Text.Json.JsonReaderOptions System.Text.Json.Utf8JsonReader::_readerOptions
	JsonReaderOptions_t947F34FBFA3AD2E8E137B660EC0FAFE4571D7E32 ____readerOptions_10;
	// System.Text.Json.BitStack System.Text.Json.Utf8JsonReader::_bitStack
	BitStack_t460BCC3E60CEEB19DD5A9535794E2702E50121B5 ____bitStack_11;
	// System.Int64 System.Text.Json.Utf8JsonReader::_totalConsumed
	int64_t ____totalConsumed_12;
	// System.Boolean System.Text.Json.Utf8JsonReader::_isLastSegment
	bool ____isLastSegment_13;
	// System.Boolean System.Text.Json.Utf8JsonReader::_stringHasEscaping
	bool ____stringHasEscaping_14;
	// System.Boolean System.Text.Json.Utf8JsonReader::_isMultiSegment
	bool ____isMultiSegment_15;
	// System.Boolean System.Text.Json.Utf8JsonReader::_trailingCommaBeforeComment
	bool ____trailingCommaBeforeComment_16;
	// System.SequencePosition System.Text.Json.Utf8JsonReader::_nextPosition
	SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14 ____nextPosition_17;
	// System.SequencePosition System.Text.Json.Utf8JsonReader::_currentPosition
	SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14 ____currentPosition_18;
	// System.Buffers.ReadOnlySequence`1<System.Byte> System.Text.Json.Utf8JsonReader::_sequence
	ReadOnlySequence_1_t85097489C00952FC58DF9F3ACE926EAE9A51898A ____sequence_19;
	// System.ReadOnlySpan`1<System.Byte> System.Text.Json.Utf8JsonReader::<ValueSpan>k__BackingField
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___U3CValueSpanU3Ek__BackingField_20;
	// System.Int64 System.Text.Json.Utf8JsonReader::<TokenStartIndex>k__BackingField
	int64_t ___U3CTokenStartIndexU3Ek__BackingField_21;
	// System.Boolean System.Text.Json.Utf8JsonReader::<HasValueSequence>k__BackingField
	bool ___U3CHasValueSequenceU3Ek__BackingField_22;
	// System.Buffers.ReadOnlySequence`1<System.Byte> System.Text.Json.Utf8JsonReader::<ValueSequence>k__BackingField
	ReadOnlySequence_1_t85097489C00952FC58DF9F3ACE926EAE9A51898A ___U3CValueSequenceU3Ek__BackingField_23;
};
// Native definition for P/Invoke marshalling of System.Text.Json.Utf8JsonReader
struct Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8_marshaled_pinvoke
{
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ____buffer_0;
	int32_t ____isFinalBlock_1;
	int32_t ____isInputSequence_2;
	int64_t ____lineNumber_3;
	int64_t ____bytePositionInLine_4;
	int32_t ____consumed_5;
	int32_t ____inObject_6;
	int32_t ____isNotPrimitive_7;
	uint8_t ____tokenType_8;
	uint8_t ____previousTokenType_9;
	JsonReaderOptions_t947F34FBFA3AD2E8E137B660EC0FAFE4571D7E32_marshaled_pinvoke ____readerOptions_10;
	BitStack_t460BCC3E60CEEB19DD5A9535794E2702E50121B5_marshaled_pinvoke ____bitStack_11;
	int64_t ____totalConsumed_12;
	int32_t ____isLastSegment_13;
	int32_t ____stringHasEscaping_14;
	int32_t ____isMultiSegment_15;
	int32_t ____trailingCommaBeforeComment_16;
	SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14_marshaled_pinvoke ____nextPosition_17;
	SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14_marshaled_pinvoke ____currentPosition_18;
	ReadOnlySequence_1_t85097489C00952FC58DF9F3ACE926EAE9A51898A ____sequence_19;
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___U3CValueSpanU3Ek__BackingField_20;
	int64_t ___U3CTokenStartIndexU3Ek__BackingField_21;
	int32_t ___U3CHasValueSequenceU3Ek__BackingField_22;
	ReadOnlySequence_1_t85097489C00952FC58DF9F3ACE926EAE9A51898A ___U3CValueSequenceU3Ek__BackingField_23;
};
// Native definition for COM marshalling of System.Text.Json.Utf8JsonReader
struct Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8_marshaled_com
{
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ____buffer_0;
	int32_t ____isFinalBlock_1;
	int32_t ____isInputSequence_2;
	int64_t ____lineNumber_3;
	int64_t ____bytePositionInLine_4;
	int32_t ____consumed_5;
	int32_t ____inObject_6;
	int32_t ____isNotPrimitive_7;
	uint8_t ____tokenType_8;
	uint8_t ____previousTokenType_9;
	JsonReaderOptions_t947F34FBFA3AD2E8E137B660EC0FAFE4571D7E32_marshaled_com ____readerOptions_10;
	BitStack_t460BCC3E60CEEB19DD5A9535794E2702E50121B5_marshaled_com ____bitStack_11;
	int64_t ____totalConsumed_12;
	int32_t ____isLastSegment_13;
	int32_t ____stringHasEscaping_14;
	int32_t ____isMultiSegment_15;
	int32_t ____trailingCommaBeforeComment_16;
	SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14_marshaled_com ____nextPosition_17;
	SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14_marshaled_com ____currentPosition_18;
	ReadOnlySequence_1_t85097489C00952FC58DF9F3ACE926EAE9A51898A ____sequence_19;
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___U3CValueSpanU3Ek__BackingField_20;
	int64_t ___U3CTokenStartIndexU3Ek__BackingField_21;
	int32_t ___U3CHasValueSequenceU3Ek__BackingField_22;
	ReadOnlySequence_1_t85097489C00952FC58DF9F3ACE926EAE9A51898A ___U3CValueSequenceU3Ek__BackingField_23;
};

// SocketIOClient.Transport.WebSocketTransport/<ConnectAsync>d__6
struct U3CConnectAsyncU3Ed__6_tD5DCCC944C5427F5E76F241174C5AB3B63C9A8D5  : public RuntimeObject
{
	// System.Int32 SocketIOClient.Transport.WebSocketTransport/<ConnectAsync>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder SocketIOClient.Transport.WebSocketTransport/<ConnectAsync>d__6::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// System.Uri SocketIOClient.Transport.WebSocketTransport/<ConnectAsync>d__6::uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___uri_2;
	// System.Threading.CancellationToken SocketIOClient.Transport.WebSocketTransport/<ConnectAsync>d__6::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_3;
	// SocketIOClient.Transport.WebSocketTransport SocketIOClient.Transport.WebSocketTransport/<ConnectAsync>d__6::<>4__this
	WebSocketTransport_tA88D877EBA0CF8C088C3F8395F20E3CDDB6521CA* ___U3CU3E4__this_4;
	// System.Runtime.CompilerServices.TaskAwaiter SocketIOClient.Transport.WebSocketTransport/<ConnectAsync>d__6::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_5;
};

// SocketIOClient.Transport.WebSocketTransport/<DisconnectAsync>d__7
struct U3CDisconnectAsyncU3Ed__7_tC478BFAF2B99787B82C3B70936A6E6CE41D58B60  : public RuntimeObject
{
	// System.Int32 SocketIOClient.Transport.WebSocketTransport/<DisconnectAsync>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder SocketIOClient.Transport.WebSocketTransport/<DisconnectAsync>d__7::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// System.Threading.CancellationToken SocketIOClient.Transport.WebSocketTransport/<DisconnectAsync>d__7::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_2;
	// SocketIOClient.Transport.WebSocketTransport SocketIOClient.Transport.WebSocketTransport/<DisconnectAsync>d__7::<>4__this
	WebSocketTransport_tA88D877EBA0CF8C088C3F8395F20E3CDDB6521CA* ___U3CU3E4__this_3;
	// System.Runtime.CompilerServices.TaskAwaiter SocketIOClient.Transport.WebSocketTransport/<DisconnectAsync>d__7::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_4;
};

// SocketIOClient.Transport.WebSocketTransport/<SendAsync>d__8
struct U3CSendAsyncU3Ed__8_tBEFC093A6294B2E37CCE792AE8D1BF73CD984477  : public RuntimeObject
{
	// System.Int32 SocketIOClient.Transport.WebSocketTransport/<SendAsync>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder SocketIOClient.Transport.WebSocketTransport/<SendAsync>d__8::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// SocketIOClient.Transport.Payload SocketIOClient.Transport.WebSocketTransport/<SendAsync>d__8::payload
	Payload_t40222C90D284CE7D812D4D8C137225A5846030C9* ___payload_2;
	// System.Threading.CancellationToken SocketIOClient.Transport.WebSocketTransport/<SendAsync>d__8::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_3;
	// SocketIOClient.Transport.WebSocketTransport SocketIOClient.Transport.WebSocketTransport/<SendAsync>d__8::<>4__this
	WebSocketTransport_tA88D877EBA0CF8C088C3F8395F20E3CDDB6521CA* ___U3CU3E4__this_4;
	// System.Byte[] SocketIOClient.Transport.WebSocketTransport/<SendAsync>d__8::<bytes>5__1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CbytesU3E5__1_5;
	// System.Collections.Generic.List`1/Enumerator<System.Byte[]> SocketIOClient.Transport.WebSocketTransport/<SendAsync>d__8::<>s__2
	Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC ___U3CU3Es__2_6;
	// System.Byte[] SocketIOClient.Transport.WebSocketTransport/<SendAsync>d__8::<item>5__3
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CitemU3E5__3_7;
	// System.Runtime.CompilerServices.TaskAwaiter SocketIOClient.Transport.WebSocketTransport/<SendAsync>d__8::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_8;
};

// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Byte[]>

// System.Collections.Generic.List`1<System.Text.Json.JsonElement>
struct List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	JsonElementU5BU5D_tBB2D5D0BFF97B0D11F246C88A4E6D5088CBADE2D* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Text.Json.JsonElement>

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// SocketIOClient.Messages.BinaryMessage

// SocketIOClient.Messages.BinaryMessage

// SocketIOClient.Messages.ClientAckMessage

// SocketIOClient.Messages.ClientAckMessage

// SocketIOClient.Messages.ClientBinaryAckMessage

// SocketIOClient.Messages.ClientBinaryAckMessage

// SocketIOClient.Messages.ConnectedMessage

// SocketIOClient.Messages.ConnectedMessage

// SocketIOClient.Messages.DisconnectedMessage

// SocketIOClient.Messages.DisconnectedMessage

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.Text.Encoding

// SocketIOClient.Messages.ErrorMessage

// SocketIOClient.Messages.ErrorMessage

// SocketIOClient.Messages.EventMessage

// SocketIOClient.Messages.EventMessage

// Newtonsoft.Json.JsonConverter

// Newtonsoft.Json.JsonConverter

// System.Text.Json.Serialization.JsonConverter

// System.Text.Json.Serialization.JsonConverter

// SocketIOClient.JsonSerializer.JsonSerializeResult

// SocketIOClient.JsonSerializer.JsonSerializeResult

// System.Text.Json.JsonSerializerOptions
struct JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Type,System.Text.Json.Serialization.JsonConverter> System.Text.Json.JsonSerializerOptions::s_defaultSimpleConverters
	Dictionary_2_t0483416E2612BB76C51CC68E3BC2D3CCAB6198D9* ___s_defaultSimpleConverters_0;
	// System.Text.Json.Serialization.JsonConverter[] System.Text.Json.JsonSerializerOptions::s_defaultFactoryConverters
	JsonConverterU5BU5D_t0049FF78489F6329358F7865EBBA6DF7B6BDA9C3* ___s_defaultFactoryConverters_1;
	// System.Text.Json.JsonSerializerOptions System.Text.Json.JsonSerializerOptions::s_defaultOptions
	JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___s_defaultOptions_4;
};

// System.Text.Json.JsonSerializerOptions

// SocketIOClient.Messages.MessageFactory

// SocketIOClient.Messages.MessageFactory

// SocketIOClient.Newtonsoft.Json.NewtonsoftJsonSerializer

// SocketIOClient.Newtonsoft.Json.NewtonsoftJsonSerializer

// SocketIOClient.Messages.OpenedMessage

// SocketIOClient.Messages.OpenedMessage

// SocketIOClient.Transport.Payload

// SocketIOClient.Transport.Payload

// SocketIOClient.Messages.PingMessage

// SocketIOClient.Messages.PingMessage

// SocketIOClient.Messages.ServerAckMessage

// SocketIOClient.Messages.ServerAckMessage

// SocketIOClient.Messages.ServerBinaryAckMessage

// SocketIOClient.Messages.ServerBinaryAckMessage

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// SocketIOClient.JsonSerializer.SystemTextJsonSerializer

// SocketIOClient.JsonSerializer.SystemTextJsonSerializer

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_24;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_25;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_27;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_30;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_31;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_32;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_33;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_34;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_36;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_37;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_28;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_29;
};

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_StaticFields
{
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_24;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_25;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_26;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_27;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_29;
	// System.Object System.Uri::s_initLock
	RuntimeObject* ___s_initLock_30;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___HexLowerChars_34;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____WSchars_35;
};

// System.Uri

// System.Collections.Generic.List`1/Enumerator<System.Byte[]>

// System.Collections.Generic.List`1/Enumerator<System.Byte[]>

// System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Text.Json.Serialization.JsonConverter`1<System.Byte[]>

// System.Text.Json.Serialization.JsonConverter`1<System.Byte[]>

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>

// System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// SocketIOClient.Newtonsoft.Json.ByteArrayConverter

// SocketIOClient.Newtonsoft.Json.ByteArrayConverter

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};

// System.Threading.CancellationToken

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// System.Int32

// System.Int32

// System.Text.Json.JsonDocumentOptions

// System.Text.Json.JsonDocumentOptions

// System.Text.Json.JsonElement

// System.Text.Json.JsonElement

// System.Runtime.CompilerServices.TaskAwaiter

// System.Runtime.CompilerServices.TaskAwaiter

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.TimeSpan

// System.Void

// System.Void

// SocketIOClient.JsonSerializer.ByteArrayConverter

// SocketIOClient.JsonSerializer.ByteArrayConverter

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.Text.Json.JsonDocument
struct JsonDocument_tF96A1F7D1D40932B5EA6A97DA06E150B6CBDBE6F_StaticFields
{
	// System.Text.Json.JsonDocument System.Text.Json.JsonDocument::s_nullLiteral
	JsonDocument_tF96A1F7D1D40932B5EA6A97DA06E150B6CBDBE6F* ___s_nullLiteral_8;
	// System.Text.Json.JsonDocument System.Text.Json.JsonDocument::s_trueLiteral
	JsonDocument_tF96A1F7D1D40932B5EA6A97DA06E150B6CBDBE6F* ___s_trueLiteral_9;
	// System.Text.Json.JsonDocument System.Text.Json.JsonDocument::s_falseLiteral
	JsonDocument_tF96A1F7D1D40932B5EA6A97DA06E150B6CBDBE6F* ___s_falseLiteral_10;
};

// System.Text.Json.JsonDocument

// Newtonsoft.Json.JsonReader

// Newtonsoft.Json.JsonReader

// Newtonsoft.Json.JsonSerializer

// Newtonsoft.Json.JsonSerializer

// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3_StaticFields
{
	// Newtonsoft.Json.JsonWriter/State[][] Newtonsoft.Json.JsonWriter::StateArray
	StateU5BU5DU5BU5D_tA12046738DA5F6289ABA74ED1C079ED07EE202ED* ___StateArray_0;
	// Newtonsoft.Json.JsonWriter/State[][] Newtonsoft.Json.JsonWriter::StateArrayTemplate
	StateU5BU5DU5BU5D_tA12046738DA5F6289ABA74ED1C079ED07EE202ED* ___StateArrayTemplate_1;
};

// Newtonsoft.Json.JsonWriter

// SocketIOClient.Messages.PongMessage

// SocketIOClient.Messages.PongMessage

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// System.Text.Json.Utf8JsonWriter
struct Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_StaticFields
{
	// System.Int32 System.Text.Json.Utf8JsonWriter::s_newLineLength
	int32_t ___s_newLineLength_0;
	// System.Char[] System.Text.Json.Utf8JsonWriter::s_singleLineCommentDelimiter
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_singleLineCommentDelimiter_12;
};

// System.Text.Json.Utf8JsonWriter

// System.Text.Json.JsonElement/ArrayEnumerator

// System.Text.Json.JsonElement/ArrayEnumerator

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_StaticFields
{
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___s_cachedCompleted_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder

// Newtonsoft.Json.JsonSerializerSettings
struct JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF_StaticFields
{
	// System.Runtime.Serialization.StreamingContext Newtonsoft.Json.JsonSerializerSettings::DefaultContext
	StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___DefaultContext_9;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonSerializerSettings::DefaultCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___DefaultCulture_18;
};

// Newtonsoft.Json.JsonSerializerSettings

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// SocketIOClient.Transport.WebSocketTransport

// SocketIOClient.Transport.WebSocketTransport

// System.Func`1<System.Text.Json.JsonSerializerOptions>

// System.Func`1<System.Text.Json.JsonSerializerOptions>

// System.Func`1<Newtonsoft.Json.JsonSerializerSettings>

// System.Func`1<Newtonsoft.Json.JsonSerializerSettings>

// System.Func`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Func`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.ArgumentException

// System.ArgumentException

// System.NotImplementedException

// System.NotImplementedException

// System.Text.Json.Utf8JsonReader

// System.Text.Json.Utf8JsonReader

// SocketIOClient.Transport.WebSocketTransport/<ConnectAsync>d__6

// SocketIOClient.Transport.WebSocketTransport/<ConnectAsync>d__6

// SocketIOClient.Transport.WebSocketTransport/<DisconnectAsync>d__7

// SocketIOClient.Transport.WebSocketTransport/<DisconnectAsync>d__7

// SocketIOClient.Transport.WebSocketTransport/<SendAsync>d__8

// SocketIOClient.Transport.WebSocketTransport/<SendAsync>d__8
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

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
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};


// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mAFEAD0E0483FFA3D862272177C9DE55F2C943F8F_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___0_awaiter, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* Enumerable_ToList_TisIl2CppFullySharedGenericAny_m191EA129E511F9B8304FF8826A2DA645E06CCBF0_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_gshared_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_gshared_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Serialization.JsonConverter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverter_1__ctor_m727BB61D5862C089B682064F9379EA02A59A87DA_gshared (JsonConverter_1_t17672FA4B9EBBCD14EC3097715207B9266E386E8* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.String System.Text.Json.JsonSerializer::Serialize<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(TValue,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonSerializer_Serialize_TisIl2CppFullySharedGenericAny_mA15E62A5918EB311074295C9548FE86A3F120373_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_value, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___1_options, const RuntimeMethod* method) ;
// TResult System.Func`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Func_1_Invoke_m35CBC166F464B8A1169583672025E6D64211856C_gshared_inline (Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Enumerable_ToArray_TisIl2CppFullySharedGenericAny_mE1571336F171A560849F9D7CB38E3A9A4B43B1C6_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8 (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,SocketIOClient.Transport.WebSocketTransport/<ConnectAsync>d__6>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CConnectAsyncU3Ed__6_tD5DCCC944C5427F5E76F241174C5AB3B63C9A8D5_m835E1E79876D428BEBA95AA6248404952BC2A4E5 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CConnectAsyncU3Ed__6_tD5DCCC944C5427F5E76F241174C5AB3B63C9A8D5** ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mAFEAD0E0483FFA3D862272177C9DE55F2C943F8F_gshared)((AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)__this, (Il2CppFullySharedGenericAny*)___0_awaiter, (Il2CppFullySharedGenericAny*)___1_stateMachine, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,SocketIOClient.Transport.WebSocketTransport/<DisconnectAsync>d__7>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CDisconnectAsyncU3Ed__7_tC478BFAF2B99787B82C3B70936A6E6CE41D58B60_m99F098A421118896F666F9376A29A88D7D7376AE (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CDisconnectAsyncU3Ed__7_tC478BFAF2B99787B82C3B70936A6E6CE41D58B60** ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mAFEAD0E0483FFA3D862272177C9DE55F2C943F8F_gshared)((AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)__this, (Il2CppFullySharedGenericAny*)___0_awaiter, (Il2CppFullySharedGenericAny*)___1_stateMachine, method);
}
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.String SocketIOClient.Transport.Payload::get_Text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Payload_get_Text_mAA707DFAA7F099F0CB8CF352454062CF76A9847C_inline (Payload_t40222C90D284CE7D812D4D8C137225A5846030C9* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task SocketIOClient.Transport.WebSocketTransport::SendAsync(SocketIOClient.Transport.TransportMessageType,System.Byte[],System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WebSocketTransport_SendAsync_mCC25B07B3A5C137C647082987DF40DBC4C1745FD (WebSocketTransport_tA88D877EBA0CF8C088C3F8395F20E3CDDB6521CA* __this, int32_t ___0_type, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,SocketIOClient.Transport.WebSocketTransport/<SendAsync>d__8>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSendAsyncU3Ed__8_tBEFC093A6294B2E37CCE792AE8D1BF73CD984477_m1E0EB37FE26F52B7FD84AEB34925A0119D40A5C3 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CSendAsyncU3Ed__8_tBEFC093A6294B2E37CCE792AE8D1BF73CD984477** ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mAFEAD0E0483FFA3D862272177C9DE55F2C943F8F_gshared)((AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)__this, (Il2CppFullySharedGenericAny*)___0_awaiter, (Il2CppFullySharedGenericAny*)___1_stateMachine, method);
}
// System.Collections.Generic.List`1<System.Byte[]> SocketIOClient.Transport.Payload::get_Bytes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* Payload_get_Bytes_m475B909EFFF04EC82178DF8A95BBEB831BCAE9AD_inline (Payload_t40222C90D284CE7D812D4D8C137225A5846030C9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Byte[]>::GetEnumerator()
inline Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC List_1_GetEnumerator_m7C61C1682B2BDC2599320E9B76B12AD7F6E2020D (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, const RuntimeMethod* method)
{
	Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Byte[]>::Dispose()
inline void Enumerator_Dispose_mCDDC850B62D20A7AAD5DF974538393AB3A43461F (Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Byte[]>::get_Current()
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Enumerator_get_Current_m4B63F6735596A1CA8F6EEA0E6C630CACC3F3900E_inline (Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC* __this, const RuntimeMethod* method)
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* il2cppRetVal;
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Byte[]>::MoveNext()
inline bool Enumerator_MoveNext_m5A8036FD044CA17B6B9F11640135700F7061BFE4 (Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966 (String_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0 (String_t* ___0_s, const RuntimeMethod* method) ;
// System.Void SocketIOClient.Messages.BinaryMessage::set_BinaryCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BinaryMessage_set_BinaryCount_mBCAB4F19DDF88469A8E9FF294116552D4ECA88D1_inline (BinaryMessage_tD5819CFC7CC9F2CE0BC27C01B47AEF59F66CCF05* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.String::LastIndexOf(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m3EB3F4ECDF6D990ADBACB6B168A8CBD4772B91A7 (String_t* __this, Il2CppChar ___0_value, int32_t ___1_startIndex, const RuntimeMethod* method) ;
// System.Void SocketIOClient.Messages.BinaryMessage::set_Namespace(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BinaryMessage_set_Namespace_m31A42EC5E2ED16F26508085A1E0587AF0D08AA35_inline (BinaryMessage_tD5819CFC7CC9F2CE0BC27C01B47AEF59F66CCF05* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void SocketIOClient.Messages.BinaryMessage::set_Id(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BinaryMessage_set_Id_m86C5F7877C9BDD52250F292CD9AE31FC93F15168_inline (BinaryMessage_tD5819CFC7CC9F2CE0BC27C01B47AEF59F66CCF05* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___0_startIndex, const RuntimeMethod* method) ;
// System.Text.Json.JsonDocument System.Text.Json.JsonDocument::Parse(System.String,System.Text.Json.JsonDocumentOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonDocument_tF96A1F7D1D40932B5EA6A97DA06E150B6CBDBE6F* JsonDocument_Parse_m290785DE223664D929CAC7888BAEE7693B60DFC2 (String_t* ___0_json, JsonDocumentOptions_t46D96C339522F4321E0FA1BD1DB3ABE2F300299B ___1_options, const RuntimeMethod* method) ;
// System.Text.Json.JsonElement System.Text.Json.JsonDocument::get_RootElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 JsonDocument_get_RootElement_m40BA0A219E870618E0E6DD88367CFB484F2C5195 (JsonDocument_tF96A1F7D1D40932B5EA6A97DA06E150B6CBDBE6F* __this, const RuntimeMethod* method) ;
// System.Text.Json.JsonElement/ArrayEnumerator System.Text.Json.JsonElement::EnumerateArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArrayEnumerator_t6A32F25D9BE79D9856DA29CBAD749933F2C9C97C JsonElement_EnumerateArray_m9B35AF71578078459E6DAF2D7416D07F327E6E38 (JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1* __this, const RuntimeMethod* method) ;
// System.Text.Json.JsonElement/ArrayEnumerator System.Text.Json.JsonElement/ArrayEnumerator::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArrayEnumerator_t6A32F25D9BE79D9856DA29CBAD749933F2C9C97C ArrayEnumerator_GetEnumerator_m938DD30A37AEE868DC5935D0CDE254FA6CAFCF97 (ArrayEnumerator_t6A32F25D9BE79D9856DA29CBAD749933F2C9C97C* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.JsonElement/ArrayEnumerator::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayEnumerator_Dispose_mD4E9E4516CF8CC2CEA173A59B8407A94271C34D2 (ArrayEnumerator_t6A32F25D9BE79D9856DA29CBAD749933F2C9C97C* __this, const RuntimeMethod* method) ;
// System.Text.Json.JsonElement System.Text.Json.JsonElement/ArrayEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 ArrayEnumerator_get_Current_m5F5C30DD80B5F2331BF392DA21D4EB06E050F827 (ArrayEnumerator_t6A32F25D9BE79D9856DA29CBAD749933F2C9C97C* __this, const RuntimeMethod* method) ;
// System.String System.Text.Json.JsonElement::GetString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonElement_GetString_m7AE007D2F1B4016AA1B53BF79B1A1DD1EA42EB94 (JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1* __this, const RuntimeMethod* method) ;
// System.Void SocketIOClient.Messages.BinaryMessage::set_Event(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BinaryMessage_set_Event_m573BF95F0ACFC637D4E0B95554D00E893A2DF16D_inline (BinaryMessage_tD5819CFC7CC9F2CE0BC27C01B47AEF59F66CCF05* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Text.Json.JsonElement>::.ctor()
inline void List_1__ctor_m16D5E19B993EA46901FB2FC56C335AAFCBCC14C3 (List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void SocketIOClient.Messages.BinaryMessage::set_JsonElements(System.Collections.Generic.List`1<System.Text.Json.JsonElement>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BinaryMessage_set_JsonElements_m3F7CFAC1CA7ADEEC4E9B0E52225C4AC20B88BDE8_inline (BinaryMessage_tD5819CFC7CC9F2CE0BC27C01B47AEF59F66CCF05* __this, List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6* ___0_value, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.Text.Json.JsonElement> SocketIOClient.Messages.BinaryMessage::get_JsonElements()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6* BinaryMessage_get_JsonElements_m1E21F166CF10210BB5AF847FBEFACD18AF43E828_inline (BinaryMessage_tD5819CFC7CC9F2CE0BC27C01B47AEF59F66CCF05* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Text.Json.JsonElement>::Add(T)
inline void List_1_Add_m54BE733D37F0BE82FCD59F3D8B06A0409EBDD327_inline (List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6* __this, JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)&___0_item, method);
}
// System.Boolean System.Text.Json.JsonElement/ArrayEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArrayEnumerator_MoveNext_mF1B0AFD404AA0995A6BE8106CE602684BBE47433 (ArrayEnumerator_t6A32F25D9BE79D9856DA29CBAD749933F2C9C97C* __this, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.Byte[]> SocketIOClient.Messages.BinaryMessage::get_OutgoingBytes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* BinaryMessage_get_OutgoingBytes_m4D2A70DB3BF587489C3FCFDAECE67390D41144DC_inline (BinaryMessage_tD5819CFC7CC9F2CE0BC27C01B47AEF59F66CCF05* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::get_Count()
inline int32_t List_1_get_Count_m88FEB2D94E35C258B61F53400F7CA20E99A7DAD3_inline (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA (StringBuilder_t* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
// System.String SocketIOClient.Messages.BinaryMessage::get_Namespace()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BinaryMessage_get_Namespace_m856DED46A8FE1D6CFBDC48460B1CB546114B72F4_inline (BinaryMessage_tD5819CFC7CC9F2CE0BC27C01B47AEF59F66CCF05* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.String SocketIOClient.Messages.BinaryMessage::get_Json()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BinaryMessage_get_Json_m6615778C6033109543CC60AFFF1BF13FD093CB60_inline (BinaryMessage_tD5819CFC7CC9F2CE0BC27C01B47AEF59F66CCF05* __this, const RuntimeMethod* method) ;
// System.String SocketIOClient.Messages.BinaryMessage::get_Event()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BinaryMessage_get_Event_m2924E06720D79B172ED0F3631228E7AE4E8AE7B6_inline (BinaryMessage_tD5819CFC7CC9F2CE0BC27C01B47AEF59F66CCF05* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.String System.String::Insert(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Insert_mA279E748F06514A6D0B9B680D651D6A6C6BB561A (String_t* __this, int32_t ___0_startIndex, String_t* ___1_value, const RuntimeMethod* method) ;
// System.Void SocketIOClient.Messages.ClientAckMessage::set_Namespace(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClientAckMessage_set_Namespace_m6D0F53093A544183349C1ED46A1C072D99478F4F_inline (ClientAckMessage_t7F42DF41F6C6389FF9ADCA794D69BFA3FA15E6F9* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void SocketIOClient.Messages.ClientAckMessage::set_Id(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClientAckMessage_set_Id_m397DBACB6629B883ED1105AD9D4B52444F3075D2_inline (ClientAckMessage_t7F42DF41F6C6389FF9ADCA794D69BFA3FA15E6F9* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Text.Json.JsonElement>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6* Enumerable_ToList_TisJsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_m99F84A2CBED6EEF6E1F61AAE03853DB7EDF271EE (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* il2cppRetVal = ((  List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisIl2CppFullySharedGenericAny_m191EA129E511F9B8304FF8826A2DA645E06CCBF0_gshared)((RuntimeObject*)___0_source, method);
	return (List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6*)il2cppRetVal;
}
// System.Void SocketIOClient.Messages.ClientAckMessage::set_JsonElements(System.Collections.Generic.List`1<System.Text.Json.JsonElement>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClientAckMessage_set_JsonElements_mCD5B47F692A519A1302652F91CCF7DE65B072E9D_inline (ClientAckMessage_t7F42DF41F6C6389FF9ADCA794D69BFA3FA15E6F9* __this, List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6* ___0_value, const RuntimeMethod* method) ;
// System.String SocketIOClient.Messages.ClientAckMessage::get_Namespace()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ClientAckMessage_get_Namespace_mC07CC220F3BD0319F276274708CA390FF3CB17B2_inline (ClientAckMessage_t7F42DF41F6C6389FF9ADCA794D69BFA3FA15E6F9* __this, const RuntimeMethod* method) ;
// System.Int32 SocketIOClient.Messages.ClientAckMessage::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ClientAckMessage_get_Id_m92F24367984A2B1BCA7300245133861E0C3C9A47_inline (ClientAckMessage_t7F42DF41F6C6389FF9ADCA794D69BFA3FA15E6F9* __this, const RuntimeMethod* method) ;
// System.String SocketIOClient.Messages.ClientAckMessage::get_Json()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ClientAckMessage_get_Json_mC3597A0931801F7A388439E3A3408EECD858C5A2_inline (ClientAckMessage_t7F42DF41F6C6389FF9ADCA794D69BFA3FA15E6F9* __this, const RuntimeMethod* method) ;
// System.String SocketIOClient.Messages.ClientAckMessage::get_Event()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ClientAckMessage_get_Event_mD53C0DD4587924D4681BBAE3C914B1015EFE750C_inline (ClientAckMessage_t7F42DF41F6C6389FF9ADCA794D69BFA3FA15E6F9* __this, const RuntimeMethod* method) ;
// System.Void SocketIOClient.Messages.ClientBinaryAckMessage::set_BinaryCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClientBinaryAckMessage_set_BinaryCount_m672FCC0A38DF62B5CC8E1E4E2FD0FA4CEB21C80F_inline (ClientBinaryAckMessage_tCC3843B13D5ADA726E5899C1B148AD22D1978742* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void SocketIOClient.Messages.ClientBinaryAckMessage::set_Namespace(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClientBinaryAckMessage_set_Namespace_mB0AF6B90C754335C3BB152EBE0998DFB473382C9_inline (ClientBinaryAckMessage_tCC3843B13D5ADA726E5899C1B148AD22D1978742* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void SocketIOClient.Messages.ClientBinaryAckMessage::set_Id(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClientBinaryAckMessage_set_Id_m2E676070B8E6682F3AF9CAB2CC8A3E5D91CEE507_inline (ClientBinaryAckMessage_tCC3843B13D5ADA726E5899C1B148AD22D1978742* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void SocketIOClient.Messages.ClientBinaryAckMessage::set_JsonElements(System.Collections.Generic.List`1<System.Text.Json.JsonElement>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClientBinaryAckMessage_set_JsonElements_m282E7A035922E8FF7B0F78BD2EF71315C67D5B28_inline (ClientBinaryAckMessage_tCC3843B13D5ADA726E5899C1B148AD22D1978742* __this, List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6* ___0_value, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.Byte[]> SocketIOClient.Messages.ClientBinaryAckMessage::get_OutgoingBytes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ClientBinaryAckMessage_get_OutgoingBytes_mDA1647C33F1CD4D9DD6400C9C8D342BBE65FC65C_inline (ClientBinaryAckMessage_tCC3843B13D5ADA726E5899C1B148AD22D1978742* __this, const RuntimeMethod* method) ;
// System.String SocketIOClient.Messages.ClientBinaryAckMessage::get_Namespace()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ClientBinaryAckMessage_get_Namespace_mE886EC5DDB0298537A8D191D9B2E3B16FE2ED1CF_inline (ClientBinaryAckMessage_tCC3843B13D5ADA726E5899C1B148AD22D1978742* __this, const RuntimeMethod* method) ;
// System.Int32 SocketIOClient.Messages.ClientBinaryAckMessage::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ClientBinaryAckMessage_get_Id_m88496B6887446FF9D34697B30FB1BCA2339D8E9B_inline (ClientBinaryAckMessage_tCC3843B13D5ADA726E5899C1B148AD22D1978742* __this, const RuntimeMethod* method) ;
// System.String SocketIOClient.Messages.ClientBinaryAckMessage::get_Json()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ClientBinaryAckMessage_get_Json_m3EBF52345F3CA65F1D8E2C2A0181B80FE0507C4E_inline (ClientBinaryAckMessage_tCC3843B13D5ADA726E5899C1B148AD22D1978742* __this, const RuntimeMethod* method) ;
// System.String SocketIOClient.Messages.ClientBinaryAckMessage::get_Event()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ClientBinaryAckMessage_get_Event_m0C4AEF4002F28D77A10AE5CF9C7EE75153B95F79_inline (ClientBinaryAckMessage_tCC3843B13D5ADA726E5899C1B148AD22D1978742* __this, const RuntimeMethod* method) ;
// System.Int32 SocketIOClient.Messages.ConnectedMessage::get_Eio()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConnectedMessage_get_Eio_mEF53A9E8A953873A6366C5508CBD2C754D39593A_inline (ConnectedMessage_t1A1ED2A271B81580C052B6B1B6DDFCD16CF9FC36* __this, const RuntimeMethod* method) ;
// System.Void SocketIOClient.Messages.ConnectedMessage::Eio3Read(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectedMessage_Eio3Read_mFF622979F8D681346B689EA1470584B41CF3E05D (ConnectedMessage_t1A1ED2A271B81580C052B6B1B6DDFCD16CF9FC36* __this, String_t* ___0_msg, const RuntimeMethod* method) ;
// System.Void SocketIOClient.Messages.ConnectedMessage::Eio4Read(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectedMessage_Eio4Read_mF2E98141260080CF98DB25AE52AE5CA7457DAF0C (ConnectedMessage_t1A1ED2A271B81580C052B6B1B6DDFCD16CF9FC36* __this, String_t* ___0_msg, const RuntimeMethod* method) ;
// System.String SocketIOClient.Messages.ConnectedMessage::Eio3Write()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConnectedMessage_Eio3Write_m05698D395262D13A5790CBE5B58B9B9DB912BDDE (ConnectedMessage_t1A1ED2A271B81580C052B6B1B6DDFCD16CF9FC36* __this, const RuntimeMethod* method) ;
// System.String SocketIOClient.Messages.ConnectedMessage::Eio4Write()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConnectedMessage_Eio4Write_m33FAE50372B1BCD68E4095BA528AF8BDBBFCF27D (ConnectedMessage_t1A1ED2A271B81580C052B6B1B6DDFCD16CF9FC36* __this, const RuntimeMethod* method) ;
// System.Void SocketIOClient.Messages.ConnectedMessage::set_Namespace(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConnectedMessage_set_Namespace_mBB0268B187193B455FE0CDA453F062A106E67CAD_inline (ConnectedMessage_t1A1ED2A271B81580C052B6B1B6DDFCD16CF9FC36* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Text.Json.JsonElement System.Text.Json.JsonElement::GetProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 JsonElement_GetProperty_mB0BB5EA6AC89BB64A9F3BD39EE474AD2D26F72D7 (JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1* __this, String_t* ___0_propertyName, const RuntimeMethod* method) ;
// System.Void SocketIOClient.Messages.ConnectedMessage::set_Sid(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConnectedMessage_set_Sid_m049365339C008B2325BE176C8E9C5E1533AA0D26_inline (ConnectedMessage_t1A1ED2A271B81580C052B6B1B6DDFCD16CF9FC36* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_mCD797D942316CB356205FD96415B0B7581CDAD60 (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String SocketIOClient.Messages.ConnectedMessage::get_Namespace()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ConnectedMessage_get_Namespace_mCDBAD9FDD96BF5294DF2BF8886F73429814BC537_inline (ConnectedMessage_t1A1ED2A271B81580C052B6B1B6DDFCD16CF9FC36* __this, const RuntimeMethod* method) ;
// System.String SocketIOClient.Messages.ConnectedMessage::get_AuthJsonStr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ConnectedMessage_get_AuthJsonStr_m2CD9779E13B4B15E66EA43325D46FCA799BA6F13_inline (ConnectedMessage_t1A1ED2A271B81580C052B6B1B6DDFCD16CF9FC36* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m15B90A59047584420D227EE3A7EAC0C5EAF676F4 (String_t* __this, Il2CppChar ___0_value, int32_t ___1_startIndex, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>> SocketIOClient.Messages.ConnectedMessage::get_Query()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ConnectedMessage_get_Query_m74AE5EA94B67586ABDB04051C310965A68FC5D39_inline (ConnectedMessage_t1A1ED2A271B81580C052B6B1B6DDFCD16CF9FC36* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	String_t* il2cppRetVal;
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_gshared_inline)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	String_t* il2cppRetVal;
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_gshared_inline)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.String System.String::TrimEnd(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_TrimEnd_mDB4D96F8312F563656D4115A9F280062E05D2EE8 (String_t* __this, Il2CppChar ___0_trimChar, const RuntimeMethod* method) ;
// System.Void SocketIOClient.Messages.DisconnectedMessage::set_Namespace(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DisconnectedMessage_set_Namespace_mECDDF1CF86852802382FE4252A3E0C3375A3DD24_inline (DisconnectedMessage_tEBAFB998D31AC82FE4A2515B44B1A8B4513EA6A9* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String SocketIOClient.Messages.DisconnectedMessage::get_Namespace()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DisconnectedMessage_get_Namespace_mFAD63140D707F23A4AAFC05834CBE057961C125B_inline (DisconnectedMessage_tEBAFB998D31AC82FE4A2515B44B1A8B4513EA6A9* __this, const RuntimeMethod* method) ;
// System.Int32 SocketIOClient.Messages.ErrorMessage::get_Eio()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ErrorMessage_get_Eio_m0F647A84D5F6BDD0A360529918C14FED11CEF963_inline (ErrorMessage_tB3F1C2F4B97E449D6C38FB5E943D66F0B3F6E275* __this, const RuntimeMethod* method) ;
// System.String System.String::Trim(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mF5081365E55C31B636F8145F42AEF61868175A5A (String_t* __this, Il2CppChar ___0_trimChar, const RuntimeMethod* method) ;
// System.Void SocketIOClient.Messages.ErrorMessage::set_Message(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorMessage_set_Message_m19353330692C5FC4A69067967A5F5FAEB7249FD6_inline (ErrorMessage_tB3F1C2F4B97E449D6C38FB5E943D66F0B3F6E275* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void SocketIOClient.Messages.ErrorMessage::set_Namespace(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorMessage_set_Namespace_m35F6305A42B99320BB457987E7890C7FCFCEBE67_inline (ErrorMessage_tB3F1C2F4B97E449D6C38FB5E943D66F0B3F6E275* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, const RuntimeMethod* method) ;
// System.Void SocketIOClient.Messages.EventMessage::set_Namespace(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventMessage_set_Namespace_mD9D29D1580CAD4439A177272B211E72B208A8036_inline (EventMessage_t470DDE32D55CB6E5C78B1B073D344CFD3C548748* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void SocketIOClient.Messages.EventMessage::set_Id(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventMessage_set_Id_mE2D26FAC549D2D0DE97C48B1E344BC70B918276A_inline (EventMessage_t470DDE32D55CB6E5C78B1B073D344CFD3C548748* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void SocketIOClient.Messages.EventMessage::set_Event(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventMessage_set_Event_mCA02BE3840C40DBB9AC37993BF8013151712ACE9_inline (EventMessage_t470DDE32D55CB6E5C78B1B073D344CFD3C548748* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void SocketIOClient.Messages.EventMessage::set_JsonElements(System.Collections.Generic.List`1<System.Text.Json.JsonElement>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventMessage_set_JsonElements_m173A2D28A03D15ACA167C3F1027A6D25ECF44F2F_inline (EventMessage_t470DDE32D55CB6E5C78B1B073D344CFD3C548748* __this, List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6* ___0_value, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.Text.Json.JsonElement> SocketIOClient.Messages.EventMessage::get_JsonElements()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6* EventMessage_get_JsonElements_m31A620D166BC872F51BC5D4DD4D3A67FA9ADE6B2_inline (EventMessage_t470DDE32D55CB6E5C78B1B073D344CFD3C548748* __this, const RuntimeMethod* method) ;
// System.String SocketIOClient.Messages.EventMessage::get_Namespace()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EventMessage_get_Namespace_m802438EC6B93123646E0DEDAC656C4BA75A4E8B6_inline (EventMessage_t470DDE32D55CB6E5C78B1B073D344CFD3C548748* __this, const RuntimeMethod* method) ;
// System.String SocketIOClient.Messages.EventMessage::get_Json()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EventMessage_get_Json_m2E70488D82084C92F3A9C92E448A2B21E4775EB6_inline (EventMessage_t470DDE32D55CB6E5C78B1B073D344CFD3C548748* __this, const RuntimeMethod* method) ;
// System.String SocketIOClient.Messages.EventMessage::get_Event()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EventMessage_get_Event_mE5435820B395058C5B086BDEEB4B532E223B4B5F_inline (EventMessage_t470DDE32D55CB6E5C78B1B073D344CFD3C548748* __this, const RuntimeMethod* method) ;
// System.Void SocketIOClient.Messages.OpenedMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenedMessage__ctor_mA6BBA13C0536C9C447BCCE1F824BC0677C98AF40 (OpenedMessage_tB5F1C6F098ABB481932A5728B15765F454E68806* __this, const RuntimeMethod* method) ;
// System.Void SocketIOClient.Messages.PingMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PingMessage__ctor_m561334445D0C77F71538B4B8210E1B654D00C820 (PingMessage_t5E9292201F5D7ED22252C374CBEAA4621E8B30E7* __this, const RuntimeMethod* method) ;
// System.Void SocketIOClient.Messages.PongMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PongMessage__ctor_mF0B50B3F1EA1A151A635366CDE97C325D8F1E2F1 (PongMessage_t5FD45D5BAA78BB30EB15C7C4FA84536D61617447* __this, const RuntimeMethod* method) ;
// System.Void SocketIOClient.Messages.ConnectedMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectedMessage__ctor_m6BEBC829D2DBAE0AED1B26709D5CEA503D6FB580 (ConnectedMessage_t1A1ED2A271B81580C052B6B1B6DDFCD16CF9FC36* __this, const RuntimeMethod* method) ;
// System.Void SocketIOClient.Messages.DisconnectedMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisconnectedMessage__ctor_m7EFDBAD5EC509DBC69ED2FB8E569E0BB50E036AF (DisconnectedMessage_tEBAFB998D31AC82FE4A2515B44B1A8B4513EA6A9* __this, const RuntimeMethod* method) ;
// System.Void SocketIOClient.Messages.EventMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMessage__ctor_m622A1798C7039FD0A853C518371391EAE812E773 (EventMessage_t470DDE32D55CB6E5C78B1B073D344CFD3C548748* __this, const RuntimeMethod* method) ;
// System.Void SocketIOClient.Messages.ClientAckMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientAckMessage__ctor_m036223076877D61507D1085D455EDB8AC5A1B046 (ClientAckMessage_t7F42DF41F6C6389FF9ADCA794D69BFA3FA15E6F9* __this, const RuntimeMethod* method) ;
// System.Void SocketIOClient.Messages.ErrorMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorMessage__ctor_mDCDF9B0C42C695D996CA0E004F67BEA058F3DAAC (ErrorMessage_tB3F1C2F4B97E449D6C38FB5E943D66F0B3F6E275* __this, const RuntimeMethod* method) ;
// System.Void SocketIOClient.Messages.BinaryMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryMessage__ctor_m792CBE784B67DA727519BDA1F0A1C3CF619BDE47 (BinaryMessage_tD5819CFC7CC9F2CE0BC27C01B47AEF59F66CCF05* __this, const RuntimeMethod* method) ;
// System.Void SocketIOClient.Messages.ClientBinaryAckMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientBinaryAckMessage__ctor_m00F07662EA2AD8BEF310A39A56627315317FB86F (ClientBinaryAckMessage_tCC3843B13D5ADA726E5899C1B148AD22D1978742* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Array System.Enum::GetValues(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray* Enum_GetValues_m803B9D68C367FAABC5AFB6B5B52775C8A573CEF9 (Type_t* ___0_enumType, const RuntimeMethod* method) ;
// System.Collections.IEnumerator System.Array::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_GetEnumerator_mDB7E2AF23F2BDC715D429C71CA3B8D0151F0DC1E (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// SocketIOClient.Messages.IMessage SocketIOClient.Messages.MessageFactory::CreateMessage(SocketIOClient.Messages.MessageType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MessageFactory_CreateMessage_m1C9365C43654B7EB66413303463CF477D8C8525E (int32_t ___0_type, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void SocketIOClient.Messages.OpenedMessage::set_Eio(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OpenedMessage_set_Eio_m14878647AF2166F99E3501EAF9CE6400D5CDFC94_inline (OpenedMessage_tB5F1C6F098ABB481932A5728B15765F454E68806* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void SocketIOClient.Messages.OpenedMessage::Read(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenedMessage_Read_m1361A5B0C8372AFB9C4FBDB494043018DE112391 (OpenedMessage_tB5F1C6F098ABB481932A5728B15765F454E68806* __this, String_t* ___0_msg, const RuntimeMethod* method) ;
// System.Text.Json.JsonValueKind System.Text.Json.JsonElement::get_ValueKind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t JsonElement_get_ValueKind_m14EFE30FAA112F5199CBD9C42DC9C3AEF6ADA1B5 (JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1* __this, const RuntimeMethod* method) ;
// System.Int32 System.Text.Json.JsonElement::GetInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonElement_GetInt32_m21DEB1B177269FFB57C09E9B094DF8C719926A73 (JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void SocketIOClient.Messages.OpenedMessage::set_Sid(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OpenedMessage_set_Sid_mA1895EF3EA084BFFE3E217AF331D34E8B547A368_inline (OpenedMessage_tB5F1C6F098ABB481932A5728B15765F454E68806* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Int32 SocketIOClient.Messages.OpenedMessage::GetInt32FromJsonElement(System.Text.Json.JsonElement,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OpenedMessage_GetInt32FromJsonElement_m63C5A4189BEBB440AE86ADECD7D13106A0139974 (OpenedMessage_tB5F1C6F098ABB481932A5728B15765F454E68806* __this, JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 ___0_element, String_t* ___1_msg, String_t* ___2_name, const RuntimeMethod* method) ;
// System.Void SocketIOClient.Messages.OpenedMessage::set_PingInterval(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OpenedMessage_set_PingInterval_mB7120382186ECF1A8017986E27C8B34EDB205947_inline (OpenedMessage_tB5F1C6F098ABB481932A5728B15765F454E68806* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void SocketIOClient.Messages.OpenedMessage::set_PingTimeout(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OpenedMessage_set_PingTimeout_m842A5893B483BC2ECA8758EA02BC1447950518E7_inline (OpenedMessage_tB5F1C6F098ABB481932A5728B15765F454E68806* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void SocketIOClient.Messages.OpenedMessage::set_Upgrades(System.Collections.Generic.List`1<System.String>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OpenedMessage_set_Upgrades_mEE39F78D728EC70493E6BE661B5D82156DECE0D4_inline (OpenedMessage_tB5F1C6F098ABB481932A5728B15765F454E68806* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___0_value, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.String> SocketIOClient.Messages.OpenedMessage::get_Upgrades()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* OpenedMessage_get_Upgrades_m2C3FC959CC2F99F68C54C19F65A63523070D3EAA_inline (OpenedMessage_tB5F1C6F098ABB481932A5728B15765F454E68806* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
// System.String SocketIOClient.Messages.ServerAckMessage::get_Namespace()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ServerAckMessage_get_Namespace_m39F4BDD56711214144740D32BC43235E723347AB_inline (ServerAckMessage_tC5BF3089BD75CD610CF8C015557B164CA0C353A4* __this, const RuntimeMethod* method) ;
// System.Int32 SocketIOClient.Messages.ServerAckMessage::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ServerAckMessage_get_Id_m48F4F2A13702377F069C2608DFFFC4705A7BDB13_inline (ServerAckMessage_tC5BF3089BD75CD610CF8C015557B164CA0C353A4* __this, const RuntimeMethod* method) ;
// System.String SocketIOClient.Messages.ServerAckMessage::get_Json()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ServerAckMessage_get_Json_m379C1D589E737C08449415D0870FDCD35C298C26_inline (ServerAckMessage_tC5BF3089BD75CD610CF8C015557B164CA0C353A4* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.Byte[]> SocketIOClient.Messages.ServerBinaryAckMessage::get_OutgoingBytes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ServerBinaryAckMessage_get_OutgoingBytes_mD92D74D4D3FEEFA517761F7EA9C35958F9F39869_inline (ServerBinaryAckMessage_tF981FEA898A346EA4D64137EA3E3B4A4F30E6D24* __this, const RuntimeMethod* method) ;
// System.String SocketIOClient.Messages.ServerBinaryAckMessage::get_Namespace()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ServerBinaryAckMessage_get_Namespace_m25C4F0C08C7377EC866EAB212CA3D1E94841478C_inline (ServerBinaryAckMessage_tF981FEA898A346EA4D64137EA3E3B4A4F30E6D24* __this, const RuntimeMethod* method) ;
// System.Int32 SocketIOClient.Messages.ServerBinaryAckMessage::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ServerBinaryAckMessage_get_Id_mCE84C17E170DBED3E2EF2BF0EA6796AEFE2672EF_inline (ServerBinaryAckMessage_tF981FEA898A346EA4D64137EA3E3B4A4F30E6D24* __this, const RuntimeMethod* method) ;
// System.String SocketIOClient.Messages.ServerBinaryAckMessage::get_Json()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ServerBinaryAckMessage_get_Json_m91F2D7AA896F9DF424579839453F32DF868E714E_inline (ServerBinaryAckMessage_tF981FEA898A346EA4D64137EA3E3B4A4F30E6D24* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Serialization.JsonConverter`1<System.Byte[]>::.ctor()
inline void JsonConverter_1__ctor_mA025D83F77A55978B2D5C037B52F542FA9F38BC4 (JsonConverter_1_t87134F2FDE6C85D3BC65F2583D387D617C578287* __this, const RuntimeMethod* method)
{
	((  void (*) (JsonConverter_1_t17672FA4B9EBBCD14EC3097715207B9266E386E8*, const RuntimeMethod*))JsonConverter_1__ctor_m727BB61D5862C089B682064F9379EA02A59A87DA_gshared)((JsonConverter_1_t17672FA4B9EBBCD14EC3097715207B9266E386E8*)__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor()
inline void List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4 (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Text.Json.JsonTokenType System.Text.Json.Utf8JsonReader::get_TokenType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t Utf8JsonReader_get_TokenType_mCE6BF109ADE03F304F8C16D68AF519C5CFBA631A_inline (Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* __this, const RuntimeMethod* method) ;
// System.Boolean System.Text.Json.Utf8JsonReader::Read()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8JsonReader_Read_mD210940FACF194A87F83C11308A87397B77DCB07 (Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* __this, const RuntimeMethod* method) ;
// System.String System.Text.Json.Utf8JsonReader::GetString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utf8JsonReader_GetString_m3AA74B2BD8AE8211C2F45748764CA0F8D0772F11 (Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Boolean System.Text.Json.Utf8JsonReader::GetBoolean()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8JsonReader_GetBoolean_m4A0CCA2B3FF77D11CDEF65077936B5CA951962C6 (Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* __this, const RuntimeMethod* method) ;
// System.Int32 System.Text.Json.Utf8JsonReader::GetInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utf8JsonReader_GetInt32_m9994A31A6BBC68EC25BFEA942924684639E0A350 (Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.Byte[]> SocketIOClient.JsonSerializer.ByteArrayConverter::get_Bytes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ByteArrayConverter_get_Bytes_mB2301559AE1A615772BE852AF29A909F2CDA05C2_inline (ByteArrayConverter_t63039C8D605504CCABFF7783367282E961DDC022* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Byte[]>::get_Item(System.Int32)
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* List_1_get_Item_m2C6A207D8824FE873045A66C942593AE67D90CA6 (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_index, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Add(T)
inline void List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteStartObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStartObject_mA1EF1E8CCF738E49D16F99CDA5F1F9E6868D88B2 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WritePropertyName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WritePropertyName_m996942A298DED618DCBE28108F27E373B2E5D95F (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, String_t* ___0_propertyName, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteBooleanValue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteBooleanValue_mA04EC87538557C4D69DA626CE79295F85A722BFF (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberValue_m8A2EB2DC02416A0F4B0CA97AFA70B873FBCC3B7D (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteEndObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteEndObject_mCBB8ED094BB4B5196B0D6496B2C8EC2A40C71EFA (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, const RuntimeMethod* method) ;
// System.Void SocketIOClient.JsonSerializer.ByteArrayConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteArrayConverter__ctor_mEE94AE384FABDDDB6FDB6765EC35C48128E31D7D (ByteArrayConverter_t63039C8D605504CCABFF7783367282E961DDC022* __this, const RuntimeMethod* method) ;
// System.Text.Json.JsonSerializerOptions SocketIOClient.JsonSerializer.SystemTextJsonSerializer::GetOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* SystemTextJsonSerializer_GetOptions_m99BCF09033E8F11F799B3777C45CB6F5569D4543 (SystemTextJsonSerializer_tE1389CB2086D14697EC05627113C613450216EDF* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<System.Text.Json.Serialization.JsonConverter> System.Text.Json.JsonSerializerOptions::get_Converters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* JsonSerializerOptions_get_Converters_m8E101768CD4E9529474EB92573A0E68E8FBA92A2_inline (JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* __this, const RuntimeMethod* method) ;
// System.String System.Text.Json.JsonSerializer::Serialize<System.Object[]>(TValue,System.Text.Json.JsonSerializerOptions)
inline String_t* JsonSerializer_Serialize_TisObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_mE3922625E6144137A8BC28E92E96426CB4A38BC1 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_value, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___1_options, const RuntimeMethod* method)
{
	return ((  String_t* (*) (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD*, const RuntimeMethod*))JsonSerializer_Serialize_TisIl2CppFullySharedGenericAny_mA15E62A5918EB311074295C9548FE86A3F120373_gshared)((Il2CppFullySharedGenericAny)___0_value, ___1_options, method);
}
// System.Void SocketIOClient.JsonSerializer.JsonSerializeResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializeResult__ctor_m3348FDBF55D2BB8A31F72A3A5AF7E48338DBCA18 (JsonSerializeResult_t60648F85702617E3385A7DC76FAA88A6136ADF5F* __this, const RuntimeMethod* method) ;
// System.Void SocketIOClient.JsonSerializer.JsonSerializeResult::set_Json(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonSerializeResult_set_Json_m5ADFFFEE83E72D33DFA0C3DCB977D61FD04C6021_inline (JsonSerializeResult_t60648F85702617E3385A7DC76FAA88A6136ADF5F* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void SocketIOClient.JsonSerializer.JsonSerializeResult::set_Bytes(System.Collections.Generic.IList`1<System.Byte[]>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonSerializeResult_set_Bytes_mCE2E79B6CE26A96823CB38D516C1F835123B24C1_inline (JsonSerializeResult_t60648F85702617E3385A7DC76FAA88A6136ADF5F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Func`1<System.Text.Json.JsonSerializerOptions> SocketIOClient.JsonSerializer.SystemTextJsonSerializer::get_OptionsProvider()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Func_1_t27E25A1D7DE6C9B79FF934165133F82F6D9A05EA* SystemTextJsonSerializer_get_OptionsProvider_mAD6EC455B330506F067BECD0CF6410AA700ADFAD_inline (SystemTextJsonSerializer_tE1389CB2086D14697EC05627113C613450216EDF* __this, const RuntimeMethod* method) ;
// TResult System.Func`1<System.Text.Json.JsonSerializerOptions>::Invoke()
inline JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* Func_1_Invoke_mD3E4D633B1F55191E2A416D73975BAC89C179FDC_inline (Func_1_t27E25A1D7DE6C9B79FF934165133F82F6D9A05EA* __this, const RuntimeMethod* method)
{
	JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* il2cppRetVal;
	((  void (*) (Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Func_1_Invoke_m35CBC166F464B8A1169583672025E6D64211856C_gshared_inline)((Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Text.Json.JsonSerializerOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializerOptions__ctor_m9431C3AEE8FE5AF4D2ACAE80B23CA0CC18CC4281 (JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverter__ctor_m47F59D2FF8CFBA449BDFBA405BDEEF6361139DAB (JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21 (String_t* ___0_s, int32_t* ___1_result, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.Byte[]> SocketIOClient.Newtonsoft.Json.ByteArrayConverter::get_Bytes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ByteArrayConverter_get_Bytes_m1B5D693762557FDE3B3B82097C2F133AA4ADCF2D_inline (ByteArrayConverter_tB277DA37ED5A0960062DB249ABFA11C48D13B5DD* __this, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Byte>(System.Collections.Generic.IEnumerable`1<TSource>)
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* il2cppRetVal = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisIl2CppFullySharedGenericAny_mE1571336F171A560849F9D7CB38E3A9A4B43B1C6_gshared)((RuntimeObject*)___0_source, method);
	return (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cppRetVal;
}
// System.Void SocketIOClient.Newtonsoft.Json.ByteArrayConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteArrayConverter__ctor_mC6524D0593A6FFE57503C49A368040FBCD8B3391 (ByteArrayConverter_tB277DA37ED5A0960062DB249ABFA11C48D13B5DD* __this, const RuntimeMethod* method) ;
// Newtonsoft.Json.JsonSerializerSettings SocketIOClient.Newtonsoft.Json.NewtonsoftJsonSerializer::GetOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* NewtonsoftJsonSerializer_GetOptions_mEF26DCFECB75AC27F9763779FAF5CF1F6D00AD1B (NewtonsoftJsonSerializer_t3EBB19A83287CFB4FBE58E1BDBBAA054E5CD14ED* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<Newtonsoft.Json.JsonConverter> Newtonsoft.Json.JsonSerializerSettings::get_Converters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* JsonSerializerSettings_get_Converters_mB7EE43E74FA48980B6C0976D7A2160B2174C8FCA_inline (JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* __this, const RuntimeMethod* method) ;
// System.String Newtonsoft.Json.JsonConvert::SerializeObject(System.Object,Newtonsoft.Json.JsonSerializerSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonConvert_SerializeObject_mEAA691E5567819FD0CDFEBB98629609ADB899D25 (RuntimeObject* ___0_value, JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* ___1_settings, const RuntimeMethod* method) ;
// System.Func`1<Newtonsoft.Json.JsonSerializerSettings> SocketIOClient.Newtonsoft.Json.NewtonsoftJsonSerializer::get_OptionsProvider()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08* NewtonsoftJsonSerializer_get_OptionsProvider_m02D3F8735071000E88878C4E37CA276F218FD635_inline (NewtonsoftJsonSerializer_t3EBB19A83287CFB4FBE58E1BDBBAA054E5CD14ED* __this, const RuntimeMethod* method) ;
// TResult System.Func`1<Newtonsoft.Json.JsonSerializerSettings>::Invoke()
inline JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* Func_1_Invoke_mC4B798EC08DA7F0778D027E8570AAFC89BF08F2D_inline (Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08* __this, const RuntimeMethod* method)
{
	JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* il2cppRetVal;
	((  void (*) (Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Func_1_Invoke_m35CBC166F464B8A1169583672025E6D64211856C_gshared_inline)((Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void Newtonsoft.Json.JsonSerializerSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializerSettings__ctor_mE1C9A90375BA88DF7F6911F1F96AEEC6A98CD22F (JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SocketIOClient.Transport.WebSocketTransport/<ConnectAsync>d__6::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConnectAsyncU3Ed__6__ctor_mA2CED9963750DEE30223D65F0B94E4DE6E34CF21 (U3CConnectAsyncU3Ed__6_tD5DCCC944C5427F5E76F241174C5AB3B63C9A8D5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void SocketIOClient.Transport.WebSocketTransport/<ConnectAsync>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConnectAsyncU3Ed__6_MoveNext_mDE41AE5CE6F1B493426D27430D6C15B22B1E98BB (U3CConnectAsyncU3Ed__6_tD5DCCC944C5427F5E76F241174C5AB3B63C9A8D5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CConnectAsyncU3Ed__6_tD5DCCC944C5427F5E76F241174C5AB3B63C9A8D5_m835E1E79876D428BEBA95AA6248404952BC2A4E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientWebSocket_tB2E04077F1A857A8174EA3A71BC3E86261FFDF35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_1;
	memset((&V_1), 0, sizeof(V_1));
	U3CConnectAsyncU3Ed__6_tD5DCCC944C5427F5E76F241174C5AB3B63C9A8D5* V_2 = NULL;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c_1;
			}
		}
		{
			goto IL_000e_1;
		}

IL_000c_1:
		{
			goto IL_005e_1;
		}

IL_000e_1:
		{
			// await _ws.ConnectAsync(uri, cancellationToken);
			WebSocketTransport_tA88D877EBA0CF8C088C3F8395F20E3CDDB6521CA* L_2 = __this->___U3CU3E4__this_4;
			NullCheck(L_2);
			RuntimeObject* L_3 = L_2->____ws_11;
			Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_4 = __this->___uri_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = __this->___cancellationToken_3;
			NullCheck(L_3);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_6;
			L_6 = InterfaceFuncInvoker2< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(2 /* System.Threading.Tasks.Task SocketIOClient.Transport.IClientWebSocket::ConnectAsync(System.Uri,System.Threading.CancellationToken) */, IClientWebSocket_tB2E04077F1A857A8174EA3A71BC3E86261FFDF35_il2cpp_TypeInfo_var, L_3, L_4, L_5);
			NullCheck(L_6);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_7;
			L_7 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_6, NULL);
			V_1 = L_7;
			bool L_8;
			L_8 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_1), NULL);
			if (L_8)
			{
				goto IL_007a_1;
			}
		}
		{
			int32_t L_9 = 0;
			V_0 = L_9;
			__this->___U3CU3E1__state_0 = L_9;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_10 = V_1;
			__this->___U3CU3Eu__1_5 = L_10;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
			V_2 = __this;
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_11 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CConnectAsyncU3Ed__6_tD5DCCC944C5427F5E76F241174C5AB3B63C9A8D5_m835E1E79876D428BEBA95AA6248404952BC2A4E5(L_11, (&V_1), (&V_2), AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CConnectAsyncU3Ed__6_tD5DCCC944C5427F5E76F241174C5AB3B63C9A8D5_m835E1E79876D428BEBA95AA6248404952BC2A4E5_RuntimeMethod_var);
			goto IL_00b0;
		}

IL_005e_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_12 = __this->___U3CU3Eu__1_5;
			V_1 = L_12;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_13 = (&__this->___U3CU3Eu__1_5);
			il2cpp_codegen_initobj(L_13, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_14 = (-1);
			V_0 = L_14;
			__this->___U3CU3E1__state_0 = L_14;
		}

IL_007a_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_1), NULL);
			goto IL_009c;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0084;
		}
		throw e;
	}

CATCH_0084:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_15 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_16 = V_3;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_15, L_16, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b0;
	}// end catch (depth: 1)

IL_009c:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_17 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_17, NULL);
	}

IL_00b0:
	{
		return;
	}
}
// System.Void SocketIOClient.Transport.WebSocketTransport/<ConnectAsync>d__6::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConnectAsyncU3Ed__6_SetStateMachine_m2097379A927FCBFC32218746E7F245670E88D1A9 (U3CConnectAsyncU3Ed__6_tD5DCCC944C5427F5E76F241174C5AB3B63C9A8D5* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
// System.Void SocketIOClient.Transport.WebSocketTransport/<DisconnectAsync>d__7::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisconnectAsyncU3Ed__7__ctor_m300B564BBD39D92CE3F56A412EE9839960898D70 (U3CDisconnectAsyncU3Ed__7_tC478BFAF2B99787B82C3B70936A6E6CE41D58B60* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void SocketIOClient.Transport.WebSocketTransport/<DisconnectAsync>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisconnectAsyncU3Ed__7_MoveNext_mD998F05DFD516AF685C89F83C4FBFAB9C34B9E22 (U3CDisconnectAsyncU3Ed__7_tC478BFAF2B99787B82C3B70936A6E6CE41D58B60* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CDisconnectAsyncU3Ed__7_tC478BFAF2B99787B82C3B70936A6E6CE41D58B60_m99F098A421118896F666F9376A29A88D7D7376AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientWebSocket_tB2E04077F1A857A8174EA3A71BC3E86261FFDF35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_1;
	memset((&V_1), 0, sizeof(V_1));
	U3CDisconnectAsyncU3Ed__7_tC478BFAF2B99787B82C3B70936A6E6CE41D58B60* V_2 = NULL;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c_1;
			}
		}
		{
			goto IL_000e_1;
		}

IL_000c_1:
		{
			goto IL_0058_1;
		}

IL_000e_1:
		{
			// await _ws.DisconnectAsync(cancellationToken);
			WebSocketTransport_tA88D877EBA0CF8C088C3F8395F20E3CDDB6521CA* L_2 = __this->___U3CU3E4__this_3;
			NullCheck(L_2);
			RuntimeObject* L_3 = L_2->____ws_11;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = __this->___cancellationToken_2;
			NullCheck(L_3);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5;
			L_5 = InterfaceFuncInvoker1< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(3 /* System.Threading.Tasks.Task SocketIOClient.Transport.IClientWebSocket::DisconnectAsync(System.Threading.CancellationToken) */, IClientWebSocket_tB2E04077F1A857A8174EA3A71BC3E86261FFDF35_il2cpp_TypeInfo_var, L_3, L_4);
			NullCheck(L_5);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_6;
			L_6 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_5, NULL);
			V_1 = L_6;
			bool L_7;
			L_7 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_1), NULL);
			if (L_7)
			{
				goto IL_0074_1;
			}
		}
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->___U3CU3E1__state_0 = L_8;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_9 = V_1;
			__this->___U3CU3Eu__1_4 = L_9;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
			V_2 = __this;
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_10 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CDisconnectAsyncU3Ed__7_tC478BFAF2B99787B82C3B70936A6E6CE41D58B60_m99F098A421118896F666F9376A29A88D7D7376AE(L_10, (&V_1), (&V_2), AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CDisconnectAsyncU3Ed__7_tC478BFAF2B99787B82C3B70936A6E6CE41D58B60_m99F098A421118896F666F9376A29A88D7D7376AE_RuntimeMethod_var);
			goto IL_00aa;
		}

IL_0058_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_11 = __this->___U3CU3Eu__1_4;
			V_1 = L_11;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_12 = (&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_12, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->___U3CU3E1__state_0 = L_13;
		}

IL_0074_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_1), NULL);
			goto IL_0096;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_007e;
		}
		throw e;
	}

CATCH_007e:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_14 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_15 = V_3;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_14, L_15, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00aa;
	}// end catch (depth: 1)

IL_0096:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_16 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_16, NULL);
	}

IL_00aa:
	{
		return;
	}
}
// System.Void SocketIOClient.Transport.WebSocketTransport/<DisconnectAsync>d__7::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisconnectAsyncU3Ed__7_SetStateMachine_m6CD3EB8712BB973CC3A25638252BF2FF9497664D (U3CDisconnectAsyncU3Ed__7_tC478BFAF2B99787B82C3B70936A6E6CE41D58B60* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
// System.Void SocketIOClient.Transport.WebSocketTransport/<SendAsync>d__8::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendAsyncU3Ed__8__ctor_mBC40DA7D16EA9D0D771013269B8758A37E0CAE7E (U3CSendAsyncU3Ed__8_tBEFC093A6294B2E37CCE792AE8D1BF73CD984477* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void SocketIOClient.Transport.WebSocketTransport/<SendAsync>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendAsyncU3Ed__8_MoveNext_m929F19D460031747D861DB4CCABAC0138DA94A83 (U3CSendAsyncU3Ed__8_tBEFC093A6294B2E37CCE792AE8D1BF73CD984477* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSendAsyncU3Ed__8_tBEFC093A6294B2E37CCE792AE8D1BF73CD984477_m1E0EB37FE26F52B7FD84AEB34925A0119D40A5C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mCDDC850B62D20A7AAD5DF974538393AB3A43461F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5A8036FD044CA17B6B9F11640135700F7061BFE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4B63F6735596A1CA8F6EEA0E6C630CACC3F3900E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7C61C1682B2BDC2599320E9B76B12AD7F6E2020D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_1;
	memset((&V_1), 0, sizeof(V_1));
	U3CSendAsyncU3Ed__8_tBEFC093A6294B2E37CCE792AE8D1BF73CD984477* V_2 = NULL;
	bool V_3 = false;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0012_1;
			}
		}
		{
			goto IL_000c_1;
		}

IL_000c_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0014_1;
			}
		}
		{
			goto IL_0019_1;
		}

IL_0012_1:
		{
			goto IL_0083_1;
		}

IL_0014_1:
		{
			goto IL_00d4_1;
		}

IL_0019_1:
		{
			// byte[] bytes = Encoding.UTF8.GetBytes(payload.Text);
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_3;
			L_3 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			Payload_t40222C90D284CE7D812D4D8C137225A5846030C9* L_4 = __this->___payload_2;
			NullCheck(L_4);
			String_t* L_5;
			L_5 = Payload_get_Text_mAA707DFAA7F099F0CB8CF352454062CF76A9847C_inline(L_4, NULL);
			NullCheck(L_3);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
			L_6 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_3, L_5);
			__this->___U3CbytesU3E5__1_5 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbytesU3E5__1_5), (void*)L_6);
			// await SendAsync(TransportMessageType.Text, bytes, cancellationToken);
			WebSocketTransport_tA88D877EBA0CF8C088C3F8395F20E3CDDB6521CA* L_7 = __this->___U3CU3E4__this_4;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___U3CbytesU3E5__1_5;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_9 = __this->___cancellationToken_3;
			NullCheck(L_7);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_10;
			L_10 = WebSocketTransport_SendAsync_mCC25B07B3A5C137C647082987DF40DBC4C1745FD(L_7, 0, L_8, L_9, NULL);
			NullCheck(L_10);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_11;
			L_11 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_10, NULL);
			V_1 = L_11;
			bool L_12;
			L_12 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_1), NULL);
			if (L_12)
			{
				goto IL_009f_1;
			}
		}
		{
			int32_t L_13 = 0;
			V_0 = L_13;
			__this->___U3CU3E1__state_0 = L_13;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_14 = V_1;
			__this->___U3CU3Eu__1_8 = L_14;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_8))->___m_task_0), (void*)NULL);
			V_2 = __this;
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_15 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSendAsyncU3Ed__8_tBEFC093A6294B2E37CCE792AE8D1BF73CD984477_m1E0EB37FE26F52B7FD84AEB34925A0119D40A5C3(L_15, (&V_1), (&V_2), AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSendAsyncU3Ed__8_tBEFC093A6294B2E37CCE792AE8D1BF73CD984477_m1E0EB37FE26F52B7FD84AEB34925A0119D40A5C3_RuntimeMethod_var);
			goto IL_01e5;
		}

IL_0083_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_16 = __this->___U3CU3Eu__1_8;
			V_1 = L_16;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_17 = (&__this->___U3CU3Eu__1_8);
			il2cpp_codegen_initobj(L_17, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_18 = (-1);
			V_0 = L_18;
			__this->___U3CU3E1__state_0 = L_18;
		}

IL_009f_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_1), NULL);
			// if (payload.Bytes != null)
			Payload_t40222C90D284CE7D812D4D8C137225A5846030C9* L_19 = __this->___payload_2;
			NullCheck(L_19);
			List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_20;
			L_20 = Payload_get_Bytes_m475B909EFFF04EC82178DF8A95BBEB831BCAE9AD_inline(L_19, NULL);
			V_3 = (bool)((!(((RuntimeObject*)(List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*)L_20) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_21 = V_3;
			if (!L_21)
			{
				goto IL_01a7_1;
			}
		}
		{
			// foreach (var item in payload.Bytes)
			Payload_t40222C90D284CE7D812D4D8C137225A5846030C9* L_22 = __this->___payload_2;
			NullCheck(L_22);
			List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_23;
			L_23 = Payload_get_Bytes_m475B909EFFF04EC82178DF8A95BBEB831BCAE9AD_inline(L_22, NULL);
			NullCheck(L_23);
			Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC L_24;
			L_24 = List_1_GetEnumerator_m7C61C1682B2BDC2599320E9B76B12AD7F6E2020D(L_23, List_1_GetEnumerator_m7C61C1682B2BDC2599320E9B76B12AD7F6E2020D_RuntimeMethod_var);
			__this->___U3CU3Es__2_6 = L_24;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Es__2_6))->____list_0), (void*)NULL);
			#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Es__2_6))->____current_3), (void*)NULL);
			#endif
		}

IL_00d4_1:
		{
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0183_1:
				{// begin finally (depth: 2)
					{
						int32_t L_25 = V_0;
						if ((((int32_t)L_25) >= ((int32_t)0)))
						{
							goto IL_0199_1;
						}
					}
					{
						Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC* L_26 = (&__this->___U3CU3Es__2_6);
						Enumerator_Dispose_mCDDC850B62D20A7AAD5DF974538393AB3A43461F(L_26, Enumerator_Dispose_mCDDC850B62D20A7AAD5DF974538393AB3A43461F_RuntimeMethod_var);
					}

IL_0199_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					int32_t L_27 = V_0;
					if ((((int32_t)L_27) == ((int32_t)1)))
					{
						goto IL_00db_2;
					}
				}
				{
					goto IL_00dd_2;
				}

IL_00db_2:
				{
					goto IL_0144_2;
				}

IL_00dd_2:
				{
					goto IL_0171_2;
				}

IL_00e2_2:
				{
					// foreach (var item in payload.Bytes)
					Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC* L_28 = (&__this->___U3CU3Es__2_6);
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29;
					L_29 = Enumerator_get_Current_m4B63F6735596A1CA8F6EEA0E6C630CACC3F3900E_inline(L_28, Enumerator_get_Current_m4B63F6735596A1CA8F6EEA0E6C630CACC3F3900E_RuntimeMethod_var);
					__this->___U3CitemU3E5__3_7 = L_29;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CitemU3E5__3_7), (void*)L_29);
					// await SendAsync(TransportMessageType.Binary, item, cancellationToken);
					WebSocketTransport_tA88D877EBA0CF8C088C3F8395F20E3CDDB6521CA* L_30 = __this->___U3CU3E4__this_4;
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = __this->___U3CitemU3E5__3_7;
					CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_32 = __this->___cancellationToken_3;
					NullCheck(L_30);
					Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_33;
					L_33 = WebSocketTransport_SendAsync_mCC25B07B3A5C137C647082987DF40DBC4C1745FD(L_30, 1, L_31, L_32, NULL);
					NullCheck(L_33);
					TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_34;
					L_34 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_33, NULL);
					V_4 = L_34;
					bool L_35;
					L_35 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_4), NULL);
					if (L_35)
					{
						goto IL_0161_2;
					}
				}
				{
					int32_t L_36 = 1;
					V_0 = L_36;
					__this->___U3CU3E1__state_0 = L_36;
					TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_37 = V_4;
					__this->___U3CU3Eu__1_8 = L_37;
					Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_8))->___m_task_0), (void*)NULL);
					V_2 = __this;
					AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_38 = (&__this->___U3CU3Et__builder_1);
					AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSendAsyncU3Ed__8_tBEFC093A6294B2E37CCE792AE8D1BF73CD984477_m1E0EB37FE26F52B7FD84AEB34925A0119D40A5C3(L_38, (&V_4), (&V_2), AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSendAsyncU3Ed__8_tBEFC093A6294B2E37CCE792AE8D1BF73CD984477_m1E0EB37FE26F52B7FD84AEB34925A0119D40A5C3_RuntimeMethod_var);
					goto IL_01e5;
				}

IL_0144_2:
				{
					TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_39 = __this->___U3CU3Eu__1_8;
					V_4 = L_39;
					TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_40 = (&__this->___U3CU3Eu__1_8);
					il2cpp_codegen_initobj(L_40, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
					int32_t L_41 = (-1);
					V_0 = L_41;
					__this->___U3CU3E1__state_0 = L_41;
				}

IL_0161_2:
				{
					TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_4), NULL);
					__this->___U3CitemU3E5__3_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CitemU3E5__3_7), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
				}

IL_0171_2:
				{
					// foreach (var item in payload.Bytes)
					Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC* L_42 = (&__this->___U3CU3Es__2_6);
					bool L_43;
					L_43 = Enumerator_MoveNext_m5A8036FD044CA17B6B9F11640135700F7061BFE4(L_42, Enumerator_MoveNext_m5A8036FD044CA17B6B9F11640135700F7061BFE4_RuntimeMethod_var);
					if (L_43)
					{
						goto IL_00e2_2;
					}
				}
				{
					goto IL_019a_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_019a_1:
		{
			Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC* L_44 = (&__this->___U3CU3Es__2_6);
			il2cpp_codegen_initobj(L_44, sizeof(Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC));
		}

IL_01a7_1:
		{
			goto IL_01ca;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01a9;
		}
		throw e;
	}

CATCH_01a9:
	{// begin catch(System.Exception)
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CbytesU3E5__1_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbytesU3E5__1_5), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_45 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_46 = V_5;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_45, L_46, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01e5;
	}// end catch (depth: 1)

IL_01ca:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CbytesU3E5__1_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbytesU3E5__1_5), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_47 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_47, NULL);
	}

IL_01e5:
	{
		return;
	}
}
// System.Void SocketIOClient.Transport.WebSocketTransport/<SendAsync>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendAsyncU3Ed__8_SetStateMachine_m7336DDA9E65ED7B5068D3AE0BC8304768CB13A62 (U3CSendAsyncU3Ed__8_tBEFC093A6294B2E37CCE792AE8D1BF73CD984477* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
// SocketIOClient.Messages.MessageType SocketIOClient.Messages.BinaryMessage::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BinaryMessage_get_Type_m30AECA33851692F530355816CC07056DD40FB25A (BinaryMessage_tD5819CFC7CC9F2CE0BC27C01B47AEF59F66CCF05* __this, const RuntimeMethod* method) 
{
	{
		// public MessageType Type => MessageType.BinaryMessage;
		return (int32_t)(((int32_t)45));
	}
}
// System.String SocketIOClient.Messages.BinaryMessage::get_Namespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BinaryMessage_get_Namespace_m856DED46A8FE1D6CFBDC48460B1CB546114B72F4 (BinaryMessage_tD5819CFC7CC9F2CE0BC27C01B47AEF59F66CCF05* __this, const RuntimeMethod* method) 
{
	{
		// public string Namespace { get; set; }
		String_t* L_0 = __this->___U3CNamespaceU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.BinaryMessage::set_Namespace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryMessage_set_Namespace_m31A42EC5E2ED16F26508085A1E0587AF0D08AA35 (BinaryMessage_tD5819CFC7CC9F2CE0BC27C01B47AEF59F66CCF05* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Namespace { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CNamespaceU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNamespaceU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String SocketIOClient.Messages.BinaryMessage::get_Event()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BinaryMessage_get_Event_m2924E06720D79B172ED0F3631228E7AE4E8AE7B6 (BinaryMessage_tD5819CFC7CC9F2CE0BC27C01B47AEF59F66CCF05* __this, const RuntimeMethod* method) 
{
	{
		// public string Event { get; set; }
		String_t* L_0 = __this->___U3CEventU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.BinaryMessage::set_Event(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryMessage_set_Event_m573BF95F0ACFC637D4E0B95554D00E893A2DF16D (BinaryMessage_tD5819CFC7CC9F2CE0BC27C01B47AEF59F66CCF05* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Event { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CEventU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEventU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Int32 SocketIOClient.Messages.BinaryMessage::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BinaryMessage_get_Id_mDCB196AAFEA5A58D8068FD6FE0404C7CDFBFCCF5 (BinaryMessage_tD5819CFC7CC9F2CE0BC27C01B47AEF59F66CCF05* __this, const RuntimeMethod* method) 
{
	{
		// public int Id { get; set; }
		int32_t L_0 = __this->___U3CIdU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.BinaryMessage::set_Id(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryMessage_set_Id_m86C5F7877C9BDD52250F292CD9AE31FC93F15168 (BinaryMessage_tD5819CFC7CC9F2CE0BC27C01B47AEF59F66CCF05* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int Id { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CIdU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Collections.Generic.List`1<System.Text.Json.JsonElement> SocketIOClient.Messages.BinaryMessage::get_JsonElements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6* BinaryMessage_get_JsonElements_m1E21F166CF10210BB5AF847FBEFACD18AF43E828 (BinaryMessage_tD5819CFC7CC9F2CE0BC27C01B47AEF59F66CCF05* __this, const RuntimeMethod* method) 
{
	{
		// public List<JsonElement> JsonElements { get; set; }
		List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6* L_0 = __this->___U3CJsonElementsU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.BinaryMessage::set_JsonElements(System.Collections.Generic.List`1<System.Text.Json.JsonElement>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryMessage_set_JsonElements_m3F7CFAC1CA7ADEEC4E9B0E52225C4AC20B88BDE8 (BinaryMessage_tD5819CFC7CC9F2CE0BC27C01B47AEF59F66CCF05* __this, List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6* ___0_value, const RuntimeMethod* method) 
{
	{
		// public List<JsonElement> JsonElements { get; set; }
		List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6* L_0 = ___0_value;
		__this->___U3CJsonElementsU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CJsonElementsU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.String SocketIOClient.Messages.BinaryMessage::get_Json()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BinaryMessage_get_Json_m6615778C6033109543CC60AFFF1BF13FD093CB60 (BinaryMessage_tD5819CFC7CC9F2CE0BC27C01B47AEF59F66CCF05* __this, const RuntimeMethod* method) 
{
	{
		// public string Json { get; set; }
		String_t* L_0 = __this->___U3CJsonU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.BinaryMessage::set_Json(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryMessage_set_Json_m8296DA4ADE8C22BDEFC1A5BDC9530DAD85E528B9 (BinaryMessage_tD5819CFC7CC9F2CE0BC27C01B47AEF59F66CCF05* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Json { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CJsonU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CJsonU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Int32 SocketIOClient.Messages.BinaryMessage::get_BinaryCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BinaryMessage_get_BinaryCount_mB699F8DBCA01095D67DAAF09D5791A39AE52A6D6 (BinaryMessage_tD5819CFC7CC9F2CE0BC27C01B47AEF59F66CCF05* __this, const RuntimeMethod* method) 
{
	{
		// public int BinaryCount { get; set; }
		int32_t L_0 = __this->___U3CBinaryCountU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.BinaryMessage::set_BinaryCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryMessage_set_BinaryCount_mBCAB4F19DDF88469A8E9FF294116552D4ECA88D1 (BinaryMessage_tD5819CFC7CC9F2CE0BC27C01B47AEF59F66CCF05* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int BinaryCount { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CBinaryCountU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Int32 SocketIOClient.Messages.BinaryMessage::get_Eio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BinaryMessage_get_Eio_m90856FC801B2A9AE6DF9A1716DB71A42BDC57C7A (BinaryMessage_tD5819CFC7CC9F2CE0BC27C01B47AEF59F66CCF05* __this, const RuntimeMethod* method) 
{
	{
		// public int Eio { get; set; }
		int32_t L_0 = __this->___U3CEioU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.BinaryMessage::set_Eio(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryMessage_set_Eio_mA995DE4A20D018F61E255BD761A84D3108B11941 (BinaryMessage_tD5819CFC7CC9F2CE0BC27C01B47AEF59F66CCF05* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int Eio { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CEioU3Ek__BackingField_6 = L_0;
		return;
	}
}
// SocketIOClient.Transport.TransportProtocol SocketIOClient.Messages.BinaryMessage::get_Protocol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BinaryMessage_get_Protocol_m49B8892E9BBE10997C00473F29230BF7F6ABA6C9 (BinaryMessage_tD5819CFC7CC9F2CE0BC27C01B47AEF59F66CCF05* __this, const RuntimeMethod* method) 
{
	{
		// public TransportProtocol Protocol { get; set; }
		int32_t L_0 = __this->___U3CProtocolU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.BinaryMessage::set_Protocol(SocketIOClient.Transport.TransportProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryMessage_set_Protocol_mDC330E753149D8283135E454343DFA5985A10A1F (BinaryMessage_tD5819CFC7CC9F2CE0BC27C01B47AEF59F66CCF05* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public TransportProtocol Protocol { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CProtocolU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Collections.Generic.List`1<System.Byte[]> SocketIOClient.Messages.BinaryMessage::get_OutgoingBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* BinaryMessage_get_OutgoingBytes_m4D2A70DB3BF587489C3FCFDAECE67390D41144DC (BinaryMessage_tD5819CFC7CC9F2CE0BC27C01B47AEF59F66CCF05* __this, const RuntimeMethod* method) 
{
	{
		// public List<byte[]> OutgoingBytes { get; set; }
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___U3COutgoingBytesU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.BinaryMessage::set_OutgoingBytes(System.Collections.Generic.List`1<System.Byte[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryMessage_set_OutgoingBytes_m09746931FD52EB50409C3E232C91BF8035278312 (BinaryMessage_tD5819CFC7CC9F2CE0BC27C01B47AEF59F66CCF05* __this, List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___0_value, const RuntimeMethod* method) 
{
	{
		// public List<byte[]> OutgoingBytes { get; set; }
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = ___0_value;
		__this->___U3COutgoingBytesU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COutgoingBytesU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<System.Byte[]> SocketIOClient.Messages.BinaryMessage::get_IncomingBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* BinaryMessage_get_IncomingBytes_m56D3EB8396EA2609AEA7986EF2BD16C410A98C17 (BinaryMessage_tD5819CFC7CC9F2CE0BC27C01B47AEF59F66CCF05* __this, const RuntimeMethod* method) 
{
	{
		// public List<byte[]> IncomingBytes { get; set; }
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___U3CIncomingBytesU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.BinaryMessage::set_IncomingBytes(System.Collections.Generic.List`1<System.Byte[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryMessage_set_IncomingBytes_mF1487B79718AC635AB848B1D64FA9D46BCBCFB6C (BinaryMessage_tD5819CFC7CC9F2CE0BC27C01B47AEF59F66CCF05* __this, List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___0_value, const RuntimeMethod* method) 
{
	{
		// public List<byte[]> IncomingBytes { get; set; }
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = ___0_value;
		__this->___U3CIncomingBytesU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIncomingBytesU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
// System.Void SocketIOClient.Messages.BinaryMessage::Read(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryMessage_Read_m4B6A9A143077BCA51590D9E93E83DF857858786D (BinaryMessage_tD5819CFC7CC9F2CE0BC27C01B47AEF59F66CCF05* __this, String_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m54BE733D37F0BE82FCD59F3D8B06A0409EBDD327_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m16D5E19B993EA46901FB2FC56C335AAFCBCC14C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	ArrayEnumerator_t6A32F25D9BE79D9856DA29CBAD749933F2C9C97C V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	int32_t V_9 = 0;
	bool V_10 = false;
	JsonDocumentOptions_t46D96C339522F4321E0FA1BD1DB3ABE2F300299B V_11;
	memset((&V_11), 0, sizeof(V_11));
	JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 V_12;
	memset((&V_12), 0, sizeof(V_12));
	ArrayEnumerator_t6A32F25D9BE79D9856DA29CBAD749933F2C9C97C V_13;
	memset((&V_13), 0, sizeof(V_13));
	JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 V_14;
	memset((&V_14), 0, sizeof(V_14));
	bool V_15 = false;
	{
		// int index1 = msg.IndexOf('-');
		String_t* L_0 = ___0_msg;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_0, ((int32_t)45), NULL);
		V_0 = L_1;
		// BinaryCount = int.Parse(msg.Substring(0, index1));
		String_t* L_2 = ___0_msg;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		String_t* L_4;
		L_4 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_2, 0, L_3, NULL);
		int32_t L_5;
		L_5 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_4, NULL);
		BinaryMessage_set_BinaryCount_mBCAB4F19DDF88469A8E9FF294116552D4ECA88D1_inline(__this, L_5, NULL);
		// int index2 = msg.IndexOf('[');
		String_t* L_6 = ___0_msg;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_6, ((int32_t)91), NULL);
		V_1 = L_7;
		// int index3 = msg.LastIndexOf(',', index2);
		String_t* L_8 = ___0_msg;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10;
		L_10 = String_LastIndexOf_m3EB3F4ECDF6D990ADBACB6B168A8CBD4772B91A7(L_8, ((int32_t)44), L_9, NULL);
		V_2 = L_10;
		// if (index3 > -1)
		int32_t L_11 = V_2;
		V_6 = (bool)((((int32_t)L_11) > ((int32_t)(-1)))? 1 : 0);
		bool L_12 = V_6;
		if (!L_12)
		{
			goto IL_007f;
		}
	}
	{
		// Namespace = msg.Substring(index1 + 1, index3 - index1 - 1);
		String_t* L_13 = ___0_msg;
		int32_t L_14 = V_0;
		int32_t L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_13);
		String_t* L_17;
		L_17 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_13, ((int32_t)il2cpp_codegen_add(L_14, 1)), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_15, L_16)), 1)), NULL);
		BinaryMessage_set_Namespace_m31A42EC5E2ED16F26508085A1E0587AF0D08AA35_inline(__this, L_17, NULL);
		// int idLength = index2 - index3 - 1;
		int32_t L_18 = V_1;
		int32_t L_19 = V_2;
		V_7 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_18, L_19)), 1));
		// if (idLength > 0)
		int32_t L_20 = V_7;
		V_8 = (bool)((((int32_t)L_20) > ((int32_t)0))? 1 : 0);
		bool L_21 = V_8;
		if (!L_21)
		{
			goto IL_007c;
		}
	}
	{
		// Id = int.Parse(msg.Substring(index3 + 1, idLength));
		String_t* L_22 = ___0_msg;
		int32_t L_23 = V_2;
		int32_t L_24 = V_7;
		NullCheck(L_22);
		String_t* L_25;
		L_25 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_22, ((int32_t)il2cpp_codegen_add(L_23, 1)), L_24, NULL);
		int32_t L_26;
		L_26 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_25, NULL);
		BinaryMessage_set_Id_m86C5F7877C9BDD52250F292CD9AE31FC93F15168_inline(__this, L_26, NULL);
	}

IL_007c:
	{
		goto IL_00ac;
	}

IL_007f:
	{
		// int idLength = index2 - index1 - 1;
		int32_t L_27 = V_1;
		int32_t L_28 = V_0;
		V_9 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_27, L_28)), 1));
		// if (idLength > 0)
		int32_t L_29 = V_9;
		V_10 = (bool)((((int32_t)L_29) > ((int32_t)0))? 1 : 0);
		bool L_30 = V_10;
		if (!L_30)
		{
			goto IL_00ab;
		}
	}
	{
		// Id = int.Parse(msg.Substring(index1 + 1, idLength));
		String_t* L_31 = ___0_msg;
		int32_t L_32 = V_0;
		int32_t L_33 = V_9;
		NullCheck(L_31);
		String_t* L_34;
		L_34 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_31, ((int32_t)il2cpp_codegen_add(L_32, 1)), L_33, NULL);
		int32_t L_35;
		L_35 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_34, NULL);
		BinaryMessage_set_Id_m86C5F7877C9BDD52250F292CD9AE31FC93F15168_inline(__this, L_35, NULL);
	}

IL_00ab:
	{
	}

IL_00ac:
	{
		// string json = msg.Substring(index2);
		String_t* L_36 = ___0_msg;
		int32_t L_37 = V_1;
		NullCheck(L_36);
		String_t* L_38;
		L_38 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_36, L_37, NULL);
		V_3 = L_38;
		// var array = JsonDocument.Parse(json).RootElement.EnumerateArray();
		String_t* L_39 = V_3;
		il2cpp_codegen_initobj((&V_11), sizeof(JsonDocumentOptions_t46D96C339522F4321E0FA1BD1DB3ABE2F300299B));
		JsonDocumentOptions_t46D96C339522F4321E0FA1BD1DB3ABE2F300299B L_40 = V_11;
		JsonDocument_tF96A1F7D1D40932B5EA6A97DA06E150B6CBDBE6F* L_41;
		L_41 = JsonDocument_Parse_m290785DE223664D929CAC7888BAEE7693B60DFC2(L_39, L_40, NULL);
		NullCheck(L_41);
		JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_42;
		L_42 = JsonDocument_get_RootElement_m40BA0A219E870618E0E6DD88367CFB484F2C5195(L_41, NULL);
		V_12 = L_42;
		ArrayEnumerator_t6A32F25D9BE79D9856DA29CBAD749933F2C9C97C L_43;
		L_43 = JsonElement_EnumerateArray_m9B35AF71578078459E6DAF2D7416D07F327E6E38((&V_12), NULL);
		V_4 = L_43;
		// int i = -1;
		V_5 = (-1);
		// foreach (var item in array)
		ArrayEnumerator_t6A32F25D9BE79D9856DA29CBAD749933F2C9C97C L_44;
		L_44 = ArrayEnumerator_GetEnumerator_m938DD30A37AEE868DC5935D0CDE254FA6CAFCF97((&V_4), NULL);
		V_13 = L_44;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0138:
			{// begin finally (depth: 1)
				ArrayEnumerator_Dispose_mD4E9E4516CF8CC2CEA173A59B8407A94271C34D2((&V_13), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_012d_1;
			}

IL_00e3_1:
			{
				// foreach (var item in array)
				JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_45;
				L_45 = ArrayEnumerator_get_Current_m5F5C30DD80B5F2331BF392DA21D4EB06E050F827((&V_13), NULL);
				V_14 = L_45;
				// i++;
				int32_t L_46 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add(L_46, 1));
				// if (i == 0)
				int32_t L_47 = V_5;
				V_15 = (bool)((((int32_t)L_47) == ((int32_t)0))? 1 : 0);
				bool L_48 = V_15;
				if (!L_48)
				{
					goto IL_011c_1;
				}
			}
			{
				// Event = item.GetString();
				String_t* L_49;
				L_49 = JsonElement_GetString_m7AE007D2F1B4016AA1B53BF79B1A1DD1EA42EB94((&V_14), NULL);
				BinaryMessage_set_Event_m573BF95F0ACFC637D4E0B95554D00E893A2DF16D_inline(__this, L_49, NULL);
				// JsonElements = new List<JsonElement>();
				List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6* L_50 = (List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6*)il2cpp_codegen_object_new(List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6_il2cpp_TypeInfo_var);
				NullCheck(L_50);
				List_1__ctor_m16D5E19B993EA46901FB2FC56C335AAFCBCC14C3(L_50, List_1__ctor_m16D5E19B993EA46901FB2FC56C335AAFCBCC14C3_RuntimeMethod_var);
				BinaryMessage_set_JsonElements_m3F7CFAC1CA7ADEEC4E9B0E52225C4AC20B88BDE8_inline(__this, L_50, NULL);
				goto IL_012c_1;
			}

IL_011c_1:
			{
				// JsonElements.Add(item);
				List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6* L_51;
				L_51 = BinaryMessage_get_JsonElements_m1E21F166CF10210BB5AF847FBEFACD18AF43E828_inline(__this, NULL);
				JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_52 = V_14;
				NullCheck(L_51);
				List_1_Add_m54BE733D37F0BE82FCD59F3D8B06A0409EBDD327_inline(L_51, L_52, List_1_Add_m54BE733D37F0BE82FCD59F3D8B06A0409EBDD327_RuntimeMethod_var);
			}

IL_012c_1:
			{
			}

IL_012d_1:
			{
				// foreach (var item in array)
				bool L_53;
				L_53 = ArrayEnumerator_MoveNext_mF1B0AFD404AA0995A6BE8106CE602684BBE47433((&V_13), NULL);
				if (L_53)
				{
					goto IL_00e3_1;
				}
			}
			{
				goto IL_0147;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0147:
	{
		// }
		return;
	}
}
// System.String SocketIOClient.Messages.BinaryMessage::Write()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BinaryMessage_Write_m7D04AD431200A102781BD62BC7C477312C7625CF (BinaryMessage_tD5819CFC7CC9F2CE0BC27C01B47AEF59F66CCF05* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m88FEB2D94E35C258B61F53400F7CA20E99A7DAD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B6D138D8454083A41D1C936D8DFA8099F161DA8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EABFF598CE5B1DE50532CB71FD74C8F1B848045);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3952A7C46F2C9749F94659EC90D855DF03EE7B1A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0AB94C928A783BE1AAC7FE99970D2920FE6A1D8);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		// var builder = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		// builder
		//     .Append("45")
		//     .Append(OutgoingBytes.Count)
		//     .Append('-');
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, _stringLiteral1EABFF598CE5B1DE50532CB71FD74C8F1B848045, NULL);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_3;
		L_3 = BinaryMessage_get_OutgoingBytes_m4D2A70DB3BF587489C3FCFDAECE67390D41144DC_inline(__this, NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m88FEB2D94E35C258B61F53400F7CA20E99A7DAD3_inline(L_3, List_1_get_Count_m88FEB2D94E35C258B61F53400F7CA20E99A7DAD3_RuntimeMethod_var);
		NullCheck(L_2);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA(L_2, L_4, NULL);
		NullCheck(L_5);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_5, ((int32_t)45), NULL);
		// if (!string.IsNullOrEmpty(Namespace))
		String_t* L_7;
		L_7 = BinaryMessage_get_Namespace_m856DED46A8FE1D6CFBDC48460B1CB546114B72F4_inline(__this, NULL);
		bool L_8;
		L_8 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_7, NULL);
		V_1 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0052;
		}
	}
	{
		// builder.Append(Namespace).Append(',');
		StringBuilder_t* L_10 = V_0;
		String_t* L_11;
		L_11 = BinaryMessage_get_Namespace_m856DED46A8FE1D6CFBDC48460B1CB546114B72F4_inline(__this, NULL);
		NullCheck(L_10);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_10, L_11, NULL);
		NullCheck(L_12);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_12, ((int32_t)44), NULL);
	}

IL_0052:
	{
		// if (string.IsNullOrEmpty(Json))
		String_t* L_14;
		L_14 = BinaryMessage_get_Json_m6615778C6033109543CC60AFFF1BF13FD093CB60_inline(__this, NULL);
		bool L_15;
		L_15 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_14, NULL);
		V_2 = L_15;
		bool L_16 = V_2;
		if (!L_16)
		{
			goto IL_0086;
		}
	}
	{
		// builder.Append("[\"").Append(Event).Append("\"]");
		StringBuilder_t* L_17 = V_0;
		NullCheck(L_17);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, _stringLiteral3952A7C46F2C9749F94659EC90D855DF03EE7B1A, NULL);
		String_t* L_19;
		L_19 = BinaryMessage_get_Event_m2924E06720D79B172ED0F3631228E7AE4E8AE7B6_inline(__this, NULL);
		NullCheck(L_18);
		StringBuilder_t* L_20;
		L_20 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_18, L_19, NULL);
		NullCheck(L_20);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_20, _stringLiteralF0AB94C928A783BE1AAC7FE99970D2920FE6A1D8, NULL);
		goto IL_00b2;
	}

IL_0086:
	{
		// string data = Json.Insert(1, $"\"{Event}\",");
		String_t* L_22;
		L_22 = BinaryMessage_get_Json_m6615778C6033109543CC60AFFF1BF13FD093CB60_inline(__this, NULL);
		String_t* L_23;
		L_23 = BinaryMessage_get_Event_m2924E06720D79B172ED0F3631228E7AE4E8AE7B6_inline(__this, NULL);
		String_t* L_24;
		L_24 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, L_23, _stringLiteral0B6D138D8454083A41D1C936D8DFA8099F161DA8, NULL);
		NullCheck(L_22);
		String_t* L_25;
		L_25 = String_Insert_mA279E748F06514A6D0B9B680D651D6A6C6BB561A(L_22, 1, L_24, NULL);
		V_3 = L_25;
		// builder.Append(data);
		StringBuilder_t* L_26 = V_0;
		String_t* L_27 = V_3;
		NullCheck(L_26);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_26, L_27, NULL);
	}

IL_00b2:
	{
		// return builder.ToString();
		StringBuilder_t* L_29 = V_0;
		NullCheck(L_29);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_29);
		V_4 = L_30;
		goto IL_00bc;
	}

IL_00bc:
	{
		// }
		String_t* L_31 = V_4;
		return L_31;
	}
}
// System.Void SocketIOClient.Messages.BinaryMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryMessage__ctor_m792CBE784B67DA727519BDA1F0A1C3CF619BDE47 (BinaryMessage_tD5819CFC7CC9F2CE0BC27C01B47AEF59F66CCF05* __this, const RuntimeMethod* method) 
{
	{
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
// SocketIOClient.Messages.MessageType SocketIOClient.Messages.ClientAckMessage::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ClientAckMessage_get_Type_m526F14F54E7D4E686B4510D040921B6FCF56F78E (ClientAckMessage_t7F42DF41F6C6389FF9ADCA794D69BFA3FA15E6F9* __this, const RuntimeMethod* method) 
{
	{
		// public MessageType Type => MessageType.AckMessage;
		return (int32_t)(((int32_t)43));
	}
}
// System.String SocketIOClient.Messages.ClientAckMessage::get_Namespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ClientAckMessage_get_Namespace_mC07CC220F3BD0319F276274708CA390FF3CB17B2 (ClientAckMessage_t7F42DF41F6C6389FF9ADCA794D69BFA3FA15E6F9* __this, const RuntimeMethod* method) 
{
	{
		// public string Namespace { get; set; }
		String_t* L_0 = __this->___U3CNamespaceU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.ClientAckMessage::set_Namespace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientAckMessage_set_Namespace_m6D0F53093A544183349C1ED46A1C072D99478F4F (ClientAckMessage_t7F42DF41F6C6389FF9ADCA794D69BFA3FA15E6F9* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Namespace { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CNamespaceU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNamespaceU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String SocketIOClient.Messages.ClientAckMessage::get_Event()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ClientAckMessage_get_Event_mD53C0DD4587924D4681BBAE3C914B1015EFE750C (ClientAckMessage_t7F42DF41F6C6389FF9ADCA794D69BFA3FA15E6F9* __this, const RuntimeMethod* method) 
{
	{
		// public string Event { get; set; }
		String_t* L_0 = __this->___U3CEventU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.ClientAckMessage::set_Event(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientAckMessage_set_Event_mE0F750F5E24C92AACB2C0F8BAA49ED546D282E23 (ClientAckMessage_t7F42DF41F6C6389FF9ADCA794D69BFA3FA15E6F9* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Event { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CEventU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEventU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<System.Text.Json.JsonElement> SocketIOClient.Messages.ClientAckMessage::get_JsonElements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6* ClientAckMessage_get_JsonElements_m5A16596ADA14AE06FDC40BB2E73631F9C8275B9D (ClientAckMessage_t7F42DF41F6C6389FF9ADCA794D69BFA3FA15E6F9* __this, const RuntimeMethod* method) 
{
	{
		// public List<JsonElement> JsonElements { get; set; }
		List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6* L_0 = __this->___U3CJsonElementsU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.ClientAckMessage::set_JsonElements(System.Collections.Generic.List`1<System.Text.Json.JsonElement>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientAckMessage_set_JsonElements_mCD5B47F692A519A1302652F91CCF7DE65B072E9D (ClientAckMessage_t7F42DF41F6C6389FF9ADCA794D69BFA3FA15E6F9* __this, List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6* ___0_value, const RuntimeMethod* method) 
{
	{
		// public List<JsonElement> JsonElements { get; set; }
		List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6* L_0 = ___0_value;
		__this->___U3CJsonElementsU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CJsonElementsU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.String SocketIOClient.Messages.ClientAckMessage::get_Json()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ClientAckMessage_get_Json_mC3597A0931801F7A388439E3A3408EECD858C5A2 (ClientAckMessage_t7F42DF41F6C6389FF9ADCA794D69BFA3FA15E6F9* __this, const RuntimeMethod* method) 
{
	{
		// public string Json { get; set; }
		String_t* L_0 = __this->___U3CJsonU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.ClientAckMessage::set_Json(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientAckMessage_set_Json_mE531C3AFE8BF246018657264C26840B0A0D7D08E (ClientAckMessage_t7F42DF41F6C6389FF9ADCA794D69BFA3FA15E6F9* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Json { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CJsonU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CJsonU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Int32 SocketIOClient.Messages.ClientAckMessage::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ClientAckMessage_get_Id_m92F24367984A2B1BCA7300245133861E0C3C9A47 (ClientAckMessage_t7F42DF41F6C6389FF9ADCA794D69BFA3FA15E6F9* __this, const RuntimeMethod* method) 
{
	{
		// public int Id { get; set; }
		int32_t L_0 = __this->___U3CIdU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.ClientAckMessage::set_Id(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientAckMessage_set_Id_m397DBACB6629B883ED1105AD9D4B52444F3075D2 (ClientAckMessage_t7F42DF41F6C6389FF9ADCA794D69BFA3FA15E6F9* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int Id { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Collections.Generic.List`1<System.Byte[]> SocketIOClient.Messages.ClientAckMessage::get_OutgoingBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ClientAckMessage_get_OutgoingBytes_m2CFF7D5A259401AC002BFF7A5F41C00D6CC4E221 (ClientAckMessage_t7F42DF41F6C6389FF9ADCA794D69BFA3FA15E6F9* __this, const RuntimeMethod* method) 
{
	{
		// public List<byte[]> OutgoingBytes { get; set; }
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___U3COutgoingBytesU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.ClientAckMessage::set_OutgoingBytes(System.Collections.Generic.List`1<System.Byte[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientAckMessage_set_OutgoingBytes_mCBAE172CE733A005AA9F0894E1E29D6038F1826D (ClientAckMessage_t7F42DF41F6C6389FF9ADCA794D69BFA3FA15E6F9* __this, List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___0_value, const RuntimeMethod* method) 
{
	{
		// public List<byte[]> OutgoingBytes { get; set; }
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = ___0_value;
		__this->___U3COutgoingBytesU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COutgoingBytesU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<System.Byte[]> SocketIOClient.Messages.ClientAckMessage::get_IncomingBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ClientAckMessage_get_IncomingBytes_mDB9E07979201856C6EC8646D83B663332CD7FDE7 (ClientAckMessage_t7F42DF41F6C6389FF9ADCA794D69BFA3FA15E6F9* __this, const RuntimeMethod* method) 
{
	{
		// public List<byte[]> IncomingBytes { get; set; }
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___U3CIncomingBytesU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.ClientAckMessage::set_IncomingBytes(System.Collections.Generic.List`1<System.Byte[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientAckMessage_set_IncomingBytes_m8BD140905A90A7D21F3980302E076258B26A1C23 (ClientAckMessage_t7F42DF41F6C6389FF9ADCA794D69BFA3FA15E6F9* __this, List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___0_value, const RuntimeMethod* method) 
{
	{
		// public List<byte[]> IncomingBytes { get; set; }
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = ___0_value;
		__this->___U3CIncomingBytesU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIncomingBytesU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.Int32 SocketIOClient.Messages.ClientAckMessage::get_BinaryCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ClientAckMessage_get_BinaryCount_mD0191B08B3BB8CFA84A607A75AB99BDD9DCEC2C9 (ClientAckMessage_t7F42DF41F6C6389FF9ADCA794D69BFA3FA15E6F9* __this, const RuntimeMethod* method) 
{
	{
		// public int BinaryCount { get; }
		int32_t L_0 = __this->___U3CBinaryCountU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Int32 SocketIOClient.Messages.ClientAckMessage::get_Eio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ClientAckMessage_get_Eio_mAEF36E9F4978EB11DE4C4F4E8BB4D44C9E9E63CA (ClientAckMessage_t7F42DF41F6C6389FF9ADCA794D69BFA3FA15E6F9* __this, const RuntimeMethod* method) 
{
	{
		// public int Eio { get; set; }
		int32_t L_0 = __this->___U3CEioU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.ClientAckMessage::set_Eio(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientAckMessage_set_Eio_mB7763EE5E03D1DC2993F3EFC9E8197769D3820C4 (ClientAckMessage_t7F42DF41F6C6389FF9ADCA794D69BFA3FA15E6F9* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int Eio { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CEioU3Ek__BackingField_8 = L_0;
		return;
	}
}
// SocketIOClient.Transport.TransportProtocol SocketIOClient.Messages.ClientAckMessage::get_Protocol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ClientAckMessage_get_Protocol_m7E4074553EDBE54AF508FED62233A768ED4405BE (ClientAckMessage_t7F42DF41F6C6389FF9ADCA794D69BFA3FA15E6F9* __this, const RuntimeMethod* method) 
{
	{
		// public TransportProtocol Protocol { get; set; }
		int32_t L_0 = __this->___U3CProtocolU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.ClientAckMessage::set_Protocol(SocketIOClient.Transport.TransportProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientAckMessage_set_Protocol_m072D915719A48E3D31FF7DB28D59797076A61F97 (ClientAckMessage_t7F42DF41F6C6389FF9ADCA794D69BFA3FA15E6F9* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public TransportProtocol Protocol { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CProtocolU3Ek__BackingField_9 = L_0;
		return;
	}
}
// System.Void SocketIOClient.Messages.ClientAckMessage::Read(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientAckMessage_Read_m9429999259C46B3FC467DD4073DFC52EBB97241F (ClientAckMessage_t7F42DF41F6C6389FF9ADCA794D69BFA3FA15E6F9* __this, String_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayEnumerator_t6A32F25D9BE79D9856DA29CBAD749933F2C9C97C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisJsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_m99F84A2CBED6EEF6E1F61AAE03853DB7EDF271EE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	String_t* V_3 = NULL;
	JsonDocumentOptions_t46D96C339522F4321E0FA1BD1DB3ABE2F300299B V_4;
	memset((&V_4), 0, sizeof(V_4));
	JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// int index = msg.IndexOf('[');
		String_t* L_0 = ___0_msg;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_0, ((int32_t)91), NULL);
		V_0 = L_1;
		// int lastIndex = msg.LastIndexOf(',', index);
		String_t* L_2 = ___0_msg;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = String_LastIndexOf_m3EB3F4ECDF6D990ADBACB6B168A8CBD4772B91A7(L_2, ((int32_t)44), L_3, NULL);
		V_1 = L_4;
		// if (lastIndex > -1)
		int32_t L_5 = V_1;
		V_2 = (bool)((((int32_t)L_5) > ((int32_t)(-1)))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_004d;
		}
	}
	{
		// string text = msg.Substring(0, index);
		String_t* L_7 = ___0_msg;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		String_t* L_9;
		L_9 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_7, 0, L_8, NULL);
		V_3 = L_9;
		// Namespace = text.Substring(0, lastIndex);
		String_t* L_10 = V_3;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		String_t* L_12;
		L_12 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_10, 0, L_11, NULL);
		ClientAckMessage_set_Namespace_m6D0F53093A544183349C1ED46A1C072D99478F4F_inline(__this, L_12, NULL);
		// Id = int.Parse(text.Substring(lastIndex + 1));
		String_t* L_13 = V_3;
		int32_t L_14 = V_1;
		NullCheck(L_13);
		String_t* L_15;
		L_15 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_13, ((int32_t)il2cpp_codegen_add(L_14, 1)), NULL);
		int32_t L_16;
		L_16 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_15, NULL);
		ClientAckMessage_set_Id_m397DBACB6629B883ED1105AD9D4B52444F3075D2_inline(__this, L_16, NULL);
		goto IL_0063;
	}

IL_004d:
	{
		// Id = int.Parse(msg.Substring(0, index));
		String_t* L_17 = ___0_msg;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		String_t* L_19;
		L_19 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_17, 0, L_18, NULL);
		int32_t L_20;
		L_20 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_19, NULL);
		ClientAckMessage_set_Id_m397DBACB6629B883ED1105AD9D4B52444F3075D2_inline(__this, L_20, NULL);
	}

IL_0063:
	{
		// msg = msg.Substring(index);
		String_t* L_21 = ___0_msg;
		int32_t L_22 = V_0;
		NullCheck(L_21);
		String_t* L_23;
		L_23 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_21, L_22, NULL);
		___0_msg = L_23;
		// JsonElements = JsonDocument.Parse(msg).RootElement.EnumerateArray().ToList();
		String_t* L_24 = ___0_msg;
		il2cpp_codegen_initobj((&V_4), sizeof(JsonDocumentOptions_t46D96C339522F4321E0FA1BD1DB3ABE2F300299B));
		JsonDocumentOptions_t46D96C339522F4321E0FA1BD1DB3ABE2F300299B L_25 = V_4;
		JsonDocument_tF96A1F7D1D40932B5EA6A97DA06E150B6CBDBE6F* L_26;
		L_26 = JsonDocument_Parse_m290785DE223664D929CAC7888BAEE7693B60DFC2(L_24, L_25, NULL);
		NullCheck(L_26);
		JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_27;
		L_27 = JsonDocument_get_RootElement_m40BA0A219E870618E0E6DD88367CFB484F2C5195(L_26, NULL);
		V_5 = L_27;
		ArrayEnumerator_t6A32F25D9BE79D9856DA29CBAD749933F2C9C97C L_28;
		L_28 = JsonElement_EnumerateArray_m9B35AF71578078459E6DAF2D7416D07F327E6E38((&V_5), NULL);
		ArrayEnumerator_t6A32F25D9BE79D9856DA29CBAD749933F2C9C97C L_29 = L_28;
		RuntimeObject* L_30 = Box(ArrayEnumerator_t6A32F25D9BE79D9856DA29CBAD749933F2C9C97C_il2cpp_TypeInfo_var, &L_29);
		List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6* L_31;
		L_31 = Enumerable_ToList_TisJsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_m99F84A2CBED6EEF6E1F61AAE03853DB7EDF271EE((RuntimeObject*)L_30, Enumerable_ToList_TisJsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_m99F84A2CBED6EEF6E1F61AAE03853DB7EDF271EE_RuntimeMethod_var);
		ClientAckMessage_set_JsonElements_mCD5B47F692A519A1302652F91CCF7DE65B072E9D_inline(__this, L_31, NULL);
		// }
		return;
	}
}
// System.String SocketIOClient.Messages.ClientAckMessage::Write()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ClientAckMessage_Write_mF321325BC19A7D8E473133147E833351B64BF371 (ClientAckMessage_t7F42DF41F6C6389FF9ADCA794D69BFA3FA15E6F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B6D138D8454083A41D1C936D8DFA8099F161DA8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3952A7C46F2C9749F94659EC90D855DF03EE7B1A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral792BED7AE838D9267644F8329AA86A301260BB2C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0AB94C928A783BE1AAC7FE99970D2920FE6A1D8);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		// var builder = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		// builder.Append("42");
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, _stringLiteral792BED7AE838D9267644F8329AA86A301260BB2C, NULL);
		// if (!string.IsNullOrEmpty(Namespace))
		String_t* L_3;
		L_3 = ClientAckMessage_get_Namespace_mC07CC220F3BD0319F276274708CA390FF3CB17B2_inline(__this, NULL);
		bool L_4;
		L_4 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_3, NULL);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		// builder.Append(Namespace).Append(',');
		StringBuilder_t* L_6 = V_0;
		String_t* L_7;
		L_7 = ClientAckMessage_get_Namespace_mC07CC220F3BD0319F276274708CA390FF3CB17B2_inline(__this, NULL);
		NullCheck(L_6);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_6, L_7, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_8, ((int32_t)44), NULL);
	}

IL_003b:
	{
		// builder.Append(Id);
		StringBuilder_t* L_10 = V_0;
		int32_t L_11;
		L_11 = ClientAckMessage_get_Id_m92F24367984A2B1BCA7300245133861E0C3C9A47_inline(__this, NULL);
		NullCheck(L_10);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA(L_10, L_11, NULL);
		// if (string.IsNullOrEmpty(Json))
		String_t* L_13;
		L_13 = ClientAckMessage_get_Json_mC3597A0931801F7A388439E3A3408EECD858C5A2_inline(__this, NULL);
		bool L_14;
		L_14 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_13, NULL);
		V_2 = L_14;
		bool L_15 = V_2;
		if (!L_15)
		{
			goto IL_007c;
		}
	}
	{
		// builder.Append("[\"").Append(Event).Append("\"]");
		StringBuilder_t* L_16 = V_0;
		NullCheck(L_16);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_16, _stringLiteral3952A7C46F2C9749F94659EC90D855DF03EE7B1A, NULL);
		String_t* L_18;
		L_18 = ClientAckMessage_get_Event_mD53C0DD4587924D4681BBAE3C914B1015EFE750C_inline(__this, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_19;
		L_19 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_18, NULL);
		NullCheck(L_19);
		StringBuilder_t* L_20;
		L_20 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_19, _stringLiteralF0AB94C928A783BE1AAC7FE99970D2920FE6A1D8, NULL);
		goto IL_00a8;
	}

IL_007c:
	{
		// string data = Json.Insert(1, $"\"{Event}\",");
		String_t* L_21;
		L_21 = ClientAckMessage_get_Json_mC3597A0931801F7A388439E3A3408EECD858C5A2_inline(__this, NULL);
		String_t* L_22;
		L_22 = ClientAckMessage_get_Event_mD53C0DD4587924D4681BBAE3C914B1015EFE750C_inline(__this, NULL);
		String_t* L_23;
		L_23 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, L_22, _stringLiteral0B6D138D8454083A41D1C936D8DFA8099F161DA8, NULL);
		NullCheck(L_21);
		String_t* L_24;
		L_24 = String_Insert_mA279E748F06514A6D0B9B680D651D6A6C6BB561A(L_21, 1, L_23, NULL);
		V_3 = L_24;
		// builder.Append(data);
		StringBuilder_t* L_25 = V_0;
		String_t* L_26 = V_3;
		NullCheck(L_25);
		StringBuilder_t* L_27;
		L_27 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_25, L_26, NULL);
	}

IL_00a8:
	{
		// return builder.ToString();
		StringBuilder_t* L_28 = V_0;
		NullCheck(L_28);
		String_t* L_29;
		L_29 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_28);
		V_4 = L_29;
		goto IL_00b2;
	}

IL_00b2:
	{
		// }
		String_t* L_30 = V_4;
		return L_30;
	}
}
// System.Void SocketIOClient.Messages.ClientAckMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientAckMessage__ctor_m036223076877D61507D1085D455EDB8AC5A1B046 (ClientAckMessage_t7F42DF41F6C6389FF9ADCA794D69BFA3FA15E6F9* __this, const RuntimeMethod* method) 
{
	{
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
// SocketIOClient.Messages.MessageType SocketIOClient.Messages.ClientBinaryAckMessage::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ClientBinaryAckMessage_get_Type_m995D568E97E641F04E2C1945EF44EED2832E9335 (ClientBinaryAckMessage_tCC3843B13D5ADA726E5899C1B148AD22D1978742* __this, const RuntimeMethod* method) 
{
	{
		// public MessageType Type => MessageType.BinaryAckMessage;
		return (int32_t)(((int32_t)46));
	}
}
// System.String SocketIOClient.Messages.ClientBinaryAckMessage::get_Namespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ClientBinaryAckMessage_get_Namespace_mE886EC5DDB0298537A8D191D9B2E3B16FE2ED1CF (ClientBinaryAckMessage_tCC3843B13D5ADA726E5899C1B148AD22D1978742* __this, const RuntimeMethod* method) 
{
	{
		// public string Namespace { get; set; }
		String_t* L_0 = __this->___U3CNamespaceU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.ClientBinaryAckMessage::set_Namespace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientBinaryAckMessage_set_Namespace_mB0AF6B90C754335C3BB152EBE0998DFB473382C9 (ClientBinaryAckMessage_tCC3843B13D5ADA726E5899C1B148AD22D1978742* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Namespace { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CNamespaceU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNamespaceU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String SocketIOClient.Messages.ClientBinaryAckMessage::get_Event()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ClientBinaryAckMessage_get_Event_m0C4AEF4002F28D77A10AE5CF9C7EE75153B95F79 (ClientBinaryAckMessage_tCC3843B13D5ADA726E5899C1B148AD22D1978742* __this, const RuntimeMethod* method) 
{
	{
		// public string Event { get; set; }
		String_t* L_0 = __this->___U3CEventU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.ClientBinaryAckMessage::set_Event(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientBinaryAckMessage_set_Event_m1F34D0F76B7B020DF1EC12A29285D5F3722DC812 (ClientBinaryAckMessage_tCC3843B13D5ADA726E5899C1B148AD22D1978742* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Event { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CEventU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEventU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<System.Text.Json.JsonElement> SocketIOClient.Messages.ClientBinaryAckMessage::get_JsonElements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6* ClientBinaryAckMessage_get_JsonElements_m77DB136F22D3CC52FDF12D87556DDFBB4E05A9F6 (ClientBinaryAckMessage_tCC3843B13D5ADA726E5899C1B148AD22D1978742* __this, const RuntimeMethod* method) 
{
	{
		// public List<JsonElement> JsonElements { get; set; }
		List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6* L_0 = __this->___U3CJsonElementsU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.ClientBinaryAckMessage::set_JsonElements(System.Collections.Generic.List`1<System.Text.Json.JsonElement>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientBinaryAckMessage_set_JsonElements_m282E7A035922E8FF7B0F78BD2EF71315C67D5B28 (ClientBinaryAckMessage_tCC3843B13D5ADA726E5899C1B148AD22D1978742* __this, List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6* ___0_value, const RuntimeMethod* method) 
{
	{
		// public List<JsonElement> JsonElements { get; set; }
		List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6* L_0 = ___0_value;
		__this->___U3CJsonElementsU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CJsonElementsU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.String SocketIOClient.Messages.ClientBinaryAckMessage::get_Json()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ClientBinaryAckMessage_get_Json_m3EBF52345F3CA65F1D8E2C2A0181B80FE0507C4E (ClientBinaryAckMessage_tCC3843B13D5ADA726E5899C1B148AD22D1978742* __this, const RuntimeMethod* method) 
{
	{
		// public string Json { get; set; }
		String_t* L_0 = __this->___U3CJsonU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.ClientBinaryAckMessage::set_Json(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientBinaryAckMessage_set_Json_m8C332979FCC3922D2396DFEDF92D8DB5E4B3E0ED (ClientBinaryAckMessage_tCC3843B13D5ADA726E5899C1B148AD22D1978742* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Json { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CJsonU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CJsonU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Int32 SocketIOClient.Messages.ClientBinaryAckMessage::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ClientBinaryAckMessage_get_Id_m88496B6887446FF9D34697B30FB1BCA2339D8E9B (ClientBinaryAckMessage_tCC3843B13D5ADA726E5899C1B148AD22D1978742* __this, const RuntimeMethod* method) 
{
	{
		// public int Id { get; set; }
		int32_t L_0 = __this->___U3CIdU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.ClientBinaryAckMessage::set_Id(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientBinaryAckMessage_set_Id_m2E676070B8E6682F3AF9CAB2CC8A3E5D91CEE507 (ClientBinaryAckMessage_tCC3843B13D5ADA726E5899C1B148AD22D1978742* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int Id { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Int32 SocketIOClient.Messages.ClientBinaryAckMessage::get_BinaryCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ClientBinaryAckMessage_get_BinaryCount_m0AC4873B326D9E056ED1EF58A7EEDB7614422625 (ClientBinaryAckMessage_tCC3843B13D5ADA726E5899C1B148AD22D1978742* __this, const RuntimeMethod* method) 
{
	{
		// public int BinaryCount { get; set; }
		int32_t L_0 = __this->___U3CBinaryCountU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.ClientBinaryAckMessage::set_BinaryCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientBinaryAckMessage_set_BinaryCount_m672FCC0A38DF62B5CC8E1E4E2FD0FA4CEB21C80F (ClientBinaryAckMessage_tCC3843B13D5ADA726E5899C1B148AD22D1978742* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int BinaryCount { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CBinaryCountU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Int32 SocketIOClient.Messages.ClientBinaryAckMessage::get_Eio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ClientBinaryAckMessage_get_Eio_mE9FAF4E50AD4CDDF8F11E5364C1030AAB78430C0 (ClientBinaryAckMessage_tCC3843B13D5ADA726E5899C1B148AD22D1978742* __this, const RuntimeMethod* method) 
{
	{
		// public int Eio { get; set; }
		int32_t L_0 = __this->___U3CEioU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.ClientBinaryAckMessage::set_Eio(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientBinaryAckMessage_set_Eio_mCF3B50D1EF67CE82761D44FC0CA7A238353DA2A5 (ClientBinaryAckMessage_tCC3843B13D5ADA726E5899C1B148AD22D1978742* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int Eio { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CEioU3Ek__BackingField_6 = L_0;
		return;
	}
}
// SocketIOClient.Transport.TransportProtocol SocketIOClient.Messages.ClientBinaryAckMessage::get_Protocol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ClientBinaryAckMessage_get_Protocol_m763FFA35342A4F0AC39E0AF9649A89716CE306DC (ClientBinaryAckMessage_tCC3843B13D5ADA726E5899C1B148AD22D1978742* __this, const RuntimeMethod* method) 
{
	{
		// public TransportProtocol Protocol { get; set; }
		int32_t L_0 = __this->___U3CProtocolU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.ClientBinaryAckMessage::set_Protocol(SocketIOClient.Transport.TransportProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientBinaryAckMessage_set_Protocol_mF1617D66766A1AD47DFC3AFA751BBEB0E10BC77C (ClientBinaryAckMessage_tCC3843B13D5ADA726E5899C1B148AD22D1978742* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public TransportProtocol Protocol { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CProtocolU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Collections.Generic.List`1<System.Byte[]> SocketIOClient.Messages.ClientBinaryAckMessage::get_OutgoingBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ClientBinaryAckMessage_get_OutgoingBytes_mDA1647C33F1CD4D9DD6400C9C8D342BBE65FC65C (ClientBinaryAckMessage_tCC3843B13D5ADA726E5899C1B148AD22D1978742* __this, const RuntimeMethod* method) 
{
	{
		// public List<byte[]> OutgoingBytes { get; set; }
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___U3COutgoingBytesU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.ClientBinaryAckMessage::set_OutgoingBytes(System.Collections.Generic.List`1<System.Byte[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientBinaryAckMessage_set_OutgoingBytes_mCFDE75D956C1460661F0540FCBC9967E069AFE7F (ClientBinaryAckMessage_tCC3843B13D5ADA726E5899C1B148AD22D1978742* __this, List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___0_value, const RuntimeMethod* method) 
{
	{
		// public List<byte[]> OutgoingBytes { get; set; }
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = ___0_value;
		__this->___U3COutgoingBytesU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COutgoingBytesU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<System.Byte[]> SocketIOClient.Messages.ClientBinaryAckMessage::get_IncomingBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ClientBinaryAckMessage_get_IncomingBytes_m24B632365BC29198068EC92943D045CF88395950 (ClientBinaryAckMessage_tCC3843B13D5ADA726E5899C1B148AD22D1978742* __this, const RuntimeMethod* method) 
{
	{
		// public List<byte[]> IncomingBytes { get; set; }
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___U3CIncomingBytesU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.ClientBinaryAckMessage::set_IncomingBytes(System.Collections.Generic.List`1<System.Byte[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientBinaryAckMessage_set_IncomingBytes_mCF04E9884A23BA162DCB2341E56D9E307427283B (ClientBinaryAckMessage_tCC3843B13D5ADA726E5899C1B148AD22D1978742* __this, List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___0_value, const RuntimeMethod* method) 
{
	{
		// public List<byte[]> IncomingBytes { get; set; }
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = ___0_value;
		__this->___U3CIncomingBytesU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIncomingBytesU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
// System.Void SocketIOClient.Messages.ClientBinaryAckMessage::Read(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientBinaryAckMessage_Read_m157515FE56B5620C179F6F5BAED8305372470204 (ClientBinaryAckMessage_tCC3843B13D5ADA726E5899C1B148AD22D1978742* __this, String_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayEnumerator_t6A32F25D9BE79D9856DA29CBAD749933F2C9C97C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisJsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_m99F84A2CBED6EEF6E1F61AAE03853DB7EDF271EE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	bool V_4 = false;
	JsonDocumentOptions_t46D96C339522F4321E0FA1BD1DB3ABE2F300299B V_5;
	memset((&V_5), 0, sizeof(V_5));
	JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// int index1 = msg.IndexOf('-');
		String_t* L_0 = ___0_msg;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_0, ((int32_t)45), NULL);
		V_0 = L_1;
		// BinaryCount = int.Parse(msg.Substring(0, index1));
		String_t* L_2 = ___0_msg;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		String_t* L_4;
		L_4 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_2, 0, L_3, NULL);
		int32_t L_5;
		L_5 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_4, NULL);
		ClientBinaryAckMessage_set_BinaryCount_m672FCC0A38DF62B5CC8E1E4E2FD0FA4CEB21C80F_inline(__this, L_5, NULL);
		// int index2 = msg.IndexOf('[');
		String_t* L_6 = ___0_msg;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_6, ((int32_t)91), NULL);
		V_1 = L_7;
		// int index3 = msg.LastIndexOf(',', index2);
		String_t* L_8 = ___0_msg;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10;
		L_10 = String_LastIndexOf_m3EB3F4ECDF6D990ADBACB6B168A8CBD4772B91A7(L_8, ((int32_t)44), L_9, NULL);
		V_2 = L_10;
		// if (index3 > -1)
		int32_t L_11 = V_2;
		V_4 = (bool)((((int32_t)L_11) > ((int32_t)(-1)))? 1 : 0);
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_006e;
		}
	}
	{
		// Namespace = msg.Substring(index1 + 1, index3 - index1 - 1);
		String_t* L_13 = ___0_msg;
		int32_t L_14 = V_0;
		int32_t L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_13);
		String_t* L_17;
		L_17 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_13, ((int32_t)il2cpp_codegen_add(L_14, 1)), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_15, L_16)), 1)), NULL);
		ClientBinaryAckMessage_set_Namespace_mB0AF6B90C754335C3BB152EBE0998DFB473382C9_inline(__this, L_17, NULL);
		// Id = int.Parse(msg.Substring(index3 + 1, index2 - index3 - 1));
		String_t* L_18 = ___0_msg;
		int32_t L_19 = V_2;
		int32_t L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_18);
		String_t* L_22;
		L_22 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_18, ((int32_t)il2cpp_codegen_add(L_19, 1)), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_20, L_21)), 1)), NULL);
		int32_t L_23;
		L_23 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_22, NULL);
		ClientBinaryAckMessage_set_Id_m2E676070B8E6682F3AF9CAB2CC8A3E5D91CEE507_inline(__this, L_23, NULL);
		goto IL_008a;
	}

IL_006e:
	{
		// Id = int.Parse(msg.Substring(index1 + 1, index2 - index1 - 1));
		String_t* L_24 = ___0_msg;
		int32_t L_25 = V_0;
		int32_t L_26 = V_1;
		int32_t L_27 = V_0;
		NullCheck(L_24);
		String_t* L_28;
		L_28 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_24, ((int32_t)il2cpp_codegen_add(L_25, 1)), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_26, L_27)), 1)), NULL);
		int32_t L_29;
		L_29 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_28, NULL);
		ClientBinaryAckMessage_set_Id_m2E676070B8E6682F3AF9CAB2CC8A3E5D91CEE507_inline(__this, L_29, NULL);
	}

IL_008a:
	{
		// string json = msg.Substring(index2);
		String_t* L_30 = ___0_msg;
		int32_t L_31 = V_1;
		NullCheck(L_30);
		String_t* L_32;
		L_32 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_30, L_31, NULL);
		V_3 = L_32;
		// JsonElements = JsonDocument.Parse(json).RootElement.EnumerateArray().ToList();
		String_t* L_33 = V_3;
		il2cpp_codegen_initobj((&V_5), sizeof(JsonDocumentOptions_t46D96C339522F4321E0FA1BD1DB3ABE2F300299B));
		JsonDocumentOptions_t46D96C339522F4321E0FA1BD1DB3ABE2F300299B L_34 = V_5;
		JsonDocument_tF96A1F7D1D40932B5EA6A97DA06E150B6CBDBE6F* L_35;
		L_35 = JsonDocument_Parse_m290785DE223664D929CAC7888BAEE7693B60DFC2(L_33, L_34, NULL);
		NullCheck(L_35);
		JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_36;
		L_36 = JsonDocument_get_RootElement_m40BA0A219E870618E0E6DD88367CFB484F2C5195(L_35, NULL);
		V_6 = L_36;
		ArrayEnumerator_t6A32F25D9BE79D9856DA29CBAD749933F2C9C97C L_37;
		L_37 = JsonElement_EnumerateArray_m9B35AF71578078459E6DAF2D7416D07F327E6E38((&V_6), NULL);
		ArrayEnumerator_t6A32F25D9BE79D9856DA29CBAD749933F2C9C97C L_38 = L_37;
		RuntimeObject* L_39 = Box(ArrayEnumerator_t6A32F25D9BE79D9856DA29CBAD749933F2C9C97C_il2cpp_TypeInfo_var, &L_38);
		List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6* L_40;
		L_40 = Enumerable_ToList_TisJsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_m99F84A2CBED6EEF6E1F61AAE03853DB7EDF271EE((RuntimeObject*)L_39, Enumerable_ToList_TisJsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_m99F84A2CBED6EEF6E1F61AAE03853DB7EDF271EE_RuntimeMethod_var);
		ClientBinaryAckMessage_set_JsonElements_m282E7A035922E8FF7B0F78BD2EF71315C67D5B28_inline(__this, L_40, NULL);
		// }
		return;
	}
}
// System.String SocketIOClient.Messages.ClientBinaryAckMessage::Write()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ClientBinaryAckMessage_Write_m1A77F3BF84E31BD42F94200CADC2E3E90491C69C (ClientBinaryAckMessage_tCC3843B13D5ADA726E5899C1B148AD22D1978742* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m88FEB2D94E35C258B61F53400F7CA20E99A7DAD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B6D138D8454083A41D1C936D8DFA8099F161DA8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EABFF598CE5B1DE50532CB71FD74C8F1B848045);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3952A7C46F2C9749F94659EC90D855DF03EE7B1A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0AB94C928A783BE1AAC7FE99970D2920FE6A1D8);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		// var builder = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		// builder
		//     .Append("45")
		//     .Append(OutgoingBytes.Count)
		//     .Append('-');
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, _stringLiteral1EABFF598CE5B1DE50532CB71FD74C8F1B848045, NULL);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_3;
		L_3 = ClientBinaryAckMessage_get_OutgoingBytes_mDA1647C33F1CD4D9DD6400C9C8D342BBE65FC65C_inline(__this, NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m88FEB2D94E35C258B61F53400F7CA20E99A7DAD3_inline(L_3, List_1_get_Count_m88FEB2D94E35C258B61F53400F7CA20E99A7DAD3_RuntimeMethod_var);
		NullCheck(L_2);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA(L_2, L_4, NULL);
		NullCheck(L_5);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_5, ((int32_t)45), NULL);
		// if (!string.IsNullOrEmpty(Namespace))
		String_t* L_7;
		L_7 = ClientBinaryAckMessage_get_Namespace_mE886EC5DDB0298537A8D191D9B2E3B16FE2ED1CF_inline(__this, NULL);
		bool L_8;
		L_8 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_7, NULL);
		V_1 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0052;
		}
	}
	{
		// builder.Append(Namespace).Append(',');
		StringBuilder_t* L_10 = V_0;
		String_t* L_11;
		L_11 = ClientBinaryAckMessage_get_Namespace_mE886EC5DDB0298537A8D191D9B2E3B16FE2ED1CF_inline(__this, NULL);
		NullCheck(L_10);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_10, L_11, NULL);
		NullCheck(L_12);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_12, ((int32_t)44), NULL);
	}

IL_0052:
	{
		// builder.Append(Id);
		StringBuilder_t* L_14 = V_0;
		int32_t L_15;
		L_15 = ClientBinaryAckMessage_get_Id_m88496B6887446FF9D34697B30FB1BCA2339D8E9B_inline(__this, NULL);
		NullCheck(L_14);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA(L_14, L_15, NULL);
		// if (string.IsNullOrEmpty(Json))
		String_t* L_17;
		L_17 = ClientBinaryAckMessage_get_Json_m3EBF52345F3CA65F1D8E2C2A0181B80FE0507C4E_inline(__this, NULL);
		bool L_18;
		L_18 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_17, NULL);
		V_2 = L_18;
		bool L_19 = V_2;
		if (!L_19)
		{
			goto IL_0093;
		}
	}
	{
		// builder.Append("[\"").Append(Event).Append("\"]");
		StringBuilder_t* L_20 = V_0;
		NullCheck(L_20);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_20, _stringLiteral3952A7C46F2C9749F94659EC90D855DF03EE7B1A, NULL);
		String_t* L_22;
		L_22 = ClientBinaryAckMessage_get_Event_m0C4AEF4002F28D77A10AE5CF9C7EE75153B95F79_inline(__this, NULL);
		NullCheck(L_21);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_21, L_22, NULL);
		NullCheck(L_23);
		StringBuilder_t* L_24;
		L_24 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_23, _stringLiteralF0AB94C928A783BE1AAC7FE99970D2920FE6A1D8, NULL);
		goto IL_00bf;
	}

IL_0093:
	{
		// string data = Json.Insert(1, $"\"{Event}\",");
		String_t* L_25;
		L_25 = ClientBinaryAckMessage_get_Json_m3EBF52345F3CA65F1D8E2C2A0181B80FE0507C4E_inline(__this, NULL);
		String_t* L_26;
		L_26 = ClientBinaryAckMessage_get_Event_m0C4AEF4002F28D77A10AE5CF9C7EE75153B95F79_inline(__this, NULL);
		String_t* L_27;
		L_27 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, L_26, _stringLiteral0B6D138D8454083A41D1C936D8DFA8099F161DA8, NULL);
		NullCheck(L_25);
		String_t* L_28;
		L_28 = String_Insert_mA279E748F06514A6D0B9B680D651D6A6C6BB561A(L_25, 1, L_27, NULL);
		V_3 = L_28;
		// builder.Append(data);
		StringBuilder_t* L_29 = V_0;
		String_t* L_30 = V_3;
		NullCheck(L_29);
		StringBuilder_t* L_31;
		L_31 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_29, L_30, NULL);
	}

IL_00bf:
	{
		// return builder.ToString();
		StringBuilder_t* L_32 = V_0;
		NullCheck(L_32);
		String_t* L_33;
		L_33 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_32);
		V_4 = L_33;
		goto IL_00c9;
	}

IL_00c9:
	{
		// }
		String_t* L_34 = V_4;
		return L_34;
	}
}
// System.Void SocketIOClient.Messages.ClientBinaryAckMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientBinaryAckMessage__ctor_m00F07662EA2AD8BEF310A39A56627315317FB86F (ClientBinaryAckMessage_tCC3843B13D5ADA726E5899C1B148AD22D1978742* __this, const RuntimeMethod* method) 
{
	{
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
// SocketIOClient.Messages.MessageType SocketIOClient.Messages.ConnectedMessage::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectedMessage_get_Type_m01658DA37CA556A3B4877D02A4A0E1343221B76E (ConnectedMessage_t1A1ED2A271B81580C052B6B1B6DDFCD16CF9FC36* __this, const RuntimeMethod* method) 
{
	{
		// public MessageType Type => MessageType.Connected;
		return (int32_t)(((int32_t)40));
	}
}
// System.String SocketIOClient.Messages.ConnectedMessage::get_Namespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConnectedMessage_get_Namespace_mCDBAD9FDD96BF5294DF2BF8886F73429814BC537 (ConnectedMessage_t1A1ED2A271B81580C052B6B1B6DDFCD16CF9FC36* __this, const RuntimeMethod* method) 
{
	{
		// public string Namespace { get; set; }
		String_t* L_0 = __this->___U3CNamespaceU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.ConnectedMessage::set_Namespace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectedMessage_set_Namespace_mBB0268B187193B455FE0CDA453F062A106E67CAD (ConnectedMessage_t1A1ED2A271B81580C052B6B1B6DDFCD16CF9FC36* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Namespace { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CNamespaceU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNamespaceU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String SocketIOClient.Messages.ConnectedMessage::get_Sid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConnectedMessage_get_Sid_m89239E4AA2E3291B81919C574C5B9880DA28B393 (ConnectedMessage_t1A1ED2A271B81580C052B6B1B6DDFCD16CF9FC36* __this, const RuntimeMethod* method) 
{
	{
		// public string Sid { get; set; }
		String_t* L_0 = __this->___U3CSidU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.ConnectedMessage::set_Sid(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectedMessage_set_Sid_m049365339C008B2325BE176C8E9C5E1533AA0D26 (ConnectedMessage_t1A1ED2A271B81580C052B6B1B6DDFCD16CF9FC36* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Sid { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CSidU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSidU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<System.Byte[]> SocketIOClient.Messages.ConnectedMessage::get_OutgoingBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ConnectedMessage_get_OutgoingBytes_mDFBC3A6DC25481E3E61DF69056AE2831E2B49FAC (ConnectedMessage_t1A1ED2A271B81580C052B6B1B6DDFCD16CF9FC36* __this, const RuntimeMethod* method) 
{
	{
		// public List<byte[]> OutgoingBytes { get; set; }
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___U3COutgoingBytesU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.ConnectedMessage::set_OutgoingBytes(System.Collections.Generic.List`1<System.Byte[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectedMessage_set_OutgoingBytes_mB4FD35C1D9DCDD910A93FB41786BEC03BB561EF3 (ConnectedMessage_t1A1ED2A271B81580C052B6B1B6DDFCD16CF9FC36* __this, List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___0_value, const RuntimeMethod* method) 
{
	{
		// public List<byte[]> OutgoingBytes { get; set; }
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = ___0_value;
		__this->___U3COutgoingBytesU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COutgoingBytesU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<System.Byte[]> SocketIOClient.Messages.ConnectedMessage::get_IncomingBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ConnectedMessage_get_IncomingBytes_m1E6B181AF0DE4CCEA4E74C3B48E34DD1064F627F (ConnectedMessage_t1A1ED2A271B81580C052B6B1B6DDFCD16CF9FC36* __this, const RuntimeMethod* method) 
{
	{
		// public List<byte[]> IncomingBytes { get; set; }
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___U3CIncomingBytesU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.ConnectedMessage::set_IncomingBytes(System.Collections.Generic.List`1<System.Byte[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectedMessage_set_IncomingBytes_m06CE61D73621059736F7220A0998CC5C475A4460 (ConnectedMessage_t1A1ED2A271B81580C052B6B1B6DDFCD16CF9FC36* __this, List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___0_value, const RuntimeMethod* method) 
{
	{
		// public List<byte[]> IncomingBytes { get; set; }
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = ___0_value;
		__this->___U3CIncomingBytesU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIncomingBytesU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Int32 SocketIOClient.Messages.ConnectedMessage::get_BinaryCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectedMessage_get_BinaryCount_m0CD0B989CE9C9A0184C9660CDC5F1B12A1D6DEAD (ConnectedMessage_t1A1ED2A271B81580C052B6B1B6DDFCD16CF9FC36* __this, const RuntimeMethod* method) 
{
	{
		// public int BinaryCount { get; }
		int32_t L_0 = __this->___U3CBinaryCountU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Int32 SocketIOClient.Messages.ConnectedMessage::get_Eio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectedMessage_get_Eio_mEF53A9E8A953873A6366C5508CBD2C754D39593A (ConnectedMessage_t1A1ED2A271B81580C052B6B1B6DDFCD16CF9FC36* __this, const RuntimeMethod* method) 
{
	{
		// public int Eio { get; set; }
		int32_t L_0 = __this->___U3CEioU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.ConnectedMessage::set_Eio(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectedMessage_set_Eio_m824B91EB4CEC9A0E8CA9E881E0817E9CF1DD8DCC (ConnectedMessage_t1A1ED2A271B81580C052B6B1B6DDFCD16CF9FC36* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int Eio { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CEioU3Ek__BackingField_5 = L_0;
		return;
	}
}
// SocketIOClient.Transport.TransportProtocol SocketIOClient.Messages.ConnectedMessage::get_Protocol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectedMessage_get_Protocol_m7FEFC43097DE40EC4FBC74137D4EAE6FF91B1341 (ConnectedMessage_t1A1ED2A271B81580C052B6B1B6DDFCD16CF9FC36* __this, const RuntimeMethod* method) 
{
	{
		// public TransportProtocol Protocol { get; set; }
		int32_t L_0 = __this->___U3CProtocolU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.ConnectedMessage::set_Protocol(SocketIOClient.Transport.TransportProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectedMessage_set_Protocol_mC1E9BB6A20C70A388E77DC7C846D90F52CE6797E (ConnectedMessage_t1A1ED2A271B81580C052B6B1B6DDFCD16CF9FC36* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public TransportProtocol Protocol { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CProtocolU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>> SocketIOClient.Messages.ConnectedMessage::get_Query()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConnectedMessage_get_Query_m74AE5EA94B67586ABDB04051C310965A68FC5D39 (ConnectedMessage_t1A1ED2A271B81580C052B6B1B6DDFCD16CF9FC36* __this, const RuntimeMethod* method) 
{
	{
		// public IEnumerable<KeyValuePair<string, string>> Query { get; set; }
		RuntimeObject* L_0 = __this->___U3CQueryU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.ConnectedMessage::set_Query(System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectedMessage_set_Query_m77686A121309A86CEF8A3F6596500A122F8108F7 (ConnectedMessage_t1A1ED2A271B81580C052B6B1B6DDFCD16CF9FC36* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public IEnumerable<KeyValuePair<string, string>> Query { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CQueryU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CQueryU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// System.String SocketIOClient.Messages.ConnectedMessage::get_AuthJsonStr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConnectedMessage_get_AuthJsonStr_m2CD9779E13B4B15E66EA43325D46FCA799BA6F13 (ConnectedMessage_t1A1ED2A271B81580C052B6B1B6DDFCD16CF9FC36* __this, const RuntimeMethod* method) 
{
	{
		// public string AuthJsonStr { get; set; }
		String_t* L_0 = __this->___U3CAuthJsonStrU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.ConnectedMessage::set_AuthJsonStr(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectedMessage_set_AuthJsonStr_m88FB01188858BA4B888148350F9F1D45EC5396CF (ConnectedMessage_t1A1ED2A271B81580C052B6B1B6DDFCD16CF9FC36* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string AuthJsonStr { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CAuthJsonStrU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAuthJsonStrU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
// System.Void SocketIOClient.Messages.ConnectedMessage::Read(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectedMessage_Read_m41E5AEC3EF2AC38280F8E45E227211CC9281864F (ConnectedMessage_t1A1ED2A271B81580C052B6B1B6DDFCD16CF9FC36* __this, String_t* ___0_msg, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (Eio == 3)
		int32_t L_0;
		L_0 = ConnectedMessage_get_Eio_mEF53A9E8A953873A6366C5508CBD2C754D39593A_inline(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)3))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// Eio3Read(msg);
		String_t* L_2 = ___0_msg;
		ConnectedMessage_Eio3Read_mFF622979F8D681346B689EA1470584B41CF3E05D(__this, L_2, NULL);
		goto IL_0024;
	}

IL_001a:
	{
		// Eio4Read(msg);
		String_t* L_3 = ___0_msg;
		ConnectedMessage_Eio4Read_mF2E98141260080CF98DB25AE52AE5CA7457DAF0C(__this, L_3, NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.String SocketIOClient.Messages.ConnectedMessage::Write()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConnectedMessage_Write_m2345A7315350431A2DCF2D4B5EEEF13A92CCE5AF (ConnectedMessage_t1A1ED2A271B81580C052B6B1B6DDFCD16CF9FC36* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		// if (Eio == 3)
		int32_t L_0;
		L_0 = ConnectedMessage_get_Eio_mEF53A9E8A953873A6366C5508CBD2C754D39593A_inline(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)3))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// return Eio3Write();
		String_t* L_2;
		L_2 = ConnectedMessage_Eio3Write_m05698D395262D13A5790CBE5B58B9B9DB912BDDE(__this, NULL);
		V_1 = L_2;
		goto IL_0021;
	}

IL_0018:
	{
		// return Eio4Write();
		String_t* L_3;
		L_3 = ConnectedMessage_Eio4Write_m33FAE50372B1BCD68E4095BA528AF8BDBBFCF27D(__this, NULL);
		V_1 = L_3;
		goto IL_0021;
	}

IL_0021:
	{
		// }
		String_t* L_4 = V_1;
		return L_4;
	}
}
// System.Void SocketIOClient.Messages.ConnectedMessage::Eio4Read(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectedMessage_Eio4Read_mF2E98141260080CF98DB25AE52AE5CA7457DAF0C (ConnectedMessage_t1A1ED2A271B81580C052B6B1B6DDFCD16CF9FC36* __this, String_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25C241457632965CF0415ACE6CB8DB92A7A9ADD9);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	JsonDocumentOptions_t46D96C339522F4321E0FA1BD1DB3ABE2F300299B V_2;
	memset((&V_2), 0, sizeof(V_2));
	JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// int index = msg.IndexOf('{');
		String_t* L_0 = ___0_msg;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_0, ((int32_t)123), NULL);
		V_0 = L_1;
		// if (index > 0)
		int32_t L_2 = V_0;
		V_1 = (bool)((((int32_t)L_2) > ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// Namespace = msg.Substring(0, index - 1);
		String_t* L_4 = ___0_msg;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		String_t* L_6;
		L_6 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_4, 0, ((int32_t)il2cpp_codegen_subtract(L_5, 1)), NULL);
		ConnectedMessage_set_Namespace_mBB0268B187193B455FE0CDA453F062A106E67CAD_inline(__this, L_6, NULL);
		// msg = msg.Substring(index);
		String_t* L_7 = ___0_msg;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		String_t* L_9;
		L_9 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_7, L_8, NULL);
		___0_msg = L_9;
		goto IL_003e;
	}

IL_0030:
	{
		// Namespace = string.Empty;
		String_t* L_10 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		ConnectedMessage_set_Namespace_mBB0268B187193B455FE0CDA453F062A106E67CAD_inline(__this, L_10, NULL);
	}

IL_003e:
	{
		// Sid = JsonDocument.Parse(msg).RootElement.GetProperty("sid").GetString();
		String_t* L_11 = ___0_msg;
		il2cpp_codegen_initobj((&V_2), sizeof(JsonDocumentOptions_t46D96C339522F4321E0FA1BD1DB3ABE2F300299B));
		JsonDocumentOptions_t46D96C339522F4321E0FA1BD1DB3ABE2F300299B L_12 = V_2;
		JsonDocument_tF96A1F7D1D40932B5EA6A97DA06E150B6CBDBE6F* L_13;
		L_13 = JsonDocument_Parse_m290785DE223664D929CAC7888BAEE7693B60DFC2(L_11, L_12, NULL);
		NullCheck(L_13);
		JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_14;
		L_14 = JsonDocument_get_RootElement_m40BA0A219E870618E0E6DD88367CFB484F2C5195(L_13, NULL);
		V_3 = L_14;
		JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_15;
		L_15 = JsonElement_GetProperty_mB0BB5EA6AC89BB64A9F3BD39EE474AD2D26F72D7((&V_3), _stringLiteral25C241457632965CF0415ACE6CB8DB92A7A9ADD9, NULL);
		V_3 = L_15;
		String_t* L_16;
		L_16 = JsonElement_GetString_m7AE007D2F1B4016AA1B53BF79B1A1DD1EA42EB94((&V_3), NULL);
		ConnectedMessage_set_Sid_m049365339C008B2325BE176C8E9C5E1533AA0D26_inline(__this, L_16, NULL);
		// }
		return;
	}
}
// System.String SocketIOClient.Messages.ConnectedMessage::Eio4Write()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConnectedMessage_Eio4Write_m33FAE50372B1BCD68E4095BA528AF8BDBBFCF27D (ConnectedMessage_t1A1ED2A271B81580C052B6B1B6DDFCD16CF9FC36* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6A6AB007C12E7673D8479299FDC94A4D003EBF9);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		// var builder = new StringBuilder("40");
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_mCD797D942316CB356205FD96415B0B7581CDAD60(L_0, _stringLiteralA6A6AB007C12E7673D8479299FDC94A4D003EBF9, NULL);
		V_0 = L_0;
		// if (!string.IsNullOrEmpty(Namespace))
		String_t* L_1;
		L_1 = ConnectedMessage_get_Namespace_mCDBAD9FDD96BF5294DF2BF8886F73429814BC537_inline(__this, NULL);
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		// builder.Append(Namespace).Append(',');
		StringBuilder_t* L_4 = V_0;
		String_t* L_5;
		L_5 = ConnectedMessage_get_Namespace_mCDBAD9FDD96BF5294DF2BF8886F73429814BC537_inline(__this, NULL);
		NullCheck(L_4);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_4, L_5, NULL);
		NullCheck(L_6);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_6, ((int32_t)44), NULL);
	}

IL_0034:
	{
		// builder.Append(AuthJsonStr);
		StringBuilder_t* L_8 = V_0;
		String_t* L_9;
		L_9 = ConnectedMessage_get_AuthJsonStr_m2CD9779E13B4B15E66EA43325D46FCA799BA6F13_inline(__this, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_10;
		L_10 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_9, NULL);
		// return builder.ToString();
		StringBuilder_t* L_11 = V_0;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_11);
		V_2 = L_12;
		goto IL_004a;
	}

IL_004a:
	{
		// }
		String_t* L_13 = V_2;
		return L_13;
	}
}
// System.Void SocketIOClient.Messages.ConnectedMessage::Eio3Read(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectedMessage_Eio3Read_mFF622979F8D681346B689EA1470584B41CF3E05D (ConnectedMessage_t1A1ED2A271B81580C052B6B1B6DDFCD16CF9FC36* __this, String_t* ___0_msg, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		// if (msg.Length >= 2)
		String_t* L_0 = ___0_msg;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0069;
		}
	}
	{
		// int startIndex = msg.IndexOf('/');
		String_t* L_3 = ___0_msg;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_3, ((int32_t)47), NULL);
		V_1 = L_4;
		// if (startIndex == -1)
		int32_t L_5 = V_1;
		V_3 = (bool)((((int32_t)L_5) == ((int32_t)(-1)))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0026;
		}
	}
	{
		// return;
		goto IL_0069;
	}

IL_0026:
	{
		// int endIndex = msg.IndexOf('?', startIndex);
		String_t* L_7 = ___0_msg;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = String_IndexOf_m15B90A59047584420D227EE3A7EAC0C5EAF676F4(L_7, ((int32_t)63), L_8, NULL);
		V_2 = L_9;
		// if (endIndex == -1)
		int32_t L_10 = V_2;
		V_4 = (bool)((((int32_t)L_10) == ((int32_t)(-1)))? 1 : 0);
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_0046;
		}
	}
	{
		// endIndex = msg.IndexOf(',', startIndex);
		String_t* L_12 = ___0_msg;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		int32_t L_14;
		L_14 = String_IndexOf_m15B90A59047584420D227EE3A7EAC0C5EAF676F4(L_12, ((int32_t)44), L_13, NULL);
		V_2 = L_14;
	}

IL_0046:
	{
		// if (endIndex == -1)
		int32_t L_15 = V_2;
		V_5 = (bool)((((int32_t)L_15) == ((int32_t)(-1)))? 1 : 0);
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0059;
		}
	}
	{
		// endIndex = msg.Length;
		String_t* L_17 = ___0_msg;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_17, NULL);
		V_2 = L_18;
	}

IL_0059:
	{
		// Namespace = msg.Substring(startIndex, endIndex);
		String_t* L_19 = ___0_msg;
		int32_t L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_19);
		String_t* L_22;
		L_22 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_19, L_20, L_21, NULL);
		ConnectedMessage_set_Namespace_mBB0268B187193B455FE0CDA453F062A106E67CAD_inline(__this, L_22, NULL);
	}

IL_0069:
	{
		// }
		return;
	}
}
// System.String SocketIOClient.Messages.ConnectedMessage::Eio3Write()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConnectedMessage_Eio3Write_m05698D395262D13A5790CBE5B58B9B9DB912BDDE (ConnectedMessage_t1A1ED2A271B81580C052B6B1B6DDFCD16CF9FC36* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6A6AB007C12E7673D8479299FDC94A4D003EBF9);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	{
		// if (string.IsNullOrEmpty(Namespace))
		String_t* L_0;
		L_0 = ConnectedMessage_get_Namespace_mCDBAD9FDD96BF5294DF2BF8886F73429814BC537_inline(__this, NULL);
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// return string.Empty;
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_2 = L_3;
		goto IL_00d8;
	}

IL_001c:
	{
		// var builder = new StringBuilder("40");
		StringBuilder_t* L_4 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		StringBuilder__ctor_mCD797D942316CB356205FD96415B0B7581CDAD60(L_4, _stringLiteralA6A6AB007C12E7673D8479299FDC94A4D003EBF9, NULL);
		V_0 = L_4;
		// builder.Append(Namespace);
		StringBuilder_t* L_5 = V_0;
		String_t* L_6;
		L_6 = ConnectedMessage_get_Namespace_mCDBAD9FDD96BF5294DF2BF8886F73429814BC537_inline(__this, NULL);
		NullCheck(L_5);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_5, L_6, NULL);
		// if (Query != null)
		RuntimeObject* L_8;
		L_8 = ConnectedMessage_get_Query_m74AE5EA94B67586ABDB04051C310965A68FC5D39_inline(__this, NULL);
		V_3 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_8) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_00c6;
		}
	}
	{
		// int i = -1;
		V_4 = (-1);
		// foreach (var item in Query)
		RuntimeObject* L_10;
		L_10 = ConnectedMessage_get_Query_m74AE5EA94B67586ABDB04051C310965A68FC5D39_inline(__this, NULL);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::GetEnumerator() */, IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var, L_10);
		V_5 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b8:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_12 = V_5;
					if (!L_12)
					{
						goto IL_00c4;
					}
				}
				{
					RuntimeObject* L_13 = V_5;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_00c4:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00ad_1;
			}

IL_0058_1:
			{
				// foreach (var item in Query)
				RuntimeObject* L_14 = V_5;
				NullCheck(L_14);
				KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_15;
				L_15 = InterfaceFuncInvoker0< KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Current() */, IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var, L_14);
				V_6 = L_15;
				// i++;
				int32_t L_16 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_16, 1));
				// if (i == 0)
				int32_t L_17 = V_4;
				V_7 = (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
				bool L_18 = V_7;
				if (!L_18)
				{
					goto IL_0080_1;
				}
			}
			{
				// builder.Append('?');
				StringBuilder_t* L_19 = V_0;
				NullCheck(L_19);
				StringBuilder_t* L_20;
				L_20 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_19, ((int32_t)63), NULL);
				goto IL_008b_1;
			}

IL_0080_1:
			{
				// builder.Append('&');
				StringBuilder_t* L_21 = V_0;
				NullCheck(L_21);
				StringBuilder_t* L_22;
				L_22 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_21, ((int32_t)38), NULL);
			}

IL_008b_1:
			{
				// builder.Append(item.Key).Append('=').Append(item.Value);
				StringBuilder_t* L_23 = V_0;
				String_t* L_24;
				L_24 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_6), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
				NullCheck(L_23);
				StringBuilder_t* L_25;
				L_25 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_23, L_24, NULL);
				NullCheck(L_25);
				StringBuilder_t* L_26;
				L_26 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_25, ((int32_t)61), NULL);
				String_t* L_27;
				L_27 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&V_6), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
				NullCheck(L_26);
				StringBuilder_t* L_28;
				L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_26, L_27, NULL);
			}

IL_00ad_1:
			{
				// foreach (var item in Query)
				RuntimeObject* L_29 = V_5;
				NullCheck(L_29);
				bool L_30;
				L_30 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_29);
				if (L_30)
				{
					goto IL_0058_1;
				}
			}
			{
				goto IL_00c5;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00c5:
	{
	}

IL_00c6:
	{
		// builder.Append(',');
		StringBuilder_t* L_31 = V_0;
		NullCheck(L_31);
		StringBuilder_t* L_32;
		L_32 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_31, ((int32_t)44), NULL);
		// return builder.ToString();
		StringBuilder_t* L_33 = V_0;
		NullCheck(L_33);
		String_t* L_34;
		L_34 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_33);
		V_2 = L_34;
		goto IL_00d8;
	}

IL_00d8:
	{
		// }
		String_t* L_35 = V_2;
		return L_35;
	}
}
// System.Void SocketIOClient.Messages.ConnectedMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectedMessage__ctor_m6BEBC829D2DBAE0AED1B26709D5CEA503D6FB580 (ConnectedMessage_t1A1ED2A271B81580C052B6B1B6DDFCD16CF9FC36* __this, const RuntimeMethod* method) 
{
	{
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
// SocketIOClient.Messages.MessageType SocketIOClient.Messages.DisconnectedMessage::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DisconnectedMessage_get_Type_mC2F44938656A39E87FAFBBB9EA431C6ABAE7D035 (DisconnectedMessage_tEBAFB998D31AC82FE4A2515B44B1A8B4513EA6A9* __this, const RuntimeMethod* method) 
{
	{
		// public MessageType Type => MessageType.Disconnected;
		return (int32_t)(((int32_t)41));
	}
}
// System.String SocketIOClient.Messages.DisconnectedMessage::get_Namespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DisconnectedMessage_get_Namespace_mFAD63140D707F23A4AAFC05834CBE057961C125B (DisconnectedMessage_tEBAFB998D31AC82FE4A2515B44B1A8B4513EA6A9* __this, const RuntimeMethod* method) 
{
	{
		// public string Namespace { get; set; }
		String_t* L_0 = __this->___U3CNamespaceU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.DisconnectedMessage::set_Namespace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisconnectedMessage_set_Namespace_mECDDF1CF86852802382FE4252A3E0C3375A3DD24 (DisconnectedMessage_tEBAFB998D31AC82FE4A2515B44B1A8B4513EA6A9* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Namespace { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CNamespaceU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNamespaceU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<System.Byte[]> SocketIOClient.Messages.DisconnectedMessage::get_OutgoingBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* DisconnectedMessage_get_OutgoingBytes_m962700F7BDFEACAD0CDCB5E56B139641A194EC74 (DisconnectedMessage_tEBAFB998D31AC82FE4A2515B44B1A8B4513EA6A9* __this, const RuntimeMethod* method) 
{
	{
		// public List<byte[]> OutgoingBytes { get; set; }
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___U3COutgoingBytesU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.DisconnectedMessage::set_OutgoingBytes(System.Collections.Generic.List`1<System.Byte[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisconnectedMessage_set_OutgoingBytes_m6181D04E1D28C1378FE138B6B503093DDD7C199E (DisconnectedMessage_tEBAFB998D31AC82FE4A2515B44B1A8B4513EA6A9* __this, List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___0_value, const RuntimeMethod* method) 
{
	{
		// public List<byte[]> OutgoingBytes { get; set; }
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = ___0_value;
		__this->___U3COutgoingBytesU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COutgoingBytesU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<System.Byte[]> SocketIOClient.Messages.DisconnectedMessage::get_IncomingBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* DisconnectedMessage_get_IncomingBytes_mEB7B017D9713F8AF109B935B0CCC68FEB197FD57 (DisconnectedMessage_tEBAFB998D31AC82FE4A2515B44B1A8B4513EA6A9* __this, const RuntimeMethod* method) 
{
	{
		// public List<byte[]> IncomingBytes { get; set; }
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___U3CIncomingBytesU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.DisconnectedMessage::set_IncomingBytes(System.Collections.Generic.List`1<System.Byte[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisconnectedMessage_set_IncomingBytes_m4D32E2CC698E00A403793A2DE256B9055BC21D48 (DisconnectedMessage_tEBAFB998D31AC82FE4A2515B44B1A8B4513EA6A9* __this, List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___0_value, const RuntimeMethod* method) 
{
	{
		// public List<byte[]> IncomingBytes { get; set; }
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = ___0_value;
		__this->___U3CIncomingBytesU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIncomingBytesU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Int32 SocketIOClient.Messages.DisconnectedMessage::get_BinaryCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DisconnectedMessage_get_BinaryCount_m6CF44A240FA16305DC748030B35A209E964AB87B (DisconnectedMessage_tEBAFB998D31AC82FE4A2515B44B1A8B4513EA6A9* __this, const RuntimeMethod* method) 
{
	{
		// public int BinaryCount { get; }
		int32_t L_0 = __this->___U3CBinaryCountU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Int32 SocketIOClient.Messages.DisconnectedMessage::get_Eio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DisconnectedMessage_get_Eio_mF9C6D77F204B354D7BD49E189092F502DD7EBE6C (DisconnectedMessage_tEBAFB998D31AC82FE4A2515B44B1A8B4513EA6A9* __this, const RuntimeMethod* method) 
{
	{
		// public int Eio { get; set; }
		int32_t L_0 = __this->___U3CEioU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.DisconnectedMessage::set_Eio(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisconnectedMessage_set_Eio_m2399DFFCB119B6F2E348DC9C034B2C4A250D9450 (DisconnectedMessage_tEBAFB998D31AC82FE4A2515B44B1A8B4513EA6A9* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int Eio { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CEioU3Ek__BackingField_4 = L_0;
		return;
	}
}
// SocketIOClient.Transport.TransportProtocol SocketIOClient.Messages.DisconnectedMessage::get_Protocol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DisconnectedMessage_get_Protocol_m20B8587F841B868606A3AA3298E325ABC80604A0 (DisconnectedMessage_tEBAFB998D31AC82FE4A2515B44B1A8B4513EA6A9* __this, const RuntimeMethod* method) 
{
	{
		// public TransportProtocol Protocol { get; set; }
		int32_t L_0 = __this->___U3CProtocolU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.DisconnectedMessage::set_Protocol(SocketIOClient.Transport.TransportProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisconnectedMessage_set_Protocol_m384362E0924A54B6B5DD52A5C43ACFFEA50019E3 (DisconnectedMessage_tEBAFB998D31AC82FE4A2515B44B1A8B4513EA6A9* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public TransportProtocol Protocol { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CProtocolU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Void SocketIOClient.Messages.DisconnectedMessage::Read(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisconnectedMessage_Read_m259EBBE6294DFC0D38F160FE581975F88E1D552D (DisconnectedMessage_tEBAFB998D31AC82FE4A2515B44B1A8B4513EA6A9* __this, String_t* ___0_msg, const RuntimeMethod* method) 
{
	{
		// Namespace = msg.TrimEnd(',');
		String_t* L_0 = ___0_msg;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_TrimEnd_mDB4D96F8312F563656D4115A9F280062E05D2EE8(L_0, ((int32_t)44), NULL);
		DisconnectedMessage_set_Namespace_mECDDF1CF86852802382FE4252A3E0C3375A3DD24_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.String SocketIOClient.Messages.DisconnectedMessage::Write()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DisconnectedMessage_Write_m5C3AE92C7502865F25454EFCB3FB7DFC7DA781B8 (DisconnectedMessage_tEBAFB998D31AC82FE4A2515B44B1A8B4513EA6A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC3101BFE36604E54F5668684B113C5BF96A5EF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		// if (string.IsNullOrEmpty(Namespace))
		String_t* L_0;
		L_0 = DisconnectedMessage_get_Namespace_mFAD63140D707F23A4AAFC05834CBE057961C125B_inline(__this, NULL);
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// return "41";
		V_1 = _stringLiteralBC3101BFE36604E54F5668684B113C5BF96A5EF8;
		goto IL_0031;
	}

IL_0019:
	{
		// return "41" + Namespace + ",";
		String_t* L_3;
		L_3 = DisconnectedMessage_get_Namespace_mFAD63140D707F23A4AAFC05834CBE057961C125B_inline(__this, NULL);
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralBC3101BFE36604E54F5668684B113C5BF96A5EF8, L_3, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, NULL);
		V_1 = L_4;
		goto IL_0031;
	}

IL_0031:
	{
		// }
		String_t* L_5 = V_1;
		return L_5;
	}
}
// System.Void SocketIOClient.Messages.DisconnectedMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisconnectedMessage__ctor_m7EFDBAD5EC509DBC69ED2FB8E569E0BB50E036AF (DisconnectedMessage_tEBAFB998D31AC82FE4A2515B44B1A8B4513EA6A9* __this, const RuntimeMethod* method) 
{
	{
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
// SocketIOClient.Messages.MessageType SocketIOClient.Messages.ErrorMessage::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ErrorMessage_get_Type_mAB7A01F7613951726D119F890872F16CDDB40638 (ErrorMessage_tB3F1C2F4B97E449D6C38FB5E943D66F0B3F6E275* __this, const RuntimeMethod* method) 
{
	{
		// public MessageType Type => MessageType.ErrorMessage;
		return (int32_t)(((int32_t)44));
	}
}
// System.String SocketIOClient.Messages.ErrorMessage::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ErrorMessage_get_Message_mCD869E18BDE1F2B9402A3FD3496083AB00380237 (ErrorMessage_tB3F1C2F4B97E449D6C38FB5E943D66F0B3F6E275* __this, const RuntimeMethod* method) 
{
	{
		// public string Message { get; set; }
		String_t* L_0 = __this->___U3CMessageU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.ErrorMessage::set_Message(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorMessage_set_Message_m19353330692C5FC4A69067967A5F5FAEB7249FD6 (ErrorMessage_tB3F1C2F4B97E449D6C38FB5E943D66F0B3F6E275* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Message { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CMessageU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMessageU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String SocketIOClient.Messages.ErrorMessage::get_Namespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ErrorMessage_get_Namespace_m3E842D8EBCE53304063A0BAF45EC93BF051795FF (ErrorMessage_tB3F1C2F4B97E449D6C38FB5E943D66F0B3F6E275* __this, const RuntimeMethod* method) 
{
	{
		// public string Namespace { get; set; }
		String_t* L_0 = __this->___U3CNamespaceU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.ErrorMessage::set_Namespace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorMessage_set_Namespace_m35F6305A42B99320BB457987E7890C7FCFCEBE67 (ErrorMessage_tB3F1C2F4B97E449D6C38FB5E943D66F0B3F6E275* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Namespace { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CNamespaceU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNamespaceU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<System.Byte[]> SocketIOClient.Messages.ErrorMessage::get_OutgoingBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ErrorMessage_get_OutgoingBytes_m50F83E8FA3EEA08C73F96DE49A852C68166EBDD1 (ErrorMessage_tB3F1C2F4B97E449D6C38FB5E943D66F0B3F6E275* __this, const RuntimeMethod* method) 
{
	{
		// public List<byte[]> OutgoingBytes { get; set; }
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___U3COutgoingBytesU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.ErrorMessage::set_OutgoingBytes(System.Collections.Generic.List`1<System.Byte[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorMessage_set_OutgoingBytes_m6593D5C8C1DD12E31A446D81E24945DA68B72540 (ErrorMessage_tB3F1C2F4B97E449D6C38FB5E943D66F0B3F6E275* __this, List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___0_value, const RuntimeMethod* method) 
{
	{
		// public List<byte[]> OutgoingBytes { get; set; }
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = ___0_value;
		__this->___U3COutgoingBytesU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COutgoingBytesU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<System.Byte[]> SocketIOClient.Messages.ErrorMessage::get_IncomingBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ErrorMessage_get_IncomingBytes_m627F449EA8025E5A322724B99E10EDEA96A80E0F (ErrorMessage_tB3F1C2F4B97E449D6C38FB5E943D66F0B3F6E275* __this, const RuntimeMethod* method) 
{
	{
		// public List<byte[]> IncomingBytes { get; set; }
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___U3CIncomingBytesU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.ErrorMessage::set_IncomingBytes(System.Collections.Generic.List`1<System.Byte[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorMessage_set_IncomingBytes_m4136AD238303A962324247C366AF9FBF9D653B92 (ErrorMessage_tB3F1C2F4B97E449D6C38FB5E943D66F0B3F6E275* __this, List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___0_value, const RuntimeMethod* method) 
{
	{
		// public List<byte[]> IncomingBytes { get; set; }
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = ___0_value;
		__this->___U3CIncomingBytesU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIncomingBytesU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Int32 SocketIOClient.Messages.ErrorMessage::get_BinaryCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ErrorMessage_get_BinaryCount_m2A1C47592B0FDB789A02020280DB8FE292E83ACD (ErrorMessage_tB3F1C2F4B97E449D6C38FB5E943D66F0B3F6E275* __this, const RuntimeMethod* method) 
{
	{
		// public int BinaryCount { get; }
		int32_t L_0 = __this->___U3CBinaryCountU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Int32 SocketIOClient.Messages.ErrorMessage::get_Eio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ErrorMessage_get_Eio_m0F647A84D5F6BDD0A360529918C14FED11CEF963 (ErrorMessage_tB3F1C2F4B97E449D6C38FB5E943D66F0B3F6E275* __this, const RuntimeMethod* method) 
{
	{
		// public int Eio { get; set; }
		int32_t L_0 = __this->___U3CEioU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.ErrorMessage::set_Eio(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorMessage_set_Eio_m764696917EC79AFBECFD9D8261825C6401832A21 (ErrorMessage_tB3F1C2F4B97E449D6C38FB5E943D66F0B3F6E275* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int Eio { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CEioU3Ek__BackingField_5 = L_0;
		return;
	}
}
// SocketIOClient.Transport.TransportProtocol SocketIOClient.Messages.ErrorMessage::get_Protocol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ErrorMessage_get_Protocol_m9F58C216466C40D6728E9950FA75C356EAB9C8C8 (ErrorMessage_tB3F1C2F4B97E449D6C38FB5E943D66F0B3F6E275* __this, const RuntimeMethod* method) 
{
	{
		// public TransportProtocol Protocol { get; set; }
		int32_t L_0 = __this->___U3CProtocolU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.ErrorMessage::set_Protocol(SocketIOClient.Transport.TransportProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorMessage_set_Protocol_mFF2412C5A3D4C635E4C1AC17D86FCDEEE4A5C11F (ErrorMessage_tB3F1C2F4B97E449D6C38FB5E943D66F0B3F6E275* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public TransportProtocol Protocol { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CProtocolU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Void SocketIOClient.Messages.ErrorMessage::Read(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorMessage_Read_mD6902432D0F741B67C807CE4DAE22589F975BC4B (ErrorMessage_tB3F1C2F4B97E449D6C38FB5E943D66F0B3F6E275* __this, String_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD559C6D97E819D8E4EF7ACDC34C4E8D3DD314964);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	JsonDocument_tF96A1F7D1D40932B5EA6A97DA06E150B6CBDBE6F* V_2 = NULL;
	bool V_3 = false;
	JsonDocumentOptions_t46D96C339522F4321E0FA1BD1DB3ABE2F300299B V_4;
	memset((&V_4), 0, sizeof(V_4));
	JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// if (Eio == 3)
		int32_t L_0;
		L_0 = ErrorMessage_get_Eio_m0F647A84D5F6BDD0A360529918C14FED11CEF963_inline(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)3))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// Message = msg.Trim('"');
		String_t* L_2 = ___0_msg;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = String_Trim_mF5081365E55C31B636F8145F42AEF61868175A5A(L_2, ((int32_t)34), NULL);
		ErrorMessage_set_Message_m19353330692C5FC4A69067967A5F5FAEB7249FD6_inline(__this, L_3, NULL);
		goto IL_0085;
	}

IL_0021:
	{
		// int index = msg.IndexOf('{');
		String_t* L_4 = ___0_msg;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_4, ((int32_t)123), NULL);
		V_1 = L_5;
		// if (index > 0)
		int32_t L_6 = V_1;
		V_3 = (bool)((((int32_t)L_6) > ((int32_t)0))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_004f;
		}
	}
	{
		// Namespace = msg.Substring(0, index - 1);
		String_t* L_8 = ___0_msg;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		String_t* L_10;
		L_10 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_8, 0, ((int32_t)il2cpp_codegen_subtract(L_9, 1)), NULL);
		ErrorMessage_set_Namespace_m35F6305A42B99320BB457987E7890C7FCFCEBE67_inline(__this, L_10, NULL);
		// msg = msg.Substring(index);
		String_t* L_11 = ___0_msg;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		String_t* L_13;
		L_13 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_11, L_12, NULL);
		___0_msg = L_13;
	}

IL_004f:
	{
		// var doc = JsonDocument.Parse(msg);
		String_t* L_14 = ___0_msg;
		il2cpp_codegen_initobj((&V_4), sizeof(JsonDocumentOptions_t46D96C339522F4321E0FA1BD1DB3ABE2F300299B));
		JsonDocumentOptions_t46D96C339522F4321E0FA1BD1DB3ABE2F300299B L_15 = V_4;
		JsonDocument_tF96A1F7D1D40932B5EA6A97DA06E150B6CBDBE6F* L_16;
		L_16 = JsonDocument_Parse_m290785DE223664D929CAC7888BAEE7693B60DFC2(L_14, L_15, NULL);
		V_2 = L_16;
		// Message = doc.RootElement.GetProperty("message").GetString();
		JsonDocument_tF96A1F7D1D40932B5EA6A97DA06E150B6CBDBE6F* L_17 = V_2;
		NullCheck(L_17);
		JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_18;
		L_18 = JsonDocument_get_RootElement_m40BA0A219E870618E0E6DD88367CFB484F2C5195(L_17, NULL);
		V_5 = L_18;
		JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_19;
		L_19 = JsonElement_GetProperty_mB0BB5EA6AC89BB64A9F3BD39EE474AD2D26F72D7((&V_5), _stringLiteralD559C6D97E819D8E4EF7ACDC34C4E8D3DD314964, NULL);
		V_5 = L_19;
		String_t* L_20;
		L_20 = JsonElement_GetString_m7AE007D2F1B4016AA1B53BF79B1A1DD1EA42EB94((&V_5), NULL);
		ErrorMessage_set_Message_m19353330692C5FC4A69067967A5F5FAEB7249FD6_inline(__this, L_20, NULL);
	}

IL_0085:
	{
		// }
		return;
	}
}
// System.String SocketIOClient.Messages.ErrorMessage::Write()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ErrorMessage_Write_mCDFE6CEC0BF3F78A71AC5A115FD4FC97F95E5D63 (ErrorMessage_tB3F1C2F4B97E449D6C38FB5E943D66F0B3F6E275* __this, const RuntimeMethod* method) 
{
	{
		// throw new NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ErrorMessage_Write_mCDFE6CEC0BF3F78A71AC5A115FD4FC97F95E5D63_RuntimeMethod_var)));
	}
}
// System.Void SocketIOClient.Messages.ErrorMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorMessage__ctor_mDCDF9B0C42C695D996CA0E004F67BEA058F3DAAC (ErrorMessage_tB3F1C2F4B97E449D6C38FB5E943D66F0B3F6E275* __this, const RuntimeMethod* method) 
{
	{
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
// SocketIOClient.Messages.MessageType SocketIOClient.Messages.EventMessage::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EventMessage_get_Type_m8603F936E0730F6339BF54931925533AEE5D43D4 (EventMessage_t470DDE32D55CB6E5C78B1B073D344CFD3C548748* __this, const RuntimeMethod* method) 
{
	{
		// public MessageType Type => MessageType.EventMessage;
		return (int32_t)(((int32_t)42));
	}
}
// System.String SocketIOClient.Messages.EventMessage::get_Namespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EventMessage_get_Namespace_m802438EC6B93123646E0DEDAC656C4BA75A4E8B6 (EventMessage_t470DDE32D55CB6E5C78B1B073D344CFD3C548748* __this, const RuntimeMethod* method) 
{
	{
		// public string Namespace { get; set; }
		String_t* L_0 = __this->___U3CNamespaceU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.EventMessage::set_Namespace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMessage_set_Namespace_mD9D29D1580CAD4439A177272B211E72B208A8036 (EventMessage_t470DDE32D55CB6E5C78B1B073D344CFD3C548748* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Namespace { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CNamespaceU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNamespaceU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String SocketIOClient.Messages.EventMessage::get_Event()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EventMessage_get_Event_mE5435820B395058C5B086BDEEB4B532E223B4B5F (EventMessage_t470DDE32D55CB6E5C78B1B073D344CFD3C548748* __this, const RuntimeMethod* method) 
{
	{
		// public string Event { get; set; }
		String_t* L_0 = __this->___U3CEventU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.EventMessage::set_Event(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMessage_set_Event_mCA02BE3840C40DBB9AC37993BF8013151712ACE9 (EventMessage_t470DDE32D55CB6E5C78B1B073D344CFD3C548748* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Event { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CEventU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEventU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Int32 SocketIOClient.Messages.EventMessage::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EventMessage_get_Id_m49361C6A1421B751290DA8086C8D5E9FF5F898C1 (EventMessage_t470DDE32D55CB6E5C78B1B073D344CFD3C548748* __this, const RuntimeMethod* method) 
{
	{
		// public int Id { get; set; }
		int32_t L_0 = __this->___U3CIdU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.EventMessage::set_Id(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMessage_set_Id_mE2D26FAC549D2D0DE97C48B1E344BC70B918276A (EventMessage_t470DDE32D55CB6E5C78B1B073D344CFD3C548748* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int Id { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CIdU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Collections.Generic.List`1<System.Text.Json.JsonElement> SocketIOClient.Messages.EventMessage::get_JsonElements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6* EventMessage_get_JsonElements_m31A620D166BC872F51BC5D4DD4D3A67FA9ADE6B2 (EventMessage_t470DDE32D55CB6E5C78B1B073D344CFD3C548748* __this, const RuntimeMethod* method) 
{
	{
		// public List<JsonElement> JsonElements { get; set; }
		List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6* L_0 = __this->___U3CJsonElementsU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.EventMessage::set_JsonElements(System.Collections.Generic.List`1<System.Text.Json.JsonElement>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMessage_set_JsonElements_m173A2D28A03D15ACA167C3F1027A6D25ECF44F2F (EventMessage_t470DDE32D55CB6E5C78B1B073D344CFD3C548748* __this, List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6* ___0_value, const RuntimeMethod* method) 
{
	{
		// public List<JsonElement> JsonElements { get; set; }
		List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6* L_0 = ___0_value;
		__this->___U3CJsonElementsU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CJsonElementsU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.String SocketIOClient.Messages.EventMessage::get_Json()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EventMessage_get_Json_m2E70488D82084C92F3A9C92E448A2B21E4775EB6 (EventMessage_t470DDE32D55CB6E5C78B1B073D344CFD3C548748* __this, const RuntimeMethod* method) 
{
	{
		// public string Json { get; set; }
		String_t* L_0 = __this->___U3CJsonU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.EventMessage::set_Json(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMessage_set_Json_m82A750CC3382BFBEF488546DEC26F9014E4865E7 (EventMessage_t470DDE32D55CB6E5C78B1B073D344CFD3C548748* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Json { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CJsonU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CJsonU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<System.Byte[]> SocketIOClient.Messages.EventMessage::get_OutgoingBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* EventMessage_get_OutgoingBytes_m69308770500E0C82D33F12E680868E2DF78B1957 (EventMessage_t470DDE32D55CB6E5C78B1B073D344CFD3C548748* __this, const RuntimeMethod* method) 
{
	{
		// public List<byte[]> OutgoingBytes { get; set; }
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___U3COutgoingBytesU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.EventMessage::set_OutgoingBytes(System.Collections.Generic.List`1<System.Byte[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMessage_set_OutgoingBytes_mC509825D6DE44F68D2297A3E57D54B05FACE88A1 (EventMessage_t470DDE32D55CB6E5C78B1B073D344CFD3C548748* __this, List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___0_value, const RuntimeMethod* method) 
{
	{
		// public List<byte[]> OutgoingBytes { get; set; }
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = ___0_value;
		__this->___U3COutgoingBytesU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COutgoingBytesU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<System.Byte[]> SocketIOClient.Messages.EventMessage::get_IncomingBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* EventMessage_get_IncomingBytes_mEC08FCA0A76C68D8C48815A8B58EF017D587CECA (EventMessage_t470DDE32D55CB6E5C78B1B073D344CFD3C548748* __this, const RuntimeMethod* method) 
{
	{
		// public List<byte[]> IncomingBytes { get; set; }
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___U3CIncomingBytesU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.EventMessage::set_IncomingBytes(System.Collections.Generic.List`1<System.Byte[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMessage_set_IncomingBytes_m6ACCCD303DC63F5309D342A319E08AED10D3E422 (EventMessage_t470DDE32D55CB6E5C78B1B073D344CFD3C548748* __this, List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___0_value, const RuntimeMethod* method) 
{
	{
		// public List<byte[]> IncomingBytes { get; set; }
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = ___0_value;
		__this->___U3CIncomingBytesU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIncomingBytesU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.Int32 SocketIOClient.Messages.EventMessage::get_BinaryCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EventMessage_get_BinaryCount_m82B3BAE88E938F03195A1D402CDAA91C4BAA0560 (EventMessage_t470DDE32D55CB6E5C78B1B073D344CFD3C548748* __this, const RuntimeMethod* method) 
{
	{
		// public int BinaryCount { get; }
		int32_t L_0 = __this->___U3CBinaryCountU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Int32 SocketIOClient.Messages.EventMessage::get_Eio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EventMessage_get_Eio_mCFD080E58022B2E22E35AC77CC218B5C5E23E76A (EventMessage_t470DDE32D55CB6E5C78B1B073D344CFD3C548748* __this, const RuntimeMethod* method) 
{
	{
		// public int Eio { get; set; }
		int32_t L_0 = __this->___U3CEioU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.EventMessage::set_Eio(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMessage_set_Eio_mDBDC8A5B8BC057A51D8E2874D704D2D5EE9AE8C5 (EventMessage_t470DDE32D55CB6E5C78B1B073D344CFD3C548748* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int Eio { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CEioU3Ek__BackingField_8 = L_0;
		return;
	}
}
// SocketIOClient.Transport.TransportProtocol SocketIOClient.Messages.EventMessage::get_Protocol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EventMessage_get_Protocol_m78852BFA9683EF0E813479CBB31A629114BEA36D (EventMessage_t470DDE32D55CB6E5C78B1B073D344CFD3C548748* __this, const RuntimeMethod* method) 
{
	{
		// public TransportProtocol Protocol { get; set; }
		int32_t L_0 = __this->___U3CProtocolU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.EventMessage::set_Protocol(SocketIOClient.Transport.TransportProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMessage_set_Protocol_mAF47C8B974FE2C8B9E0F0D67C1E0C91CEB54D416 (EventMessage_t470DDE32D55CB6E5C78B1B073D344CFD3C548748* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public TransportProtocol Protocol { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CProtocolU3Ek__BackingField_9 = L_0;
		return;
	}
}
// System.Void SocketIOClient.Messages.EventMessage::Read(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMessage_Read_m77CCA494619A520906140B50F134274D2F7F01BC (EventMessage_t470DDE32D55CB6E5C78B1B073D344CFD3C548748* __this, String_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m54BE733D37F0BE82FCD59F3D8B06A0409EBDD327_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m16D5E19B993EA46901FB2FC56C335AAFCBCC14C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ArrayEnumerator_t6A32F25D9BE79D9856DA29CBAD749933F2C9C97C V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	bool V_4 = false;
	String_t* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	JsonDocumentOptions_t46D96C339522F4321E0FA1BD1DB3ABE2F300299B V_8;
	memset((&V_8), 0, sizeof(V_8));
	JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 V_9;
	memset((&V_9), 0, sizeof(V_9));
	ArrayEnumerator_t6A32F25D9BE79D9856DA29CBAD749933F2C9C97C V_10;
	memset((&V_10), 0, sizeof(V_10));
	JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 V_11;
	memset((&V_11), 0, sizeof(V_11));
	bool V_12 = false;
	{
		// int index = msg.IndexOf('[');
		String_t* L_0 = ___0_msg;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_0, ((int32_t)91), NULL);
		V_0 = L_1;
		// int lastIndex = msg.LastIndexOf(',', index);
		String_t* L_2 = ___0_msg;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = String_LastIndexOf_m3EB3F4ECDF6D990ADBACB6B168A8CBD4772B91A7(L_2, ((int32_t)44), L_3, NULL);
		V_1 = L_4;
		// if (lastIndex > -1)
		int32_t L_5 = V_1;
		V_4 = (bool)((((int32_t)L_5) > ((int32_t)(-1)))? 1 : 0);
		bool L_6 = V_4;
		if (!L_6)
		{
			goto IL_0060;
		}
	}
	{
		// string text = msg.Substring(0, index);
		String_t* L_7 = ___0_msg;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		String_t* L_9;
		L_9 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_7, 0, L_8, NULL);
		V_5 = L_9;
		// Namespace = text.Substring(0, lastIndex);
		String_t* L_10 = V_5;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		String_t* L_12;
		L_12 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_10, 0, L_11, NULL);
		EventMessage_set_Namespace_mD9D29D1580CAD4439A177272B211E72B208A8036_inline(__this, L_12, NULL);
		// if (index - lastIndex > 1)
		int32_t L_13 = V_0;
		int32_t L_14 = V_1;
		V_6 = (bool)((((int32_t)((int32_t)il2cpp_codegen_subtract(L_13, L_14))) > ((int32_t)1))? 1 : 0);
		bool L_15 = V_6;
		if (!L_15)
		{
			goto IL_005d;
		}
	}
	{
		// Id = int.Parse(text.Substring(lastIndex + 1));
		String_t* L_16 = V_5;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		String_t* L_18;
		L_18 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_16, ((int32_t)il2cpp_codegen_add(L_17, 1)), NULL);
		int32_t L_19;
		L_19 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_18, NULL);
		EventMessage_set_Id_mE2D26FAC549D2D0DE97C48B1E344BC70B918276A_inline(__this, L_19, NULL);
	}

IL_005d:
	{
		goto IL_0082;
	}

IL_0060:
	{
		// if (index > 0)
		int32_t L_20 = V_0;
		V_7 = (bool)((((int32_t)L_20) > ((int32_t)0))? 1 : 0);
		bool L_21 = V_7;
		if (!L_21)
		{
			goto IL_0081;
		}
	}
	{
		// Id = int.Parse(msg.Substring(0, index));
		String_t* L_22 = ___0_msg;
		int32_t L_23 = V_0;
		NullCheck(L_22);
		String_t* L_24;
		L_24 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_22, 0, L_23, NULL);
		int32_t L_25;
		L_25 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_24, NULL);
		EventMessage_set_Id_mE2D26FAC549D2D0DE97C48B1E344BC70B918276A_inline(__this, L_25, NULL);
	}

IL_0081:
	{
	}

IL_0082:
	{
		// msg = msg.Substring(index);
		String_t* L_26 = ___0_msg;
		int32_t L_27 = V_0;
		NullCheck(L_26);
		String_t* L_28;
		L_28 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_26, L_27, NULL);
		___0_msg = L_28;
		// var array = JsonDocument.Parse(msg).RootElement.EnumerateArray();
		String_t* L_29 = ___0_msg;
		il2cpp_codegen_initobj((&V_8), sizeof(JsonDocumentOptions_t46D96C339522F4321E0FA1BD1DB3ABE2F300299B));
		JsonDocumentOptions_t46D96C339522F4321E0FA1BD1DB3ABE2F300299B L_30 = V_8;
		JsonDocument_tF96A1F7D1D40932B5EA6A97DA06E150B6CBDBE6F* L_31;
		L_31 = JsonDocument_Parse_m290785DE223664D929CAC7888BAEE7693B60DFC2(L_29, L_30, NULL);
		NullCheck(L_31);
		JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_32;
		L_32 = JsonDocument_get_RootElement_m40BA0A219E870618E0E6DD88367CFB484F2C5195(L_31, NULL);
		V_9 = L_32;
		ArrayEnumerator_t6A32F25D9BE79D9856DA29CBAD749933F2C9C97C L_33;
		L_33 = JsonElement_EnumerateArray_m9B35AF71578078459E6DAF2D7416D07F327E6E38((&V_9), NULL);
		V_2 = L_33;
		// int i = -1;
		V_3 = (-1);
		// foreach (var item in array)
		ArrayEnumerator_t6A32F25D9BE79D9856DA29CBAD749933F2C9C97C L_34;
		L_34 = ArrayEnumerator_GetEnumerator_m938DD30A37AEE868DC5935D0CDE254FA6CAFCF97((&V_2), NULL);
		V_10 = L_34;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_010a:
			{// begin finally (depth: 1)
				ArrayEnumerator_Dispose_mD4E9E4516CF8CC2CEA173A59B8407A94271C34D2((&V_10), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00ff_1;
			}

IL_00b8_1:
			{
				// foreach (var item in array)
				JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_35;
				L_35 = ArrayEnumerator_get_Current_m5F5C30DD80B5F2331BF392DA21D4EB06E050F827((&V_10), NULL);
				V_11 = L_35;
				// i++;
				int32_t L_36 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
				// if (i == 0)
				int32_t L_37 = V_3;
				V_12 = (bool)((((int32_t)L_37) == ((int32_t)0))? 1 : 0);
				bool L_38 = V_12;
				if (!L_38)
				{
					goto IL_00ee_1;
				}
			}
			{
				// Event = item.GetString();
				String_t* L_39;
				L_39 = JsonElement_GetString_m7AE007D2F1B4016AA1B53BF79B1A1DD1EA42EB94((&V_11), NULL);
				EventMessage_set_Event_mCA02BE3840C40DBB9AC37993BF8013151712ACE9_inline(__this, L_39, NULL);
				// JsonElements = new List<JsonElement>();
				List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6* L_40 = (List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6*)il2cpp_codegen_object_new(List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6_il2cpp_TypeInfo_var);
				NullCheck(L_40);
				List_1__ctor_m16D5E19B993EA46901FB2FC56C335AAFCBCC14C3(L_40, List_1__ctor_m16D5E19B993EA46901FB2FC56C335AAFCBCC14C3_RuntimeMethod_var);
				EventMessage_set_JsonElements_m173A2D28A03D15ACA167C3F1027A6D25ECF44F2F_inline(__this, L_40, NULL);
				goto IL_00fe_1;
			}

IL_00ee_1:
			{
				// JsonElements.Add(item);
				List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6* L_41;
				L_41 = EventMessage_get_JsonElements_m31A620D166BC872F51BC5D4DD4D3A67FA9ADE6B2_inline(__this, NULL);
				JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_42 = V_11;
				NullCheck(L_41);
				List_1_Add_m54BE733D37F0BE82FCD59F3D8B06A0409EBDD327_inline(L_41, L_42, List_1_Add_m54BE733D37F0BE82FCD59F3D8B06A0409EBDD327_RuntimeMethod_var);
			}

IL_00fe_1:
			{
			}

IL_00ff_1:
			{
				// foreach (var item in array)
				bool L_43;
				L_43 = ArrayEnumerator_MoveNext_mF1B0AFD404AA0995A6BE8106CE602684BBE47433((&V_10), NULL);
				if (L_43)
				{
					goto IL_00b8_1;
				}
			}
			{
				goto IL_0119;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0119:
	{
		// }
		return;
	}
}
// System.String SocketIOClient.Messages.EventMessage::Write()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EventMessage_Write_mCA35EEDAADAB34594C415D6E84ACE500B87984D4 (EventMessage_t470DDE32D55CB6E5C78B1B073D344CFD3C548748* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B6D138D8454083A41D1C936D8DFA8099F161DA8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3952A7C46F2C9749F94659EC90D855DF03EE7B1A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral792BED7AE838D9267644F8329AA86A301260BB2C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0AB94C928A783BE1AAC7FE99970D2920FE6A1D8);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		// var builder = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		// builder.Append("42");
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, _stringLiteral792BED7AE838D9267644F8329AA86A301260BB2C, NULL);
		// if (!string.IsNullOrEmpty(Namespace))
		String_t* L_3;
		L_3 = EventMessage_get_Namespace_m802438EC6B93123646E0DEDAC656C4BA75A4E8B6_inline(__this, NULL);
		bool L_4;
		L_4 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_3, NULL);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		// builder.Append(Namespace).Append(',');
		StringBuilder_t* L_6 = V_0;
		String_t* L_7;
		L_7 = EventMessage_get_Namespace_m802438EC6B93123646E0DEDAC656C4BA75A4E8B6_inline(__this, NULL);
		NullCheck(L_6);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_6, L_7, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_8, ((int32_t)44), NULL);
	}

IL_003b:
	{
		// if (string.IsNullOrEmpty(Json))
		String_t* L_10;
		L_10 = EventMessage_get_Json_m2E70488D82084C92F3A9C92E448A2B21E4775EB6_inline(__this, NULL);
		bool L_11;
		L_11 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_10, NULL);
		V_2 = L_11;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_006f;
		}
	}
	{
		// builder.Append("[\"").Append(Event).Append("\"]");
		StringBuilder_t* L_13 = V_0;
		NullCheck(L_13);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_13, _stringLiteral3952A7C46F2C9749F94659EC90D855DF03EE7B1A, NULL);
		String_t* L_15;
		L_15 = EventMessage_get_Event_mE5435820B395058C5B086BDEEB4B532E223B4B5F_inline(__this, NULL);
		NullCheck(L_14);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_14, L_15, NULL);
		NullCheck(L_16);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_16, _stringLiteralF0AB94C928A783BE1AAC7FE99970D2920FE6A1D8, NULL);
		goto IL_009b;
	}

IL_006f:
	{
		// string data = Json.Insert(1, $"\"{Event}\",");
		String_t* L_18;
		L_18 = EventMessage_get_Json_m2E70488D82084C92F3A9C92E448A2B21E4775EB6_inline(__this, NULL);
		String_t* L_19;
		L_19 = EventMessage_get_Event_mE5435820B395058C5B086BDEEB4B532E223B4B5F_inline(__this, NULL);
		String_t* L_20;
		L_20 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, L_19, _stringLiteral0B6D138D8454083A41D1C936D8DFA8099F161DA8, NULL);
		NullCheck(L_18);
		String_t* L_21;
		L_21 = String_Insert_mA279E748F06514A6D0B9B680D651D6A6C6BB561A(L_18, 1, L_20, NULL);
		V_3 = L_21;
		// builder.Append(data);
		StringBuilder_t* L_22 = V_0;
		String_t* L_23 = V_3;
		NullCheck(L_22);
		StringBuilder_t* L_24;
		L_24 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_22, L_23, NULL);
	}

IL_009b:
	{
		// return builder.ToString();
		StringBuilder_t* L_25 = V_0;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_25);
		V_4 = L_26;
		goto IL_00a5;
	}

IL_00a5:
	{
		// }
		String_t* L_27 = V_4;
		return L_27;
	}
}
// System.Void SocketIOClient.Messages.EventMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMessage__ctor_m622A1798C7039FD0A853C518371391EAE812E773 (EventMessage_t470DDE32D55CB6E5C78B1B073D344CFD3C548748* __this, const RuntimeMethod* method) 
{
	{
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
// SocketIOClient.Messages.IMessage SocketIOClient.Messages.MessageFactory::CreateMessage(SocketIOClient.Messages.MessageType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MessageFactory_CreateMessage_m1C9365C43654B7EB66413303463CF477D8C8525E (int32_t ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryMessage_tD5819CFC7CC9F2CE0BC27C01B47AEF59F66CCF05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientAckMessage_t7F42DF41F6C6389FF9ADCA794D69BFA3FA15E6F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientBinaryAckMessage_tCC3843B13D5ADA726E5899C1B148AD22D1978742_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectedMessage_t1A1ED2A271B81580C052B6B1B6DDFCD16CF9FC36_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisconnectedMessage_tEBAFB998D31AC82FE4A2515B44B1A8B4513EA6A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ErrorMessage_tB3F1C2F4B97E449D6C38FB5E943D66F0B3F6E275_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMessage_t470DDE32D55CB6E5C78B1B073D344CFD3C548748_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenedMessage_tB5F1C6F098ABB481932A5728B15765F454E68806_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PingMessage_t5E9292201F5D7ED22252C374CBEAA4621E8B30E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PongMessage_t5FD45D5BAA78BB30EB15C7C4FA84536D61617447_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		// switch (type)
		int32_t L_0 = ___0_type;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0044;
			}
			case 1:
			{
				goto IL_0094;
			}
			case 2:
			{
				goto IL_004c;
			}
			case 3:
			{
				goto IL_0054;
			}
		}
	}
	{
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_3 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, ((int32_t)40))))
		{
			case 0:
			{
				goto IL_005c;
			}
			case 1:
			{
				goto IL_0064;
			}
			case 2:
			{
				goto IL_006c;
			}
			case 3:
			{
				goto IL_0074;
			}
			case 4:
			{
				goto IL_007c;
			}
			case 5:
			{
				goto IL_0084;
			}
			case 6:
			{
				goto IL_008c;
			}
		}
	}
	{
		goto IL_0094;
	}

IL_0044:
	{
		// return new OpenedMessage();
		OpenedMessage_tB5F1C6F098ABB481932A5728B15765F454E68806* L_4 = (OpenedMessage_tB5F1C6F098ABB481932A5728B15765F454E68806*)il2cpp_codegen_object_new(OpenedMessage_tB5F1C6F098ABB481932A5728B15765F454E68806_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		OpenedMessage__ctor_mA6BBA13C0536C9C447BCCE1F824BC0677C98AF40(L_4, NULL);
		V_2 = L_4;
		goto IL_0098;
	}

IL_004c:
	{
		// return new PingMessage();
		PingMessage_t5E9292201F5D7ED22252C374CBEAA4621E8B30E7* L_5 = (PingMessage_t5E9292201F5D7ED22252C374CBEAA4621E8B30E7*)il2cpp_codegen_object_new(PingMessage_t5E9292201F5D7ED22252C374CBEAA4621E8B30E7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		PingMessage__ctor_m561334445D0C77F71538B4B8210E1B654D00C820(L_5, NULL);
		V_2 = L_5;
		goto IL_0098;
	}

IL_0054:
	{
		// return new PongMessage();
		PongMessage_t5FD45D5BAA78BB30EB15C7C4FA84536D61617447* L_6 = (PongMessage_t5FD45D5BAA78BB30EB15C7C4FA84536D61617447*)il2cpp_codegen_object_new(PongMessage_t5FD45D5BAA78BB30EB15C7C4FA84536D61617447_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		PongMessage__ctor_mF0B50B3F1EA1A151A635366CDE97C325D8F1E2F1(L_6, NULL);
		V_2 = L_6;
		goto IL_0098;
	}

IL_005c:
	{
		// return new ConnectedMessage();
		ConnectedMessage_t1A1ED2A271B81580C052B6B1B6DDFCD16CF9FC36* L_7 = (ConnectedMessage_t1A1ED2A271B81580C052B6B1B6DDFCD16CF9FC36*)il2cpp_codegen_object_new(ConnectedMessage_t1A1ED2A271B81580C052B6B1B6DDFCD16CF9FC36_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		ConnectedMessage__ctor_m6BEBC829D2DBAE0AED1B26709D5CEA503D6FB580(L_7, NULL);
		V_2 = L_7;
		goto IL_0098;
	}

IL_0064:
	{
		// return new DisconnectedMessage();
		DisconnectedMessage_tEBAFB998D31AC82FE4A2515B44B1A8B4513EA6A9* L_8 = (DisconnectedMessage_tEBAFB998D31AC82FE4A2515B44B1A8B4513EA6A9*)il2cpp_codegen_object_new(DisconnectedMessage_tEBAFB998D31AC82FE4A2515B44B1A8B4513EA6A9_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		DisconnectedMessage__ctor_m7EFDBAD5EC509DBC69ED2FB8E569E0BB50E036AF(L_8, NULL);
		V_2 = L_8;
		goto IL_0098;
	}

IL_006c:
	{
		// return new EventMessage();
		EventMessage_t470DDE32D55CB6E5C78B1B073D344CFD3C548748* L_9 = (EventMessage_t470DDE32D55CB6E5C78B1B073D344CFD3C548748*)il2cpp_codegen_object_new(EventMessage_t470DDE32D55CB6E5C78B1B073D344CFD3C548748_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		EventMessage__ctor_m622A1798C7039FD0A853C518371391EAE812E773(L_9, NULL);
		V_2 = L_9;
		goto IL_0098;
	}

IL_0074:
	{
		// return new ClientAckMessage();
		ClientAckMessage_t7F42DF41F6C6389FF9ADCA794D69BFA3FA15E6F9* L_10 = (ClientAckMessage_t7F42DF41F6C6389FF9ADCA794D69BFA3FA15E6F9*)il2cpp_codegen_object_new(ClientAckMessage_t7F42DF41F6C6389FF9ADCA794D69BFA3FA15E6F9_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		ClientAckMessage__ctor_m036223076877D61507D1085D455EDB8AC5A1B046(L_10, NULL);
		V_2 = L_10;
		goto IL_0098;
	}

IL_007c:
	{
		// return new ErrorMessage();
		ErrorMessage_tB3F1C2F4B97E449D6C38FB5E943D66F0B3F6E275* L_11 = (ErrorMessage_tB3F1C2F4B97E449D6C38FB5E943D66F0B3F6E275*)il2cpp_codegen_object_new(ErrorMessage_tB3F1C2F4B97E449D6C38FB5E943D66F0B3F6E275_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		ErrorMessage__ctor_mDCDF9B0C42C695D996CA0E004F67BEA058F3DAAC(L_11, NULL);
		V_2 = L_11;
		goto IL_0098;
	}

IL_0084:
	{
		// return new BinaryMessage();
		BinaryMessage_tD5819CFC7CC9F2CE0BC27C01B47AEF59F66CCF05* L_12 = (BinaryMessage_tD5819CFC7CC9F2CE0BC27C01B47AEF59F66CCF05*)il2cpp_codegen_object_new(BinaryMessage_tD5819CFC7CC9F2CE0BC27C01B47AEF59F66CCF05_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		BinaryMessage__ctor_m792CBE784B67DA727519BDA1F0A1C3CF619BDE47(L_12, NULL);
		V_2 = L_12;
		goto IL_0098;
	}

IL_008c:
	{
		// return new ClientBinaryAckMessage();
		ClientBinaryAckMessage_tCC3843B13D5ADA726E5899C1B148AD22D1978742* L_13 = (ClientBinaryAckMessage_tCC3843B13D5ADA726E5899C1B148AD22D1978742*)il2cpp_codegen_object_new(ClientBinaryAckMessage_tCC3843B13D5ADA726E5899C1B148AD22D1978742_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		ClientBinaryAckMessage__ctor_m00F07662EA2AD8BEF310A39A56627315317FB86F(L_13, NULL);
		V_2 = L_13;
		goto IL_0098;
	}

IL_0094:
	{
		// return null;
		V_2 = (RuntimeObject*)NULL;
		goto IL_0098;
	}

IL_0098:
	{
		// }
		RuntimeObject* L_14 = V_2;
		return L_14;
	}
}
// SocketIOClient.Messages.IMessage SocketIOClient.Messages.MessageFactory::CreateMessage(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MessageFactory_CreateMessage_m26BA598936375760D72EC402582261B4687BA088 (int32_t ___0_eio, String_t* ___1_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMessage_tCE27BBB1C80BF1CF37C72AC8E4E2F85EF21D5E56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageType_tA64F8C4E7E9D2A0D2369DED0CCBA4AA5E758C2CC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageType_tA64F8C4E7E9D2A0D2369DED0CCBA4AA5E758C2CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeArray* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	RuntimeObject* V_9 = NULL;
	{
		// var enums = Enum.GetValues(typeof(MessageType));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (MessageType_tA64F8C4E7E9D2A0D2369DED0CCBA4AA5E758C2CC_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeArray* L_2;
		L_2 = Enum_GetValues_m803B9D68C367FAABC5AFB6B5B52775C8A573CEF9(L_1, NULL);
		V_0 = L_2;
		// foreach (MessageType item in enums)
		RuntimeArray* L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = Array_GetEnumerator_mDB7E2AF23F2BDC715D429C71CA3B8D0151F0DC1E(L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0084:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_5 = V_1;
					V_9 = ((RuntimeObject*)IsInst((RuntimeObject*)L_5, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_6 = V_9;
					if (!L_6)
					{
						goto IL_0098;
					}
				}
				{
					RuntimeObject* L_7 = V_9;
					NullCheck(L_7);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
				}

IL_0098:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_007a_1;
			}

IL_001b_1:
			{
				// foreach (MessageType item in enums)
				RuntimeObject* L_8 = V_1;
				NullCheck(L_8);
				RuntimeObject* L_9;
				L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_8);
				V_2 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_9, MessageType_tA64F8C4E7E9D2A0D2369DED0CCBA4AA5E758C2CC_il2cpp_TypeInfo_var))));
				// string prefix = ((int)item).ToString();
				int32_t L_10 = V_2;
				V_4 = L_10;
				String_t* L_11;
				L_11 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_4), NULL);
				V_3 = L_11;
				// if (msg.StartsWith(prefix))
				String_t* L_12 = ___1_msg;
				String_t* L_13 = V_3;
				NullCheck(L_12);
				bool L_14;
				L_14 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_12, L_13, NULL);
				V_5 = L_14;
				bool L_15 = V_5;
				if (!L_15)
				{
					goto IL_0079_1;
				}
			}
			{
				// IMessage result = CreateMessage(item);
				int32_t L_16 = V_2;
				RuntimeObject* L_17;
				L_17 = MessageFactory_CreateMessage_m1C9365C43654B7EB66413303463CF477D8C8525E(L_16, NULL);
				V_6 = L_17;
				// if (result != null)
				RuntimeObject* L_18 = V_6;
				V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_18) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_19 = V_7;
				if (!L_19)
				{
					goto IL_0078_1;
				}
			}
			{
				// result.Eio = eio;
				RuntimeObject* L_20 = V_6;
				int32_t L_21 = ___0_eio;
				NullCheck(L_20);
				InterfaceActionInvoker1< int32_t >::Invoke(7 /* System.Void SocketIOClient.Messages.IMessage::set_Eio(System.Int32) */, IMessage_tCE27BBB1C80BF1CF37C72AC8E4E2F85EF21D5E56_il2cpp_TypeInfo_var, L_20, L_21);
				// result.Read(msg.Substring(prefix.Length));
				RuntimeObject* L_22 = V_6;
				String_t* L_23 = ___1_msg;
				String_t* L_24 = V_3;
				NullCheck(L_24);
				int32_t L_25;
				L_25 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_24, NULL);
				NullCheck(L_23);
				String_t* L_26;
				L_26 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_23, L_25, NULL);
				NullCheck(L_22);
				InterfaceActionInvoker1< String_t* >::Invoke(10 /* System.Void SocketIOClient.Messages.IMessage::Read(System.String) */, IMessage_tCE27BBB1C80BF1CF37C72AC8E4E2F85EF21D5E56_il2cpp_TypeInfo_var, L_22, L_26);
				// return result;
				RuntimeObject* L_27 = V_6;
				V_8 = L_27;
				goto IL_009e;
			}

IL_0078_1:
			{
			}

IL_0079_1:
			{
			}

IL_007a_1:
			{
				// foreach (MessageType item in enums)
				RuntimeObject* L_28 = V_1;
				NullCheck(L_28);
				bool L_29;
				L_29 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_28);
				if (L_29)
				{
					goto IL_001b_1;
				}
			}
			{
				goto IL_0099;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0099:
	{
		// return null;
		V_8 = (RuntimeObject*)NULL;
		goto IL_009e;
	}

IL_009e:
	{
		// }
		RuntimeObject* L_30 = V_8;
		return L_30;
	}
}
// SocketIOClient.Messages.OpenedMessage SocketIOClient.Messages.MessageFactory::CreateOpenedMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OpenedMessage_tB5F1C6F098ABB481932A5728B15765F454E68806* MessageFactory_CreateOpenedMessage_m1942A2CFF8B0D1D5DFA8DFE59E2381955381B013 (String_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenedMessage_tB5F1C6F098ABB481932A5728B15765F454E68806_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OpenedMessage_tB5F1C6F098ABB481932A5728B15765F454E68806* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	OpenedMessage_tB5F1C6F098ABB481932A5728B15765F454E68806* V_3 = NULL;
	{
		// var openedMessage = new OpenedMessage();
		OpenedMessage_tB5F1C6F098ABB481932A5728B15765F454E68806* L_0 = (OpenedMessage_tB5F1C6F098ABB481932A5728B15765F454E68806*)il2cpp_codegen_object_new(OpenedMessage_tB5F1C6F098ABB481932A5728B15765F454E68806_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		OpenedMessage__ctor_mA6BBA13C0536C9C447BCCE1F824BC0677C98AF40(L_0, NULL);
		V_0 = L_0;
		// if (msg[0] == '0')
		String_t* L_1 = ___0_msg;
		NullCheck(L_1);
		Il2CppChar L_2;
		L_2 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, 0, NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)((int32_t)48)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// openedMessage.Eio = 4;
		OpenedMessage_tB5F1C6F098ABB481932A5728B15765F454E68806* L_4 = V_0;
		NullCheck(L_4);
		OpenedMessage_set_Eio_m14878647AF2166F99E3501EAF9CE6400D5CDFC94_inline(L_4, 4, NULL);
		// openedMessage.Read(msg.Substring(1));
		OpenedMessage_tB5F1C6F098ABB481932A5728B15765F454E68806* L_5 = V_0;
		String_t* L_6 = ___0_msg;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_6, 1, NULL);
		NullCheck(L_5);
		OpenedMessage_Read_m1361A5B0C8372AFB9C4FBDB494043018DE112391(L_5, L_7, NULL);
		goto IL_0053;
	}

IL_0030:
	{
		// openedMessage.Eio = 3;
		OpenedMessage_tB5F1C6F098ABB481932A5728B15765F454E68806* L_8 = V_0;
		NullCheck(L_8);
		OpenedMessage_set_Eio_m14878647AF2166F99E3501EAF9CE6400D5CDFC94_inline(L_8, 3, NULL);
		// int index = msg.IndexOf(':');
		String_t* L_9 = ___0_msg;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_9, ((int32_t)58), NULL);
		V_2 = L_10;
		// openedMessage.Read(msg.Substring(index + 2));
		OpenedMessage_tB5F1C6F098ABB481932A5728B15765F454E68806* L_11 = V_0;
		String_t* L_12 = ___0_msg;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		String_t* L_14;
		L_14 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_12, ((int32_t)il2cpp_codegen_add(L_13, 2)), NULL);
		NullCheck(L_11);
		OpenedMessage_Read_m1361A5B0C8372AFB9C4FBDB494043018DE112391(L_11, L_14, NULL);
	}

IL_0053:
	{
		// return openedMessage;
		OpenedMessage_tB5F1C6F098ABB481932A5728B15765F454E68806* L_15 = V_0;
		V_3 = L_15;
		goto IL_0057;
	}

IL_0057:
	{
		// }
		OpenedMessage_tB5F1C6F098ABB481932A5728B15765F454E68806* L_16 = V_3;
		return L_16;
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
// SocketIOClient.Messages.MessageType SocketIOClient.Messages.OpenedMessage::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OpenedMessage_get_Type_m5DC716D32D892A7E25BCAA35427F2E843AA6087D (OpenedMessage_tB5F1C6F098ABB481932A5728B15765F454E68806* __this, const RuntimeMethod* method) 
{
	{
		// public MessageType Type => MessageType.Opened;
		return (int32_t)(0);
	}
}
// System.String SocketIOClient.Messages.OpenedMessage::get_Sid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OpenedMessage_get_Sid_m70E7054563FE268B6060EE827E3A369329C2CE1E (OpenedMessage_tB5F1C6F098ABB481932A5728B15765F454E68806* __this, const RuntimeMethod* method) 
{
	{
		// public string Sid { get; set; }
		String_t* L_0 = __this->___U3CSidU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.OpenedMessage::set_Sid(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenedMessage_set_Sid_mA1895EF3EA084BFFE3E217AF331D34E8B547A368 (OpenedMessage_tB5F1C6F098ABB481932A5728B15765F454E68806* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Sid { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CSidU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSidU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String SocketIOClient.Messages.OpenedMessage::get_Namespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OpenedMessage_get_Namespace_m927C79A6F7E76550430F42C3B21756B514FBFFBB (OpenedMessage_tB5F1C6F098ABB481932A5728B15765F454E68806* __this, const RuntimeMethod* method) 
{
	{
		// public string Namespace { get; set; }
		String_t* L_0 = __this->___U3CNamespaceU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.OpenedMessage::set_Namespace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenedMessage_set_Namespace_mA3A0B43EEF2976FDEF6468A19532DF2AB50DB0A9 (OpenedMessage_tB5F1C6F098ABB481932A5728B15765F454E68806* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Namespace { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CNamespaceU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNamespaceU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<System.String> SocketIOClient.Messages.OpenedMessage::get_Upgrades()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* OpenedMessage_get_Upgrades_m2C3FC959CC2F99F68C54C19F65A63523070D3EAA (OpenedMessage_tB5F1C6F098ABB481932A5728B15765F454E68806* __this, const RuntimeMethod* method) 
{
	{
		// public List<string> Upgrades { get; private set; }
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___U3CUpgradesU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.OpenedMessage::set_Upgrades(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenedMessage_set_Upgrades_mEE39F78D728EC70493E6BE661B5D82156DECE0D4 (OpenedMessage_tB5F1C6F098ABB481932A5728B15765F454E68806* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___0_value, const RuntimeMethod* method) 
{
	{
		// public List<string> Upgrades { get; private set; }
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ___0_value;
		__this->___U3CUpgradesU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUpgradesU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Int32 SocketIOClient.Messages.OpenedMessage::get_PingInterval()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OpenedMessage_get_PingInterval_m4574641AEAB71D3D92CE9386BD5F6C6071CBE0B1 (OpenedMessage_tB5F1C6F098ABB481932A5728B15765F454E68806* __this, const RuntimeMethod* method) 
{
	{
		// public int PingInterval { get; private set; }
		int32_t L_0 = __this->___U3CPingIntervalU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.OpenedMessage::set_PingInterval(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenedMessage_set_PingInterval_mB7120382186ECF1A8017986E27C8B34EDB205947 (OpenedMessage_tB5F1C6F098ABB481932A5728B15765F454E68806* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int PingInterval { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3CPingIntervalU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Int32 SocketIOClient.Messages.OpenedMessage::get_PingTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OpenedMessage_get_PingTimeout_mEEABA2F2CD7579963DB4D02BD2F1FD1C31354546 (OpenedMessage_tB5F1C6F098ABB481932A5728B15765F454E68806* __this, const RuntimeMethod* method) 
{
	{
		// public int PingTimeout { get; private set; }
		int32_t L_0 = __this->___U3CPingTimeoutU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.OpenedMessage::set_PingTimeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenedMessage_set_PingTimeout_m842A5893B483BC2ECA8758EA02BC1447950518E7 (OpenedMessage_tB5F1C6F098ABB481932A5728B15765F454E68806* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int PingTimeout { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3CPingTimeoutU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Collections.Generic.List`1<System.Byte[]> SocketIOClient.Messages.OpenedMessage::get_OutgoingBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* OpenedMessage_get_OutgoingBytes_m669B734810384156C0E074C0EA42477C2A6F3158 (OpenedMessage_tB5F1C6F098ABB481932A5728B15765F454E68806* __this, const RuntimeMethod* method) 
{
	{
		// public List<byte[]> OutgoingBytes { get; set; }
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___U3COutgoingBytesU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.OpenedMessage::set_OutgoingBytes(System.Collections.Generic.List`1<System.Byte[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenedMessage_set_OutgoingBytes_m4E7A6BB4E1420A44639B68DEEE220B78E4487B55 (OpenedMessage_tB5F1C6F098ABB481932A5728B15765F454E68806* __this, List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___0_value, const RuntimeMethod* method) 
{
	{
		// public List<byte[]> OutgoingBytes { get; set; }
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = ___0_value;
		__this->___U3COutgoingBytesU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COutgoingBytesU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<System.Byte[]> SocketIOClient.Messages.OpenedMessage::get_IncomingBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* OpenedMessage_get_IncomingBytes_mE655C1A08CCD0F9DC631EFADA0F0CA4CB9540D55 (OpenedMessage_tB5F1C6F098ABB481932A5728B15765F454E68806* __this, const RuntimeMethod* method) 
{
	{
		// public List<byte[]> IncomingBytes { get; set; }
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___U3CIncomingBytesU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.OpenedMessage::set_IncomingBytes(System.Collections.Generic.List`1<System.Byte[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenedMessage_set_IncomingBytes_mE0D5216C1333B578D36E5A26AA45E786269C93AB (OpenedMessage_tB5F1C6F098ABB481932A5728B15765F454E68806* __this, List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___0_value, const RuntimeMethod* method) 
{
	{
		// public List<byte[]> IncomingBytes { get; set; }
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = ___0_value;
		__this->___U3CIncomingBytesU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIncomingBytesU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.Int32 SocketIOClient.Messages.OpenedMessage::get_BinaryCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OpenedMessage_get_BinaryCount_mC424B4469020CC8CE0EAFF88A7B0D666E3AAFBB2 (OpenedMessage_tB5F1C6F098ABB481932A5728B15765F454E68806* __this, const RuntimeMethod* method) 
{
	{
		// public int BinaryCount { get; }
		int32_t L_0 = __this->___U3CBinaryCountU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Int32 SocketIOClient.Messages.OpenedMessage::get_Eio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OpenedMessage_get_Eio_mFBE32C8C092F714D9E0228AE26C2A49EA4902245 (OpenedMessage_tB5F1C6F098ABB481932A5728B15765F454E68806* __this, const RuntimeMethod* method) 
{
	{
		// public int Eio { get; set; }
		int32_t L_0 = __this->___U3CEioU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.OpenedMessage::set_Eio(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenedMessage_set_Eio_m14878647AF2166F99E3501EAF9CE6400D5CDFC94 (OpenedMessage_tB5F1C6F098ABB481932A5728B15765F454E68806* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int Eio { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CEioU3Ek__BackingField_8 = L_0;
		return;
	}
}
// SocketIOClient.Transport.TransportProtocol SocketIOClient.Messages.OpenedMessage::get_Protocol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OpenedMessage_get_Protocol_mCC6559A66BC9AE22C2122A6F55B6EE5FEB204CB3 (OpenedMessage_tB5F1C6F098ABB481932A5728B15765F454E68806* __this, const RuntimeMethod* method) 
{
	{
		// public TransportProtocol Protocol { get; set; }
		int32_t L_0 = __this->___U3CProtocolU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.OpenedMessage::set_Protocol(SocketIOClient.Transport.TransportProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenedMessage_set_Protocol_mAA67989E6E00D55768EB216ECB314300E5CDEA1A (OpenedMessage_tB5F1C6F098ABB481932A5728B15765F454E68806* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public TransportProtocol Protocol { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CProtocolU3Ek__BackingField_9 = L_0;
		return;
	}
}
// System.Int32 SocketIOClient.Messages.OpenedMessage::GetInt32FromJsonElement(System.Text.Json.JsonElement,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OpenedMessage_GetInt32FromJsonElement_m63C5A4189BEBB440AE86ADECD7D13106A0139974 (OpenedMessage_tB5F1C6F098ABB481932A5728B15765F454E68806* __this, JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 ___0_element, String_t* ___1_msg, String_t* ___2_name, const RuntimeMethod* method) 
{
	JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	uint8_t V_2 = 0;
	uint8_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// var p = element.GetProperty(name);
		String_t* L_0 = ___2_name;
		JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_1;
		L_1 = JsonElement_GetProperty_mB0BB5EA6AC89BB64A9F3BD39EE474AD2D26F72D7((&___0_element), L_0, NULL);
		V_0 = L_1;
		// switch (p.ValueKind)
		uint8_t L_2;
		L_2 = JsonElement_get_ValueKind_m14EFE30FAA112F5199CBD9C42DC9C3AEF6ADA1B5((&V_0), NULL);
		V_3 = L_2;
		uint8_t L_3 = V_3;
		V_2 = L_3;
		uint8_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)3)))
		{
			goto IL_0020;
		}
	}
	{
		goto IL_001a;
	}

IL_001a:
	{
		uint8_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)4)))
		{
			goto IL_002f;
		}
	}
	{
		goto IL_0039;
	}

IL_0020:
	{
		// val = int.Parse(p.GetString());
		String_t* L_6;
		L_6 = JsonElement_GetString_m7AE007D2F1B4016AA1B53BF79B1A1DD1EA42EB94((&V_0), NULL);
		int32_t L_7;
		L_7 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_6, NULL);
		V_1 = L_7;
		// break;
		goto IL_004f;
	}

IL_002f:
	{
		// val = p.GetInt32();
		int32_t L_8;
		L_8 = JsonElement_GetInt32_m21DEB1B177269FFB57C09E9B094DF8C719926A73((&V_0), NULL);
		V_1 = L_8;
		// break;
		goto IL_004f;
	}

IL_0039:
	{
		// throw new ArgumentException($"Invalid message: '{msg}'");
		String_t* L_9 = ___1_msg;
		String_t* L_10;
		L_10 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2D907D2D106A62626644F08AEDF8E2E529B8807E)), L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OpenedMessage_GetInt32FromJsonElement_m63C5A4189BEBB440AE86ADECD7D13106A0139974_RuntimeMethod_var)));
	}

IL_004f:
	{
		// return val;
		int32_t L_12 = V_1;
		V_4 = L_12;
		goto IL_0054;
	}

IL_0054:
	{
		// }
		int32_t L_13 = V_4;
		return L_13;
	}
}
// System.Void SocketIOClient.Messages.OpenedMessage::Read(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenedMessage_Read_m1361A5B0C8372AFB9C4FBDB494043018DE112391 (OpenedMessage_tB5F1C6F098ABB481932A5728B15765F454E68806* __this, String_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25C241457632965CF0415ACE6CB8DB92A7A9ADD9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DDB8A5B0756C4CCEE1051FF32423C7DF524E6C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76DF165E2105C1C5528E7F5AEBFD02D0CC562115);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC578DBE646EFE7777E9734B49B16DE9921FC04E);
		s_Il2CppMethodInitialized = true;
	}
	JsonDocument_tF96A1F7D1D40932B5EA6A97DA06E150B6CBDBE6F* V_0 = NULL;
	JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ArrayEnumerator_t6A32F25D9BE79D9856DA29CBAD749933F2C9C97C V_2;
	memset((&V_2), 0, sizeof(V_2));
	JsonDocumentOptions_t46D96C339522F4321E0FA1BD1DB3ABE2F300299B V_3;
	memset((&V_3), 0, sizeof(V_3));
	JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 V_4;
	memset((&V_4), 0, sizeof(V_4));
	ArrayEnumerator_t6A32F25D9BE79D9856DA29CBAD749933F2C9C97C V_5;
	memset((&V_5), 0, sizeof(V_5));
	JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// var doc = JsonDocument.Parse(msg);
		String_t* L_0 = ___0_msg;
		il2cpp_codegen_initobj((&V_3), sizeof(JsonDocumentOptions_t46D96C339522F4321E0FA1BD1DB3ABE2F300299B));
		JsonDocumentOptions_t46D96C339522F4321E0FA1BD1DB3ABE2F300299B L_1 = V_3;
		JsonDocument_tF96A1F7D1D40932B5EA6A97DA06E150B6CBDBE6F* L_2;
		L_2 = JsonDocument_Parse_m290785DE223664D929CAC7888BAEE7693B60DFC2(L_0, L_1, NULL);
		V_0 = L_2;
		// var root = doc.RootElement;
		JsonDocument_tF96A1F7D1D40932B5EA6A97DA06E150B6CBDBE6F* L_3 = V_0;
		NullCheck(L_3);
		JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_4;
		L_4 = JsonDocument_get_RootElement_m40BA0A219E870618E0E6DD88367CFB484F2C5195(L_3, NULL);
		V_1 = L_4;
		// Sid = root.GetProperty("sid").GetString();
		JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_5;
		L_5 = JsonElement_GetProperty_mB0BB5EA6AC89BB64A9F3BD39EE474AD2D26F72D7((&V_1), _stringLiteral25C241457632965CF0415ACE6CB8DB92A7A9ADD9, NULL);
		V_4 = L_5;
		String_t* L_6;
		L_6 = JsonElement_GetString_m7AE007D2F1B4016AA1B53BF79B1A1DD1EA42EB94((&V_4), NULL);
		OpenedMessage_set_Sid_mA1895EF3EA084BFFE3E217AF331D34E8B547A368_inline(__this, L_6, NULL);
		// PingInterval = GetInt32FromJsonElement(root, msg, "pingInterval");
		JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_7 = V_1;
		String_t* L_8 = ___0_msg;
		int32_t L_9;
		L_9 = OpenedMessage_GetInt32FromJsonElement_m63C5A4189BEBB440AE86ADECD7D13106A0139974(__this, L_7, L_8, _stringLiteral3DDB8A5B0756C4CCEE1051FF32423C7DF524E6C5, NULL);
		OpenedMessage_set_PingInterval_mB7120382186ECF1A8017986E27C8B34EDB205947_inline(__this, L_9, NULL);
		// PingTimeout = GetInt32FromJsonElement(root, msg, "pingTimeout");
		JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_10 = V_1;
		String_t* L_11 = ___0_msg;
		int32_t L_12;
		L_12 = OpenedMessage_GetInt32FromJsonElement_m63C5A4189BEBB440AE86ADECD7D13106A0139974(__this, L_10, L_11, _stringLiteralEC578DBE646EFE7777E9734B49B16DE9921FC04E, NULL);
		OpenedMessage_set_PingTimeout_m842A5893B483BC2ECA8758EA02BC1447950518E7_inline(__this, L_12, NULL);
		// Upgrades = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_13 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_13, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		OpenedMessage_set_Upgrades_mEE39F78D728EC70493E6BE661B5D82156DECE0D4_inline(__this, L_13, NULL);
		// var upgrades = root.GetProperty("upgrades").EnumerateArray();
		JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_14;
		L_14 = JsonElement_GetProperty_mB0BB5EA6AC89BB64A9F3BD39EE474AD2D26F72D7((&V_1), _stringLiteral76DF165E2105C1C5528E7F5AEBFD02D0CC562115, NULL);
		V_4 = L_14;
		ArrayEnumerator_t6A32F25D9BE79D9856DA29CBAD749933F2C9C97C L_15;
		L_15 = JsonElement_EnumerateArray_m9B35AF71578078459E6DAF2D7416D07F327E6E38((&V_4), NULL);
		V_2 = L_15;
		// foreach (var item in upgrades)
		ArrayEnumerator_t6A32F25D9BE79D9856DA29CBAD749933F2C9C97C L_16;
		L_16 = ArrayEnumerator_GetEnumerator_m938DD30A37AEE868DC5935D0CDE254FA6CAFCF97((&V_2), NULL);
		V_5 = L_16;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{// begin finally (depth: 1)
				ArrayEnumerator_Dispose_mD4E9E4516CF8CC2CEA173A59B8407A94271C34D2((&V_5), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a8_1;
			}

IL_008a_1:
			{
				// foreach (var item in upgrades)
				JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_17;
				L_17 = ArrayEnumerator_get_Current_m5F5C30DD80B5F2331BF392DA21D4EB06E050F827((&V_5), NULL);
				V_6 = L_17;
				// Upgrades.Add(item.GetString());
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_18;
				L_18 = OpenedMessage_get_Upgrades_m2C3FC959CC2F99F68C54C19F65A63523070D3EAA_inline(__this, NULL);
				String_t* L_19;
				L_19 = JsonElement_GetString_m7AE007D2F1B4016AA1B53BF79B1A1DD1EA42EB94((&V_6), NULL);
				NullCheck(L_18);
				List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_18, L_19, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
			}

IL_00a8_1:
			{
				// foreach (var item in upgrades)
				bool L_20;
				L_20 = ArrayEnumerator_MoveNext_mF1B0AFD404AA0995A6BE8106CE602684BBE47433((&V_5), NULL);
				if (L_20)
				{
					goto IL_008a_1;
				}
			}
			{
				goto IL_00c2;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00c2:
	{
		// }
		return;
	}
}
// System.String SocketIOClient.Messages.OpenedMessage::Write()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OpenedMessage_Write_m42391F434E5771270FAFE180C881EAEA16E186AE (OpenedMessage_tB5F1C6F098ABB481932A5728B15765F454E68806* __this, const RuntimeMethod* method) 
{
	{
		// throw new NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OpenedMessage_Write_m42391F434E5771270FAFE180C881EAEA16E186AE_RuntimeMethod_var)));
	}
}
// System.Void SocketIOClient.Messages.OpenedMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenedMessage__ctor_mA6BBA13C0536C9C447BCCE1F824BC0677C98AF40 (OpenedMessage_tB5F1C6F098ABB481932A5728B15765F454E68806* __this, const RuntimeMethod* method) 
{
	{
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
// SocketIOClient.Messages.MessageType SocketIOClient.Messages.PingMessage::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PingMessage_get_Type_mE3826599E07629FB2AF07F05DC588F2D168F2C79 (PingMessage_t5E9292201F5D7ED22252C374CBEAA4621E8B30E7* __this, const RuntimeMethod* method) 
{
	{
		// public MessageType Type => MessageType.Ping;
		return (int32_t)(2);
	}
}
// System.Collections.Generic.List`1<System.Byte[]> SocketIOClient.Messages.PingMessage::get_OutgoingBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* PingMessage_get_OutgoingBytes_m15AB42E41851B6449978A78956016F7886C77BE0 (PingMessage_t5E9292201F5D7ED22252C374CBEAA4621E8B30E7* __this, const RuntimeMethod* method) 
{
	{
		// public List<byte[]> OutgoingBytes { get; set; }
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___U3COutgoingBytesU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.PingMessage::set_OutgoingBytes(System.Collections.Generic.List`1<System.Byte[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PingMessage_set_OutgoingBytes_mDBA1F015C90EDB7BF4EE0B3B35A012882FF8C4F9 (PingMessage_t5E9292201F5D7ED22252C374CBEAA4621E8B30E7* __this, List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___0_value, const RuntimeMethod* method) 
{
	{
		// public List<byte[]> OutgoingBytes { get; set; }
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = ___0_value;
		__this->___U3COutgoingBytesU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COutgoingBytesU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<System.Byte[]> SocketIOClient.Messages.PingMessage::get_IncomingBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* PingMessage_get_IncomingBytes_mADDE1706184EA8827FFD8FFE1E1BBE6EAD1694EC (PingMessage_t5E9292201F5D7ED22252C374CBEAA4621E8B30E7* __this, const RuntimeMethod* method) 
{
	{
		// public List<byte[]> IncomingBytes { get; set; }
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___U3CIncomingBytesU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.PingMessage::set_IncomingBytes(System.Collections.Generic.List`1<System.Byte[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PingMessage_set_IncomingBytes_mD9A5691B4248F89F77E5BCF7930C80483C4C0EFC (PingMessage_t5E9292201F5D7ED22252C374CBEAA4621E8B30E7* __this, List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___0_value, const RuntimeMethod* method) 
{
	{
		// public List<byte[]> IncomingBytes { get; set; }
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = ___0_value;
		__this->___U3CIncomingBytesU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIncomingBytesU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Int32 SocketIOClient.Messages.PingMessage::get_BinaryCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PingMessage_get_BinaryCount_mB4A058A97E04E85385F554E83A56FBE3792A339D (PingMessage_t5E9292201F5D7ED22252C374CBEAA4621E8B30E7* __this, const RuntimeMethod* method) 
{
	{
		// public int BinaryCount { get; }
		int32_t L_0 = __this->___U3CBinaryCountU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Int32 SocketIOClient.Messages.PingMessage::get_Eio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PingMessage_get_Eio_m88856771CD7FB99E4C7AA5FC72AC2F035ACB8D6A (PingMessage_t5E9292201F5D7ED22252C374CBEAA4621E8B30E7* __this, const RuntimeMethod* method) 
{
	{
		// public int Eio { get; set; }
		int32_t L_0 = __this->___U3CEioU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.PingMessage::set_Eio(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PingMessage_set_Eio_mB984FBC0F87A710EEDE0CAAABCE666AE1E9374C1 (PingMessage_t5E9292201F5D7ED22252C374CBEAA4621E8B30E7* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int Eio { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CEioU3Ek__BackingField_3 = L_0;
		return;
	}
}
// SocketIOClient.Transport.TransportProtocol SocketIOClient.Messages.PingMessage::get_Protocol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PingMessage_get_Protocol_m1A87D47F1B798B3E6E1416CAAB30DBB9E5ADAAAD (PingMessage_t5E9292201F5D7ED22252C374CBEAA4621E8B30E7* __this, const RuntimeMethod* method) 
{
	{
		// public TransportProtocol Protocol { get; set; }
		int32_t L_0 = __this->___U3CProtocolU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.PingMessage::set_Protocol(SocketIOClient.Transport.TransportProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PingMessage_set_Protocol_m59D4A3F59DF052414D2433CE2407085C5D433103 (PingMessage_t5E9292201F5D7ED22252C374CBEAA4621E8B30E7* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public TransportProtocol Protocol { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CProtocolU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void SocketIOClient.Messages.PingMessage::Read(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PingMessage_Read_mCBC063967B847A4EC7D849DAB9BE27FCDE191EE2 (PingMessage_t5E9292201F5D7ED22252C374CBEAA4621E8B30E7* __this, String_t* ___0_msg, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.String SocketIOClient.Messages.PingMessage::Write()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PingMessage_Write_mAC4E40C7FA55E939551FB2491245900C661C54B8 (PingMessage_t5E9292201F5D7ED22252C374CBEAA4621E8B30E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string Write() => "2";
		return _stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2;
	}
}
// System.Void SocketIOClient.Messages.PingMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PingMessage__ctor_m561334445D0C77F71538B4B8210E1B654D00C820 (PingMessage_t5E9292201F5D7ED22252C374CBEAA4621E8B30E7* __this, const RuntimeMethod* method) 
{
	{
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
// SocketIOClient.Messages.MessageType SocketIOClient.Messages.PongMessage::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PongMessage_get_Type_m0EE0C78B13FA7CC7E281804D5DFACD981F956CC1 (PongMessage_t5FD45D5BAA78BB30EB15C7C4FA84536D61617447* __this, const RuntimeMethod* method) 
{
	{
		// public MessageType Type => MessageType.Pong;
		return (int32_t)(3);
	}
}
// System.Collections.Generic.List`1<System.Byte[]> SocketIOClient.Messages.PongMessage::get_OutgoingBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* PongMessage_get_OutgoingBytes_mC117583C7C813B407ECB7CC4AFC833CC4404E645 (PongMessage_t5FD45D5BAA78BB30EB15C7C4FA84536D61617447* __this, const RuntimeMethod* method) 
{
	{
		// public List<byte[]> OutgoingBytes { get; set; }
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___U3COutgoingBytesU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.PongMessage::set_OutgoingBytes(System.Collections.Generic.List`1<System.Byte[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PongMessage_set_OutgoingBytes_m1C366250C286356F60EAB793B3650615FF61B556 (PongMessage_t5FD45D5BAA78BB30EB15C7C4FA84536D61617447* __this, List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___0_value, const RuntimeMethod* method) 
{
	{
		// public List<byte[]> OutgoingBytes { get; set; }
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = ___0_value;
		__this->___U3COutgoingBytesU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COutgoingBytesU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<System.Byte[]> SocketIOClient.Messages.PongMessage::get_IncomingBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* PongMessage_get_IncomingBytes_m74FD148D19491A0131B78F2CD4267B71F315D948 (PongMessage_t5FD45D5BAA78BB30EB15C7C4FA84536D61617447* __this, const RuntimeMethod* method) 
{
	{
		// public List<byte[]> IncomingBytes { get; set; }
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___U3CIncomingBytesU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.PongMessage::set_IncomingBytes(System.Collections.Generic.List`1<System.Byte[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PongMessage_set_IncomingBytes_mAD5347C77717A067D066C8CCC2D3CFBE0FBD9E09 (PongMessage_t5FD45D5BAA78BB30EB15C7C4FA84536D61617447* __this, List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___0_value, const RuntimeMethod* method) 
{
	{
		// public List<byte[]> IncomingBytes { get; set; }
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = ___0_value;
		__this->___U3CIncomingBytesU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIncomingBytesU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Int32 SocketIOClient.Messages.PongMessage::get_BinaryCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PongMessage_get_BinaryCount_m3948A1618740C6B37A7CD49947A3F1811B7ECF74 (PongMessage_t5FD45D5BAA78BB30EB15C7C4FA84536D61617447* __this, const RuntimeMethod* method) 
{
	{
		// public int BinaryCount { get; }
		int32_t L_0 = __this->___U3CBinaryCountU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Int32 SocketIOClient.Messages.PongMessage::get_Eio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PongMessage_get_Eio_m9B7B28FC3D0F091E605B97232C4D55A6FDBFD91D (PongMessage_t5FD45D5BAA78BB30EB15C7C4FA84536D61617447* __this, const RuntimeMethod* method) 
{
	{
		// public int Eio { get; set; }
		int32_t L_0 = __this->___U3CEioU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.PongMessage::set_Eio(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PongMessage_set_Eio_m2D240E7D760E1BBC4DB61000AEF6691A56B415B5 (PongMessage_t5FD45D5BAA78BB30EB15C7C4FA84536D61617447* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int Eio { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CEioU3Ek__BackingField_3 = L_0;
		return;
	}
}
// SocketIOClient.Transport.TransportProtocol SocketIOClient.Messages.PongMessage::get_Protocol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PongMessage_get_Protocol_m879D2844FC87AC98F2E76C98DE108C2402888201 (PongMessage_t5FD45D5BAA78BB30EB15C7C4FA84536D61617447* __this, const RuntimeMethod* method) 
{
	{
		// public TransportProtocol Protocol { get; set; }
		int32_t L_0 = __this->___U3CProtocolU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.PongMessage::set_Protocol(SocketIOClient.Transport.TransportProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PongMessage_set_Protocol_mF7F70339874B8FDDC3764D62DB905C7C9059CAF4 (PongMessage_t5FD45D5BAA78BB30EB15C7C4FA84536D61617447* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public TransportProtocol Protocol { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CProtocolU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.TimeSpan SocketIOClient.Messages.PongMessage::get_Duration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A PongMessage_get_Duration_mC89D6605E41CE7FB9C7D22B1443F6B00A68A6873 (PongMessage_t5FD45D5BAA78BB30EB15C7C4FA84536D61617447* __this, const RuntimeMethod* method) 
{
	{
		// public TimeSpan Duration { get; set; }
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0 = __this->___U3CDurationU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.PongMessage::set_Duration(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PongMessage_set_Duration_m5389F07BE77A5889541C2EB0C41EA5769F1D1CF4 (PongMessage_t5FD45D5BAA78BB30EB15C7C4FA84536D61617447* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_value, const RuntimeMethod* method) 
{
	{
		// public TimeSpan Duration { get; set; }
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0 = ___0_value;
		__this->___U3CDurationU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Void SocketIOClient.Messages.PongMessage::Read(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PongMessage_Read_mE8338A1C007088BA35A8C0795BB4ABC5F7CA81F6 (PongMessage_t5FD45D5BAA78BB30EB15C7C4FA84536D61617447* __this, String_t* ___0_msg, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.String SocketIOClient.Messages.PongMessage::Write()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PongMessage_Write_m206ACEA2968D74BB5573A9911BC52277342D9A08 (PongMessage_t5FD45D5BAA78BB30EB15C7C4FA84536D61617447* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string Write() => "3";
		return _stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE;
	}
}
// System.Void SocketIOClient.Messages.PongMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PongMessage__ctor_mF0B50B3F1EA1A151A635366CDE97C325D8F1E2F1 (PongMessage_t5FD45D5BAA78BB30EB15C7C4FA84536D61617447* __this, const RuntimeMethod* method) 
{
	{
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
// SocketIOClient.Messages.MessageType SocketIOClient.Messages.ServerAckMessage::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ServerAckMessage_get_Type_mEC137ED06ACE08D6085B8EAD88B695F2E9F615BC (ServerAckMessage_tC5BF3089BD75CD610CF8C015557B164CA0C353A4* __this, const RuntimeMethod* method) 
{
	{
		// public MessageType Type => MessageType.AckMessage;
		return (int32_t)(((int32_t)43));
	}
}
// System.String SocketIOClient.Messages.ServerAckMessage::get_Namespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ServerAckMessage_get_Namespace_m39F4BDD56711214144740D32BC43235E723347AB (ServerAckMessage_tC5BF3089BD75CD610CF8C015557B164CA0C353A4* __this, const RuntimeMethod* method) 
{
	{
		// public string Namespace { get; set; }
		String_t* L_0 = __this->___U3CNamespaceU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.ServerAckMessage::set_Namespace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerAckMessage_set_Namespace_mBB507B5DE802DB7886E61D234341C775479B0E1C (ServerAckMessage_tC5BF3089BD75CD610CF8C015557B164CA0C353A4* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Namespace { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CNamespaceU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNamespaceU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String SocketIOClient.Messages.ServerAckMessage::get_Json()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ServerAckMessage_get_Json_m379C1D589E737C08449415D0870FDCD35C298C26 (ServerAckMessage_tC5BF3089BD75CD610CF8C015557B164CA0C353A4* __this, const RuntimeMethod* method) 
{
	{
		// public string Json { get; set; }
		String_t* L_0 = __this->___U3CJsonU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.ServerAckMessage::set_Json(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerAckMessage_set_Json_mF50817A8B0703C2FF0CC654961CB6418ACADC5E9 (ServerAckMessage_tC5BF3089BD75CD610CF8C015557B164CA0C353A4* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Json { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CJsonU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CJsonU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Int32 SocketIOClient.Messages.ServerAckMessage::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ServerAckMessage_get_Id_m48F4F2A13702377F069C2608DFFFC4705A7BDB13 (ServerAckMessage_tC5BF3089BD75CD610CF8C015557B164CA0C353A4* __this, const RuntimeMethod* method) 
{
	{
		// public int Id { get; set; }
		int32_t L_0 = __this->___U3CIdU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.ServerAckMessage::set_Id(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerAckMessage_set_Id_mE03BFB38F44DBAAB364F78C6BF3DEC333183E739 (ServerAckMessage_tC5BF3089BD75CD610CF8C015557B164CA0C353A4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int Id { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CIdU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Collections.Generic.List`1<System.Byte[]> SocketIOClient.Messages.ServerAckMessage::get_OutgoingBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ServerAckMessage_get_OutgoingBytes_mB175445676C9E98996918863DFEF959EB1F2C415 (ServerAckMessage_tC5BF3089BD75CD610CF8C015557B164CA0C353A4* __this, const RuntimeMethod* method) 
{
	{
		// public List<byte[]> OutgoingBytes { get; set; }
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___U3COutgoingBytesU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.ServerAckMessage::set_OutgoingBytes(System.Collections.Generic.List`1<System.Byte[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerAckMessage_set_OutgoingBytes_m269112E421BA6DB159EDDD869797AD6E1FCD8698 (ServerAckMessage_tC5BF3089BD75CD610CF8C015557B164CA0C353A4* __this, List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___0_value, const RuntimeMethod* method) 
{
	{
		// public List<byte[]> OutgoingBytes { get; set; }
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = ___0_value;
		__this->___U3COutgoingBytesU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COutgoingBytesU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<System.Byte[]> SocketIOClient.Messages.ServerAckMessage::get_IncomingBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ServerAckMessage_get_IncomingBytes_mF858B13BF8B91E83488195E0447AD17B50998AC5 (ServerAckMessage_tC5BF3089BD75CD610CF8C015557B164CA0C353A4* __this, const RuntimeMethod* method) 
{
	{
		// public List<byte[]> IncomingBytes { get; set; }
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___U3CIncomingBytesU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.ServerAckMessage::set_IncomingBytes(System.Collections.Generic.List`1<System.Byte[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerAckMessage_set_IncomingBytes_m126CC4583BA641A85E155B453B5835F74D9A60C7 (ServerAckMessage_tC5BF3089BD75CD610CF8C015557B164CA0C353A4* __this, List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___0_value, const RuntimeMethod* method) 
{
	{
		// public List<byte[]> IncomingBytes { get; set; }
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = ___0_value;
		__this->___U3CIncomingBytesU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIncomingBytesU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Int32 SocketIOClient.Messages.ServerAckMessage::get_BinaryCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ServerAckMessage_get_BinaryCount_mF9C0D51D919FDC593F6B6FF21615932987A29BCF (ServerAckMessage_tC5BF3089BD75CD610CF8C015557B164CA0C353A4* __this, const RuntimeMethod* method) 
{
	{
		// public int BinaryCount { get; }
		int32_t L_0 = __this->___U3CBinaryCountU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Int32 SocketIOClient.Messages.ServerAckMessage::get_Eio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ServerAckMessage_get_Eio_mACDE3B4C07327E40551FAEF447DD652C581D07E1 (ServerAckMessage_tC5BF3089BD75CD610CF8C015557B164CA0C353A4* __this, const RuntimeMethod* method) 
{
	{
		// public int Eio { get; set; }
		int32_t L_0 = __this->___U3CEioU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.ServerAckMessage::set_Eio(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerAckMessage_set_Eio_mA745DCDA3A5A91962E4674DF60AB3EA1F26D05C9 (ServerAckMessage_tC5BF3089BD75CD610CF8C015557B164CA0C353A4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int Eio { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CEioU3Ek__BackingField_6 = L_0;
		return;
	}
}
// SocketIOClient.Transport.TransportProtocol SocketIOClient.Messages.ServerAckMessage::get_Protocol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ServerAckMessage_get_Protocol_m787B70B054C86C6F55703D7EEE7B4EB848DFF66E (ServerAckMessage_tC5BF3089BD75CD610CF8C015557B164CA0C353A4* __this, const RuntimeMethod* method) 
{
	{
		// public TransportProtocol Protocol { get; set; }
		int32_t L_0 = __this->___U3CProtocolU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.ServerAckMessage::set_Protocol(SocketIOClient.Transport.TransportProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerAckMessage_set_Protocol_mDF13714825F9D2C8F9554DAF4AB87492B84540B3 (ServerAckMessage_tC5BF3089BD75CD610CF8C015557B164CA0C353A4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public TransportProtocol Protocol { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CProtocolU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Void SocketIOClient.Messages.ServerAckMessage::Read(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerAckMessage_Read_m44F936813F8F4809070C47E38C72146030F52EF5 (ServerAckMessage_tC5BF3089BD75CD610CF8C015557B164CA0C353A4* __this, String_t* ___0_msg, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.String SocketIOClient.Messages.ServerAckMessage::Write()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ServerAckMessage_Write_m483AF1BCBAC4E433E100EBDAF5087FAA275748FC (ServerAckMessage_tC5BF3089BD75CD610CF8C015557B164CA0C353A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B4F028A4070094FCA4E7762E2C376A65E2D59C6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FE7B9E4379FA727669A5DD2E2B5591AE8C6D6FD);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	String_t* V_3 = NULL;
	{
		// var builder = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		// builder.Append("43");
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, _stringLiteral8FE7B9E4379FA727669A5DD2E2B5591AE8C6D6FD, NULL);
		// if (!string.IsNullOrEmpty(Namespace))
		String_t* L_3;
		L_3 = ServerAckMessage_get_Namespace_m39F4BDD56711214144740D32BC43235E723347AB_inline(__this, NULL);
		bool L_4;
		L_4 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_3, NULL);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		// builder.Append(Namespace).Append(',');
		StringBuilder_t* L_6 = V_0;
		String_t* L_7;
		L_7 = ServerAckMessage_get_Namespace_m39F4BDD56711214144740D32BC43235E723347AB_inline(__this, NULL);
		NullCheck(L_6);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_6, L_7, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_8, ((int32_t)44), NULL);
	}

IL_003b:
	{
		// builder.Append(Id);
		StringBuilder_t* L_10 = V_0;
		int32_t L_11;
		L_11 = ServerAckMessage_get_Id_m48F4F2A13702377F069C2608DFFFC4705A7BDB13_inline(__this, NULL);
		NullCheck(L_10);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA(L_10, L_11, NULL);
		// if (string.IsNullOrEmpty(Json))
		String_t* L_13;
		L_13 = ServerAckMessage_get_Json_m379C1D589E737C08449415D0870FDCD35C298C26_inline(__this, NULL);
		bool L_14;
		L_14 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_13, NULL);
		V_2 = L_14;
		bool L_15 = V_2;
		if (!L_15)
		{
			goto IL_0067;
		}
	}
	{
		// builder.Append("[]");
		StringBuilder_t* L_16 = V_0;
		NullCheck(L_16);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_16, _stringLiteral5B4F028A4070094FCA4E7762E2C376A65E2D59C6, NULL);
		goto IL_0076;
	}

IL_0067:
	{
		// builder.Append(Json);
		StringBuilder_t* L_18 = V_0;
		String_t* L_19;
		L_19 = ServerAckMessage_get_Json_m379C1D589E737C08449415D0870FDCD35C298C26_inline(__this, NULL);
		NullCheck(L_18);
		StringBuilder_t* L_20;
		L_20 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_18, L_19, NULL);
	}

IL_0076:
	{
		// return builder.ToString();
		StringBuilder_t* L_21 = V_0;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_21);
		V_3 = L_22;
		goto IL_007f;
	}

IL_007f:
	{
		// }
		String_t* L_23 = V_3;
		return L_23;
	}
}
// System.Void SocketIOClient.Messages.ServerAckMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerAckMessage__ctor_m411D7690FB2CF370BEDC32765B081377C7B5B383 (ServerAckMessage_tC5BF3089BD75CD610CF8C015557B164CA0C353A4* __this, const RuntimeMethod* method) 
{
	{
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
// SocketIOClient.Messages.MessageType SocketIOClient.Messages.ServerBinaryAckMessage::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ServerBinaryAckMessage_get_Type_m41206DB8F7BB4561F7FD61D3DE242D70E678B30B (ServerBinaryAckMessage_tF981FEA898A346EA4D64137EA3E3B4A4F30E6D24* __this, const RuntimeMethod* method) 
{
	{
		// public MessageType Type => MessageType.BinaryAckMessage;
		return (int32_t)(((int32_t)46));
	}
}
// System.String SocketIOClient.Messages.ServerBinaryAckMessage::get_Namespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ServerBinaryAckMessage_get_Namespace_m25C4F0C08C7377EC866EAB212CA3D1E94841478C (ServerBinaryAckMessage_tF981FEA898A346EA4D64137EA3E3B4A4F30E6D24* __this, const RuntimeMethod* method) 
{
	{
		// public string Namespace { get; set; }
		String_t* L_0 = __this->___U3CNamespaceU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.ServerBinaryAckMessage::set_Namespace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerBinaryAckMessage_set_Namespace_m00FD6DD6A726AECDB3769F24CF7059BF5269C558 (ServerBinaryAckMessage_tF981FEA898A346EA4D64137EA3E3B4A4F30E6D24* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Namespace { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CNamespaceU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNamespaceU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<System.Text.Json.JsonElement> SocketIOClient.Messages.ServerBinaryAckMessage::get_JsonElements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6* ServerBinaryAckMessage_get_JsonElements_mE62DAF458763D806802DDE1F7F7259E61B9408F8 (ServerBinaryAckMessage_tF981FEA898A346EA4D64137EA3E3B4A4F30E6D24* __this, const RuntimeMethod* method) 
{
	{
		// public List<JsonElement> JsonElements { get; set; }
		List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6* L_0 = __this->___U3CJsonElementsU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.ServerBinaryAckMessage::set_JsonElements(System.Collections.Generic.List`1<System.Text.Json.JsonElement>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerBinaryAckMessage_set_JsonElements_mB879DE84A8FDFC713F6AFFBB729CCD2C067386C1 (ServerBinaryAckMessage_tF981FEA898A346EA4D64137EA3E3B4A4F30E6D24* __this, List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6* ___0_value, const RuntimeMethod* method) 
{
	{
		// public List<JsonElement> JsonElements { get; set; }
		List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6* L_0 = ___0_value;
		__this->___U3CJsonElementsU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CJsonElementsU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String SocketIOClient.Messages.ServerBinaryAckMessage::get_Json()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ServerBinaryAckMessage_get_Json_m91F2D7AA896F9DF424579839453F32DF868E714E (ServerBinaryAckMessage_tF981FEA898A346EA4D64137EA3E3B4A4F30E6D24* __this, const RuntimeMethod* method) 
{
	{
		// public string Json { get; set; }
		String_t* L_0 = __this->___U3CJsonU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.ServerBinaryAckMessage::set_Json(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerBinaryAckMessage_set_Json_m5ACF1C338B07FEAC533C38AF8EDB34A9AD7E468D (ServerBinaryAckMessage_tF981FEA898A346EA4D64137EA3E3B4A4F30E6D24* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Json { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CJsonU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CJsonU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Int32 SocketIOClient.Messages.ServerBinaryAckMessage::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ServerBinaryAckMessage_get_Id_mCE84C17E170DBED3E2EF2BF0EA6796AEFE2672EF (ServerBinaryAckMessage_tF981FEA898A346EA4D64137EA3E3B4A4F30E6D24* __this, const RuntimeMethod* method) 
{
	{
		// public int Id { get; set; }
		int32_t L_0 = __this->___U3CIdU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.ServerBinaryAckMessage::set_Id(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerBinaryAckMessage_set_Id_mCA1A57F12DC012B1FCF8841BD399A4E2B200C09B (ServerBinaryAckMessage_tF981FEA898A346EA4D64137EA3E3B4A4F30E6D24* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int Id { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CIdU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Int32 SocketIOClient.Messages.ServerBinaryAckMessage::get_BinaryCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ServerBinaryAckMessage_get_BinaryCount_m34F17CB397C650208607B7798BD49657E8898F74 (ServerBinaryAckMessage_tF981FEA898A346EA4D64137EA3E3B4A4F30E6D24* __this, const RuntimeMethod* method) 
{
	{
		// public int BinaryCount { get; }
		int32_t L_0 = __this->___U3CBinaryCountU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Int32 SocketIOClient.Messages.ServerBinaryAckMessage::get_Eio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ServerBinaryAckMessage_get_Eio_m1E570F73E8C0FD6144F3C10B5CBF534AA643E1D5 (ServerBinaryAckMessage_tF981FEA898A346EA4D64137EA3E3B4A4F30E6D24* __this, const RuntimeMethod* method) 
{
	{
		// public int Eio { get; set; }
		int32_t L_0 = __this->___U3CEioU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.ServerBinaryAckMessage::set_Eio(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerBinaryAckMessage_set_Eio_m4873318669CFEF3E03DDFD977578A10F0D420E7D (ServerBinaryAckMessage_tF981FEA898A346EA4D64137EA3E3B4A4F30E6D24* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int Eio { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CEioU3Ek__BackingField_5 = L_0;
		return;
	}
}
// SocketIOClient.Transport.TransportProtocol SocketIOClient.Messages.ServerBinaryAckMessage::get_Protocol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ServerBinaryAckMessage_get_Protocol_m3E73F4AA6FE414854C9D98D60D56CD706ECFC699 (ServerBinaryAckMessage_tF981FEA898A346EA4D64137EA3E3B4A4F30E6D24* __this, const RuntimeMethod* method) 
{
	{
		// public TransportProtocol Protocol { get; set; }
		int32_t L_0 = __this->___U3CProtocolU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.ServerBinaryAckMessage::set_Protocol(SocketIOClient.Transport.TransportProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerBinaryAckMessage_set_Protocol_m05951D5B6E9D44640D9F6CE0C21EFE7492C83F97 (ServerBinaryAckMessage_tF981FEA898A346EA4D64137EA3E3B4A4F30E6D24* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public TransportProtocol Protocol { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CProtocolU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Collections.Generic.List`1<System.Byte[]> SocketIOClient.Messages.ServerBinaryAckMessage::get_OutgoingBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ServerBinaryAckMessage_get_OutgoingBytes_mD92D74D4D3FEEFA517761F7EA9C35958F9F39869 (ServerBinaryAckMessage_tF981FEA898A346EA4D64137EA3E3B4A4F30E6D24* __this, const RuntimeMethod* method) 
{
	{
		// public List<byte[]> OutgoingBytes { get; set; }
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___U3COutgoingBytesU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.ServerBinaryAckMessage::set_OutgoingBytes(System.Collections.Generic.List`1<System.Byte[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerBinaryAckMessage_set_OutgoingBytes_mB099B4FAF0E6AFFFE42D9F9D67D4F6F892CD89A5 (ServerBinaryAckMessage_tF981FEA898A346EA4D64137EA3E3B4A4F30E6D24* __this, List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___0_value, const RuntimeMethod* method) 
{
	{
		// public List<byte[]> OutgoingBytes { get; set; }
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = ___0_value;
		__this->___U3COutgoingBytesU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COutgoingBytesU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<System.Byte[]> SocketIOClient.Messages.ServerBinaryAckMessage::get_IncomingBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ServerBinaryAckMessage_get_IncomingBytes_m5BAB2059DF5A108A4C43D9BCF2D48B272A42037C (ServerBinaryAckMessage_tF981FEA898A346EA4D64137EA3E3B4A4F30E6D24* __this, const RuntimeMethod* method) 
{
	{
		// public List<byte[]> IncomingBytes { get; set; }
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___U3CIncomingBytesU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void SocketIOClient.Messages.ServerBinaryAckMessage::set_IncomingBytes(System.Collections.Generic.List`1<System.Byte[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerBinaryAckMessage_set_IncomingBytes_m089CB5F17E7C09F9D55B471C40ECAA498AF85720 (ServerBinaryAckMessage_tF981FEA898A346EA4D64137EA3E3B4A4F30E6D24* __this, List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___0_value, const RuntimeMethod* method) 
{
	{
		// public List<byte[]> IncomingBytes { get; set; }
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = ___0_value;
		__this->___U3CIncomingBytesU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIncomingBytesU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
// System.Void SocketIOClient.Messages.ServerBinaryAckMessage::Read(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerBinaryAckMessage_Read_mAC9DCC4097F1547AD39D599A808FDDBCA4B5FB7B (ServerBinaryAckMessage_tF981FEA898A346EA4D64137EA3E3B4A4F30E6D24* __this, String_t* ___0_msg, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.String SocketIOClient.Messages.ServerBinaryAckMessage::Write()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ServerBinaryAckMessage_Write_m9B08F78F23446C6C5BB31E3871D9195D1BA035B9 (ServerBinaryAckMessage_tF981FEA898A346EA4D64137EA3E3B4A4F30E6D24* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m88FEB2D94E35C258B61F53400F7CA20E99A7DAD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B4F028A4070094FCA4E7762E2C376A65E2D59C6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral656F9736477335AF0B68DB002FCA2CF39D90BE17);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	String_t* V_3 = NULL;
	{
		// var builder = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		// builder
		//     .Append("46")
		//     .Append(OutgoingBytes.Count)
		//     .Append('-');
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, _stringLiteral656F9736477335AF0B68DB002FCA2CF39D90BE17, NULL);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_3;
		L_3 = ServerBinaryAckMessage_get_OutgoingBytes_mD92D74D4D3FEEFA517761F7EA9C35958F9F39869_inline(__this, NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m88FEB2D94E35C258B61F53400F7CA20E99A7DAD3_inline(L_3, List_1_get_Count_m88FEB2D94E35C258B61F53400F7CA20E99A7DAD3_RuntimeMethod_var);
		NullCheck(L_2);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA(L_2, L_4, NULL);
		NullCheck(L_5);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_5, ((int32_t)45), NULL);
		// if (!string.IsNullOrEmpty(Namespace))
		String_t* L_7;
		L_7 = ServerBinaryAckMessage_get_Namespace_m25C4F0C08C7377EC866EAB212CA3D1E94841478C_inline(__this, NULL);
		bool L_8;
		L_8 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_7, NULL);
		V_1 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0052;
		}
	}
	{
		// builder.Append(Namespace).Append(',');
		StringBuilder_t* L_10 = V_0;
		String_t* L_11;
		L_11 = ServerBinaryAckMessage_get_Namespace_m25C4F0C08C7377EC866EAB212CA3D1E94841478C_inline(__this, NULL);
		NullCheck(L_10);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_10, L_11, NULL);
		NullCheck(L_12);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_12, ((int32_t)44), NULL);
	}

IL_0052:
	{
		// builder.Append(Id);
		StringBuilder_t* L_14 = V_0;
		int32_t L_15;
		L_15 = ServerBinaryAckMessage_get_Id_mCE84C17E170DBED3E2EF2BF0EA6796AEFE2672EF_inline(__this, NULL);
		NullCheck(L_14);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA(L_14, L_15, NULL);
		// if (string.IsNullOrEmpty(Json))
		String_t* L_17;
		L_17 = ServerBinaryAckMessage_get_Json_m91F2D7AA896F9DF424579839453F32DF868E714E_inline(__this, NULL);
		bool L_18;
		L_18 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_17, NULL);
		V_2 = L_18;
		bool L_19 = V_2;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// builder.Append("[]");
		StringBuilder_t* L_20 = V_0;
		NullCheck(L_20);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_20, _stringLiteral5B4F028A4070094FCA4E7762E2C376A65E2D59C6, NULL);
		goto IL_008d;
	}

IL_007e:
	{
		// builder.Append(Json);
		StringBuilder_t* L_22 = V_0;
		String_t* L_23;
		L_23 = ServerBinaryAckMessage_get_Json_m91F2D7AA896F9DF424579839453F32DF868E714E_inline(__this, NULL);
		NullCheck(L_22);
		StringBuilder_t* L_24;
		L_24 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_22, L_23, NULL);
	}

IL_008d:
	{
		// return builder.ToString();
		StringBuilder_t* L_25 = V_0;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_25);
		V_3 = L_26;
		goto IL_0096;
	}

IL_0096:
	{
		// }
		String_t* L_27 = V_3;
		return L_27;
	}
}
// System.Void SocketIOClient.Messages.ServerBinaryAckMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerBinaryAckMessage__ctor_mBA0CBD27597407B161B59EA5CB14FBF87FA085F0 (ServerBinaryAckMessage_tF981FEA898A346EA4D64137EA3E3B4A4F30E6D24* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void SocketIOClient.JsonSerializer.ByteArrayConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteArrayConverter__ctor_mEE94AE384FABDDDB6FDB6765EC35C48128E31D7D (ByteArrayConverter_t63039C8D605504CCABFF7783367282E961DDC022* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConverter_1__ctor_mA025D83F77A55978B2D5C037B52F542FA9F38BC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ByteArrayConverter()
		JsonConverter_1__ctor_mA025D83F77A55978B2D5C037B52F542FA9F38BC4(__this, JsonConverter_1__ctor_mA025D83F77A55978B2D5C037B52F542FA9F38BC4_RuntimeMethod_var);
		// Bytes = new List<byte[]>();
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*)il2cpp_codegen_object_new(List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4(L_0, List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		__this->___U3CBytesU3Ek__BackingField_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBytesU3Ek__BackingField_11), (void*)L_0);
		// }
		return;
	}
}
// System.Collections.Generic.List`1<System.Byte[]> SocketIOClient.JsonSerializer.ByteArrayConverter::get_Bytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ByteArrayConverter_get_Bytes_mB2301559AE1A615772BE852AF29A909F2CDA05C2 (ByteArrayConverter_t63039C8D605504CCABFF7783367282E961DDC022* __this, const RuntimeMethod* method) 
{
	{
		// public List<byte[]> Bytes { get; }
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___U3CBytesU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Byte[] SocketIOClient.JsonSerializer.ByteArrayConverter::Read(System.Text.Json.Utf8JsonReader&,System.Type,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ByteArrayConverter_Read_m7B8DC211D854F1107D331F797C2ABDD72AD906BD (ByteArrayConverter_t63039C8D605504CCABFF7783367282E961DDC022* __this, Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* ___0_reader, Type_t* ___1_typeToConvert, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___2_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2C6A207D8824FE873045A66C942593AE67D90CA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral267B04B1E250980AAB9D2E38F155C7C77365B820);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral867BCADE6C5A0BC7053FD765A6324C366FFC2CA2);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_6 = NULL;
	int32_t G_B4_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B12_0 = 0;
	{
		// byte[] bytes = null;
		V_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		// if (reader.TokenType == JsonTokenType.StartObject)
		Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* L_0 = ___0_reader;
		uint8_t L_1;
		L_1 = Utf8JsonReader_get_TokenType_mCE6BF109ADE03F304F8C16D68AF519C5CFBA631A_inline(L_0, NULL);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_00ad;
		}
	}
	{
		// reader.Read();
		Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* L_3 = ___0_reader;
		bool L_4;
		L_4 = Utf8JsonReader_Read_mD210940FACF194A87F83C11308A87397B77DCB07(L_3, NULL);
		// if (reader.TokenType == JsonTokenType.PropertyName && reader.GetString() == "_placeholder")
		Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* L_5 = ___0_reader;
		uint8_t L_6;
		L_6 = Utf8JsonReader_get_TokenType_mCE6BF109ADE03F304F8C16D68AF519C5CFBA631A_inline(L_5, NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)5))))
		{
			goto IL_0036;
		}
	}
	{
		Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* L_7 = ___0_reader;
		String_t* L_8;
		L_8 = Utf8JsonReader_GetString_m3AA74B2BD8AE8211C2F45748764CA0F8D0772F11(L_7, NULL);
		bool L_9;
		L_9 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_8, _stringLiteral867BCADE6C5A0BC7053FD765A6324C366FFC2CA2, NULL);
		G_B4_0 = ((int32_t)(L_9));
		goto IL_0037;
	}

IL_0036:
	{
		G_B4_0 = 0;
	}

IL_0037:
	{
		V_2 = (bool)G_B4_0;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_00ac;
		}
	}
	{
		// reader.Read();
		Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* L_11 = ___0_reader;
		bool L_12;
		L_12 = Utf8JsonReader_Read_mD210940FACF194A87F83C11308A87397B77DCB07(L_11, NULL);
		// if (reader.TokenType == JsonTokenType.True && reader.GetBoolean())
		Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* L_13 = ___0_reader;
		uint8_t L_14;
		L_14 = Utf8JsonReader_get_TokenType_mCE6BF109ADE03F304F8C16D68AF519C5CFBA631A_inline(L_13, NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_0055;
		}
	}
	{
		Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* L_15 = ___0_reader;
		bool L_16;
		L_16 = Utf8JsonReader_GetBoolean_m4A0CCA2B3FF77D11CDEF65077936B5CA951962C6(L_15, NULL);
		G_B8_0 = ((int32_t)(L_16));
		goto IL_0056;
	}

IL_0055:
	{
		G_B8_0 = 0;
	}

IL_0056:
	{
		V_3 = (bool)G_B8_0;
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_00ab;
		}
	}
	{
		// reader.Read();
		Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* L_18 = ___0_reader;
		bool L_19;
		L_19 = Utf8JsonReader_Read_mD210940FACF194A87F83C11308A87397B77DCB07(L_18, NULL);
		// if (reader.TokenType == JsonTokenType.PropertyName && reader.GetString() == "num")
		Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* L_20 = ___0_reader;
		uint8_t L_21;
		L_21 = Utf8JsonReader_get_TokenType_mCE6BF109ADE03F304F8C16D68AF519C5CFBA631A_inline(L_20, NULL);
		if ((!(((uint32_t)L_21) == ((uint32_t)5))))
		{
			goto IL_007d;
		}
	}
	{
		Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* L_22 = ___0_reader;
		String_t* L_23;
		L_23 = Utf8JsonReader_GetString_m3AA74B2BD8AE8211C2F45748764CA0F8D0772F11(L_22, NULL);
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral267B04B1E250980AAB9D2E38F155C7C77365B820, NULL);
		G_B12_0 = ((int32_t)(L_24));
		goto IL_007e;
	}

IL_007d:
	{
		G_B12_0 = 0;
	}

IL_007e:
	{
		V_4 = (bool)G_B12_0;
		bool L_25 = V_4;
		if (!L_25)
		{
			goto IL_00aa;
		}
	}
	{
		// reader.Read();
		Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* L_26 = ___0_reader;
		bool L_27;
		L_27 = Utf8JsonReader_Read_mD210940FACF194A87F83C11308A87397B77DCB07(L_26, NULL);
		// int num = reader.GetInt32();
		Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* L_28 = ___0_reader;
		int32_t L_29;
		L_29 = Utf8JsonReader_GetInt32_m9994A31A6BBC68EC25BFEA942924684639E0A350(L_28, NULL);
		V_5 = L_29;
		// bytes = Bytes[num];
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_30;
		L_30 = ByteArrayConverter_get_Bytes_mB2301559AE1A615772BE852AF29A909F2CDA05C2_inline(__this, NULL);
		int32_t L_31 = V_5;
		NullCheck(L_30);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32;
		L_32 = List_1_get_Item_m2C6A207D8824FE873045A66C942593AE67D90CA6(L_30, L_31, List_1_get_Item_m2C6A207D8824FE873045A66C942593AE67D90CA6_RuntimeMethod_var);
		V_0 = L_32;
		// reader.Read();
		Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* L_33 = ___0_reader;
		bool L_34;
		L_34 = Utf8JsonReader_Read_mD210940FACF194A87F83C11308A87397B77DCB07(L_33, NULL);
	}

IL_00aa:
	{
	}

IL_00ab:
	{
	}

IL_00ac:
	{
	}

IL_00ad:
	{
		// return bytes;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_0;
		V_6 = L_35;
		goto IL_00b2;
	}

IL_00b2:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = V_6;
		return L_36;
	}
}
// System.Void SocketIOClient.JsonSerializer.ByteArrayConverter::Write(System.Text.Json.Utf8JsonWriter,System.Byte[],System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteArrayConverter_Write_mDE41D8837C0B131377303E7294B92DBB9E2A6C8F (ByteArrayConverter_t63039C8D605504CCABFF7783367282E961DDC022* __this, Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* ___0_writer, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_value, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___2_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m88FEB2D94E35C258B61F53400F7CA20E99A7DAD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral267B04B1E250980AAB9D2E38F155C7C77365B820);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral867BCADE6C5A0BC7053FD765A6324C366FFC2CA2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Bytes.Add(value);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0;
		L_0 = ByteArrayConverter_get_Bytes_mB2301559AE1A615772BE852AF29A909F2CDA05C2_inline(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___1_value;
		NullCheck(L_0);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_0, L_1, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		// writer.WriteStartObject();
		Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* L_2 = ___0_writer;
		NullCheck(L_2);
		Utf8JsonWriter_WriteStartObject_mA1EF1E8CCF738E49D16F99CDA5F1F9E6868D88B2(L_2, NULL);
		// writer.WritePropertyName("_placeholder");
		Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* L_3 = ___0_writer;
		NullCheck(L_3);
		Utf8JsonWriter_WritePropertyName_m996942A298DED618DCBE28108F27E373B2E5D95F(L_3, _stringLiteral867BCADE6C5A0BC7053FD765A6324C366FFC2CA2, NULL);
		// writer.WriteBooleanValue(true);
		Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* L_4 = ___0_writer;
		NullCheck(L_4);
		Utf8JsonWriter_WriteBooleanValue_mA04EC87538557C4D69DA626CE79295F85A722BFF(L_4, (bool)1, NULL);
		// writer.WritePropertyName("num");
		Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* L_5 = ___0_writer;
		NullCheck(L_5);
		Utf8JsonWriter_WritePropertyName_m996942A298DED618DCBE28108F27E373B2E5D95F(L_5, _stringLiteral267B04B1E250980AAB9D2E38F155C7C77365B820, NULL);
		// writer.WriteNumberValue(Bytes.Count - 1);
		Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* L_6 = ___0_writer;
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_7;
		L_7 = ByteArrayConverter_get_Bytes_mB2301559AE1A615772BE852AF29A909F2CDA05C2_inline(__this, NULL);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m88FEB2D94E35C258B61F53400F7CA20E99A7DAD3_inline(L_7, List_1_get_Count_m88FEB2D94E35C258B61F53400F7CA20E99A7DAD3_RuntimeMethod_var);
		NullCheck(L_6);
		Utf8JsonWriter_WriteNumberValue_m8A2EB2DC02416A0F4B0CA97AFA70B873FBCC3B7D(L_6, ((int32_t)il2cpp_codegen_subtract(L_8, 1)), NULL);
		// writer.WriteEndObject();
		Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* L_9 = ___0_writer;
		NullCheck(L_9);
		Utf8JsonWriter_WriteEndObject_mCBB8ED094BB4B5196B0D6496B2C8EC2A40C71EFA(L_9, NULL);
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
// System.String SocketIOClient.JsonSerializer.JsonSerializeResult::get_Json()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonSerializeResult_get_Json_m8EBDACC9B70104E921C32989053922E8A74BB946 (JsonSerializeResult_t60648F85702617E3385A7DC76FAA88A6136ADF5F* __this, const RuntimeMethod* method) 
{
	{
		// public string Json { get; set; }
		String_t* L_0 = __this->___U3CJsonU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void SocketIOClient.JsonSerializer.JsonSerializeResult::set_Json(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializeResult_set_Json_m5ADFFFEE83E72D33DFA0C3DCB977D61FD04C6021 (JsonSerializeResult_t60648F85702617E3385A7DC76FAA88A6136ADF5F* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Json { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CJsonU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CJsonU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IList`1<System.Byte[]> SocketIOClient.JsonSerializer.JsonSerializeResult::get_Bytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonSerializeResult_get_Bytes_mD77EEA5C48CD03241E36BFE38BBE752C2D93D258 (JsonSerializeResult_t60648F85702617E3385A7DC76FAA88A6136ADF5F* __this, const RuntimeMethod* method) 
{
	{
		// public IList<byte[]> Bytes { get; set; }
		RuntimeObject* L_0 = __this->___U3CBytesU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void SocketIOClient.JsonSerializer.JsonSerializeResult::set_Bytes(System.Collections.Generic.IList`1<System.Byte[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializeResult_set_Bytes_mCE2E79B6CE26A96823CB38D516C1F835123B24C1 (JsonSerializeResult_t60648F85702617E3385A7DC76FAA88A6136ADF5F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public IList<byte[]> Bytes { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CBytesU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBytesU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void SocketIOClient.JsonSerializer.JsonSerializeResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializeResult__ctor_m3348FDBF55D2BB8A31F72A3A5AF7E48338DBCA18 (JsonSerializeResult_t60648F85702617E3385A7DC76FAA88A6136ADF5F* __this, const RuntimeMethod* method) 
{
	{
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
// SocketIOClient.JsonSerializer.JsonSerializeResult SocketIOClient.JsonSerializer.SystemTextJsonSerializer::Serialize(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonSerializeResult_t60648F85702617E3385A7DC76FAA88A6136ADF5F* SystemTextJsonSerializer_Serialize_m4976E16CD6C368D70136986644409DA409554ABA (SystemTextJsonSerializer_tE1389CB2086D14697EC05627113C613450216EDF* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteArrayConverter_t63039C8D605504CCABFF7783367282E961DDC022_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t84B1DF09CB47A3D55FF1908FF2D6247CF70D44A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializeResult_t60648F85702617E3385A7DC76FAA88A6136ADF5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializer_Serialize_TisObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_mE3922625E6144137A8BC28E92E96426CB4A38BC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializer_tDA5AEC22B45A1019EBFFE2599660A1B9B53BB083_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteArrayConverter_t63039C8D605504CCABFF7783367282E961DDC022* V_0 = NULL;
	JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* V_1 = NULL;
	String_t* V_2 = NULL;
	JsonSerializeResult_t60648F85702617E3385A7DC76FAA88A6136ADF5F* V_3 = NULL;
	{
		// var converter = new ByteArrayConverter();
		ByteArrayConverter_t63039C8D605504CCABFF7783367282E961DDC022* L_0 = (ByteArrayConverter_t63039C8D605504CCABFF7783367282E961DDC022*)il2cpp_codegen_object_new(ByteArrayConverter_t63039C8D605504CCABFF7783367282E961DDC022_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ByteArrayConverter__ctor_mEE94AE384FABDDDB6FDB6765EC35C48128E31D7D(L_0, NULL);
		V_0 = L_0;
		// var options = GetOptions();
		JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* L_1;
		L_1 = SystemTextJsonSerializer_GetOptions_m99BCF09033E8F11F799B3777C45CB6F5569D4543(__this, NULL);
		V_1 = L_1;
		// options.Converters.Add(converter);
		JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* L_2 = V_1;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = JsonSerializerOptions_get_Converters_m8E101768CD4E9529474EB92573A0E68E8FBA92A2_inline(L_2, NULL);
		ByteArrayConverter_t63039C8D605504CCABFF7783367282E961DDC022* L_4 = V_0;
		NullCheck(L_3);
		InterfaceActionInvoker1< JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Text.Json.Serialization.JsonConverter>::Add(T) */, ICollection_1_t84B1DF09CB47A3D55FF1908FF2D6247CF70D44A5_il2cpp_TypeInfo_var, L_3, L_4);
		// string json = System.Text.Json.JsonSerializer.Serialize(data, options);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = ___0_data;
		JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* L_6 = V_1;
		il2cpp_codegen_runtime_class_init_inline(JsonSerializer_tDA5AEC22B45A1019EBFFE2599660A1B9B53BB083_il2cpp_TypeInfo_var);
		String_t* L_7;
		L_7 = JsonSerializer_Serialize_TisObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_mE3922625E6144137A8BC28E92E96426CB4A38BC1(L_5, L_6, JsonSerializer_Serialize_TisObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_mE3922625E6144137A8BC28E92E96426CB4A38BC1_RuntimeMethod_var);
		V_2 = L_7;
		// return new JsonSerializeResult
		// {
		//     Json = json,
		//     Bytes = converter.Bytes
		// };
		JsonSerializeResult_t60648F85702617E3385A7DC76FAA88A6136ADF5F* L_8 = (JsonSerializeResult_t60648F85702617E3385A7DC76FAA88A6136ADF5F*)il2cpp_codegen_object_new(JsonSerializeResult_t60648F85702617E3385A7DC76FAA88A6136ADF5F_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		JsonSerializeResult__ctor_m3348FDBF55D2BB8A31F72A3A5AF7E48338DBCA18(L_8, NULL);
		JsonSerializeResult_t60648F85702617E3385A7DC76FAA88A6136ADF5F* L_9 = L_8;
		String_t* L_10 = V_2;
		NullCheck(L_9);
		JsonSerializeResult_set_Json_m5ADFFFEE83E72D33DFA0C3DCB977D61FD04C6021_inline(L_9, L_10, NULL);
		JsonSerializeResult_t60648F85702617E3385A7DC76FAA88A6136ADF5F* L_11 = L_9;
		ByteArrayConverter_t63039C8D605504CCABFF7783367282E961DDC022* L_12 = V_0;
		NullCheck(L_12);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_13;
		L_13 = ByteArrayConverter_get_Bytes_mB2301559AE1A615772BE852AF29A909F2CDA05C2_inline(L_12, NULL);
		NullCheck(L_11);
		JsonSerializeResult_set_Bytes_mCE2E79B6CE26A96823CB38D516C1F835123B24C1_inline(L_11, L_13, NULL);
		V_3 = L_11;
		goto IL_0040;
	}

IL_0040:
	{
		// }
		JsonSerializeResult_t60648F85702617E3385A7DC76FAA88A6136ADF5F* L_14 = V_3;
		return L_14;
	}
}
// System.Text.Json.JsonSerializerOptions SocketIOClient.JsonSerializer.SystemTextJsonSerializer::GetOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* SystemTextJsonSerializer_GetOptions_m99BCF09033E8F11F799B3777C45CB6F5569D4543 (SystemTextJsonSerializer_tE1389CB2086D14697EC05627113C613450216EDF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* V_3 = NULL;
	{
		// JsonSerializerOptions options = null;
		V_0 = (JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD*)NULL;
		// if (OptionsProvider != null)
		Func_1_t27E25A1D7DE6C9B79FF934165133F82F6D9A05EA* L_0;
		L_0 = SystemTextJsonSerializer_get_OptionsProvider_mAD6EC455B330506F067BECD0CF6410AA700ADFAD_inline(__this, NULL);
		V_1 = (bool)((!(((RuntimeObject*)(Func_1_t27E25A1D7DE6C9B79FF934165133F82F6D9A05EA*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// options = OptionsProvider();
		Func_1_t27E25A1D7DE6C9B79FF934165133F82F6D9A05EA* L_2;
		L_2 = SystemTextJsonSerializer_get_OptionsProvider_mAD6EC455B330506F067BECD0CF6410AA700ADFAD_inline(__this, NULL);
		NullCheck(L_2);
		JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* L_3;
		L_3 = Func_1_Invoke_mD3E4D633B1F55191E2A416D73975BAC89C179FDC_inline(L_2, NULL);
		V_0 = L_3;
	}

IL_001e:
	{
		// if (options == null)
		JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* L_4 = V_0;
		V_2 = (bool)((((RuntimeObject*)(JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD*)L_4) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		// options = new JsonSerializerOptions();
		JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* L_6 = (JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD*)il2cpp_codegen_object_new(JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		JsonSerializerOptions__ctor_m9431C3AEE8FE5AF4D2ACAE80B23CA0CC18CC4281(L_6, NULL);
		V_0 = L_6;
	}

IL_002e:
	{
		// return options;
		JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* L_7 = V_0;
		V_3 = L_7;
		goto IL_0032;
	}

IL_0032:
	{
		// }
		JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* L_8 = V_3;
		return L_8;
	}
}
// System.Func`1<System.Text.Json.JsonSerializerOptions> SocketIOClient.JsonSerializer.SystemTextJsonSerializer::get_OptionsProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_1_t27E25A1D7DE6C9B79FF934165133F82F6D9A05EA* SystemTextJsonSerializer_get_OptionsProvider_mAD6EC455B330506F067BECD0CF6410AA700ADFAD (SystemTextJsonSerializer_tE1389CB2086D14697EC05627113C613450216EDF* __this, const RuntimeMethod* method) 
{
	{
		// public Func<JsonSerializerOptions> OptionsProvider { get; set; }
		Func_1_t27E25A1D7DE6C9B79FF934165133F82F6D9A05EA* L_0 = __this->___U3COptionsProviderU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void SocketIOClient.JsonSerializer.SystemTextJsonSerializer::set_OptionsProvider(System.Func`1<System.Text.Json.JsonSerializerOptions>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemTextJsonSerializer_set_OptionsProvider_m59AEBE73D971A0302FFB0A823ECEF11606474971 (SystemTextJsonSerializer_tE1389CB2086D14697EC05627113C613450216EDF* __this, Func_1_t27E25A1D7DE6C9B79FF934165133F82F6D9A05EA* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Func<JsonSerializerOptions> OptionsProvider { get; set; }
		Func_1_t27E25A1D7DE6C9B79FF934165133F82F6D9A05EA* L_0 = ___0_value;
		__this->___U3COptionsProviderU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COptionsProviderU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void SocketIOClient.JsonSerializer.SystemTextJsonSerializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemTextJsonSerializer__ctor_mF6303ACD51CA39D15E923C5841B2E6CCE36CE8C8 (SystemTextJsonSerializer_tE1389CB2086D14697EC05627113C613450216EDF* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void SocketIOClient.Newtonsoft.Json.ByteArrayConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteArrayConverter__ctor_mC6524D0593A6FFE57503C49A368040FBCD8B3391 (ByteArrayConverter_tB277DA37ED5A0960062DB249ABFA11C48D13B5DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ByteArrayConverter()
		JsonConverter__ctor_m47F59D2FF8CFBA449BDFBA405BDEEF6361139DAB(__this, NULL);
		// Bytes = new List<byte[]>();
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*)il2cpp_codegen_object_new(List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4(L_0, List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		__this->___U3CBytesU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBytesU3Ek__BackingField_0), (void*)L_0);
		// }
		return;
	}
}
// System.Collections.Generic.List`1<System.Byte[]> SocketIOClient.Newtonsoft.Json.ByteArrayConverter::get_Bytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ByteArrayConverter_get_Bytes_m1B5D693762557FDE3B3B82097C2F133AA4ADCF2D (ByteArrayConverter_tB277DA37ED5A0960062DB249ABFA11C48D13B5DD* __this, const RuntimeMethod* method) 
{
	{
		// internal List<byte[]> Bytes { get; }
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___U3CBytesU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Boolean SocketIOClient.Newtonsoft.Json.ByteArrayConverter::CanConvert(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ByteArrayConverter_CanConvert_mD9CFD87F997B672FA82DCD50E5730328DC81467F (ByteArrayConverter_tB277DA37ED5A0960062DB249ABFA11C48D13B5DD* __this, Type_t* ___0_objectType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return objectType == typeof(byte[]);
		Type_t* L_0 = ___0_objectType;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		bool L_3;
		L_3 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_0, L_2, NULL);
		V_0 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Object SocketIOClient.Newtonsoft.Json.ByteArrayConverter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ByteArrayConverter_ReadJson_mDB4F23198D26CB11ECC1A0664A0386D2739645FC (ByteArrayConverter_tB277DA37ED5A0960062DB249ABFA11C48D13B5DD* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___0_reader, Type_t* ___1_objectType, RuntimeObject* ___2_existingValue, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___3_serializer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2C6A207D8824FE873045A66C942593AE67D90CA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral267B04B1E250980AAB9D2E38F155C7C77365B820);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral867BCADE6C5A0BC7053FD765A6324C366FFC2CA2);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	int32_t G_B11_0 = 0;
	RuntimeObject* G_B15_0 = NULL;
	RuntimeObject* G_B14_0 = NULL;
	String_t* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	{
		// byte[] bytes = null;
		V_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		// if (reader.TokenType == JsonToken.StartObject)
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_0 = ___0_reader;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(16 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_0);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_00f3;
		}
	}
	{
		// reader.Read();
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_3 = ___0_reader;
		NullCheck(L_3);
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(21 /* System.Boolean Newtonsoft.Json.JsonReader::Read() */, L_3);
		// if (reader.TokenType == JsonToken.PropertyName && reader.Value?.ToString() == "_placeholder")
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_5 = ___0_reader;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(16 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_5);
		if ((!(((uint32_t)L_6) == ((uint32_t)4))))
		{
			goto IL_0042;
		}
	}
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_7 = ___0_reader;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(17 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_7);
		RuntimeObject* L_9 = L_8;
		G_B3_0 = L_9;
		if (L_9)
		{
			G_B4_0 = L_9;
			goto IL_0031;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		goto IL_0036;
	}

IL_0031:
	{
		NullCheck(G_B4_0);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B4_0);
		G_B5_0 = L_10;
	}

IL_0036:
	{
		bool L_11;
		L_11 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(G_B5_0, _stringLiteral867BCADE6C5A0BC7053FD765A6324C366FFC2CA2, NULL);
		G_B7_0 = ((int32_t)(L_11));
		goto IL_0043;
	}

IL_0042:
	{
		G_B7_0 = 0;
	}

IL_0043:
	{
		V_2 = (bool)G_B7_0;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_00f2;
		}
	}
	{
		// reader.Read();
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_13 = ___0_reader;
		NullCheck(L_13);
		bool L_14;
		L_14 = VirtualFuncInvoker0< bool >::Invoke(21 /* System.Boolean Newtonsoft.Json.JsonReader::Read() */, L_13);
		// if (reader.TokenType == JsonToken.Boolean && (bool)reader.Value)
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_15 = ___0_reader;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = VirtualFuncInvoker0< int32_t >::Invoke(16 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_15);
		if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0069;
		}
	}
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_17 = ___0_reader;
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(17 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_17);
		G_B11_0 = ((int32_t)(((*(bool*)((bool*)(bool*)UnBox(L_18, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var))))));
		goto IL_006a;
	}

IL_0069:
	{
		G_B11_0 = 0;
	}

IL_006a:
	{
		V_3 = (bool)G_B11_0;
		bool L_19 = V_3;
		if (!L_19)
		{
			goto IL_00f1;
		}
	}
	{
		// reader.Read();
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_20 = ___0_reader;
		NullCheck(L_20);
		bool L_21;
		L_21 = VirtualFuncInvoker0< bool >::Invoke(21 /* System.Boolean Newtonsoft.Json.JsonReader::Read() */, L_20);
		// if (reader.TokenType == JsonToken.PropertyName && reader.Value?.ToString() == "num")
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_22 = ___0_reader;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = VirtualFuncInvoker0< int32_t >::Invoke(16 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_22);
		if ((!(((uint32_t)L_23) == ((uint32_t)4))))
		{
			goto IL_00a0;
		}
	}
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_24 = ___0_reader;
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(17 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_24);
		RuntimeObject* L_26 = L_25;
		G_B14_0 = L_26;
		if (L_26)
		{
			G_B15_0 = L_26;
			goto IL_008f;
		}
	}
	{
		G_B16_0 = ((String_t*)(NULL));
		goto IL_0094;
	}

IL_008f:
	{
		NullCheck(G_B15_0);
		String_t* L_27;
		L_27 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B15_0);
		G_B16_0 = L_27;
	}

IL_0094:
	{
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(G_B16_0, _stringLiteral267B04B1E250980AAB9D2E38F155C7C77365B820, NULL);
		G_B18_0 = ((int32_t)(L_28));
		goto IL_00a1;
	}

IL_00a0:
	{
		G_B18_0 = 0;
	}

IL_00a1:
	{
		V_4 = (bool)G_B18_0;
		bool L_29 = V_4;
		if (!L_29)
		{
			goto IL_00f0;
		}
	}
	{
		// reader.Read();
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_30 = ___0_reader;
		NullCheck(L_30);
		bool L_31;
		L_31 = VirtualFuncInvoker0< bool >::Invoke(21 /* System.Boolean Newtonsoft.Json.JsonReader::Read() */, L_30);
		// if (reader.Value != null)
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_32 = ___0_reader;
		NullCheck(L_32);
		RuntimeObject* L_33;
		L_33 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(17 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_32);
		V_5 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_33) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_34 = V_5;
		if (!L_34)
		{
			goto IL_00ef;
		}
	}
	{
		// if (int.TryParse(reader.Value.ToString(), out int num))
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_35 = ___0_reader;
		NullCheck(L_35);
		RuntimeObject* L_36;
		L_36 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(17 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_35);
		NullCheck(L_36);
		String_t* L_37;
		L_37 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_36);
		bool L_38;
		L_38 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_37, (&V_6), NULL);
		V_7 = L_38;
		bool L_39 = V_7;
		if (!L_39)
		{
			goto IL_00ee;
		}
	}
	{
		// bytes = Bytes[num];
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_40;
		L_40 = ByteArrayConverter_get_Bytes_m1B5D693762557FDE3B3B82097C2F133AA4ADCF2D_inline(__this, NULL);
		int32_t L_41 = V_6;
		NullCheck(L_40);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42;
		L_42 = List_1_get_Item_m2C6A207D8824FE873045A66C942593AE67D90CA6(L_40, L_41, List_1_get_Item_m2C6A207D8824FE873045A66C942593AE67D90CA6_RuntimeMethod_var);
		V_0 = L_42;
		// reader.Read();
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_43 = ___0_reader;
		NullCheck(L_43);
		bool L_44;
		L_44 = VirtualFuncInvoker0< bool >::Invoke(21 /* System.Boolean Newtonsoft.Json.JsonReader::Read() */, L_43);
	}

IL_00ee:
	{
	}

IL_00ef:
	{
	}

IL_00f0:
	{
	}

IL_00f1:
	{
	}

IL_00f2:
	{
	}

IL_00f3:
	{
		// return bytes;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = V_0;
		V_8 = (RuntimeObject*)L_45;
		goto IL_00f8;
	}

IL_00f8:
	{
		// }
		RuntimeObject* L_46 = V_8;
		return L_46;
	}
}
// System.Void SocketIOClient.Newtonsoft.Json.ByteArrayConverter::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteArrayConverter_WriteJson_m0364942D5285074B9A6987131B5155C43F6193BF (ByteArrayConverter_tB277DA37ED5A0960062DB249ABFA11C48D13B5DD* __this, JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* ___0_writer, RuntimeObject* ___1_value, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___2_serializer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m88FEB2D94E35C258B61F53400F7CA20E99A7DAD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral267B04B1E250980AAB9D2E38F155C7C77365B820);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral867BCADE6C5A0BC7053FD765A6324C366FFC2CA2);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// var source = value as byte[];
		RuntimeObject* L_0 = ___1_value;
		V_0 = ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)IsInst((RuntimeObject*)L_0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var));
		// Bytes.Add(source.ToArray());
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_1;
		L_1 = ByteArrayConverter_get_Bytes_m1B5D693762557FDE3B3B82097C2F133AA4ADCF2D_inline(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64((RuntimeObject*)L_2, Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		NullCheck(L_1);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_1, L_3, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		// writer.WriteStartObject();
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_4 = ___0_writer;
		NullCheck(L_4);
		VirtualActionInvoker0::Invoke(68 /* System.Void Newtonsoft.Json.JsonWriter::WriteStartObject() */, L_4);
		// writer.WritePropertyName("_placeholder");
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_5 = ___0_writer;
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(74 /* System.Void Newtonsoft.Json.JsonWriter::WritePropertyName(System.String) */, L_5, _stringLiteral867BCADE6C5A0BC7053FD765A6324C366FFC2CA2);
		// writer.WriteValue(true);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_6 = ___0_writer;
		NullCheck(L_6);
		VirtualActionInvoker1< bool >::Invoke(93 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Boolean) */, L_6, (bool)1);
		// writer.WritePropertyName("num");
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_7 = ___0_writer;
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(74 /* System.Void Newtonsoft.Json.JsonWriter::WritePropertyName(System.String) */, L_7, _stringLiteral267B04B1E250980AAB9D2E38F155C7C77365B820);
		// writer.WriteValue(Bytes.Count - 1);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_8 = ___0_writer;
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_9;
		L_9 = ByteArrayConverter_get_Bytes_m1B5D693762557FDE3B3B82097C2F133AA4ADCF2D_inline(__this, NULL);
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_m88FEB2D94E35C258B61F53400F7CA20E99A7DAD3_inline(L_9, List_1_get_Count_m88FEB2D94E35C258B61F53400F7CA20E99A7DAD3_RuntimeMethod_var);
		NullCheck(L_8);
		VirtualActionInvoker1< int32_t >::Invoke(87 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Int32) */, L_8, ((int32_t)il2cpp_codegen_subtract(L_10, 1)));
		// writer.WriteEndObject();
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_11 = ___0_writer;
		NullCheck(L_11);
		VirtualActionInvoker0::Invoke(69 /* System.Void Newtonsoft.Json.JsonWriter::WriteEndObject() */, L_11);
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
// System.Func`1<Newtonsoft.Json.JsonSerializerSettings> SocketIOClient.Newtonsoft.Json.NewtonsoftJsonSerializer::get_JsonSerializerOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08* NewtonsoftJsonSerializer_get_JsonSerializerOptions_mDB74E248D140F92CEF6CAB838DCBEB186EA7738B (NewtonsoftJsonSerializer_t3EBB19A83287CFB4FBE58E1BDBBAA054E5CD14ED* __this, const RuntimeMethod* method) 
{
	{
		// public Func<JsonSerializerSettings> JsonSerializerOptions { get; }
		Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08* L_0 = __this->___U3CJsonSerializerOptionsU3Ek__BackingField_0;
		return L_0;
	}
}
// SocketIOClient.JsonSerializer.JsonSerializeResult SocketIOClient.Newtonsoft.Json.NewtonsoftJsonSerializer::Serialize(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonSerializeResult_t60648F85702617E3385A7DC76FAA88A6136ADF5F* NewtonsoftJsonSerializer_Serialize_mC63280ADD7C93C759766781D446F96E1F75E1CC8 (NewtonsoftJsonSerializer_t3EBB19A83287CFB4FBE58E1BDBBAA054E5CD14ED* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteArrayConverter_tB277DA37ED5A0960062DB249ABFA11C48D13B5DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tBA46B0B91EBAF6B08DED48AF18B2916FC06B7FC6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializeResult_t60648F85702617E3385A7DC76FAA88A6136ADF5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteArrayConverter_tB277DA37ED5A0960062DB249ABFA11C48D13B5DD* V_0 = NULL;
	JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* V_1 = NULL;
	String_t* V_2 = NULL;
	JsonSerializeResult_t60648F85702617E3385A7DC76FAA88A6136ADF5F* V_3 = NULL;
	{
		// var converter = new ByteArrayConverter();
		ByteArrayConverter_tB277DA37ED5A0960062DB249ABFA11C48D13B5DD* L_0 = (ByteArrayConverter_tB277DA37ED5A0960062DB249ABFA11C48D13B5DD*)il2cpp_codegen_object_new(ByteArrayConverter_tB277DA37ED5A0960062DB249ABFA11C48D13B5DD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ByteArrayConverter__ctor_mC6524D0593A6FFE57503C49A368040FBCD8B3391(L_0, NULL);
		V_0 = L_0;
		// var settings = GetOptions();
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_1;
		L_1 = NewtonsoftJsonSerializer_GetOptions_mEF26DCFECB75AC27F9763779FAF5CF1F6D00AD1B(__this, NULL);
		V_1 = L_1;
		// settings.Converters.Add(converter);
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_2 = V_1;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = JsonSerializerSettings_get_Converters_mB7EE43E74FA48980B6C0976D7A2160B2174C8FCA_inline(L_2, NULL);
		ByteArrayConverter_tB277DA37ED5A0960062DB249ABFA11C48D13B5DD* L_4 = V_0;
		NullCheck(L_3);
		InterfaceActionInvoker1< JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<Newtonsoft.Json.JsonConverter>::Add(T) */, ICollection_1_tBA46B0B91EBAF6B08DED48AF18B2916FC06B7FC6_il2cpp_TypeInfo_var, L_3, L_4);
		// string json = JsonConvert.SerializeObject(data, settings);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = ___0_data;
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_6 = V_1;
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		String_t* L_7;
		L_7 = JsonConvert_SerializeObject_mEAA691E5567819FD0CDFEBB98629609ADB899D25((RuntimeObject*)L_5, L_6, NULL);
		V_2 = L_7;
		// return new JsonSerializeResult
		// {
		//     Json = json,
		//     Bytes = converter.Bytes
		// };
		JsonSerializeResult_t60648F85702617E3385A7DC76FAA88A6136ADF5F* L_8 = (JsonSerializeResult_t60648F85702617E3385A7DC76FAA88A6136ADF5F*)il2cpp_codegen_object_new(JsonSerializeResult_t60648F85702617E3385A7DC76FAA88A6136ADF5F_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		JsonSerializeResult__ctor_m3348FDBF55D2BB8A31F72A3A5AF7E48338DBCA18(L_8, NULL);
		JsonSerializeResult_t60648F85702617E3385A7DC76FAA88A6136ADF5F* L_9 = L_8;
		String_t* L_10 = V_2;
		NullCheck(L_9);
		JsonSerializeResult_set_Json_m5ADFFFEE83E72D33DFA0C3DCB977D61FD04C6021_inline(L_9, L_10, NULL);
		JsonSerializeResult_t60648F85702617E3385A7DC76FAA88A6136ADF5F* L_11 = L_9;
		ByteArrayConverter_tB277DA37ED5A0960062DB249ABFA11C48D13B5DD* L_12 = V_0;
		NullCheck(L_12);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_13;
		L_13 = ByteArrayConverter_get_Bytes_m1B5D693762557FDE3B3B82097C2F133AA4ADCF2D_inline(L_12, NULL);
		NullCheck(L_11);
		JsonSerializeResult_set_Bytes_mCE2E79B6CE26A96823CB38D516C1F835123B24C1_inline(L_11, L_13, NULL);
		V_3 = L_11;
		goto IL_0040;
	}

IL_0040:
	{
		// }
		JsonSerializeResult_t60648F85702617E3385A7DC76FAA88A6136ADF5F* L_14 = V_3;
		return L_14;
	}
}
// Newtonsoft.Json.JsonSerializerSettings SocketIOClient.Newtonsoft.Json.NewtonsoftJsonSerializer::GetOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* NewtonsoftJsonSerializer_GetOptions_mEF26DCFECB75AC27F9763779FAF5CF1F6D00AD1B (NewtonsoftJsonSerializer_t3EBB19A83287CFB4FBE58E1BDBBAA054E5CD14ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* V_3 = NULL;
	{
		// if (OptionsProvider != null)
		Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08* L_0;
		L_0 = NewtonsoftJsonSerializer_get_OptionsProvider_m02D3F8735071000E88878C4E37CA276F218FD635_inline(__this, NULL);
		V_1 = (bool)((!(((RuntimeObject*)(Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// options = OptionsProvider();
		Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08* L_2;
		L_2 = NewtonsoftJsonSerializer_get_OptionsProvider_m02D3F8735071000E88878C4E37CA276F218FD635_inline(__this, NULL);
		NullCheck(L_2);
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_3;
		L_3 = Func_1_Invoke_mC4B798EC08DA7F0778D027E8570AAFC89BF08F2D_inline(L_2, NULL);
		V_0 = L_3;
		goto IL_0027;
	}

IL_001e:
	{
		// options = CreateOptions();
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_4;
		L_4 = VirtualFuncInvoker0< JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* >::Invoke(7 /* Newtonsoft.Json.JsonSerializerSettings SocketIOClient.Newtonsoft.Json.NewtonsoftJsonSerializer::CreateOptions() */, __this);
		V_0 = L_4;
	}

IL_0027:
	{
		// if (options == null)
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_5 = V_0;
		V_2 = (bool)((((RuntimeObject*)(JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF*)L_5) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		// options = new JsonSerializerSettings();
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_7 = (JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF*)il2cpp_codegen_object_new(JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		JsonSerializerSettings__ctor_mE1C9A90375BA88DF7F6911F1F96AEEC6A98CD22F(L_7, NULL);
		V_0 = L_7;
	}

IL_0037:
	{
		// return options;
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_8 = V_0;
		V_3 = L_8;
		goto IL_003b;
	}

IL_003b:
	{
		// }
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_9 = V_3;
		return L_9;
	}
}
// Newtonsoft.Json.JsonSerializerSettings SocketIOClient.Newtonsoft.Json.NewtonsoftJsonSerializer::CreateOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* NewtonsoftJsonSerializer_CreateOptions_m12ED7B76E97ECA5ABE55E39B376EB9894018C04A (NewtonsoftJsonSerializer_t3EBB19A83287CFB4FBE58E1BDBBAA054E5CD14ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* V_0 = NULL;
	{
		// return new JsonSerializerSettings();
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_0 = (JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF*)il2cpp_codegen_object_new(JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JsonSerializerSettings__ctor_mE1C9A90375BA88DF7F6911F1F96AEEC6A98CD22F(L_0, NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_1 = V_0;
		return L_1;
	}
}
// System.Func`1<Newtonsoft.Json.JsonSerializerSettings> SocketIOClient.Newtonsoft.Json.NewtonsoftJsonSerializer::get_OptionsProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08* NewtonsoftJsonSerializer_get_OptionsProvider_m02D3F8735071000E88878C4E37CA276F218FD635 (NewtonsoftJsonSerializer_t3EBB19A83287CFB4FBE58E1BDBBAA054E5CD14ED* __this, const RuntimeMethod* method) 
{
	{
		// public Func<JsonSerializerSettings> OptionsProvider { get; set; }
		Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08* L_0 = __this->___U3COptionsProviderU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void SocketIOClient.Newtonsoft.Json.NewtonsoftJsonSerializer::set_OptionsProvider(System.Func`1<Newtonsoft.Json.JsonSerializerSettings>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewtonsoftJsonSerializer_set_OptionsProvider_m0B0DF2CCD002985A322FF9BC5BA6EBF35A778E04 (NewtonsoftJsonSerializer_t3EBB19A83287CFB4FBE58E1BDBBAA054E5CD14ED* __this, Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Func<JsonSerializerSettings> OptionsProvider { get; set; }
		Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08* L_0 = ___0_value;
		__this->___U3COptionsProviderU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COptionsProviderU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void SocketIOClient.Newtonsoft.Json.NewtonsoftJsonSerializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewtonsoftJsonSerializer__ctor_m6D6D55941838E67F881474CF58FBD5DF4842283C (NewtonsoftJsonSerializer_t3EBB19A83287CFB4FBE58E1BDBBAA054E5CD14ED* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Payload_get_Text_mAA707DFAA7F099F0CB8CF352454062CF76A9847C_inline (Payload_t40222C90D284CE7D812D4D8C137225A5846030C9* __this, const RuntimeMethod* method) 
{
	{
		// public string Text { get; set; }
		String_t* L_0 = __this->___U3CTextU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* Payload_get_Bytes_m475B909EFFF04EC82178DF8A95BBEB831BCAE9AD_inline (Payload_t40222C90D284CE7D812D4D8C137225A5846030C9* __this, const RuntimeMethod* method) 
{
	{
		// public List<byte[]> Bytes { get; set; }
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___U3CBytesU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BinaryMessage_set_BinaryCount_mBCAB4F19DDF88469A8E9FF294116552D4ECA88D1_inline (BinaryMessage_tD5819CFC7CC9F2CE0BC27C01B47AEF59F66CCF05* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int BinaryCount { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CBinaryCountU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BinaryMessage_set_Namespace_m31A42EC5E2ED16F26508085A1E0587AF0D08AA35_inline (BinaryMessage_tD5819CFC7CC9F2CE0BC27C01B47AEF59F66CCF05* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Namespace { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CNamespaceU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNamespaceU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BinaryMessage_set_Id_m86C5F7877C9BDD52250F292CD9AE31FC93F15168_inline (BinaryMessage_tD5819CFC7CC9F2CE0BC27C01B47AEF59F66CCF05* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int Id { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CIdU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BinaryMessage_set_Event_m573BF95F0ACFC637D4E0B95554D00E893A2DF16D_inline (BinaryMessage_tD5819CFC7CC9F2CE0BC27C01B47AEF59F66CCF05* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Event { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CEventU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEventU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BinaryMessage_set_JsonElements_m3F7CFAC1CA7ADEEC4E9B0E52225C4AC20B88BDE8_inline (BinaryMessage_tD5819CFC7CC9F2CE0BC27C01B47AEF59F66CCF05* __this, List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6* ___0_value, const RuntimeMethod* method) 
{
	{
		// public List<JsonElement> JsonElements { get; set; }
		List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6* L_0 = ___0_value;
		__this->___U3CJsonElementsU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CJsonElementsU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6* BinaryMessage_get_JsonElements_m1E21F166CF10210BB5AF847FBEFACD18AF43E828_inline (BinaryMessage_tD5819CFC7CC9F2CE0BC27C01B47AEF59F66CCF05* __this, const RuntimeMethod* method) 
{
	{
		// public List<JsonElement> JsonElements { get; set; }
		List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6* L_0 = __this->___U3CJsonElementsU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* BinaryMessage_get_OutgoingBytes_m4D2A70DB3BF587489C3FCFDAECE67390D41144DC_inline (BinaryMessage_tD5819CFC7CC9F2CE0BC27C01B47AEF59F66CCF05* __this, const RuntimeMethod* method) 
{
	{
		// public List<byte[]> OutgoingBytes { get; set; }
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___U3COutgoingBytesU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BinaryMessage_get_Namespace_m856DED46A8FE1D6CFBDC48460B1CB546114B72F4_inline (BinaryMessage_tD5819CFC7CC9F2CE0BC27C01B47AEF59F66CCF05* __this, const RuntimeMethod* method) 
{
	{
		// public string Namespace { get; set; }
		String_t* L_0 = __this->___U3CNamespaceU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BinaryMessage_get_Json_m6615778C6033109543CC60AFFF1BF13FD093CB60_inline (BinaryMessage_tD5819CFC7CC9F2CE0BC27C01B47AEF59F66CCF05* __this, const RuntimeMethod* method) 
{
	{
		// public string Json { get; set; }
		String_t* L_0 = __this->___U3CJsonU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BinaryMessage_get_Event_m2924E06720D79B172ED0F3631228E7AE4E8AE7B6_inline (BinaryMessage_tD5819CFC7CC9F2CE0BC27C01B47AEF59F66CCF05* __this, const RuntimeMethod* method) 
{
	{
		// public string Event { get; set; }
		String_t* L_0 = __this->___U3CEventU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClientAckMessage_set_Namespace_m6D0F53093A544183349C1ED46A1C072D99478F4F_inline (ClientAckMessage_t7F42DF41F6C6389FF9ADCA794D69BFA3FA15E6F9* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Namespace { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CNamespaceU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNamespaceU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClientAckMessage_set_Id_m397DBACB6629B883ED1105AD9D4B52444F3075D2_inline (ClientAckMessage_t7F42DF41F6C6389FF9ADCA794D69BFA3FA15E6F9* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int Id { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClientAckMessage_set_JsonElements_mCD5B47F692A519A1302652F91CCF7DE65B072E9D_inline (ClientAckMessage_t7F42DF41F6C6389FF9ADCA794D69BFA3FA15E6F9* __this, List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6* ___0_value, const RuntimeMethod* method) 
{
	{
		// public List<JsonElement> JsonElements { get; set; }
		List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6* L_0 = ___0_value;
		__this->___U3CJsonElementsU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CJsonElementsU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ClientAckMessage_get_Namespace_mC07CC220F3BD0319F276274708CA390FF3CB17B2_inline (ClientAckMessage_t7F42DF41F6C6389FF9ADCA794D69BFA3FA15E6F9* __this, const RuntimeMethod* method) 
{
	{
		// public string Namespace { get; set; }
		String_t* L_0 = __this->___U3CNamespaceU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ClientAckMessage_get_Id_m92F24367984A2B1BCA7300245133861E0C3C9A47_inline (ClientAckMessage_t7F42DF41F6C6389FF9ADCA794D69BFA3FA15E6F9* __this, const RuntimeMethod* method) 
{
	{
		// public int Id { get; set; }
		int32_t L_0 = __this->___U3CIdU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ClientAckMessage_get_Json_mC3597A0931801F7A388439E3A3408EECD858C5A2_inline (ClientAckMessage_t7F42DF41F6C6389FF9ADCA794D69BFA3FA15E6F9* __this, const RuntimeMethod* method) 
{
	{
		// public string Json { get; set; }
		String_t* L_0 = __this->___U3CJsonU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ClientAckMessage_get_Event_mD53C0DD4587924D4681BBAE3C914B1015EFE750C_inline (ClientAckMessage_t7F42DF41F6C6389FF9ADCA794D69BFA3FA15E6F9* __this, const RuntimeMethod* method) 
{
	{
		// public string Event { get; set; }
		String_t* L_0 = __this->___U3CEventU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClientBinaryAckMessage_set_BinaryCount_m672FCC0A38DF62B5CC8E1E4E2FD0FA4CEB21C80F_inline (ClientBinaryAckMessage_tCC3843B13D5ADA726E5899C1B148AD22D1978742* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int BinaryCount { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CBinaryCountU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClientBinaryAckMessage_set_Namespace_mB0AF6B90C754335C3BB152EBE0998DFB473382C9_inline (ClientBinaryAckMessage_tCC3843B13D5ADA726E5899C1B148AD22D1978742* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Namespace { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CNamespaceU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNamespaceU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClientBinaryAckMessage_set_Id_m2E676070B8E6682F3AF9CAB2CC8A3E5D91CEE507_inline (ClientBinaryAckMessage_tCC3843B13D5ADA726E5899C1B148AD22D1978742* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int Id { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClientBinaryAckMessage_set_JsonElements_m282E7A035922E8FF7B0F78BD2EF71315C67D5B28_inline (ClientBinaryAckMessage_tCC3843B13D5ADA726E5899C1B148AD22D1978742* __this, List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6* ___0_value, const RuntimeMethod* method) 
{
	{
		// public List<JsonElement> JsonElements { get; set; }
		List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6* L_0 = ___0_value;
		__this->___U3CJsonElementsU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CJsonElementsU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ClientBinaryAckMessage_get_OutgoingBytes_mDA1647C33F1CD4D9DD6400C9C8D342BBE65FC65C_inline (ClientBinaryAckMessage_tCC3843B13D5ADA726E5899C1B148AD22D1978742* __this, const RuntimeMethod* method) 
{
	{
		// public List<byte[]> OutgoingBytes { get; set; }
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___U3COutgoingBytesU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ClientBinaryAckMessage_get_Namespace_mE886EC5DDB0298537A8D191D9B2E3B16FE2ED1CF_inline (ClientBinaryAckMessage_tCC3843B13D5ADA726E5899C1B148AD22D1978742* __this, const RuntimeMethod* method) 
{
	{
		// public string Namespace { get; set; }
		String_t* L_0 = __this->___U3CNamespaceU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ClientBinaryAckMessage_get_Id_m88496B6887446FF9D34697B30FB1BCA2339D8E9B_inline (ClientBinaryAckMessage_tCC3843B13D5ADA726E5899C1B148AD22D1978742* __this, const RuntimeMethod* method) 
{
	{
		// public int Id { get; set; }
		int32_t L_0 = __this->___U3CIdU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ClientBinaryAckMessage_get_Json_m3EBF52345F3CA65F1D8E2C2A0181B80FE0507C4E_inline (ClientBinaryAckMessage_tCC3843B13D5ADA726E5899C1B148AD22D1978742* __this, const RuntimeMethod* method) 
{
	{
		// public string Json { get; set; }
		String_t* L_0 = __this->___U3CJsonU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ClientBinaryAckMessage_get_Event_m0C4AEF4002F28D77A10AE5CF9C7EE75153B95F79_inline (ClientBinaryAckMessage_tCC3843B13D5ADA726E5899C1B148AD22D1978742* __this, const RuntimeMethod* method) 
{
	{
		// public string Event { get; set; }
		String_t* L_0 = __this->___U3CEventU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConnectedMessage_get_Eio_mEF53A9E8A953873A6366C5508CBD2C754D39593A_inline (ConnectedMessage_t1A1ED2A271B81580C052B6B1B6DDFCD16CF9FC36* __this, const RuntimeMethod* method) 
{
	{
		// public int Eio { get; set; }
		int32_t L_0 = __this->___U3CEioU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConnectedMessage_set_Namespace_mBB0268B187193B455FE0CDA453F062A106E67CAD_inline (ConnectedMessage_t1A1ED2A271B81580C052B6B1B6DDFCD16CF9FC36* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Namespace { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CNamespaceU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNamespaceU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConnectedMessage_set_Sid_m049365339C008B2325BE176C8E9C5E1533AA0D26_inline (ConnectedMessage_t1A1ED2A271B81580C052B6B1B6DDFCD16CF9FC36* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Sid { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CSidU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSidU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ConnectedMessage_get_Namespace_mCDBAD9FDD96BF5294DF2BF8886F73429814BC537_inline (ConnectedMessage_t1A1ED2A271B81580C052B6B1B6DDFCD16CF9FC36* __this, const RuntimeMethod* method) 
{
	{
		// public string Namespace { get; set; }
		String_t* L_0 = __this->___U3CNamespaceU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ConnectedMessage_get_AuthJsonStr_m2CD9779E13B4B15E66EA43325D46FCA799BA6F13_inline (ConnectedMessage_t1A1ED2A271B81580C052B6B1B6DDFCD16CF9FC36* __this, const RuntimeMethod* method) 
{
	{
		// public string AuthJsonStr { get; set; }
		String_t* L_0 = __this->___U3CAuthJsonStrU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ConnectedMessage_get_Query_m74AE5EA94B67586ABDB04051C310965A68FC5D39_inline (ConnectedMessage_t1A1ED2A271B81580C052B6B1B6DDFCD16CF9FC36* __this, const RuntimeMethod* method) 
{
	{
		// public IEnumerable<KeyValuePair<string, string>> Query { get; set; }
		RuntimeObject* L_0 = __this->___U3CQueryU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DisconnectedMessage_set_Namespace_mECDDF1CF86852802382FE4252A3E0C3375A3DD24_inline (DisconnectedMessage_tEBAFB998D31AC82FE4A2515B44B1A8B4513EA6A9* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Namespace { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CNamespaceU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNamespaceU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DisconnectedMessage_get_Namespace_mFAD63140D707F23A4AAFC05834CBE057961C125B_inline (DisconnectedMessage_tEBAFB998D31AC82FE4A2515B44B1A8B4513EA6A9* __this, const RuntimeMethod* method) 
{
	{
		// public string Namespace { get; set; }
		String_t* L_0 = __this->___U3CNamespaceU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ErrorMessage_get_Eio_m0F647A84D5F6BDD0A360529918C14FED11CEF963_inline (ErrorMessage_tB3F1C2F4B97E449D6C38FB5E943D66F0B3F6E275* __this, const RuntimeMethod* method) 
{
	{
		// public int Eio { get; set; }
		int32_t L_0 = __this->___U3CEioU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorMessage_set_Message_m19353330692C5FC4A69067967A5F5FAEB7249FD6_inline (ErrorMessage_tB3F1C2F4B97E449D6C38FB5E943D66F0B3F6E275* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Message { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CMessageU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMessageU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorMessage_set_Namespace_m35F6305A42B99320BB457987E7890C7FCFCEBE67_inline (ErrorMessage_tB3F1C2F4B97E449D6C38FB5E943D66F0B3F6E275* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Namespace { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CNamespaceU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNamespaceU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventMessage_set_Namespace_mD9D29D1580CAD4439A177272B211E72B208A8036_inline (EventMessage_t470DDE32D55CB6E5C78B1B073D344CFD3C548748* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Namespace { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CNamespaceU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNamespaceU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventMessage_set_Id_mE2D26FAC549D2D0DE97C48B1E344BC70B918276A_inline (EventMessage_t470DDE32D55CB6E5C78B1B073D344CFD3C548748* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int Id { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CIdU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventMessage_set_Event_mCA02BE3840C40DBB9AC37993BF8013151712ACE9_inline (EventMessage_t470DDE32D55CB6E5C78B1B073D344CFD3C548748* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Event { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CEventU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEventU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventMessage_set_JsonElements_m173A2D28A03D15ACA167C3F1027A6D25ECF44F2F_inline (EventMessage_t470DDE32D55CB6E5C78B1B073D344CFD3C548748* __this, List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6* ___0_value, const RuntimeMethod* method) 
{
	{
		// public List<JsonElement> JsonElements { get; set; }
		List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6* L_0 = ___0_value;
		__this->___U3CJsonElementsU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CJsonElementsU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6* EventMessage_get_JsonElements_m31A620D166BC872F51BC5D4DD4D3A67FA9ADE6B2_inline (EventMessage_t470DDE32D55CB6E5C78B1B073D344CFD3C548748* __this, const RuntimeMethod* method) 
{
	{
		// public List<JsonElement> JsonElements { get; set; }
		List_1_t4E5AC581A944AD3FC12334F6930D8AEE8883C2F6* L_0 = __this->___U3CJsonElementsU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EventMessage_get_Namespace_m802438EC6B93123646E0DEDAC656C4BA75A4E8B6_inline (EventMessage_t470DDE32D55CB6E5C78B1B073D344CFD3C548748* __this, const RuntimeMethod* method) 
{
	{
		// public string Namespace { get; set; }
		String_t* L_0 = __this->___U3CNamespaceU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EventMessage_get_Json_m2E70488D82084C92F3A9C92E448A2B21E4775EB6_inline (EventMessage_t470DDE32D55CB6E5C78B1B073D344CFD3C548748* __this, const RuntimeMethod* method) 
{
	{
		// public string Json { get; set; }
		String_t* L_0 = __this->___U3CJsonU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EventMessage_get_Event_mE5435820B395058C5B086BDEEB4B532E223B4B5F_inline (EventMessage_t470DDE32D55CB6E5C78B1B073D344CFD3C548748* __this, const RuntimeMethod* method) 
{
	{
		// public string Event { get; set; }
		String_t* L_0 = __this->___U3CEventU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OpenedMessage_set_Eio_m14878647AF2166F99E3501EAF9CE6400D5CDFC94_inline (OpenedMessage_tB5F1C6F098ABB481932A5728B15765F454E68806* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int Eio { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CEioU3Ek__BackingField_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OpenedMessage_set_Sid_mA1895EF3EA084BFFE3E217AF331D34E8B547A368_inline (OpenedMessage_tB5F1C6F098ABB481932A5728B15765F454E68806* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Sid { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CSidU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSidU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OpenedMessage_set_PingInterval_mB7120382186ECF1A8017986E27C8B34EDB205947_inline (OpenedMessage_tB5F1C6F098ABB481932A5728B15765F454E68806* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int PingInterval { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3CPingIntervalU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OpenedMessage_set_PingTimeout_m842A5893B483BC2ECA8758EA02BC1447950518E7_inline (OpenedMessage_tB5F1C6F098ABB481932A5728B15765F454E68806* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int PingTimeout { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3CPingTimeoutU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OpenedMessage_set_Upgrades_mEE39F78D728EC70493E6BE661B5D82156DECE0D4_inline (OpenedMessage_tB5F1C6F098ABB481932A5728B15765F454E68806* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___0_value, const RuntimeMethod* method) 
{
	{
		// public List<string> Upgrades { get; private set; }
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ___0_value;
		__this->___U3CUpgradesU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUpgradesU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* OpenedMessage_get_Upgrades_m2C3FC959CC2F99F68C54C19F65A63523070D3EAA_inline (OpenedMessage_tB5F1C6F098ABB481932A5728B15765F454E68806* __this, const RuntimeMethod* method) 
{
	{
		// public List<string> Upgrades { get; private set; }
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___U3CUpgradesU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ServerAckMessage_get_Namespace_m39F4BDD56711214144740D32BC43235E723347AB_inline (ServerAckMessage_tC5BF3089BD75CD610CF8C015557B164CA0C353A4* __this, const RuntimeMethod* method) 
{
	{
		// public string Namespace { get; set; }
		String_t* L_0 = __this->___U3CNamespaceU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ServerAckMessage_get_Id_m48F4F2A13702377F069C2608DFFFC4705A7BDB13_inline (ServerAckMessage_tC5BF3089BD75CD610CF8C015557B164CA0C353A4* __this, const RuntimeMethod* method) 
{
	{
		// public int Id { get; set; }
		int32_t L_0 = __this->___U3CIdU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ServerAckMessage_get_Json_m379C1D589E737C08449415D0870FDCD35C298C26_inline (ServerAckMessage_tC5BF3089BD75CD610CF8C015557B164CA0C353A4* __this, const RuntimeMethod* method) 
{
	{
		// public string Json { get; set; }
		String_t* L_0 = __this->___U3CJsonU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ServerBinaryAckMessage_get_OutgoingBytes_mD92D74D4D3FEEFA517761F7EA9C35958F9F39869_inline (ServerBinaryAckMessage_tF981FEA898A346EA4D64137EA3E3B4A4F30E6D24* __this, const RuntimeMethod* method) 
{
	{
		// public List<byte[]> OutgoingBytes { get; set; }
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___U3COutgoingBytesU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ServerBinaryAckMessage_get_Namespace_m25C4F0C08C7377EC866EAB212CA3D1E94841478C_inline (ServerBinaryAckMessage_tF981FEA898A346EA4D64137EA3E3B4A4F30E6D24* __this, const RuntimeMethod* method) 
{
	{
		// public string Namespace { get; set; }
		String_t* L_0 = __this->___U3CNamespaceU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ServerBinaryAckMessage_get_Id_mCE84C17E170DBED3E2EF2BF0EA6796AEFE2672EF_inline (ServerBinaryAckMessage_tF981FEA898A346EA4D64137EA3E3B4A4F30E6D24* __this, const RuntimeMethod* method) 
{
	{
		// public int Id { get; set; }
		int32_t L_0 = __this->___U3CIdU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ServerBinaryAckMessage_get_Json_m91F2D7AA896F9DF424579839453F32DF868E714E_inline (ServerBinaryAckMessage_tF981FEA898A346EA4D64137EA3E3B4A4F30E6D24* __this, const RuntimeMethod* method) 
{
	{
		// public string Json { get; set; }
		String_t* L_0 = __this->___U3CJsonU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t Utf8JsonReader_get_TokenType_mCE6BF109ADE03F304F8C16D68AF519C5CFBA631A_inline (Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->____tokenType_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ByteArrayConverter_get_Bytes_mB2301559AE1A615772BE852AF29A909F2CDA05C2_inline (ByteArrayConverter_t63039C8D605504CCABFF7783367282E961DDC022* __this, const RuntimeMethod* method) 
{
	{
		// public List<byte[]> Bytes { get; }
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___U3CBytesU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* JsonSerializerOptions_get_Converters_m8E101768CD4E9529474EB92573A0E68E8FBA92A2_inline (JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CConvertersU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonSerializeResult_set_Json_m5ADFFFEE83E72D33DFA0C3DCB977D61FD04C6021_inline (JsonSerializeResult_t60648F85702617E3385A7DC76FAA88A6136ADF5F* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Json { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CJsonU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CJsonU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonSerializeResult_set_Bytes_mCE2E79B6CE26A96823CB38D516C1F835123B24C1_inline (JsonSerializeResult_t60648F85702617E3385A7DC76FAA88A6136ADF5F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public IList<byte[]> Bytes { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CBytesU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBytesU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Func_1_t27E25A1D7DE6C9B79FF934165133F82F6D9A05EA* SystemTextJsonSerializer_get_OptionsProvider_mAD6EC455B330506F067BECD0CF6410AA700ADFAD_inline (SystemTextJsonSerializer_tE1389CB2086D14697EC05627113C613450216EDF* __this, const RuntimeMethod* method) 
{
	{
		// public Func<JsonSerializerOptions> OptionsProvider { get; set; }
		Func_1_t27E25A1D7DE6C9B79FF934165133F82F6D9A05EA* L_0 = __this->___U3COptionsProviderU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ByteArrayConverter_get_Bytes_m1B5D693762557FDE3B3B82097C2F133AA4ADCF2D_inline (ByteArrayConverter_tB277DA37ED5A0960062DB249ABFA11C48D13B5DD* __this, const RuntimeMethod* method) 
{
	{
		// internal List<byte[]> Bytes { get; }
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___U3CBytesU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* JsonSerializerSettings_get_Converters_mB7EE43E74FA48980B6C0976D7A2160B2174C8FCA_inline (JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CConvertersU3Ek__BackingField_46;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08* NewtonsoftJsonSerializer_get_OptionsProvider_m02D3F8735071000E88878C4E37CA276F218FD635_inline (NewtonsoftJsonSerializer_t3EBB19A83287CFB4FBE58E1BDBBAA054E5CD14ED* __this, const RuntimeMethod* method) 
{
	{
		// public Func<JsonSerializerSettings> OptionsProvider { get; set; }
		Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08* L_0 = __this->___U3COptionsProviderU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)), SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
	// T
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	const Il2CppFullySharedGenericAny L_9 = L_8;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = V_0;
		int32_t L_7 = V_1;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		NullCheck(L_6);
		il2cpp_codegen_memcpy((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), L_8, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (void**)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_8);
		return;
	}

IL_0034:
	{
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? L_9: *(void**)L_9));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_gshared_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(TKey)
	const uint32_t SizeOf_TKey_tAE1541CEBE7E523E393A46E588568F4BD8337859 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	// TKey
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tAE1541CEBE7E523E393A46E588568F4BD8337859);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)), SizeOf_TKey_tAE1541CEBE7E523E393A46E588568F4BD8337859);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TKey_tAE1541CEBE7E523E393A46E588568F4BD8337859);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_gshared_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(TValue)
	const uint32_t SizeOf_TValue_tAEA6D09BCD56B8A100F4F042BC143BC0266C28B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	// TValue
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TValue_tAEA6D09BCD56B8A100F4F042BC143BC0266C28B7);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)), SizeOf_TValue_tAEA6D09BCD56B8A100F4F042BC143BC0266C28B7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TValue_tAEA6D09BCD56B8A100F4F042BC143BC0266C28B7);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Func_1_Invoke_m35CBC166F464B8A1169583672025E6D64211856C_gshared_inline (Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
