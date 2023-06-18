#include "Department.h"
#include <iostream>

using namespace std;

// default constructor
// - any kind of objects are not created in the default constructor
Department::Department() {
  // empty
}

// set the parametric values to the Employee objects inside the Department class
void Department::addEmployee(Employee* emp1, Employee* emp2) {
	emp[0] = emp1;
	emp[1] = emp2;
}

// - separate methods interact with the objects created
void Department::displayDepartment() {
	for (int i = 0; i < 2; i++) {
		emp[i]->displayEmployee();
	}
}

// destructor
Department::~Department() {
	cout << "Department shutting down..." << endl;
}
