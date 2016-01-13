#ifndef __VOLTAGE_H__
#define __VOLTAGE_H__

#include "Main.h"

#define VOLTAGE_PORT A5

void InitializeVoltage();
int16_t GetVoltage();
void SetVoltage();

#endif