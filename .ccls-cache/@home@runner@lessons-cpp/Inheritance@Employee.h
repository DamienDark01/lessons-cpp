#pragma once
#include "Person.h"

// indication of inheritance by Person class
class Employee : public Person {
protected:
  int employeeNo;
  double salary;

public:
  Employee();
  void display();
  void calSalary();
  ~Employee();
};
