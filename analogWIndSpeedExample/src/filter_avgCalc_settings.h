#pragma once

/*
 Name:		LocalHeader1.h
 Created:	10/12/2018 7:29:12 PM
 Author:	malml
*/
//Filter and get average reading över time period
//time period for collecting sampel reads in ml sek
const long readSamplesbyTime = 1000; //an avgerage val each seocond by default

//This defines how many samples to read and strore by second;
const uint8_t numReadings = 10;
uint16_t storeSamples[numReadings];

//Calculate how often semples will be collected
long readingPause = readSamplesbyTime / numReadings;


int storeIndex = 0;
int totalSamples = 0;
int angVal = 0 ;




