#include <iostream>

using namespace std;

double harmonic_mean(int x, int y);

int main()
{
	int x, y;
	do {
		
		cout << endl << "\nEnter x:";
		cin >> x;
		cout << "Enter y:";
		cin >> y;
		

		if (!(x && y))
			break;
		cout << harmonic_mean(x, y);
		
	} while (1);

	cout << endl << "You provided a zero. Zero as input terminates the program." << endl;
    std::cout << "Chapter 7 Excercise 1" << endl;
}

double harmonic_mean(int x, int y)
{
	return 2.0 * (x * y) / (x + y);
}
