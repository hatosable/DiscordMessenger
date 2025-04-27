// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordMessenger/Public/DiscordMessageContent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordMessageContent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
DISCORDMESSENGER_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordMessageContent();
DISCORDMESSENGER_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordMessageEmbeds();
UPackage* Z_Construct_UPackage__Script_DiscordMessenger();
// End Cross Module References

// Begin ScriptStruct FDiscordMessageEmbeds
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DiscordMessageEmbeds;
class UScriptStruct* FDiscordMessageEmbeds::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DiscordMessageEmbeds.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DiscordMessageEmbeds.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDiscordMessageEmbeds, (UObject*)Z_Construct_UPackage__Script_DiscordMessenger(), TEXT("DiscordMessageEmbeds"));
	}
	return Z_Registration_Info_UScriptStruct_DiscordMessageEmbeds.OuterSingleton;
}
template<> DISCORDMESSENGER_API UScriptStruct* StaticStruct<FDiscordMessageEmbeds>()
{
	return FDiscordMessageEmbeds::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDiscordMessageEmbeds_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DiscordMessageContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "DiscordMessenger" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/DiscordMessageContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[] = {
		{ "Category", "DiscordMessenger" },
		{ "ModuleRelativePath", "Public/DiscordMessageContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "DiscordMessenger" },
		{ "ModuleRelativePath", "Public/DiscordMessageContent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDiscordMessageEmbeds>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDiscordMessageEmbeds_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDiscordMessageEmbeds, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordMessageEmbeds_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDiscordMessageEmbeds, Title), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Title_MetaData), NewProp_Title_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordMessageEmbeds_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDiscordMessageEmbeds, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDiscordMessageEmbeds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordMessageEmbeds_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordMessageEmbeds_Statics::NewProp_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordMessageEmbeds_Statics::NewProp_Description,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordMessageEmbeds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDiscordMessageEmbeds_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DiscordMessenger,
	nullptr,
	&NewStructOps,
	"DiscordMessageEmbeds",
	Z_Construct_UScriptStruct_FDiscordMessageEmbeds_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordMessageEmbeds_Statics::PropPointers),
	sizeof(FDiscordMessageEmbeds),
	alignof(FDiscordMessageEmbeds),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordMessageEmbeds_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDiscordMessageEmbeds_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDiscordMessageEmbeds()
{
	if (!Z_Registration_Info_UScriptStruct_DiscordMessageEmbeds.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DiscordMessageEmbeds.InnerSingleton, Z_Construct_UScriptStruct_FDiscordMessageEmbeds_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DiscordMessageEmbeds.InnerSingleton;
}
// End ScriptStruct FDiscordMessageEmbeds

// Begin ScriptStruct FDiscordMessageContent
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DiscordMessageContent;
class UScriptStruct* FDiscordMessageContent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DiscordMessageContent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DiscordMessageContent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDiscordMessageContent, (UObject*)Z_Construct_UPackage__Script_DiscordMessenger(), TEXT("DiscordMessageContent"));
	}
	return Z_Registration_Info_UScriptStruct_DiscordMessageContent.OuterSingleton;
}
template<> DISCORDMESSENGER_API UScriptStruct* StaticStruct<FDiscordMessageContent>()
{
	return FDiscordMessageContent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDiscordMessageContent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DiscordMessageContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[] = {
		{ "Category", "DiscordMessenger" },
		{ "ModuleRelativePath", "Public/DiscordMessageContent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[] = {
		{ "Category", "DiscordMessenger" },
		{ "ModuleRelativePath", "Public/DiscordMessageContent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Username;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Content;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDiscordMessageContent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordMessageContent_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDiscordMessageContent, Username), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Username_MetaData), NewProp_Username_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordMessageContent_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDiscordMessageContent, Content), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Content_MetaData), NewProp_Content_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDiscordMessageContent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordMessageContent_Statics::NewProp_Username,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordMessageContent_Statics::NewProp_Content,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordMessageContent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDiscordMessageContent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DiscordMessenger,
	nullptr,
	&NewStructOps,
	"DiscordMessageContent",
	Z_Construct_UScriptStruct_FDiscordMessageContent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordMessageContent_Statics::PropPointers),
	sizeof(FDiscordMessageContent),
	alignof(FDiscordMessageContent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordMessageContent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDiscordMessageContent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDiscordMessageContent()
{
	if (!Z_Registration_Info_UScriptStruct_DiscordMessageContent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DiscordMessageContent.InnerSingleton, Z_Construct_UScriptStruct_FDiscordMessageContent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DiscordMessageContent.InnerSingleton;
}
// End ScriptStruct FDiscordMessageContent

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DiscordMessenger_Source_DiscordMessenger_Public_DiscordMessageContent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDiscordMessageEmbeds::StaticStruct, Z_Construct_UScriptStruct_FDiscordMessageEmbeds_Statics::NewStructOps, TEXT("DiscordMessageEmbeds"), &Z_Registration_Info_UScriptStruct_DiscordMessageEmbeds, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDiscordMessageEmbeds), 3790786216U) },
		{ FDiscordMessageContent::StaticStruct, Z_Construct_UScriptStruct_FDiscordMessageContent_Statics::NewStructOps, TEXT("DiscordMessageContent"), &Z_Registration_Info_UScriptStruct_DiscordMessageContent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDiscordMessageContent), 3067135733U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DiscordMessenger_Source_DiscordMessenger_Public_DiscordMessageContent_h_1517742052(TEXT("/Script/DiscordMessenger"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_HostProject_Plugins_DiscordMessenger_Source_DiscordMessenger_Public_DiscordMessageContent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DiscordMessenger_Source_DiscordMessenger_Public_DiscordMessageContent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
