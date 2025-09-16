#include "Spawner.h"
#include "DeliveryController.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/StaticMesh.h"

ASpawner::ASpawner()
{
	PrimaryActorTick.bCanEverTick = true;

	Count = 10;
}

void ASpawner::BeginPlay()
{
	Super::BeginPlay();
	
	//InitPool();
}

void ASpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASpawner::InitPool()
{
	for (int32 i = 0; i < Count; i++)
	{
		CreateDelivery();
		CreateParts();
	}
}

void ASpawner::CreateDelivery()
{
	ACharacter* Delivery = GetWorld()->SpawnActor<ACharacter>(DeliveryClass, SpawnPoint, FRotator::ZeroRotator);

	ADeliveryController* Controller = GetWorld()->SpawnActor<ADeliveryController>(ADeliveryController::StaticClass());
	Controller->Possess(Delivery);

	DeliveryAllPooled.Add(Delivery);

	DeliveryEnqueue(Delivery);
}

void ASpawner::CreateParts()
{
	AActor* Parts = GetWorld()->SpawnActor<AActor>(PartsClass, SpawnPoint, FRotator::ZeroRotator);

	PartsAllPooled.Add(Parts);

	PartsEnqueue(Parts);
}

void ASpawner::DeliveryEnqueue(ACharacter* Delivery)
{
	if (UCharacterMovementComponent* MovementComp = Delivery->GetCharacterMovement())
	{
		MovementComp->StopMovementImmediately();
		MovementComp->GravityScale = 0.0f;
	}

	Delivery->SetActorEnableCollision(false);
	Delivery->SetActorHiddenInGame(true);
	Delivery->SetActorTickEnabled(false);
	Delivery->SetActorTransform(GetTransform());

	DeliveryQueue.Enqueue(Delivery);
}

void ASpawner::PartsEnqueue(AActor* Parts)
{
	Parts->SetActorLocation(SpawnPoint);
	PartsQueue.Enqueue(Parts);
}

ACharacter* ASpawner::GetDelivery()
{
	if (DeliveryQueue.IsEmpty())
	{
		CreateDelivery();
	}

	ACharacter* Delivery;
	DeliveryQueue.Dequeue(Delivery);

	if (Delivery)
	{
		Delivery->SetActorHiddenInGame(false);
		Delivery->SetActorEnableCollision(true);
		Delivery->SetActorTickEnabled(true);

		if (UCharacterMovementComponent* MovementComp = Delivery->GetCharacterMovement())
		{
			MovementComp->GravityScale = 1.0f;
		}

	}
	
	return Delivery;
}

AActor* ASpawner::GetParts()
{
	if (PartsQueue.IsEmpty())
	{
		CreateParts();
	}

	AActor* Parts;
	PartsQueue.Dequeue(Parts);

	return Parts;
}


void ASpawner::ReturnDelivery(ACharacter* Delivery)
{
	DeliveryEnqueue(Delivery);
}

void ASpawner::ReturnParts(AActor* Parts)
{
	PartsEnqueue(Parts);
}

int32 ASpawner::GetCount()
{
	return Count;
}