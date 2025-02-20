// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/CapsuleComponent.h"
#include "A1Fan.generated.h"

UCLASS()
class GPR102_ASSESSMENT1_API AA1Fan : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AA1Fan();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "scene")
	TObjectPtr<USceneComponent> SceneComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "mesh")
	TObjectPtr<UStaticMeshComponent> FanBase;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "mesh")
	TObjectPtr<UStaticMeshComponent> FanBlades;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "capsule")
	TObjectPtr<UCapsuleComponent> capsule;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
