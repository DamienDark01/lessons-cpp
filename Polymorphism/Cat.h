#pragma once
#include "Animal.h"
#include <iostream>

using namespace std;

class Cat : public Animal
{
public:
	Cat();    // default constructor
	Cat(string name);    // overloaded constructor
	void speak();
	~Cat();    // destructor
};
