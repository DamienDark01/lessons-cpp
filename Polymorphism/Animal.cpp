#include "Animal.h"
#include <iostream>

using namespace std;

// default constructor
Animal::Animal() {
  // empty
}

// overloaded constructor
Animal::Animal(string name) { 
  animalName = name; 
}

// no need for this method declaration as speak() is a pure virtaul method
// void Animal::speak() {
//
// }

void Animal::song() {
  speak();
  cout << "la la la" << endl;
  speak();
  cout << "la la la" << endl;
  speak();
}

// destructor
Animal::~Animal() {
  // empty
}
