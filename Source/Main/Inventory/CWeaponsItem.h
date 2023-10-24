#pragma once

#include "CoreMinimal.h"
#include "Inventory/CItem.h"
#include "CWeaponsItem.generated.h"

UCLASS()
class MAIN_API UCWeaponsItem : public UCItem
{
	GENERATED_BODY()
	
public:
	UCWeaponsItem();

	UFUNCTION(BlueprintCallable)
		virtual void Use(class ACPlayer* Character) override;


};
