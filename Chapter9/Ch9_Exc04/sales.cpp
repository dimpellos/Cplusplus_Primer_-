#include "sales.h"
#include <iostream>

void SALES::setSales(Sales& s, const double ar[], int n)
{
	for (int i = 0; i < QUARTERS; i++)
	{
		if (i <= n)
			s.sales[i] = ar[i];
		else
			s.sales[i] = 0.0;
	}

	double min = s.sales[0], max = s.sales[0], average = 0.0;
	for (int i = 1; i < QUARTERS; i++)
	{
		if (s.sales[i] > max)
			max = s.sales[i];
		else
			if (s.sales[i] < min)
				min = s.sales[i];
		average += s.sales[i];
	}
	
	s.max = max;
	s.min = min;
	s.average = average / double(QUARTERS);

	return;
}

void SALES::setSales(Sales& s)
{
	using std::cin;
	using std::cout;
	using std::endl;

	cout << "Enter sales:" << endl;
	for (int i = 0; i < QUARTERS; ++i)
	{
		cout << "sales[" << i << "]: ";
		cin >> s.sales[i];
	}

	// get average, max, min
	double sum = 0.0;
	double max = s.sales[0], min = s.sales[0];
	for (int i = 0; i < QUARTERS; ++i)
	{
		double cur = s.sales[i];
		if (cur > max)
			max = cur;
		if (cur < min)
			min = cur;
		sum += cur;
	}
	s.average = sum / (double)QUARTERS;
	s.max = max;
	s.min = min;

	return;
}

void SALES::showSales(const Sales& s)
{
	std::cout << "Sales Quarters: ";
	for (int i=0;i<QUARTERS;i++)
		std::cout << s.sales[i] << " ";

	std::cout << "\nMax: " << s.max << std::endl;
	std::cout << "Min: " << s.min << std::endl;
	std::cout << "Average: " << s.average << std::endl;

	return;
}