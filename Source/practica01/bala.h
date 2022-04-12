// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "bala.generated.h"

UCLASS()
class PRACTICA01_API Abala : public AActor
{
	GENERATED_BODY()
private:
	float PosicionIniciox;
	float PosicionInicioy;
	float size;
	float velocidad;
	float damage;


public:	
	// Sets default values for this actor's properties
	Abala();
	float Posicionx;
	float Posiciony;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
