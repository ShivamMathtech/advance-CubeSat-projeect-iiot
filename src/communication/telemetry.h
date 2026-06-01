#ifndef TELEMETRY_H
#define TELEMETRY_H

#include "../../include/telemetry_packet.h"

class Telemetry
{
public:

    void BuildPacket(TelemetryPacket_t& packet);

};

#endif