#include "sensor_manager.h"

bool SensorManager::Initialize()
{
    return true;
}

void SensorManager::ReadAllSensors()
{
    m_temperature = 25.0;
    m_pressure = 1013.25;
    m_altitude = 120.0;
}

float SensorManager::GetTemperature()
{
    return m_temperature;
}

float SensorManager::GetPressure()
{
    return m_pressure;
}

float SensorManager::GetAltitude()
{
    return m_altitude;
}