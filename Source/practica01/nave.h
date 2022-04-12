// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "nave.generated.h"

UCLASS()
class PRACTICA01_API Anave : public APawn
{
	GENERATED_BODY()

private:
	float PosicionIniciox;
	float PosicionInicioy;
	float size;
	float velocidad;
	float damage;
	float colision;
	float vida
public:
	// Sets default values for this pawn's properties
	Anave();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, category = "prueba")
		float Posicionx;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, category = "prueba")
		float Posiciony;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
