#include "ActorComponent/CTimeDilationSystem.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Global.h"

UCTimeDilationSystem::UCTimeDilationSystem()
{

}


void UCTimeDilationSystem::BeginPlay()
{
	Super::BeginPlay();
	
	UWorld* world = GetWorld();
	CheckNull(world);

	UGameplayStatics::SetGlobalTimeDilation(world, Adjust_Time);
}