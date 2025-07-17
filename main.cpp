#include <Arduino.h>
#include "modbus_handler.h"
#include "snmp_handler.h"

void setup() {
  Serial.begin(115200);
  Serial2.begin(9600, SERIAL_8N1, 16, 17); // RX = 16, TX = 17
  pinMode(4, OUTPUT); // DE/RE
  modbus_setup();
  snmp_setup();
}

void loop() {
  modbus_loop();
  snmp_loop();
  delay(1000);
}
