#include <iostream>
#include "FuelGauge.h"
#include "Odometer.h" 

using namespace std;

int main()
{
	Odometer carMileage;
	FuelGauge carFuel;

	cout << "The car has " << carFuel.getFuelAmount() << " gallons of fuel.\n ";

	for (int i = 0; i < 15; i++)
	{
		carFuel.refillFuelTank();
	}

	for (int ii = 0; ii < 365; ii++)
	{
		cout << "The car has " << carFuel.getFuelAmount() << " gallons of fuel.\n ";
		cout << "The car mileage is " << carMileage.getMileage() << " miles.\n";

		carMileage.addMiles(carFuel);
	}

	return 0;
}


