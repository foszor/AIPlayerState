#include "AIPlayerState.h"
#include "AIPlayerStateController.h"

AAIPlayerStateController::AAIPlayerStateController(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	bWantsPlayerState = true;
}
