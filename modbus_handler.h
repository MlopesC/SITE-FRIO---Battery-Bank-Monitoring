#ifndef MODBUS_HANDLER_H
#define MODBUS_HANDLER_H

#include <ModbusMaster.h>

extern ModbusMaster node;

void modbus_setup();
void modbus_loop();

#endif
