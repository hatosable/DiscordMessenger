// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordMessenger/Public/WebhookSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebhookSettings() {}

// Begin Cross Module References
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
DISCORDMESSENGER_API UClass* Z_Construct_UClass_UWebhookSettings();
DISCORDMESSENGER_API UClass* Z_Construct_UClass_UWebhookSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_DiscordMessenger();
// End Cross Module References

// Begin Class UWebhookSettings
void UWebhookSettings::StaticRegisterNativesUWebhookSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebhookSettings);
UClass* Z_Construct_UClass_UWebhookSettings_NoRegister()
{
	return UWebhookSettings::StaticClass();
}
struct Z_Construct_UClass_UWebhookSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "WebhookSettings.h" },
		{ "ModuleRelativePath", "Public/WebhookSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WebhookURL_MetaData[] = {
		{ "Category", "DiscordMessenger" },
		{ "ModuleRelativePath", "Public/WebhookSettings.h" },
		{ "ToolTip", "\xe3\x83\xa1\xe3\x83\x83\xe3\x82\xbb\xe3\x83\xbc\xe3\x82\xb8\xe3\x82\x92\xe9\x80\x81\xe4\xbf\xa1\xe3\x81\x99\xe3\x82\x8bURL" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_WebhookURL;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebhookSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebhookSettings_Statics::NewProp_WebhookURL = { "WebhookURL", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWebhookSettings, WebhookURL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WebhookURL_MetaData), NewProp_WebhookURL_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWebhookSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebhookSettings_Statics::NewProp_WebhookURL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWebhookSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWebhookSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_DiscordMessenger,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWebhookSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebhookSettings_Statics::ClassParams = {
	&UWebhookSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWebhookSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWebhookSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWebhookSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UWebhookSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWebhookSettings()
{
	if (!Z_Registration_Info_UClass_UWebhookSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebhookSettings.OuterSingleton, Z_Construct_UClass_UWebhookSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWebhookSettings.OuterSingleton;
}
template<> DISCORDMESSENGER_API UClass* StaticClass<UWebhookSettings>()
{
	return UWebhookSettings::StaticClass();
}
UWebhookSettings::UWebhookSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWebhookSettings);
UWebhookSettings::~UWebhookSettings() {}
// End Class UWebhookSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DiscordMessenger_Source_DiscordMessenger_Public_WebhookSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWebhookSettings, UWebhookSettings::StaticClass, TEXT("UWebhookSettings"), &Z_Registration_Info_UClass_UWebhookSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebhookSettings), 201735188U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DiscordMessenger_Source_DiscordMessenger_Public_WebhookSettings_h_3439241867(TEXT("/Script/DiscordMessenger"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_DiscordMessenger_Source_DiscordMessenger_Public_WebhookSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DiscordMessenger_Source_DiscordMessenger_Public_WebhookSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
