#include <iostream>
#include "Product.h"
#include "SalesPerson.h"

using namespace std;

int main()
{
	Product* P1 = new Product("P001", "Mugs", 200.00);
	SalesPerson* SP = new SalesPerson("Ajith");
	SP->addSales(10, P1);
	SP->display();

	return 0;
}
