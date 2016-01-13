#ifndef __MAIN_H__
#define __MAIN_H__

#include <Arduino.h> 
#include <string.h>
#include <Thermistor.h>
#include <UIPEthernet.h>

#include "Client.h"
#include "Server.h"
#include "Arduino.h"
#include "Timer.h"
#include "Temperature.h"
#include "Voltage.h"
#include "Magnetic.h"
#include "Vibration.h"

#define DEFAULT_SPEED 9600

void Main();
void Loop();

#endif