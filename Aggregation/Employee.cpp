#include "Employee.h"
#include <iostream>

using namespace std;

// default constructor
Employee::Employee() {
  // empty
}

// overloaded constructor
Employee::Employee(string id, string name) {
	empId = id;
	empName = name;
}

void Employee::displayEmployee() {
	cout << "Employee ID : " << empId << endl;
	cout << "Employee Name : " << empName << endl;
}

// destructor
Employee::~Employee() {
	cout << "Deleting Employee (ID : " << empId << ")" << endl;
}
