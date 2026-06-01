#ifndef BATTERY_MANAGER_H
#define BATTERY_MANAGER_H

class BatteryManager
{
public:

    float GetVoltage();

    bool IsLowBattery();

};

#endif