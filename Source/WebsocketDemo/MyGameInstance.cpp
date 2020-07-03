// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"
#include "Kismet/GameplayStatics.h"

UMyGameInstance* UMyGameInstance::GetRPGGameInstance(const UObject* WorldContextObject)
{
	UGameInstance* GameInstance = UGameplayStatics::GetGameInstance(WorldContextObject);
	if (nullptr == GameInstance)
	{
		return nullptr;
	}
	auto RPGGameInstance = Cast<UMyGameInstance>(GameInstance);
	return RPGGameInstance;
}
