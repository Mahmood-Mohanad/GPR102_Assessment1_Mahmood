// Fill out your copyright notice in the Description page of Project Settings.


#include "A1MovingPlatform.h"
#include "GameFramework/MovementComponent.h"
#include "Components/InterpToMovementComponent.h"

// Sets default values
AA1MovingPlatform::AA1MovingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DefaultSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneComponent"));
	RootComponent = DefaultSceneComponent;
	
	MeshComp= CreateDefaultSubobject<UStaticMeshComponent>(TEXT("cpp_mesh"));
	MeshComp->SetupAttachment(DefaultSceneComponent);

	MovementComp= CreateDefaultSubobject<UInterpToMovementComponent>(TEXT("cpp_movement"));
	MovementComp->SetUpdatedComponent(DefaultSceneComponent);

	/* I've tried to inherit this class in BP_MovingPlatform, but I keep messing up the component
	hierarchy and it always behaves in an unexpected way. I simply give up and assign a generic
	actor as the parent of BP_MovingPlatform -Mahmood */
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
