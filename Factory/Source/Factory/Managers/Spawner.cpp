#include "Spawner.h"
#include "../AIController/DeliveryController.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/StaticMesh.h"
#include "../Actors/Item.h"

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

	AllPoolArray.Add(Controller);

	DeliveryEnqueue(Delivery);
}

void ASpawner::CreateItem()
{
	AItem* Item = GetWorld()->SpawnActor<AItem>(ItemClass, SpawnPoint, FRotator::ZeroRotator);

	AllPoolArray.Add(Item);

	ItemEnqueue(Item);
}

void ASpawner::CreateWheel()
{
	AActor* Wheel = GetWorld()->SpawnActor<AActor>(WheelClass, SpawnPoint, FRotator::ZeroRotator);

	AllPoolArray.Add(Wheel);

	WheelEnqueue(Wheel);
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

void ASpawner::ItemEnqueue(AItem* Item)
{
	Item->SetActorLocation(SpawnPoint);
	ItemQueue.Enqueue(Item);
}

void ASpawner::WheelEnqueue(AActor* Wheel)
{
	Wheel->SetActorLocation(SpawnPoint);
	WheelQueue.Enqueue(Wheel);
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

AItem* ASpawner::GetItem()
{
	if (ItemQueue.IsEmpty())
	{
		CreateItem();
	}

	AItem* Item;
	ItemQueue.Dequeue(Item);

	return Item;
}

AActor* ASpawner::GetWheel()
{
	if (WheelQueue.IsEmpty())
	{
		CreateWheel();
	}

	AActor* Wheel;
	WheelQueue.Dequeue(Wheel);

	return Wheel;
}

void ASpawner::ReturnDelivery(ACharacter* Delivery)
{
	DeliveryEnqueue(Delivery);
}

void ASpawner::ReturnItem(AItem* Item)
{
	ItemEnqueue(Item);
}

void ASpawner::ReturnWheel(AActor* Wheel)
{
	WheelEnqueue(Wheel);
}

int32 ASpawner::GetCount()
{
	return Count;
}