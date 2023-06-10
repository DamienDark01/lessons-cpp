#include "Dog.h"
#include <iostream>

using namespace std;

// default constructor
Dog::Dog() {
	// empty
}

// overloaded constructor which assigns the Dog() parameter to Animal() parameter
Dog::Dog(string name) : Animal(name) {
	// empty
}

// speak() method is implemented here
void Dog::speak() {
	cout << "Bow Bow" << endl;
}

// destructor
Dog::~Dog() {
	// empty
}
