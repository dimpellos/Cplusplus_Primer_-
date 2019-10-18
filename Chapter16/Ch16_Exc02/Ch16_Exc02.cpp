#include <iostream>
#include <string>
#include <iterator>
#include <cctype>

using namespace std;

bool is_palindrome(const string&);
string reduc(const string&);

int main()
{
	string str;
	cout << "Please, provide string:";
	getline(cin, str);

	if (is_palindrome(str))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	std::cout << "Chapter16 Exc02.\n";
}

bool is_palindrome(const string& str)
{
	string temp = str;
    temp = reduc(temp);
	string temp2 = temp;

	reverse(temp2.begin(), temp2.end());

	if (temp2 != temp)
		return false;

	return true;
}

string reduc(const string& str)
{
	string alpha_string;
	for (auto iter = str.begin(); iter != str.end(); iter++)
		if (isalpha(*iter))
			alpha_string += *iter;

	return alpha_string;
}


/*
Do the same problem as given in Programming Exercise 1 but do worry about
complications such as capitalization, spaces, and punctuation.That is,“Madam, I’m
Adam” should test as a palindrome. For example, the testing function could reduce
the string to “madamimadam” and then test whether the reverse is the same. Don’t
forget the useful cctype library.You might find an STL function or two useful
although not necessary.


*/
