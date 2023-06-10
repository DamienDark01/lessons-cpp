#include "Employee.h"
#include <iostream>

using namespace std;

// default constructor
Employee::Employee() {
	employeeNo = 0;
	salary = 0.0;
}

void Employee::display() {
	cout << "This is Employee class. Derived from Person class." << endl;
}

void Employee::calSalary() {
	cout << salary << endl;
}

// destructor
Employee::~Employee() {
  // empty
}
