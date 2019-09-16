#include <iostream>
#include <string>

int main()
{
	using namespace std;
	string input;
	cout << "Enter a line:\n";
	
	getline(cin, input);
	while (input != "")
	{
		cout << input << " has " << input.size() << " characters.\n";
		getline(cin, input);
	}
	cout << "Bye\n";
	std::cout << "Chapter 9 Excercise 2.\n";
	return 0;
}

   