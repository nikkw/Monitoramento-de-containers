#include "Vibration.h"

void InitializeVibration(){
	pinMode(VIBRATION_PORT, INPUT);
}

uint32_t GetVibration(){
	return Arduino.Vibration.Value;
}

void SetVibration(){
	uint32_t value = pulseIn(VIBRATION_PORT, HIGH);

	if(Arduino.Vibration.ChangeTime != 0){
		if((millis() - Arduino.Vibration.ChangeTime) >= WAIT_SET_TIMER * CLOCKS_PER_SEC){
			Arduino.Vibration.ChangeTime = 0;
		}
		else{
			if(value > Arduino.Vibration.Value){
				Arduino.Vibration.Value = value;
				Arduino.Vibration.ChangeTime = millis();
			}
		}		
	}

	if(Arduino.Vibration.ChangeTime == 0){
		if(value != 0){ //tem alguma vibração
			Arduino.Vibration.ChangeTime = millis();
		}

		Arduino.Vibration.Value = value;
	}
}