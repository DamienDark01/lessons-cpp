#pragma once
#include "Animal.h"
#include <iostream>

using namespace std;

class Dog : public Animal
{
public:
	Dog();    // default constructor
	Dog(string name);    // overloaded constructor
	void speak();
	~Dog();    // destructor
};
