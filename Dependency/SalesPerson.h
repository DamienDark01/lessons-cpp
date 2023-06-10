#pragma once
#include <iostream>
#include "Product.h"

using namespace std;

class SalesPerson
{
private:
	string name;
	double salesAmount;
public:
	SalesPerson();
	SalesPerson(string pname);
	void addSales(int qty, Product* P);    // using an object just as a parameter
	void display();
};
