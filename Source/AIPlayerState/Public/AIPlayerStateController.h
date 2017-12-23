#pragma once

#include "AIPlayerState.h"
#include "CoreMinimal.h"
#include "AIController.h"
#include "AIPlayerStateController.generated.h"

/**
*
*/
UCLASS(ClassGroup = AI, BlueprintType, Blueprintable)
class AAIPlayerStateController : public AAIController
{
	GENERATED_BODY()

public:
	AAIPlayerStateController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
};
