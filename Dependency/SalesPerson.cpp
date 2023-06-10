#include "SalesPerson.h"
#include <iostream>

using namespace std;

SalesPerson::SalesPerson() {
	salesAmount = 0.0;
}

SalesPerson::SalesPerson(string pname) {
	name = pname;
	salesAmount = 0;
}

void SalesPerson::addSales(int qty, Product* P) {
	salesAmount = qty * P->getPrice();
}


void SalesPerson::display()
{
	cout << "name = " << name << endl;
	cout << "Sales Amount = " << salesAmount << endl;
}
