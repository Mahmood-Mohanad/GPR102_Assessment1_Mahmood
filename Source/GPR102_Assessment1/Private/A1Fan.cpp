// Fill out your copyright notice in the Description page of Project Settings.


#include "A1Fan.h"

// Sets default values
AA1Fan::AA1Fan()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create and set the scene component as the root.
	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("cpp_SceneRoot"));
	RootComponent = SceneComponent;

	// Create FanBase and attach it to the SceneComponent.
	FanBase = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("cpp_FanBase"));
	FanBase->SetupAttachment(SceneComponent);

	// Create FanBlades and attach it to FanBase.
	FanBlades = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("cpp_FanBlades"));
	FanBlades->SetupAttachment(FanBase);

	// Create the capsule and attach it to FanBase.
	capsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("cpp_capsule"));
	capsule->SetupAttachment(FanBase);

}

// Called when the game starts or when spawned
void AA1Fan::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AA1Fan::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

