#include <iostream>

using namespace std;

int factorial(int n);

int main()
{
	int num;
	cout << "Provide factorial number:";
	cin >> num;

	if (num > 0)
		cout << "Factorial of " << num << " is " << factorial(num) << endl;
	else
		cout << "Number is too small or too big" << endl;

    std::cout << "Chapter 7 Excercise 5\n";
}

int factorial(int n)
{
	if (n < 1)
		return 1;

	return n * factorial(n - 1);
}
