#include "complexxx.h"
#include <iostream>
using namespace std;

int main()
{
	Complex a(3.0, 4.0);
	Complex c;
	cout << "Enter a complex number (any non-number char to quit): " << endl;
	while (cin >> c)
	{
		cout << "c is " << c << endl;
		cout << "complex conjugate is " << ~c << endl;
		cout << "a is " << a << endl;
		cout << "a + c is " << a + c << endl;
		cout << "a - c is " << a - c << endl;
		cout << "a * c is " << a * c << endl;
		cout << "2 * c is " << 2 * c << endl;
		cout << "Enter a complex number (any non-number char to quit): " << endl;
	}

	std::cout << "\nChapter 11 Exc07.\n";
	return 0;
}