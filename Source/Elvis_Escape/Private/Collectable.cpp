// Fill out your copyright notice in the Description page of Project Settings.


#include "Collectable.h"

// Sets default values
ACollectable::ACollectable()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	
	PrimaryActorTick.bCanEverTick = true;
	mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	collider = CreateDefaultSubobject<USphereComponent>("Collision");
	SetRootComponent(collider);

	mesh->AttachToComponent(RootComponent, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
}

// Called when the game starts or when spawned
void ACollectable::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACollectable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

