// Fill out your copyright notice in the Description page of Project Settings.


#include "RandomMoveActor.h"
#include "Kismet/GameplayStatics.h"

enum EventKind
{
	Explosion,
	Fire,
	Smoke,
	Spark,
	END
};

// Sets default values
ARandomMoveActor::ARandomMoveActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CurrentMoveCount = 0;
	CurrentTime = 0.0f;
}

// Called when the game starts or when spawned
void ARandomMoveActor::BeginPlay()
{
	Super::BeginPlay();

	Start = GetActorLocation();
}

// Called every frame
void ARandomMoveActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (CurrentMoveCount < 10)
	{
		CurrentTime += DeltaTime;
		if (CurrentTime >= MoveTime)
		{
			int32 eventId = createEvent();
			if (eventId != -1)
			{
				UClass* targetClass = nullptr;
				switch (eventId)
				{
					case EventKind::Explosion:
						targetClass = Explosion;
					break;

					case EventKind::Fire:
						targetClass = Fire;
					break;

					case EventKind::Smoke:
						targetClass = Smoke;
					break;

					case EventKind::Spark:
						targetClass = Spark;
					break;
				}

				UWorld* world = GetWorld();
				if (IsValid(world) && IsValid(targetClass))
				{
					FVector pos = GetActorLocation();
					world->SpawnActor(targetClass, &pos);
				}
			}

			move();

			CurrentTime = 0.0f;
		}
	}
}

float ARandomMoveActor::distance(FVector2D first, FVector2D second)
{
	//return FVector2D::Distance(first, second);
	float deltaX = second.X - first.X;
	float deltaY = second.Y - first.Y;
	return FMath::Sqrt(FMath::Pow(deltaX, 2) + FMath::Pow(deltaY, 2));
}

void ARandomMoveActor::move()
{
	CurrentMoveCount++;

	UE_LOG(LogTemp, Display, TEXT("Move Count : %d"), CurrentMoveCount);

	FVector MoveFrom = GetActorLocation();
	FVector MoveTo(step() * MoveRange, step() * MoveRange, Start.Z);
	MoveTo += GetActorLocation();

	float moveDistance = distance((FVector2D)MoveFrom, (FVector2D)MoveTo);

	UE_LOG(LogTemp, Display, TEXT("Move from [%g, %g] to [%g, %g]"), MoveFrom.X, MoveFrom.Y, MoveTo.X, MoveTo.Y);
	UE_LOG(LogTemp, Display, TEXT("Moving Distance : %g\n"), moveDistance);
	SetActorLocation(MoveTo);
}

int32_t ARandomMoveActor::step()
{
	return FMath::Rand() % 2 * (FMath::Rand() % 2 == 0 ? 1 : -1);
}

int32 ARandomMoveActor::createEvent()
{
	int32 per = FMath::Rand() % 2;
	if (per % 2 == 0)
	{
		UE_LOG(LogTemp, Display, TEXT("Event nothing..."));

		return -1;
	}
	else
	{
		int32 eventId = FMath::RandRange(EventKind::Explosion, EventKind::END - 1);
		FString eventStr = "";
		switch (eventId)
		{
			case EventKind::Explosion:
				eventStr = "Explosion";
			break;

			case EventKind::Fire:
				eventStr = "Fire";
			break;

			case EventKind::Smoke:
				eventStr = "Smoke";
			break;

			case EventKind::Spark:
				eventStr = "Spark";
			break;
		}

		UE_LOG(LogTemp, Display, TEXT("Event %s(ID : %d) occured"), *eventStr, eventId);


		return eventId;
	}
}

