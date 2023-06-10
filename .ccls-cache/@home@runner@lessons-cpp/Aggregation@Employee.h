#pragma once
#include <iostream>

using namespace std;

class Employee
{
private:
	string empId;
	string empName;

public:
	Employee();
	Employee(string id, string name);
	void displayEmployee();
	~Employee();
};
