#include "battery_manager.h"

float BatteryManager::GetVoltage()
{
    return 7.4f;
}

bool BatteryManager::IsLowBattery()
{
    return GetVoltage() < 6.8f;
}