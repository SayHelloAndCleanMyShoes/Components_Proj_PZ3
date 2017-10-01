// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Barrack.generated.h"

UCLASS()
class COMPONENTS_PROJ_PZ3_API ABarrack : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABarrack();
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UStaticMeshComponent* BarrackMeshComponent;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
    
    
	
	
};
