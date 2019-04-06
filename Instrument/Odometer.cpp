#include "Odometer.h" 
#include <iostream>
#include <cstdlib>
#include "FuelGauge.h"
using namespace std;

Odometer::Odometer()
{
	mileage = 0;
}

int Odometer::getMileage()
{
	return mileage;
}

void Odometer::addMiles(FuelGauge &g)
{
	if (g.getFuelAmount() <= 0)
	{
		cout << "The car is empty!\n";
	}
	else
	{
		
		//g.runCar();
		if (mileage == 999999)
		{
			mileage = 0;
		}
		else
		{
			mileage += 1;
		}
		int refill;
		refill = mileage % 24;
		//cout << refill << endl;
		if(refill == 0)
		{
			g.runCar();
		}
	}
}