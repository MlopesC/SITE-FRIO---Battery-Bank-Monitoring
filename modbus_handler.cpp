#include "modbus_handler.h"

ModbusMaster node;

void preTransmission() {
  digitalWrite(4, 1);
}

void postTransmission() {
  digitalWrite(4, 0);
}

void modbus_setup() {
  node.begin(1, Serial2);
  node.preTransmission(preTransmission);
  node.postTransmission(postTransmission);
}

void modbus_loop() {
  uint8_t result = node.readInputRegisters(0x0000, 2);
  if (result == node.ku8MBSuccess) {
    // Exemplo de leitura
    uint16_t val = node.getResponseBuffer(0);
    Serial.println(val);
  }
}
