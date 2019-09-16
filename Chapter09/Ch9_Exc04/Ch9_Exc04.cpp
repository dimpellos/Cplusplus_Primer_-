#include "sales.h"
#include <iostream>

int main(void)
{
	using namespace SALES;

	Sales s1, s2;

	// set data
	setSales(s1);
	// interactive
	double ar[3] = { 3.0, 4.0, 1.0 };
	setSales(s2, ar, 3);

	// show struct
	showSales(s1);
	showSales(s2);

	std::cout << "Chapter 9 Excercise 4.\n";
	return 0;
}
