// Fill out your copyright notice in the Description page of Project Settings.

#include "Barrack.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"


// Sets default values
ABarrack::ABarrack()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    
    //Create Mesh Component
    BarrackMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("BarrackMeshComponent");
    
    //Load custom mesh
    ConstructorHelpers::FObjectFinder<UStaticMesh>LoadedMesh(TEXT("StaticMesh'/Game/StarterContent/Architecture/Pillar_50x500.Pillar_50x500'"));
    if (LoadedMesh.Object) {
        BarrackMeshComponent->SetStaticMesh(LoadedMesh.Object);
    }
    RootComponent = BarrackMeshComponent;

}

// Called when the game starts or when spawned
void ABarrack::BeginPlay()
{
	Super::BeginPlay();
    
    
	
}

// Called every frame
void ABarrack::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

