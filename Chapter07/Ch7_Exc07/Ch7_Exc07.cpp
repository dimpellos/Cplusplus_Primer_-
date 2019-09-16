// arrfun3.cpp -- array functions and const
#include <iostream>
const int Max = 5;

// function prototypes
double * fill_array(double * start, double * end);
void show_array(const double * start, double * end); // don't change data
void revalue(double r, double * start, double * end);
int main()
{
	using namespace std;
	double properties[Max];
	double * size = fill_array(properties, properties+Max);
	show_array(properties, size);
	if (size > properties)
	{
		cout << "Enter revaluation factor: ";
		double factor;
		while (!(cin >> factor)) // bad input
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; Please enter a number: ";
		}
		revalue(factor, properties, size);
		show_array(properties, size);
	}
	cout << "Done.\n";
	cin.get();
	cin.get();
	return 0;
}
double * fill_array(double * start, double * end)
{
	using namespace std;
	double temp, *temp_end = end;
	int i = 0;
	while (start != end)
	{
		cout << "Enter value #" << (++i) << ": ";
		cin >> temp;
		if (!cin) // bad input
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; input process terminated.\n";
			temp_end = start;
			break;
		}
		else if (temp < 0) // signal to terminate
		{
			temp_end = start;
			break;
		}
		*start = temp;
		start++;
	}
	return temp_end;
}
// the following function can use, but not alter,
// the array whose address is ar
void show_array(const double * start, double * end)
{
	using namespace std;
	int i = 0;
	while (start != end)
	{
		cout << "Property #" << (++i) << ": $";
		cout << *start << endl;
		start++;
	}
}
// multiplies each element of ar[] by r
void revalue(double r, double * start, double * end)
{
	while (start != end)
	{
		*start *= r;
		start++;
	}
}

/*

Redo Listing X.X, modifying the three array-handling functions to each use two
pointer parameters to represent a range.The fill_array() function, instead of
returning the actual number of items read, should return a pointer to the location
after the last location filled; the other functions can use this pointer as the second
argument to identify the end of the data.

*/
