#pragma once
#include <iostream>
#include "Customer.h"

using namespace std;

class Order
{
private:
	string orderID;
	Customer* customer;

public:
  Order();
	Order(string id, Customer cus);
	void displayOrder();
};
