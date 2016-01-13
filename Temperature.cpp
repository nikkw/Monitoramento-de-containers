#include "Temperature.h"

Thermistor Temperature(TEMPERATURE_PORT);

int8_t GetTemperature(){
	return Arduino.Sensors.Temperature;
}

void SetTemperature(){
	Arduino.Sensors.Temperature = Temperature.getTemp();
}