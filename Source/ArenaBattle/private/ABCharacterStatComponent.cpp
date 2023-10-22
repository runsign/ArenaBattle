// Fill out your copyright notice in the Description page of Project Settings.


#include "ABCharacterStatComponent.h"
#include "ABGameInstance.h"

// Sets default values for this component's properties
UABCharacterStatComponent::UABCharacterStatComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
	bWantsInitializeComponent = true;

	Level = 1;
}



void UABCharacterStatComponent::BeginPlay()
{
	Super::BeginPlay();
	SetNewLevel(Level);	
}

void UABCharacterStatComponent::InitializeComponent()
{
	Super::InitializeComponent();
}

void UABCharacterStatComponent::SetNewLevel(int32 NewLevel)
{
	auto ABGameInstance = Cast<UABGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));

	ABCHECK(nullptr != ABGameInstance);
	CurrentStatData = ABGameInstance->GetABCharacterData(NewLevel);
	if (nullptr != CurrentStatData)
	{
		Level = NewLevel;
		CurrentHP = CurrentStatData->MaxHP;
	}
	else
	{
		ABLOG(Error, TEXT("Level (%d) data doesn't exist"), NewLevel);
	}
}



