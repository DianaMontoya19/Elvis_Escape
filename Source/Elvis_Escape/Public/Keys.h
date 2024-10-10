// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item.h"
#include "Keys.generated.h"

UENUM(BlueprintType)
enum EKeysType
{
	GOLD UMETA(DisplayName = "Gold"),
	SILVER UMETA(DisplayName = "Silver"),
	BRONZE UMETA(DisplayName = "Bronze")
	
};

UCLASS()
class ELVIS_ESCAPE_API AKeys : public AItem
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AKeys();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(BlueprintReadWrite)
	TEnumAsByte<EKeysType>EnumKeys;

};
