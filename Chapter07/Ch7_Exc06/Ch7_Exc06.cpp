#include <iostream>

using namespace std;

int Fill_array(double arr[], int len);
void Show_array(double arr[], int len);
void Reverse_array(double arr[], int len);


int main()
{
	int len = 7, entries = 7;
	double arr[7] = {0.1, 0.2, 0.3, 4.1, 4.2, 4.3, 5.1};

	//entries = Fill_array(arr, len);
	Show_array(arr, entries);
	Reverse_array(arr, entries);
	Show_array(arr, entries);
	Reverse_array(arr + 1, entries - 2);
	Show_array(arr, entries);

    std::cout << "Chapter 7 Excercise 6\n";
}

int Fill_array(double arr[], int len)
{
	int entries = 0;
	double in;
	
	for (; entries < len; entries++)
	{
		cout << "Enter input: ";
		if (cin >> in)
			arr[entries] = in;
		else 
			break;
	}

	return entries;
}

void Show_array(double arr[], int len)
{
	for (int i = 0; i < len; i++)
		cout << arr[i] << endl;
}

void Reverse_array(double arr[], int len)
{
	double temp;
	for (int i = 0; i < (len/2); i++)
	{
		temp = arr[i];// ^= arr[len - i - 1];
		arr[i] = arr[len - i - 1];//arr[len - i - 1] ^= arr[i];
		arr[len - i - 1] = temp;//arr[i] ^= arr[len - i - 1];
	}
}