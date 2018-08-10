#include "Compass_Softuart_V2.h"

Compass_Uart_V2 compass1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  compass1.begin(115200);
  compass1.reset();
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Compass Value: ");
  Serial.println(compass1.read());
}
