//error4.cpp � using exception classes
#include <iostream>
#include <cmath> // or math.h, unix users may need -lm flag
#include "exc_mean.h"
#include "myexception.h"

double hmean(double a, double b);
double gmean(double a, double b);

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;

	double x, y, z;

	cout << "Enter two numbers: ";
	while (cin >> x >> y)
	{
		try {                  // start of try block
			z = hmean(x, y);
			cout << "Harmonic mean of " << x << " and " << y
				<< " is " << z << endl;
			cout << "Geometric mean of " << x << " and " << y
				<< " is " << gmean(x, y) << endl;
			cout << "Enter next set of numbers <q to quit>: ";
		}// end of try block
		catch (HmeanExcp& bg)    // start of catch block
		{
			bg.what();
			cout << "Try again.\n";
			continue;
		}
		catch (GmeanExcp& hg)
		{
			cout << hg.what();

			cout << "Sorry, you don't get to play any more.\n";
			break;
		} // end of catch block
	}
	cout << "Bye!\n";
	// cin.get();
	// cin.get();

	std::cout << "\nChapter15 Exc02.\n";
	return 0;
}

double hmean(double a, double b)
{
	if (a == -b)
		throw HmeanExcp();
	return 2.0 * a * b / (a + b);
}

double gmean(double a, double b)
{
	if (a < 0 || b < 0)
		throw GmeanExcp();
	return std::sqrt(a * b);
}
 