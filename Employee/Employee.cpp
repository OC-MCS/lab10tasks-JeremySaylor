#include "Employee.h"
#include <iostream>
#include <string>

using namespace std;


Employee::Employee(string nam, int num, string dat)
{
	name = nam;
	number = num;
	hireDate = dat;
}
void Employee::setName(string n)
{
	name = n;
}
void Employee::setEmployeeNum(int e)
{
	number = e;
}
void Employee::setDateHired(string d)
{
	hireDate = d;
}
string Employee::getName()
{
	return name;
}
int Employee::getEmployeeNum()
{
	return number;
}
string Employee::getDateHired()
{
	return hireDate;
}
