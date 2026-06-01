#ifndef NRF24_INTERFACE_H
#define NRF24_INTERFACE_H

class NRF24Interface
{
public:

    bool Initialize();

    bool Send(const void* data, unsigned int length);
};

#endif