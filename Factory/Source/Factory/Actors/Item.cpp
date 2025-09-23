#include "Item.h"
#include "../Managers/Spawner.h"
#include "Components/SceneComponent.h"
#include "Kismet/GameplayStatics.h"

AItem::AItem()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AItem::BeginPlay()
{
	Super::BeginPlay();
	
}

void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AItem::SetItemAll(AActor* Parent)
{
	SetActorLocation(Parent->GetActorLocation());
	SetActorRotation(Parent->GetActorRotation());
	AttachToActor(Parent, FAttachmentTransformRules::KeepWorldTransform);
}



TArray<FVector> AItem::GetLeftWheelPosArray()
{
	TArray<FVector> Array;

	for (USceneComponent* Comp : LeftWheelArray)
	{
		if (Comp)
		{
			Array.Add(Comp->GetComponentLocation());
		}
	}

	return Array;
}

TArray<FVector> AItem::GetRightWheelPosArray()
{
	TArray<FVector> Array;

	for (USceneComponent* Comp : RightWheelArray)
	{
		if (Comp)
		{
			Array.Add(Comp->GetComponentLocation());
		}
	}

	return Array;
}

void AItem::AddAttachedWheel(AActor* WheelActor)
{
	WheelActor->AttachToActor(this, FAttachmentTransformRules::KeepWorldTransform);

	WheelActor->SetActorRotation(LeftWheelArray[0]->GetComponentRotation());

	AttachedWheelArray.Add(WheelActor);
}

void AItem::ReturnItemToSpawner(ASpawner* Spawner)
{
	DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);

	ReturnWheelToSpawner(Spawner);

	Spawner->ReturnItem(this);
}

void AItem::ReturnWheelToSpawner(ASpawner* Spawner)
{
	for(AActor* Wheel : AttachedWheelArray)
	{
		Wheel->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
		Spawner->ReturnWheel(Wheel);
	}
}