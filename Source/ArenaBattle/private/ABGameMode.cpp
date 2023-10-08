// Fill out your copyright notice in the Description page of Project Settings.


#include "ABGameMode.h"
#include "ABCharacter.h"/*"ABPawn.h"*/ // DefaultPawn�� �����ϱ� ���� ��������� �����ؾ���.
#include "ABPlayerController.h" // PlayerController�� �����ϱ� ���� ��������� �����ؾ���.

AABGameMode::AABGameMode()
{
	// DefaultPawn�� ����. Ŭ������ �����ϴ� ���� Ư¡�̴�
	DefaultPawnClass = AABCharacter::StaticClass();
	// PlayerController�� ����. Ŭ������ �����ϴ� ���� Ư¡�̴�
	PlayerControllerClass = AABPlayerController::StaticClass();
}

void AABGameMode::PostLogin(APlayerController* NewPlayer)
{
	ABLOG(Warning, TEXT("PostLogin Begin"));
	Super::PostLogin(NewPlayer);
	ABLOG(Warning, TEXT("PostLogin End"));
}
