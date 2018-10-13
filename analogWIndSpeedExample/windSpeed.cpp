// 
// 
// 

#include "windSpeed.h"













windSpeedClass::windSpeedClass(int8_t sensorAnalogPin, float sensorVoltageMin, float sensorVoltageMax, float sensorwindSpeedMin, float sensorwindSpeedMax)
{
	sensorPin = sensorAnalogPin;
	voltageMin = sensorVoltageMin;
	voltageMax = sensorVoltageMax;
	windSpeedMin = sensorwindSpeedMin;
	windSpeedMax = sensorwindSpeedMax;
}

int windSpeedClass::getSensorValue()
{
	
	sensorVal = analogRead(sensorPin);
	return sensorVal;
}

float windSpeedClass::getSensorVoltage()
{
	//get value from analog input
	sensorVal = analogRead(sensorPin);
	//convert analogRead to input voltage
	voltageVal = sensorVal * voltageConversionConstant;
	return voltageVal;
}

float windSpeedClass::getSensorWindSpeed()
{
	//get value from analog input
	sensorVal = analogRead(sensorPin);
	//convert analogRead to input voltage
	voltageVal = sensorVal * voltageConversionConstant;
	//Convert voltage value to wind speed using range of max and min voltages and wind speed for the anemometer
	if (voltageVal <= voltageMin) {
		windSpeedVal = 0; //Check if voltage is below minimum value. If so, set wind speed to zero.
	}
	else if (voltageVal > voltageMax)
	{
		windSpeedVal = windSpeedMax;
	}
	else
	{
		windSpeedVal = (voltageVal - voltageMin)*windSpeedMax / (voltageMax - voltageMin); //For voltages above minimum value, use the linear relationship to calculate wind speed.
	}
	return windSpeedVal;
}

