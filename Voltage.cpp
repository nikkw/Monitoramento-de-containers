#include "Voltage.h"

void InitializeVoltage(){
	pinMode(VOLTAGE_PORT, INPUT);
}

int16_t GetVoltage(){
	return Arduino.Sensors.Voltage;	
}

void SetVoltage(){
	float value = analogRead(VOLTAGE_PORT); 
	int16_t v = 0;

  	if (value > 100 && value < 483){
  		v = ((value * 5) / 1023) * 77.3;
  	}
  
  	if (value > 665 && value < 1023){
  		v = ((value * 5) / 1023) * 57;
  	}

  	Arduino.Sensors.Voltage = v;
}