#pragma once
#include <iostream>
#include "FuelGauge.h"
using namespace std;


class Odometer
{
private:
	int mileage;
public:
	Odometer();
	int getMileage();
	//report mileage
	void addMiles(FuelGauge &g);
	//void addOneMile();
};

