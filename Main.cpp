#include "Main.h"

void Main(){
	Serial.begin(DEFAULT_SPEED);
	
	InitializeVoltage();
	InitializeVibration();
	
	InitializeArduino();

	InitializeServer();	
}

void Loop(){
	ProcessTimer();
	ProcessClientMessage();
}