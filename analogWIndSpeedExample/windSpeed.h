// windSpeed.h

#ifndef _WINDSPEED_h
#define _WINDSPEED_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

class windSpeedClass
{
 protected:

	 uint8_t sensorPin;
	 float voltageMin; // Mininum output voltage from anemometer in mV.
	 float windSpeedMin; // Wind speed in meters/sec corresponding to minimum voltage

	 float voltageMax; // Maximum output voltage from anemometer in mV.
	 float windSpeedMax; // Wind speed in meters/sec corresponding to maximum voltage
 public:
	 windSpeedClass(uint8_t sensorAnalogPin, float sensorVoltageMin = 0, float sensorVoltageMax = 5);
	
	 int getAnalogReadValue();
};

extern windSpeedClass WindSpeed;

#endif

