// 
// 
// 

#include "windSpeed.h"









windSpeedClass::windSpeedClass(uint8_t sensorAnalogPin, float sensorVoltageMin, float sensorVoltageMax)
{
	sensorPin = sensorAnalogPin;
	voltageMin = sensorVoltageMin;
	voltageMax = sensorVoltageMax;

}

int windSpeedClass::getAnalogReadValue()
{
	uint16_t val;
	val = analogRead(sensorPin);
	return val;
}
