// Copyright hatosable All Rights Reserved.
#pragma once

#include "DiscordMessageContent.generated.h"

USTRUCT(BlueprintType)
struct DISCORDMESSENGER_API FDiscordMessageEmbeds
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DiscordMessenger", meta = (HideAlphaChannel))
	FLinearColor Color = FColor::Cyan;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DiscordMessenger")
	FString Title;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DiscordMessenger")
	FString Description;
};

USTRUCT(BlueprintType)
struct DISCORDMESSENGER_API FDiscordMessageContent
{
	GENERATED_BODY()

	public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DiscordMessenger")
	FString Username;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DiscordMessenger")
	FString Content;
};
