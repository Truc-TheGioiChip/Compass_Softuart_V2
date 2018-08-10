#ifndef COMPASS_SOFTUART_V2
#define COMPASS_SOFTUART_V2

#define SOFT_DEFAULT_RX_PIN 2
#define SOFT_DEFAULT_TX_PIN 3

#define COMPASS_WAITING_TO_RECEIVE_TIMEOUT 5 //IN MILLISECOND

#include "Arduino.h"
#include "SoftwareSerial.h"

static SoftwareSerial electric_compass(SOFT_DEFAULT_RX_PIN, SOFT_DEFAULT_TX_PIN);

class Compass_Uart_V2
{
  public:
    Compass_Uart_V2();

    void begin(uint32_t baud);
    void reset();
    int16_t read();
};


#endif
