#include <iostream>
#include <cstring> // for strlen(), strcpy()
#pragma warning(disable : 4996) // this is used 'cause of warning on using strcpy() and not strcpy_s()

using namespace std;


struct stringy {
	char* str; // points to a string
	int ct; // length of string (not counting '\0')
};

// prototypes for set(), show(), and show() go here
void set(stringy &, const char*);
void show(const stringy&, int num = 1);
void show(const char*, int num = 1);

int main()
{
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";
	set(beany, testing); // first argument is a reference,
	// allocates space to hold copy of testing,
	// sets str member of beany to point to the
	// new block, copies testing to new block,
	// and sets ct member of beany

	show(beany); // prints member string once
	show(beany, 2); // prints member string twice
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing); // prints testing string once
	show(testing, 3); // prints testing string thrice
	show("Done!");
	std::cout << "Chapter 8 Excercise 4.\n";
	return 0;
}
    
void set(stringy& obj,  const char* str)
{
	obj.ct = strlen(str);
	obj.str = new char[obj.ct];
	strcpy(obj.str, str);

	return;
}

void show(const stringy& obj, int num)
{
	for (int i = 0; i < num; i++)
		cout << obj.str << endl;

	return;
}

void show(const char * str, int num)
{
	for (int i = 0; i < num; i++)
		cout << str << endl;

	return;
}

