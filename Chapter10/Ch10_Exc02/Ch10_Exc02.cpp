#include <iostream>
#include <cstring>
#include <string>

using namespace std;

class Person {
private:
	static const int LIMIT = 25;
	string lname; // Person’s last name
	char fname[LIMIT]; // Person’s first name
public:
	Person()
	{ 
		lname = "";
		fname[0] = '\0'; 
	} // #1

	Person(const string& ln, const char* fn = "Heyyou")
	{
		lname = ln;
		strcpy(fname, fn);
	}

	void Show() const
	{
		cout << fname << " " << lname << endl;
	}

	void FormalShow() const
	{
		cout << lname << ", " << fname << endl;
	}
};

int main()
{
	Person one; // use default constructor
	Person two("Smythecraft"); // use #2 with one default argument
	Person three("Dimwiddy", "Sam"); // use #2, no defaults
	one.Show();
	two.Show();
	three.FormalShow();
	two.FormalShow();
    std::cout << "Chapter 10 Excercise 2.\n";
}

