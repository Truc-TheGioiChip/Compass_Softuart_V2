#include "Compass_Softuart_V2.h"

Compass_Uart_V2::Compass_Uart_V2()
{
  
}

void Compass_Uart_V2::begin(uint32_t baud)
{
   electric_compass.begin(baud);
}

void Compass_Uart_V2::reset()
{
  electric_compass.write('a');
}

int16_t Compass_Uart_V2::read()
{
  electric_compass.write('z');
  delay(COMPASS_WAITING_TO_RECEIVE_TIMEOUT);
  return (electric_compass.read() << 8) | electric_compass.read();
}

