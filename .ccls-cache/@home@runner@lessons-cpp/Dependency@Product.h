#pragma once
#include <iostream>

using namespace std;

class Product
{
private:
	string productID;
	string name;
	double price;
public:
	Product();
	Product(string pID, string pname, double pPrice);
	float getPrice();
	void display();
};
