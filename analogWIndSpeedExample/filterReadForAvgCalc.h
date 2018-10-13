// filterReadForAvgCalc.h

#ifndef _FILTERREADFORAVGCALC_h
#define _FILTERREADFORAVGCALC_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

#include "SimpleTimer.h";

class FilterReadForAvgCalcClass : protected SimpleTimer
{
 protected:


 public:
	FilterReadForAvgCalcClass(long readValuesinterval,long caclOutputInerval);
	void init();
	void start();
private:
	long timerRunInterval;
	long calcOutputInerval;
	uint8_t readStorageCount;

};

extern FilterReadForAvgCalcClass FilterReadForAvgCalc;

#endif

