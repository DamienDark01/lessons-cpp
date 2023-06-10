#pragma once
#include "Employee.h"

class Department
{
private:
	Employee* emp[2];

public:
	Department();
	void addEmployee(Employee* emp1, Employee* emp2);
	void displayDepartment();
	~Department();
};
