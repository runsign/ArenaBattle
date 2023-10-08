// Fill out your copyright notice in the Description page of Project Settings.


#include "ABAnimInstance.h"

UABAnimInstance::UABAnimInstance()
{
	CurrentPawnSpeed = 0.0f;
	IsInAir = false;
}

void UABAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	// TryGetPawnOwner()�� �ִ��ν��Ͻ� Ŭ������ �Լ��� ���� �ִ��ν��Ͻ��� ����� Pawn ��ü�� ��ȯ�ϴ� �������� ���Ǹ�
	// CurrentPawnSpeed�� ���� �ӵ��� ����ȭ ���ִ� �ڵ��̴�.
	auto Pawn = TryGetPawnOwner();
	if (::IsValid(Pawn))
	{
		CurrentPawnSpeed = Pawn->GetVelocity().Size();
		auto Character = Cast<ACharacter>(Pawn);
		if (Character)
		{
			IsInAir = Character->GetMovementComponent()->IsFalling();
		}
	}
}
