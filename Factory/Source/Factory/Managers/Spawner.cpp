#include "Spawner.h"
#include "../AIController/DeliveryController.h"
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
		CreateItem();
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

void ASpawner::CreateItem()
{
	AActor* Item = GetWorld()->SpawnActor<AActor>(ItemClass, SpawnPoint, FRotator::ZeroRotator);

	ItemAllPooled.Add(Item);

	ItemEnqueue(Item);
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

void ASpawner::ItemEnqueue(AActor* Item)
{
	Item->SetActorLocation(SpawnPoint);
	ItemQueue.Enqueue(Item);
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

AActor* ASpawner::GetItem()
{
	if (ItemQueue.IsEmpty())
	{
		CreateItem();
	}

	AActor* Item;
	ItemQueue.Dequeue(Item);

	return Item;
}


void ASpawner::ReturnDelivery(ACharacter* Delivery)
{
	DeliveryEnqueue(Delivery);
}

void ASpawner::ReturnItem(AActor* Item)
{
	ItemEnqueue(Item);
}

int32 ASpawner::GetCount()
{
	return Count;
}