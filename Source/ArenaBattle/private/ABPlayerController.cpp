// Fill out your copyright notice in the Description page of Project Settings.


#include "ABPlayerController.h"

void AABPlayerController::BeginPlay()
{
	// �÷��� ��ų�� ��Ŀ������ �ʾƵ� �ڵ����� �����ǰ� ��.
	Super::BeginPlay();
	FInputModeGameOnly InputMode;
	SetInputMode(InputMode);
}
