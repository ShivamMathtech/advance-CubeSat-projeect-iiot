/******************************************************************************
 *
 * File : telemetry_packet.h
 *
 * Description:
 *      Telemetry data structure transmitted to ground station.
 *
 ******************************************************************************/

#ifndef TELEMETRY_PACKET_H
#define TELEMETRY_PACKET_H

#include <stdint.h>

typedef struct
{
    uint32_t timestamp;

    float temperature;
    float pressure;
    float altitude;

    float latitude;
    float longitude;

    float batteryVoltage;

    float roll;
    float pitch;
    float yaw;

    uint8_t systemStatus;

} TelemetryPacket_t;

#endif