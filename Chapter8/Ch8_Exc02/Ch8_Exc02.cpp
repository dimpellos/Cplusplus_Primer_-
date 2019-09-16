#define LEN 20

#include <iostream>

using namespace std;

struct Candybar{
	
public:
	char name[LEN];
	double weight;
	int calories;

	Candybar()
	{
		name[0] = '\0';
		weight = 0.0;
		calories = 0;
	}
};

void assign(Candybar&, const char*, double, int);
void display(const Candybar&);

int main()
{
	Candybar candybar;
	display(candybar);
	assign(candybar, "Millennium Munch", 2.85, 350);
	display(candybar);

    std::cout << "Chapter 8 Excercise 2.\n";
}

void assign(Candybar& candybar, const char * name, double weight, int calories)
{
	strcpy_s(candybar.name, name);
	candybar.weight = weight;
	candybar.calories = calories;
}

void display(const Candybar& candybar)
{
	cout << "Name:" << candybar.name << endl;
	cout << "Weight:" << candybar.weight << endl;
	cout << "Calories:" << candybar.calories << endl;
}


