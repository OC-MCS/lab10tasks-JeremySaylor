#pragma once
#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

class ProductionWorker : public Employee
{
private:
	int shift;
	double hourlyPayRate;

public:
	
	ProductionWorker(int shif, double rate, string nam, int num, string dat) :Employee(nam, num, dat)
	{
		shift = shif;
		hourlyPayRate = rate;
	}
	void setShift(int dn);
	void setHourlyRate(double p);
	int getShift();
	double getHourlyRate();

};

