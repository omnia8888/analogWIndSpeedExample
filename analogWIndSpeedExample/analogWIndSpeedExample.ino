
#include "windSpeed.h"

windSpeedClass windSpeed = windSpeedClass(A0);

void setup() {
	Serial.begin(9600);
	// initialize digital pin LED_BUILTIN as an output.
	pinMode(LED_BUILTIN, OUTPUT);
	//Serial << "End setup" << "\n";
	Serial.println("End Setup");
}

// the loop function runs over and over again forever
void loop() {
	//digitalWrite(LED_BUILTIN, HIGH);
	//Serial.println("Led ON");   // turn the LED on (HIGH is the voltage level)
	//delay(1000);                       // wait for a second
	//digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
	int Readvalue = windSpeed.getAnalogReadValue();
	Serial.println(Readvalue);
	delay(1000);                       // wait for a second
}