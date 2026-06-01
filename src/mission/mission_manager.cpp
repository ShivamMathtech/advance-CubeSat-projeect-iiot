#include "mission_manager.h"

void MissionManager::Update()
{
    switch(currentState)
    {
        case MISSION_BOOT:
            currentState = MISSION_SELF_TEST;
            break;

        case MISSION_SELF_TEST:
            currentState = MISSION_IDLE;
            break;

        default:
            break;
    }
}