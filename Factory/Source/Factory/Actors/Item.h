#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item.generated.h"

class USceneComponent;
class ASpawner;

UCLASS()
class FACTORY_API AItem : public AActor
{
	GENERATED_BODY()
	
public:	
	AItem();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Wheel")
	TArray<USceneComponent*> LeftWheelArray;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Wheel")
	TArray<USceneComponent*> RightWheelArray;

public:
	void SetItemAll(AActor* Parent);

public:
	TArray<FVector> GetLeftWheelPosArray() const;
	TArray<FVector> GetRightWheelPosArray() const;

public:
	void AddAttachedWheel(AActor* WheelActor);
	void ReturnItemToSpawner(ASpawner* Spawner);
	void ReturnWheelToSpawner(ASpawner* Spawner);

	UPROPERTY()
	TArray<AActor*> AttachedWheelArray;
};
