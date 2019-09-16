#define LEN 5

#include <iostream>

using namespace std;

template<class T>
T max5(T*, int len = LEN);

int main()
{
	int arr[LEN] = { 1, 31, -2, 5, 25 };
	double arr2[LEN] = {1.2, 1.3, 3.1, 0.5, 1.4};

	cout << "Max integer: " << max5(arr) << endl;
	cout << "Max double: " << max5(arr2) << endl;
    std::cout << "\nChapter 8 Excercise 5.\n";
}

template<class T>
T max5(T* arr, int len)
{
	T max = arr[0];
	for (int i = 1; i < len; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}

	return max;
}

/*

Write a template function max5() that takes as its argument an array of five items
of type T and returns the largest item in the array. (Because the size is fixed, it can
be hard-coded into the loop instead of being passed as an argument.) Test it in a
program that uses the function with an array of five int value and an array of five
double values.

*/
