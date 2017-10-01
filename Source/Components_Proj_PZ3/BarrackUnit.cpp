// Fill out your copyright notice in the Description page of Project Settings.

#include "BarrackUnit.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"


// Sets default values
ABarrackUnit::ABarrackUnit()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    
//    BarrackUnitMesh = CreateDefaultSubobject<UStaticMeshComponent>("BarrackUnitMesh");
//    
//    ConstructorHelpers::FObjectFinder<UStaticMesh>LoadedMesh(TEXT("StaticMesh'/Game/StarterContent/Architecture/Pillar_50x500.Pillar_50x500'"));
//    if (LoadedMesh.Object) {
//        BarrackUnitMesh->SetStaticMesh(LoadedMesh.Object);
//    }


}

// Called when the game starts or when spawned
void ABarrackUnit::BeginPlay()
{
	Super::BeginPlay();
    SetLifeSpan(20);
	
}

// Called every frame
void ABarrackUnit::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
    

}

// Called to bind functionality to input
void ABarrackUnit::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ABarrackUnit::AddComponentDynam() {
    UStaticMeshComponent* MeshComponentDynam = NewObject<UStaticMeshComponent>();
    MeshComponentDynam->RegisterComponent();
    MeshComponentDynam->AttachToComponent(RootComponent, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true));
    
    ConstructorHelpers::FObjectFinder<UStaticMesh>LoadedMesh(TEXT("StaticMesh'/Game/StarterContent/Architecture/Pillar_50x500.Pillar_50x500'"));
    if (LoadedMesh.Object) {
        MeshComponentDynam->SetStaticMesh(LoadedMesh.Object);
    }
    
}





