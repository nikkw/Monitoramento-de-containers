#include "Timer.h"

void ProcessTimer(){
	static uint32_t timer = millis();

	if((millis() - timer) >= 1 * CLOCKS_PER_SEC){

		ReadSensors();	
		
		timer = millis(); 
	}
}

void ReadSensors(){

	static uint32_t timer1 = millis();
	static uint32_t timer2 = millis();

	if((millis() - timer1) >= VOLTAGE_TEMPERATURE_TIMER * CLOCKS_PER_SEC){
		SetTemperature();
		SetVoltage();
		timer1 = millis();
	}	

	if((millis() - timer2) >= MAGNETIC_VIBRATION_TIMER * CLOCKS_PER_SEC){
		SetMagnetic();
		SetVibration();
		timer2 = millis();
	}	
}