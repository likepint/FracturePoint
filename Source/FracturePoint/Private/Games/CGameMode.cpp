#include "Games/CGameMode.h"
#include "Characters/CPlayerController.h"
#include "Characters/CCharacter.h"

ACGameMode::ACGameMode()
{
	PlayerControllerClass = ACPlayerController::StaticClass();
	DefaultPawnClass = ACCharacter::StaticClass();
}
