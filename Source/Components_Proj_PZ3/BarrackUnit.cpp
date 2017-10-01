// Fill out your copyright notice in the Description page of Project Settings.

#include "BarrackUnit.h"


// Sets default values
ABarrackUnit::ABarrackUnit()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABarrackUnit::BeginPlay()
{
	Super::BeginPlay();
    
	
}

// Called every frame
void ABarrackUnit::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
    SetLifeSpan(5);

}

// Called to bind functionality to input
void ABarrackUnit::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

