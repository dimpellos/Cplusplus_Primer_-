#include <iostream>

using namespace std;

void capitalise(string&);

int main()
{
	string str;
	cout << "Provide input string:";
	cin >> str;
	cout << "Before: " << str << endl;
	capitalise(str);
	cout << "After: " << str << endl;

    std::cout << "Chapter 8 Excercise 3.\n";
}

void capitalise(string& str)
{
	for (int i = 0; i < str.length(); i++)
		str[i] = toupper(str[i]);
}

/*

Write a function that takes a reference to a string object as its parameter and that
converts the contents of the string to uppercase. Use the toupper() function
described in Table 6.4 of Chapter 6.Write a program that uses a loop which allows
you to test the function with different input.A sample run might look like this:
Enter a string (q to quit): go away
GO AWAY
Next string (q to quit): good grief!
GOOD GRIEF!
Next string (q to quit): q
Bye.

*/
