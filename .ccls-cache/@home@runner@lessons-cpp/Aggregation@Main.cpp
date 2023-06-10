#include <iostream>
#include "Department.h"
#include "Employee.h"

using namespace std;

int main()
{
	Department* abc = new Department();    // creating Department object
  // this doesn't create any Employee objects

  // creating Employee objects
  // - these objects are not affected when Department class is altered in any way
	Employee* emp1 = new Employee("E001", "Nimal");
	Employee* emp2 = new Employee("E002", "Kamal");

	abc->addEmployee(emp1, emp2);
	abc->displayDepartment();
	delete abc;

	emp1->displayEmployee();
	emp2->displayEmployee();
	delete emp1;
	delete emp2;

	return 0;
}
