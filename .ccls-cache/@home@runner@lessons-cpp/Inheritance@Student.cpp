#include "Student.h"
#include <iostream>

using namespace std;

// default constructor
Student::Student() {
	studentNo = 0;
	gpa = 0.0;
}

void Student::display() {
	cout << "This is Student class. Derived from Person class." << endl;
}

void Student::calGpa() {
	cout << gpa << endl;
}

// destructor
Student::~Student() {
  // empty
}
