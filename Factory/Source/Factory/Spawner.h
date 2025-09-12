#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Pawn.h"
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
	void DeliveryEnqueue(APawn* Delivery);

	UPROPERTY()
	TSet<APawn*> AllPooled;

	TQueue<APawn*> DeliveryQueue;

	int32 Count;
public:
	UFUNCTION(BlueprintCallable, Category = "Pool")
	APawn* GetDelivery();

	UFUNCTION(BlueprintCallable, Category = "Pool")
	void ReturnDelivery(APawn* Delivery);

	UFUNCTION(BlueprintCallable, Category = "Pool")
	int32 GetCount();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pool")
	TSubclassOf<APawn> DeliveryClass;

	
};
