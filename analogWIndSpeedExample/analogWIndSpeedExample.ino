

#include "windSpeed.h"

uint8_t windSensorAnalogRead_Pin = A0;
float sensorVoltageMin = 0;// Mininum output voltage from anemometer in mV.
float sensorVoltageMax = 5;// Maximum output voltage from anemometer in mV.
float sensorwindSpeedMin = 0;// Wind minimum speed in meters/sec corresponding to minimum voltage
float sensorwindSpeedMax = 32;// Wind maximum speed in meters/sec corresponding to maximum voltage

windSpeedClass windSpeed = windSpeedClass(A0,0.4,4.0,1,32);

long readInterval = 100;
long averageCalcTime = 1000;


void setup() {
	Serial.begin(9600);

	//Setttings for collecting,store and calc sonsor data
	//Default is read and store value each 100 millisek
	//and calculate average val for last 1000 millsec period




	Serial.println("End Setup");
}

// the loop function runs over and over again forever
void loop() {
	//digitalWrite(LED_BUILTIN, HIGH);
	//Serial.println("Led ON");   // turn the LED on (HIGH is the voltage level)
	//delay(1000);                       // wait for a second
	//digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
	int val = windSpeed.getSensorValue();
	float volt = windSpeed.getSensorVoltage();
	float speed = windSpeed.getSensorWindSpeed();
	//Serial output
	Serial.print("AnlogRead = ");
	Serial.println(val);
	Serial.print("Volt = ");
	Serial.println(volt);
	Serial.print("windspeed = ");
	Serial.println(speed);
	
	
	delay(1000);                       // wait for a second
}