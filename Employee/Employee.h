#pragma once
#include <iostream>
#include <string>

using namespace std;


class Employee
{
private:
	string name;
	int number;
	string hireDate;
public:
	
	Employee(string nam, int num, string dat);
	void setName(string n);
	void setEmployeeNum(int e);
	void setDateHired(string d);
	string getName();
	int getEmployeeNum();
	string getDateHired();

};

