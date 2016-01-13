#include "Arduino.h"

//Início desenvolvimento: 21/12/2015
//Término desenvolvimento: 12/01/2016

st_Arduino Arduino;

void InitializeArduino(){
	memset(&Arduino, 0, sizeof Arduino);

	SetTemperature();
	SetVoltage();
	SetMagnetic();
	SetVibration();
}