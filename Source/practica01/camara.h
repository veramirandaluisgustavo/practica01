// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "camara.generated.h"

UCLASS()
class PRACTICA01_API Acamara : public AActor
{
	GENERATED_BODY()
	
private:
	float Ubicacionx;
	float Ubicaciony;
	float velocidad;
	float angulo;

public:	
	// Sets default values for this actor's properties
	Acamara();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, category = "vision")
		float Posicionx;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, category = "vision")
		float Posiciony;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
