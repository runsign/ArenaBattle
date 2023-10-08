// Fill out your copyright notice in the Description page of Project Settings.


#include "ABGameMode.h"
#include "ABCharacter.h"/*"ABPawn.h"*/ // DefaultPawn을 지정하기 위해 헤더파일을 참조해야함.
#include "ABPlayerController.h" // PlayerController을 지정하기 위해 헤더파일을 참조해야함.

AABGameMode::AABGameMode()
{
	// DefaultPawn을 지정. 클래스를 지정하는 것이 특징이다
	DefaultPawnClass = AABCharacter::StaticClass();
	// PlayerController을 지정. 클래스를 지정하는 것이 특징이다
	PlayerControllerClass = AABPlayerController::StaticClass();
}

void AABGameMode::PostLogin(APlayerController* NewPlayer)
{
	ABLOG(Warning, TEXT("PostLogin Begin"));
	Super::PostLogin(NewPlayer);
	ABLOG(Warning, TEXT("PostLogin End"));
}
