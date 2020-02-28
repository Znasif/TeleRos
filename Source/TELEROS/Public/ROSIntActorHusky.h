// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "ROSIntegration/Classes/RI/Topic.h"
#include "ROSIntegration/Classes/ROSIntegrationGameInstance.h"
#include "ROSIntegration/Public/std_msgs/StdMsgsString.h"



#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ROSIntActorHusky.generated.h"

UCLASS()
class TELEROS_API AROSIntActorHusky : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AROSIntActorHusky();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = "Topics")
	UTopic* ExampleTopic2;

	UROSIntegrationGameInstance* rosinst3;

};
