#ifndef __TIMER_H__
#define __TIMER_H__

#include "Main.h"

#define VOLTAGE_TEMPERATURE_TIMER 30L
#define MAGNETIC_VIBRATION_TIMER 1L //nao abaixar para menos que 1
#define WAIT_SET_TIMER 10L
#define CLOCKS_PER_SEC 1000L

void ProcessTimer();
void ReadSensors();

#endif