// Fill out your copyright notice in the Description page of Project Settings.


#include "ROSIntActorHusky.h"




// Create a std::function callback object
std::function<void(TSharedPtr<FROSBaseMsg>)> SubscribeCallback4 = [](TSharedPtr<FROSBaseMsg> msg) -> void
{
	auto Concrete = StaticCastSharedPtr<ROSMessages::std_msgs::String>(msg);
	if (Concrete.IsValid())
	{
		UE_LOG(LogTemp, Log, TEXT("Incoming string was: %s"), (*(Concrete->_Data)));
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("Concrete is invalid!\n"));
	}
	return;
};


// Sets default values
AROSIntActorHusky::AROSIntActorHusky()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;




}

// Called when the game starts or when spawned
void AROSIntActorHusky::BeginPlay()
{
	// Initialize a topic
	ExampleTopic2 = NewObject<UTopic>(UTopic::StaticClass());
	rosinst3 = Cast<UROSIntegrationGameInstance>(GetGameInstance());

	ExampleTopic2->Init(rosinst3->ROSIntegrationCore, TEXT("/chatter"), TEXT("std_msgs/String"));


	// Subscribe to the topic
	ExampleTopic2->Subscribe(SubscribeCallback4);


	Super::BeginPlay();
	
}

// Called every frame
void AROSIntActorHusky::Tick(float DeltaTime)
{

	UE_LOG(LogTemp, Log, TEXT("Concrete is invalid!\n"));

	Super::Tick(DeltaTime);



	
}






