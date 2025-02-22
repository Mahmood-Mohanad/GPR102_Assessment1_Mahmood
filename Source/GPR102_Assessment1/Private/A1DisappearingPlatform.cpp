// Fill out your copyright notice in the Description page of Project Settings.


#include "A1DisappearingPlatform.h"

// Sets default values
AA1DisappearingPlatform::AA1DisappearingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("cpp_SceneRoot"));
	RootComponent = SceneComponent;

	DPlatform = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("cpp_DPlatform"));
	DPlatform->SetupAttachment(SceneComponent);

	aabbox = CreateDefaultSubobject<UBoxComponent>(TEXT("cpp_AABB"));
	aabbox->SetupAttachment(DPlatform);

}

// Called when the game starts or when spawned
void AA1DisappearingPlatform::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AA1DisappearingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

