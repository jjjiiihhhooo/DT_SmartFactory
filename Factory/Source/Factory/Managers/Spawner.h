#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Character.h"
#include "Containers/Queue.h"
#include "Spawner.generated.h"

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
	void DeliveryEnqueue(ACharacter* Delivery);
	void ItemEnqueue(AActor* Item);

	UPROPERTY()
	TSet<ACharacter*> DeliveryAllPooled;
	UPROPERTY()
	TSet<AActor*> ItemAllPooled;

	TQueue<ACharacter*> DeliveryQueue;
	TQueue<AActor*> ItemQueue;

	int32 Count;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pool")
	FVector SpawnPoint;

public:
	UFUNCTION(BlueprintCallable, Category = "Pool")
	ACharacter* GetDelivery();

	UFUNCTION(BlueprintCallable, Category = "Pool")
	AActor* GetItem();

	UFUNCTION(BlueprintCallable, Category = "Pool")
	void ReturnDelivery(ACharacter* Delivery);

	UFUNCTION(BlueprintCallable, Category = "Pool")
	void ReturnItem(AActor* Item);

	UFUNCTION(BlueprintCallable, Category = "Pool")
	int32 GetCount();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pool")
	TSubclassOf<ACharacter> DeliveryClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pool")
	TSubclassOf<AActor> ItemClass;
};
