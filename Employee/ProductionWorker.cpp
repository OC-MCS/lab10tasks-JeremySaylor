#include "ProductionWorker.h"
#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;


void ProductionWorker::setShift(int dn)
{
	shift = dn;
	
}
void ProductionWorker::setHourlyRate(double p)
{
	hourlyPayRate = p;
}
int ProductionWorker::getShift()
{
	return shift;
}
double ProductionWorker::getHourlyRate()
{
	return hourlyPayRate;
}
