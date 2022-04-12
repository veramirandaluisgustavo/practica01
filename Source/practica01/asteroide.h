// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "asteroide.generated.h"

UCLASS()
class PRACTICA01_API Aasteroide : public AActor
{
	GENERATED_BODY()
	
private:
	float PosicionIniciox;
	float PosicionInicioy;
	float size;
	float velocidad;
	float damage;
	float resistencia;
	float colision;
public:	
	// Sets default values for this actor's properties
	Aasteroide();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, category = "trava")
	float Posicionx;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, category = "trava")
	float Posiciony;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
