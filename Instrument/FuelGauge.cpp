#include "FuelGauge.h"
#include <iostream>
#include <cstdlib>
using namespace std;

FuelGauge::FuelGauge()
{
	fuel = 0.00;
}

double FuelGauge::getFuelAmount()
{
	return fuel;
}

void  FuelGauge::setFuelAmount(double f)
{

}

void FuelGauge::refillFuelTank()
{
	if (fuel > 15)
	{
		cout << "Fuel tank is full!\n";
		fuel = 15;
	}
	else
	{
		fuel += 1;
	}
}

void FuelGauge::runCar()
{

	fuel -= 1;


	/*if (fuel > 0)
	{
		fuel -= 0.0417;
		if (fuel < 0)
		{
			fuel = 0;
		}

	}*/
}