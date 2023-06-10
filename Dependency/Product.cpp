#include "Product.h"
#include <iostream>

using namespace std;

Product::Product() {}

Product::Product(string pID, string pname, double pPrice) {
	productID = pID;
	name = pname;
	price = pPrice;
}


float Product::getPrice() {
	return price;
}

void Product::display()
{
	cout << " Product ID =" << productID << endl;
	cout << " Product name =" << name << endl;
	cout << " Price = " << price << endl;
}
