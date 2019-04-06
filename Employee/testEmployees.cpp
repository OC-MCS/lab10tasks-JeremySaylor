#include <iostream>
#include "Employee.h"
#include "ProductionWorker.h"
#include <string>

using namespace std;

int main()
{
	ProductionWorker John(1, 12.25, "John", 989, "25 Mar 2018");

	cout << endl;
	cout << "Employee's name: " << John.getName() << endl;
	cout << "Employee number: " << John.getEmployeeNum() << endl;
	cout << "Date hired: " << John.getDateHired() << endl;
	cout << "Shift: " << John.getShift() << endl;
	cout << "Hourly pay rate: $ " << John.getHourlyRate() << endl;
	
	return 0;
}