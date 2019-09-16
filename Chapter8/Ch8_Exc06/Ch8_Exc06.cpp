#include <iostream>

using namespace std;

template<class T>
T maxn(T * arr, int len);

const char* maxn(const char**, int len);

int main()
{
	int arr[6] = {9,2,3,8,6,7};
	double arr2[4] = { 0.1, 0.2, 0.9, 0.3 };
	const char* arr3[5] = {"Julia", "Jane", "Janet", "Josephine", "Jodi"};

	cout << maxn(arr, 6) << endl;
	cout << maxn(arr2, 4) << endl;
	cout << maxn(arr3, 5) << endl;
    std::cout << "Chapter 8 Excercise 6.\n";
}

template<class T>
T maxn(T * arr, int len)
{
	T max = arr[0];
	for (int i = 1; i < len; i++)
		if (arr[i] > max)
			max = arr[i];
	
	return max;
}

const char* maxn(const char ** arr, int len)
{
	cout << "Specialization called! \n";
	const char * max = arr[0];
	for (int i = 0; i < len; i++)
		if (strlen(arr[i]) > strlen(max))
			max = arr[i];

	return max;
}

