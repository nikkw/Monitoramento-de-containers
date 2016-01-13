#include "Magnetic.h"

byte GetMagnetic(){
	return Arduino.Magnetic.Value;
}

void SetMagnetic(){
	byte value = digitalRead(MAGNETIC_PORT);

	if(Arduino.Magnetic.ChangeTime != 0){
		if((millis() - Arduino.Magnetic.ChangeTime) >= WAIT_SET_TIMER * CLOCKS_PER_SEC){
			Arduino.Magnetic.ChangeTime = 0;
		}
	}

	if(Arduino.Magnetic.ChangeTime == 0){
		if(value != 1){	//a porta está aberta			
			Arduino.Magnetic.ChangeTime = millis();
		}

		Arduino.Magnetic.Value = value;	
	}
}