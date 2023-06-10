#pragma once
#include "Employee.h"

class Department
{
private:
	Employee* emp[2];    // Employee objects

public:
	Department();
	void addEmployee(Employee* emp1, Employee* emp2);    // adding the Employee objects needed for Department class
	void displayDepartment();
	~Department();
};
