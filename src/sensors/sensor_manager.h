#ifndef SENSOR_MANAGER_H
#define SENSOR_MANAGER_H

class SensorManager
{
public:

    bool Initialize();

    void ReadAllSensors();

    float GetTemperature();
    float GetPressure();
    float GetAltitude();

private:

    float m_temperature;
    float m_pressure;
    float m_altitude;
};

#endif