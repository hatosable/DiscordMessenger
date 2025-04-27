// Copyright hatosable All Rights Reserved.


#include "DiscordMessageLibrary.h"
#include "WebhookSettings.h"
#include "Http.h"
#include "Logging.h"
#include "Runtime/Json/Public/Dom/JsonObject.h"
#include"Runtime/Json/Public/Serialization/JsonWriter.h"
#include "Runtime/Json/Public/Serialization/JsonSerializer.h"

void UDiscordMessageLibrary::SendMessageToDiscord(const FDiscordMessageContent& Message, TArray<FDiscordMessageEmbeds> Embeds)
{
	TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());

	if (!Message.Username.IsEmpty())
	{
		JsonObject->SetStringField("username", Message.Username);
	}

	if (!Message.Content.IsEmpty())
	{
		JsonObject->SetStringField("content", Message.Content);
	}

	if (!Embeds.IsEmpty())
	{
		TArray<TSharedPtr<FJsonValue>> Array;

		TSharedPtr<FJsonObject> Embed;

		for (auto Item : Embeds)
		{
			Embed = MakeShareable(new FJsonObject());
		
			Embed->SetNumberField("color",LinearColorToBits( Item.Color));
	
			Embed->SetStringField("title", Item.Title);

			Embed->SetStringField("description", Item.Description);

			Array.Add(MakeShareable(new FJsonValueObject(Embed.ToSharedRef())));
		}
	
		JsonObject->SetArrayField("embeds", Array);
	}
	
	FString Payload;
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&Payload);

	FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);

	TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
	Request->SetURL(GetDefault<UWebhookSettings>()->WebhookURL);
	Request->SetVerb("POST");
	Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
	Request->SetContentAsString(Payload);

	Request->OnProcessRequestComplete().BindLambda([](FHttpRequestPtr, FHttpResponsePtr Response, bool bWasSuccessful) {
		if (bWasSuccessful && Response->GetResponseCode() == 204)
		{
			UE_LOG(LogDiscordMessenger, Log, TEXT("Message sent to Discord successfully!"));
		}
		else
		{
			UE_LOG(LogDiscordMessenger, Error, TEXT("Failed to send message to Discord: %s"), *Response->GetContentAsString());
		}
	});

	Request->ProcessRequest();
}

uint32 UDiscordMessageLibrary::LinearColorToBits(FLinearColor Color)
{
	uint8 Red = Color.R * 255;
	uint8 Green = Color.G * 255;
	uint8 Blue = Color.B * 255;
	
	return FColor(Red, Green, Blue, 0).Bits;
}

