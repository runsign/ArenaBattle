// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ArenaBattle.h"
#include "GameFramework/Actor.h"
#include "Fountain.generated.h"

UCLASS()
class ARENABATTLE_API AFountain : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFountain();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void PostInitializeComponents() override;




public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// �м��� ���Ϳ� ������Ʈ�� �߰�
	UPROPERTY(VisibleAnywhere) // �𸮾� ������ �޸𸮰����� �ڵ����� �ϰ��ϴ� �Լ�
	UStaticMeshComponent* Body;

	//VisibleAnywhere�� ������â���� ���̰�, EditAnywhere�� ������ �����ϰ�,
	//Category�� ������â �ȿ� �̸��� ����������
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Water;

	UPROPERTY(VisibleAnywhere)
	UPointLightComponent* Light;

	UPROPERTY(VisibleAnywhere)
	UParticleSystemComponent* Splash;

	UPROPERTY(EditAnywhere, Category = Number)
	int32 ID;

private:
	// private���� ������ �θ� �⺻�����δ� ������ �Ұ���������
	// AllowPrivateAccess�� true�� �θ� ���� �������Ʈ���� ������ ����������.
	UPROPERTY(EditAnywhere, Category = Stat, Meta = (AllowPrivateAccess = true))
	float RotateSpeed;


};
