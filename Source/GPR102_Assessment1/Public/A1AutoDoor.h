// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "A1AutoDoor.generated.h"

UCLASS()
class GPR102_ASSESSMENT1_API AA1AutoDoor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AA1AutoDoor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "scene")
	TObjectPtr<USceneComponent> SceneComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "mesh")
	TObjectPtr<UStaticMeshComponent> DoorWall;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "mesh")
	TObjectPtr<UStaticMeshComponent> DoorLeafR;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "mesh")
	TObjectPtr<UStaticMeshComponent> DoorLeafL;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "box")
	TObjectPtr<UBoxComponent> aabbox;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
