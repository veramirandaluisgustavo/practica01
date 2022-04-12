// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Escenario.generated.h"

UCLASS()
class PRACTICA01_API AEscenario : public AActor
{
	GENERATED_BODY()
	
private:
	float Ubicacionx;
	float Ubicaciony;
	int32 size;
	float velocidad;
public:	
	// Sets default values for this actor's properties
	AEscenario();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, category = "fondo")
		float Posicionx;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, category = "fondo")
		float Posiciony;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
