#include "Person.h"
#include <iostream>

using namespace std;

// default constructor
Person::Person() {
  name = "";
  address = "";
  age = 0;
}

void Person::display() { cout << "This is Person class." << endl; }

// destructor
Person::~Person() {
  // empty
}
