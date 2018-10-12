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

	 uint8_t _wSensAnalogPin;
 public:
	 windSpeedClass(uint8_t sensorAnalogPin);
	
	 int getAnalogReadValue();
};

extern windSpeedClass WindSpeed;

#endif

