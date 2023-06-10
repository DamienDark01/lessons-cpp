#include <iostream>
#include "Animal.h"
#include "Cat.h"
#include "Dog.h"

using namespace std;

int main()
{
	Animal* d1 = new Dog("Toby");
	Animal* c1 = new Cat("Kitty");

	d1->song();

	cout << "- - - - - - " << endl;

	c1->song();

	delete d1;
  delete c1;

	return 0;
}
