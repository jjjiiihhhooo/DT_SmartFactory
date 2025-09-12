#include "Spawner.h"

ASpawner::ASpawner()
{
	PrimaryActorTick.bCanEverTick = true;

}

void ASpawner::BeginPlay()
{
	Super::BeginPlay();
	
	InitPool();
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
	}
}

void ASpawner::CreateDelivery()
{
	APawn* Delivery = GetWorld()->SpawnActor<APawn>(DeliveryClass, FVector::ZeroVector, FRotator::ZeroRotator);
	
	AllPooled.Add(Delivery);

	DeliveryEnqueue(Delivery);
}

void ASpawner::DeliveryEnqueue(APawn* Delivery) 
{
	Delivery->SetActorHiddenInGame(true);
	Delivery->SetActorEnableCollision(false);
	Delivery->SetActorTickEnabled(false);
	Delivery->SetActorTransform(GetTransform());

	DeliveryQueue.Enqueue(Delivery);
}

APawn* ASpawner::GetDelivery()
{
	APawn* Delivery;
	DeliveryQueue.Dequeue(Delivery);

	Delivery->SetActorHiddenInGame(false);
	Delivery->SetActorEnableCollision(true);
	Delivery->SetActorTickEnabled(true);

	return Delivery;
}

void ASpawner::ReturnDelivery(APawn* Delivery)
{
	DeliveryEnqueue(Delivery);
}

int32 ASpawner::GetCount()
{
	return Count;
}