// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Prop.generated.h"

UCLASS()
class UE4VERSIONCONTROL_API AProp : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProp();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
private:
	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* MeshComp;

};
