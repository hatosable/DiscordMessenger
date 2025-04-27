// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WebhookSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DISCORDMESSENGER_WebhookSettings_generated_h
#error "WebhookSettings.generated.h already included, missing '#pragma once' in WebhookSettings.h"
#endif
#define DISCORDMESSENGER_WebhookSettings_generated_h

#define FID_HostProject_Plugins_DiscordMessenger_Source_DiscordMessenger_Public_WebhookSettings_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebhookSettings(); \
	friend struct Z_Construct_UClass_UWebhookSettings_Statics; \
public: \
	DECLARE_CLASS(UWebhookSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/DiscordMessenger"), NO_API) \
	DECLARE_SERIALIZER(UWebhookSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_HostProject_Plugins_DiscordMessenger_Source_DiscordMessenger_Public_WebhookSettings_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWebhookSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWebhookSettings(UWebhookSettings&&); \
	UWebhookSettings(const UWebhookSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebhookSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebhookSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebhookSettings) \
	NO_API virtual ~UWebhookSettings();


#define FID_HostProject_Plugins_DiscordMessenger_Source_DiscordMessenger_Public_WebhookSettings_h_11_PROLOG
#define FID_HostProject_Plugins_DiscordMessenger_Source_DiscordMessenger_Public_WebhookSettings_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_DiscordMessenger_Source_DiscordMessenger_Public_WebhookSettings_h_14_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_DiscordMessenger_Source_DiscordMessenger_Public_WebhookSettings_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DISCORDMESSENGER_API UClass* StaticClass<class UWebhookSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_DiscordMessenger_Source_DiscordMessenger_Public_WebhookSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
