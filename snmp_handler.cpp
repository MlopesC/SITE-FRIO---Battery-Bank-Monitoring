#include "snmp_handler.h"
#include "modbus_handler.h" // para acesso ao node
#include <Arduino.h>

void snmp_setup() {
  // Inicialização do SNMP
}

void snmp_loop() {
  // Usar os dados do node aqui, por exemplo:
  uint16_t tensao = node.getResponseBuffer(0);
  Serial.print("Tensão via SNMP: ");
  Serial.println(tensao);
}
