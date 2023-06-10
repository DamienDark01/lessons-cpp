#pragma once
#include "Person.h"

// indication of inheritance from Person class
class Student : public Person
{
protected:
	int studentNo;
	double gpa;

public:
	Student();
	void display();
	void calGpa();
  ~Student();
};
