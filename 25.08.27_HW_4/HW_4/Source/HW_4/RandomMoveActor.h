// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RandomMoveActor.generated.h"

UCLASS()
class HW_4_API ARandomMoveActor : public AActor
{
	GENERATED_BODY()
	
public:

	// Sets default values for this actor's properties
	ARandomMoveActor();

	UPROPERTY(EditAnywhere)
	float MoveTime = 1.0f;

	UPROPERTY(EditAnywhere)
	int32 MaxMoveCount = 10;

	UPROPERTY(EditAnywhere)
	float MoveRange = 200.0f;

	UPROPERTY(EditAnywhere)
	TSubclassOf<class AActor> Explosion;

	UPROPERTY(EditAnywhere)
	TSubclassOf<class AActor> Fire;

	UPROPERTY(EditAnywhere)
	TSubclassOf<class AActor> Smoke;

	UPROPERTY(EditAnywhere)
	TSubclassOf<class AActor> Spark;

private:
	int CurrentMoveCount;
	float CurrentTime;

	FVector Start;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	float distance(FVector2D first, FVector2D second);
	void move();
	int32 step();
	int32 createEvent();

};
