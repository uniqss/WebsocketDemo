// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyGameInstance.generated.h"

/**
 *
 */
UCLASS()
class WEBSOCKETDEMO_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:

	// global websocket pointer.
	UPROPERTY(BlueprintReadWrite, Category = WebSocket)
	UObject* WebSocket;

public:
	UFUNCTION(BlueprintCallable)
		static UMyGameInstance* GetRPGGameInstance(const UObject* WorldContextObject);
};
