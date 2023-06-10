#include "Cat.h"
#include <iostream>

using namespace std;

// default constructor
Cat::Cat() {
	// empty
}

// overloaded constructor which assigns Cat() parameter to Animal() parameter
Cat::Cat(string name) : Animal(name) {
	// empty
}

// speak() method is implemented here
void Cat::speak() {
	cout << "Meow Meow" << endl;
}

// destructor
Cat::~Cat() {
	// empty
}
