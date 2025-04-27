// Copyright hatosable All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "WebhookSettings.generated.h"

/**
 * 
 */
UCLASS(config = Game, defaultconfig)
class DISCORDMESSENGER_API UWebhookSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	
	virtual FName GetCategoryName() const override { return("Discord Messenger"); }

# if WITH_EDITOR
	
	/** セクションテキストを取得し、デフォルトでクラスDisplayNameを使用します。 */
	virtual FText GetSectionText() const override { return( FText::FromString(TEXT("Discord Messenger")) ); }
	
# endif

	UPROPERTY(EditAnywhere, Config, Category = "DiscordMessenger", meta=(ToolTip= "メッセージを送信するURL"))
	FString WebhookURL;
};
