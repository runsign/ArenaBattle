// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EngineMinimal.h"
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

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// 분수대 액터에 컴포넌트를 추가
	UPROPERTY(VisibleAnywhere) // 언리얼 엔진이 메모리관리를 자동으로 하게하는 함수
	UStaticMeshComponent* Body;

	//VisibleAnywhere는 디테일창에서 보이게, EditAnywhere는 수정이 가능하게,
	//Category는 디테일창 안에 이를을 결정지어줌
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Water;

	UPROPERTY(VisibleAnywhere)
	UPointLightComponent* Light;

	UPROPERTY(VisibleAnywhere)
	UParticleSystemComponent* Splash;
};
