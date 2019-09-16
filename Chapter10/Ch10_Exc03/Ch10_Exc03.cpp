#include <iostream>

using namespace std;

const int Len = 40;

class golf
{
private:
	char fullname[Len];
	int handicap;

public:
	golf()
	{
		strcpy(fullname, "");
		handicap = 0;
	}

	golf(const char* name, int hc = 3)
	{
		strcpy(fullname, name);
		handicap = hc;
	}

	golf(const golf& obj)
	{
		strcpy(fullname, obj.fullname);
		handicap = obj.handicap;
	}

	void Handicap(int hc)
	{
		handicap = hc;
	}

	void Show() const
	{
		cout << "Fullname: " << fullname << endl;
		cout << "Handicap: " << handicap << endl;
	}

};

using namespace std;

int main()
{
	golf a;
	a.Show();
	cout << endl;
	golf b("Lonzo", 33);
	b.Show();
	cout << endl;
	golf c(b);
	c.Show();
	c.Handicap(23);
	c.Show();

    std::cout << "Chapter 10 Excercise 3.\n";
}