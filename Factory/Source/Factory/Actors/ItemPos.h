#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ItemPos.generated.h"

UCLASS()
class FACTORY_API AItemPos : public AActor
{
	GENERATED_BODY()
	
public:	
	AItemPos();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

public:
	void SetItem(AActor* NewItem);
	void SetItemLocation(FVector Pos);
	void SetItemRotation(FRotator Rot);
	void SetItemAttach(AActor* Parent);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector SpawnPos;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector IdlePos;

public:
	void SetSelect(bool Select);
	bool IsSelect();
	bool IsReady();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* Item;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bSelect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bReady;
};
