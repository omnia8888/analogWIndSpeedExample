// windSpeed.h

#ifndef _WINDSPEED_h
#define _WINDSPEED_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

//#include "src/filter_avgCalc_settings.h"


class windSpeedClass
{
 protected:

	 uint8_t sensorPin;
	 float voltageMin; 
	 float windSpeedMin; // Wind speed in meters/sec corresponding to minimum voltage

	 float voltageMax; // Maximum output voltage from anemometer in mV.
	 float windSpeedMax; // Wind speed in meters/sec corresponding to maximum voltage
 public:
	 windSpeedClass(int8_t sensorAnalogPin, //PIn number for sensor read
		 float sensorVoltageMin = 0,// Mininum output voltage from anemometer in mV.
		 float sensorVoltageMax = 5, 
		 float sensorwindSpeedMin = 0, 
		 float sensorwindSpeedMax = 32);
	
	 int getSensorValue();
	 float getSensorVoltage();
	 float getSensorWindSpeed();
private:
	const float voltageConversionConstant = .004882814;
	

	
	uint16_t sensorVal = 0;
	float voltageVal = 0;
	float windSpeedVal = 0;


};

//extern windSpeedClass WindSpeed;

#endif

