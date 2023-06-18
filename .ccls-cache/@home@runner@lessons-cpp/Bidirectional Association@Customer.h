#pragma once
#include <iostream>
#include "Order.h"

using namespace std;

class Customer
{
private:
	string name;
	string address;
	Order* order[2];
	int noOfOrders;

public:
	void addOrder(Order* order);
	void displayCustomer();
};
