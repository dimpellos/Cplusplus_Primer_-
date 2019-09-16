#include <iostream>
#include <array>
#include <vector>
#include <string>

const int Seasons = 4;
//const std::array<std::string, Seasons> Snames =
//{ "Spring", "Summer", "Fall", "Winter" };

const char* season_names[Seasons] = { "Spring", "Summer", "Fall", "Winter" };

// function to modify array object
void fill(double arr[]);
// function that uses array object without modifying it
void show(double arr[]);

int main()
{
	/*std::array<double, Seasons> expenses;*/
	double expenses[Seasons];
	fill(expenses);
	show(expenses);
	return 0;
}
void fill(double pa[])
{
	using namespace std;
	for (int i = 0; i < Seasons; i++)
	{
		cout << "Enter " << season_names[i] << " expenses: ";
		cin >> pa[i];
	}
}
void show(double da[])
{
	using namespace std;
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for (int i = 0; i < Seasons; i++)
	{
		cout << season_names[i] << ": $" << da[i] << endl;
		total += da[i];
	}
	cout << "Total Expenses: $" << total << endl;
}

/*

Redo Listing ×.× without using the array class. Do two versions:
a. Use an ordinary array of const char * for the strings representing the season
names, and use an ordinary array of double for the expenses.
b. Use an ordinary array of const char * for the strings representing the season
names, and use a structure whose sole member is an ordinary array of
double for the expenses. (This design is similar to the basic design of the
array class.)

*/
