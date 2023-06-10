#pragma once
#include <iostream>

using namespace std;

class Animal {
protected:
  string animalName;

public:
  Animal();                 // default constrctor
  Animal(string name);      // overloaded constructor
  virtual void speak() = 0; // pure virtual methods
  void song();
  ~Animal(); // destructor
};
