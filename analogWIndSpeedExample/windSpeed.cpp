// 
// 
// 

#include "windSpeed.h"








windSpeedClass::windSpeedClass(uint8_t sensorAnalogPin)
{
	_wSensAnalogPin = sensorAnalogPin;
}

int windSpeedClass::getAnalogReadValue()
{
	uint16_t val;
	val = analogRead(_wSensAnalogPin);
	return val;
}
