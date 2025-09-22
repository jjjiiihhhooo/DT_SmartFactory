#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Character.h"
#include "Containers/Queue.h"
#include "Spawner.generated.h"

class AItem;

UCLASS()
class FACTORY_API ASpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	ASpawner();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

private:
	void InitPool();
	void CreateDelivery();
	void CreateItem();
	void CreateWheel();
	void DeliveryEnqueue(ACharacter* Delivery);
	void ItemEnqueue(AItem* Item);
	void WheelEnqueue(AActor* Wheel);
	
	TQueue<ACharacter*> DeliveryQueue;
	TQueue<AItem*> ItemQueue;
	TQueue<AActor*> WheelQueue;

	UPROPERTY()
	TArray<UObject*> AllPoolArray;

	int32 Count;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pool")
	FVector SpawnPoint;

public:
	UFUNCTION(BlueprintCallable, Category = "Pool")
	ACharacter* GetDelivery();

	UFUNCTION(BlueprintCallable, Category = "Pool")
	AItem* GetItem();

	UFUNCTION(BlueprintCallable, Category = "Pool")
	AActor* GetWheel();

	UFUNCTION(BlueprintCallable, Category = "Pool")
	void ReturnDelivery(ACharacter* Delivery);

	UFUNCTION(BlueprintCallable, Category = "Pool")
	void ReturnItem(AItem* Item);

	UFUNCTION(BlueprintCallable, Category = "Pool")
	void ReturnWheel(AActor* Wheel);

	UFUNCTION(BlueprintCallable, Category = "Pool")
	int32 GetCount();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pool")
	TSubclassOf<ACharacter> DeliveryClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pool")
	TSubclassOf<AItem> ItemClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pool")
	TSubclassOf<AActor> WheelClass;
};
