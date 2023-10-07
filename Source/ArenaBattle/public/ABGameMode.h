// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ArenaBattle.h"
#include "GameFramework/GameModeBase.h"
#include "ABGameMode.generated.h"

/**
 * 
 */
UCLASS()
class ARENABATTLE_API AABGameMode : public AGameModeBase
{
	GENERATED_BODY()
	AABGameMode();

public:
	// 플레이어가 로그인하면 게임모드의 PostLogin 함수가 호출된다.
	virtual void PostLogin(APlayerController* NewPlayer) override;
	
};
