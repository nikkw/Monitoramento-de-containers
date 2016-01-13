#ifndef __ARDUINO_H__
#define __ARDUINO_H__

#include "Main.h"

typedef struct{

	struct {
		byte Value;
		uint32_t ChangeTime;		
	} Magnetic;

	struct {
		uint32_t Value;
		uint32_t ChangeTime;
	} Vibration;

	struct{
		int8_t Temperature;
		int16_t Voltage;
	} Sensors;	
} st_Arduino;

extern st_Arduino Arduino;

void InitializeArduino();

#endif