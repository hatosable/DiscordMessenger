// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DiscordMessageLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDiscordMessageContent;
struct FDiscordMessageEmbeds;
#ifdef DISCORDMESSENGER_DiscordMessageLibrary_generated_h
#error "DiscordMessageLibrary.generated.h already included, missing '#pragma once' in DiscordMessageLibrary.h"
#endif
#define DISCORDMESSENGER_DiscordMessageLibrary_generated_h

#define FID_HostProject_Plugins_DiscordMessenger_Source_DiscordMessenger_Public_DiscordMessageLibrary_h_15_SPARSE_DATA
#define FID_HostProject_Plugins_DiscordMessenger_Source_DiscordMessenger_Public_DiscordMessageLibrary_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_DiscordMessenger_Source_DiscordMessenger_Public_DiscordMessageLibrary_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_DiscordMessenger_Source_DiscordMessenger_Public_DiscordMessageLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendMessageToDiscord);


#define FID_HostProject_Plugins_DiscordMessenger_Source_DiscordMessenger_Public_DiscordMessageLibrary_h_15_ACCESSORS
#define FID_HostProject_Plugins_DiscordMessenger_Source_DiscordMessenger_Public_DiscordMessageLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDiscordMessageLibrary(); \
	friend struct Z_Construct_UClass_UDiscordMessageLibrary_Statics; \
public: \
	DECLARE_CLASS(UDiscordMessageLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DiscordMessenger"), NO_API) \
	DECLARE_SERIALIZER(UDiscordMessageLibrary)


#define FID_HostProject_Plugins_DiscordMessenger_Source_DiscordMessenger_Public_DiscordMessageLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDiscordMessageLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDiscordMessageLibrary(UDiscordMessageLibrary&&); \
	NO_API UDiscordMessageLibrary(const UDiscordMessageLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDiscordMessageLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDiscordMessageLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDiscordMessageLibrary) \
	NO_API virtual ~UDiscordMessageLibrary();


#define FID_HostProject_Plugins_DiscordMessenger_Source_DiscordMessenger_Public_DiscordMessageLibrary_h_12_PROLOG
#define FID_HostProject_Plugins_DiscordMessenger_Source_DiscordMessenger_Public_DiscordMessageLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_DiscordMessenger_Source_DiscordMessenger_Public_DiscordMessageLibrary_h_15_SPARSE_DATA \
	FID_HostProject_Plugins_DiscordMessenger_Source_DiscordMessenger_Public_DiscordMessageLibrary_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_DiscordMessenger_Source_DiscordMessenger_Public_DiscordMessageLibrary_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_DiscordMessenger_Source_DiscordMessenger_Public_DiscordMessageLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_DiscordMessenger_Source_DiscordMessenger_Public_DiscordMessageLibrary_h_15_ACCESSORS \
	FID_HostProject_Plugins_DiscordMessenger_Source_DiscordMessenger_Public_DiscordMessageLibrary_h_15_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_DiscordMessenger_Source_DiscordMessenger_Public_DiscordMessageLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DISCORDMESSENGER_API UClass* StaticClass<class UDiscordMessageLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_DiscordMessenger_Source_DiscordMessenger_Public_DiscordMessageLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
