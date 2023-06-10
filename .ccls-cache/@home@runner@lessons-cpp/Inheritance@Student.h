#pragma once
#include "Person.h"

// indication of inheritance from 
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
