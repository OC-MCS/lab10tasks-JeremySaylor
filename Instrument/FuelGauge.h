#pragma once
#include <iostream>
using namespace std;


class FuelGauge
{
private:
	double fuel;
public:
	FuelGauge();
	double getFuelAmount();
	void setFuelAmount(double f);
	//report fuel
	void refillFuelTank();
	void runCar();
};

