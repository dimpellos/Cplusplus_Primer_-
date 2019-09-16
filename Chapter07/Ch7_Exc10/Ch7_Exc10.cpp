#include <iostream>

using namespace std;

typedef double (*pf)(double, double);

double calculate(double a, double b, double (* ptr_to_func)(double, double));
double add(double a, double b);
double subtract(double a, double b);
double divide(double a, double b);
double multiply(double a, double b);

int main()
{
	pf arr[4] = { add, subtract, divide, multiply };
	
	for (int i = 0; i < 4; i++)
		cout << calculate(7, 2, arr[i]) << endl;

	//cout << "Add: " << calculate(7, 2, add) << endl;
	//cout << "Subtract: " << calculate(7, 2, subtract) << endl;
	//cout << "Divide: " << calculate(7, 2, divide) << endl;
	//cout << "Multiply: " << calculate(7, 2, multiply) << endl;
	
    std::cout << "Chapter 7 Excercise 10.\n";
}

double calculate(double a, double b, double (*ptr_to_func)(double, double))
{
	return ptr_to_func(a, b);
}

double add(double a, double b)
{
	return a + b;
}

double subtract(double a, double b)
{
	return a - b;
}

double divide(double a, double b)
{
	return a / b;
}

double multiply(double a, double b)
{
	return a * b;
}


/*


If you are feeling adventurous, try creating an array of pointers to add()-style
functions and use a loop to successively apply calculate() to a series of functions
by using these pointers. Hint: Here’s how to declare such an array of three pointers:
double (*pf[3])(double, double);
You can initialize such an array by using the usual array initialization syntax and
function names as addresses.






*/