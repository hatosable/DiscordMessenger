// Copyright hatosable All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DiscordMessageContent.h"
#include "DiscordMessageLibrary.generated.h"

/**
 * 
 */
UCLASS()
class DISCORDMESSENGER_API UDiscordMessageLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "DiscordMessenger", meta =(AutoCreateRefTerm = "Embeds"))
	static void SendMessageToDiscord(const FDiscordMessageContent& Message, TArray<FDiscordMessageEmbeds> Embeds);

private:

	static uint32 LinearColorToBits(FLinearColor Color);
};
