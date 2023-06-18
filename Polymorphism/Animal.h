#pragma once
#include <iostream>

using namespace std;

// this class is an abstract class since there is a pure virtual method
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
