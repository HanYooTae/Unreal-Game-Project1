#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CParkourSystem.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MAIN_API UCParkourSystem : public UActorComponent
{
	GENERATED_BODY()

public:	
	UCParkourSystem();

	void Vault();
		
};
