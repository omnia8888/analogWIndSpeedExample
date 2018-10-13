// 
// 
// 

#include "filterReadForAvgCalc.h"







FilterReadForAvgCalcClass::FilterReadForAvgCalcClass(long readInterval, long avgPeriod) : SimpleTimer()
{
	SimpleTimer timer;
	timerRunInterval = readInterval;
	calcOutputInerval = avgPeriod;
	//Calc size of reads to store
	readStorageCount = (readInterval / avgPeriod);
	
}



void FilterReadForAvgCalcClass::init()
{

}

void FilterReadForAvgCalcClass::start()
{
	
}



