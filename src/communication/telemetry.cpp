#include "telemetry.h"

void Telemetry::BuildPacket(TelemetryPacket_t& packet)
{
    packet.timestamp = millis();
}