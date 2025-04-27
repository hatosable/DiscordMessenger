// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordMessenger/Public/DiscordMessageLibrary.h"
#include "DiscordMessenger/Public/DiscordMessageContent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordMessageLibrary() {}
// Cross Module References
	DISCORDMESSENGER_API UClass* Z_Construct_UClass_UDiscordMessageLibrary();
	DISCORDMESSENGER_API UClass* Z_Construct_UClass_UDiscordMessageLibrary_NoRegister();
	DISCORDMESSENGER_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordMessageContent();
	DISCORDMESSENGER_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordMessageEmbeds();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DiscordMessenger();
// End Cross Module References
	DEFINE_FUNCTION(UDiscordMessageLibrary::execSendMessageToDiscord)
	{
		P_GET_STRUCT_REF(FDiscordMessageContent,Z_Param_Out_Message);
		P_GET_TARRAY(FDiscordMessageEmbeds,Z_Param_Embeds);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDiscordMessageLibrary::SendMessageToDiscord(Z_Param_Out_Message,Z_Param_Embeds);
		P_NATIVE_END;
	}
	void UDiscordMessageLibrary::StaticRegisterNativesUDiscordMessageLibrary()
	{
		UClass* Class = UDiscordMessageLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SendMessageToDiscord", &UDiscordMessageLibrary::execSendMessageToDiscord },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDiscordMessageLibrary_SendMessageToDiscord_Statics
	{
		struct DiscordMessageLibrary_eventSendMessageToDiscord_Parms
		{
			FDiscordMessageContent Message;
			TArray<FDiscordMessageEmbeds> Embeds;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Message;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Embeds_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Embeds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordMessageLibrary_SendMessageToDiscord_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordMessageLibrary_SendMessageToDiscord_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DiscordMessageLibrary_eventSendMessageToDiscord_Parms, Message), Z_Construct_UScriptStruct_FDiscordMessageContent, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordMessageLibrary_SendMessageToDiscord_Statics::NewProp_Message_MetaData), Z_Construct_UFunction_UDiscordMessageLibrary_SendMessageToDiscord_Statics::NewProp_Message_MetaData) }; // 96257383
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordMessageLibrary_SendMessageToDiscord_Statics::NewProp_Embeds_Inner = { "Embeds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDiscordMessageEmbeds, METADATA_PARAMS(0, nullptr) }; // 3115353865
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDiscordMessageLibrary_SendMessageToDiscord_Statics::NewProp_Embeds = { "Embeds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DiscordMessageLibrary_eventSendMessageToDiscord_Parms, Embeds), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3115353865
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordMessageLibrary_SendMessageToDiscord_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordMessageLibrary_SendMessageToDiscord_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordMessageLibrary_SendMessageToDiscord_Statics::NewProp_Embeds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordMessageLibrary_SendMessageToDiscord_Statics::NewProp_Embeds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordMessageLibrary_SendMessageToDiscord_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Embeds" },
		{ "Category", "DiscordMessenger" },
		{ "ModuleRelativePath", "Public/DiscordMessageLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordMessageLibrary_SendMessageToDiscord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordMessageLibrary, nullptr, "SendMessageToDiscord", nullptr, nullptr, Z_Construct_UFunction_UDiscordMessageLibrary_SendMessageToDiscord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordMessageLibrary_SendMessageToDiscord_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDiscordMessageLibrary_SendMessageToDiscord_Statics::DiscordMessageLibrary_eventSendMessageToDiscord_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordMessageLibrary_SendMessageToDiscord_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDiscordMessageLibrary_SendMessageToDiscord_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordMessageLibrary_SendMessageToDiscord_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDiscordMessageLibrary_SendMessageToDiscord_Statics::DiscordMessageLibrary_eventSendMessageToDiscord_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDiscordMessageLibrary_SendMessageToDiscord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDiscordMessageLibrary_SendMessageToDiscord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDiscordMessageLibrary);
	UClass* Z_Construct_UClass_UDiscordMessageLibrary_NoRegister()
	{
		return UDiscordMessageLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UDiscordMessageLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDiscordMessageLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordMessenger,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordMessageLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UDiscordMessageLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDiscordMessageLibrary_SendMessageToDiscord, "SendMessageToDiscord" }, // 1099470583
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordMessageLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordMessageLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DiscordMessageLibrary.h" },
		{ "ModuleRelativePath", "Public/DiscordMessageLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDiscordMessageLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDiscordMessageLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDiscordMessageLibrary_Statics::ClassParams = {
		&UDiscordMessageLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordMessageLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UDiscordMessageLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UDiscordMessageLibrary()
	{
		if (!Z_Registration_Info_UClass_UDiscordMessageLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDiscordMessageLibrary.OuterSingleton, Z_Construct_UClass_UDiscordMessageLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDiscordMessageLibrary.OuterSingleton;
	}
	template<> DISCORDMESSENGER_API UClass* StaticClass<UDiscordMessageLibrary>()
	{
		return UDiscordMessageLibrary::StaticClass();
	}
	UDiscordMessageLibrary::UDiscordMessageLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDiscordMessageLibrary);
	UDiscordMessageLibrary::~UDiscordMessageLibrary() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DiscordMessenger_Source_DiscordMessenger_Public_DiscordMessageLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DiscordMessenger_Source_DiscordMessenger_Public_DiscordMessageLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDiscordMessageLibrary, UDiscordMessageLibrary::StaticClass, TEXT("UDiscordMessageLibrary"), &Z_Registration_Info_UClass_UDiscordMessageLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDiscordMessageLibrary), 2447239718U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DiscordMessenger_Source_DiscordMessenger_Public_DiscordMessageLibrary_h_1484420968(TEXT("/Script/DiscordMessenger"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DiscordMessenger_Source_DiscordMessenger_Public_DiscordMessageLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DiscordMessenger_Source_DiscordMessenger_Public_DiscordMessageLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
