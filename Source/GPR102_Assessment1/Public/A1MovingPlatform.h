// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/InterpToMovementComponent.h"
#include "A1MovingPlatform.generated.h"

UCLASS()
class GPR102_ASSESSMENT1_API AA1MovingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AA1MovingPlatform();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Variables", meta = (MakeEditWidget = "true"))
	FVector TargetPos;  // This variable represents the mini 3D gizmo that I can edit in the editor viewport (the target location for the platform to move to)



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "scene")
	TObjectPtr<USceneComponent>SceneComponent;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="mesh")
	TObjectPtr<UStaticMeshComponent> MeshComp; 

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="movement")
	TObjectPtr<UInterpToMovementComponent> MovementComp;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
