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
	void DeliveryEnqueue(ACharacter* Delivery);

	UPROPERTY()
	TSet<ACharacter*> AllPooled;

	TQueue<ACharacter*> DeliveryQueue;

	int32 Count;
public:
	UFUNCTION(BlueprintCallable, Category = "Pool")
	ACharacter* GetDelivery();

	UFUNCTION(BlueprintCallable, Category = "Pool")
	void ReturnDelivery(ACharacter* Delivery);

	UFUNCTION(BlueprintCallable, Category = "Pool")
	int32 GetCount();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pool")
	TSubclassOf<ACharacter> DeliveryClass;

	
};
