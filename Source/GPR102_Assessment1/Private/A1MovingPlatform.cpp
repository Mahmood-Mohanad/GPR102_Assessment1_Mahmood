// Fill out your copyright notice in the Description page of Project Settings.


#include "A1MovingPlatform.h"
#include "GameFramework/MovementComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InterpToMovementComponent.h"


// Sets default values
AA1MovingPlatform::AA1MovingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create and set up the default scene root
	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("cpp_SceneRoot"));
	RootComponent = SceneComponent;

	// Create the static mesh component
	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("cpp_StaticMesh"));
	MeshComp->SetupAttachment(SceneComponent);

	// Create the movement component
	MovementComp = CreateDefaultSubobject<UInterpToMovementComponent>(TEXT("cpp_InterpToMovement"));
	MovementComp->SetUpdatedComponent(SceneComponent);
}


// Called when the game starts or when spawned
void AA1MovingPlatform::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AA1MovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
