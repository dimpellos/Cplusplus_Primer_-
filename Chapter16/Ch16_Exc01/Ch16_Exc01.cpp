#include <iostream>
#include <string>

using namespace std;

bool is_palindrome(const string&);

int main()
{
	string str;
	cout << "Please, provide string:";
	getline(cin, str);

	if (is_palindrome(str))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

    std::cout << "Chapter16 Exc01.\n";
}

bool is_palindrome(const string& str)
{
	string temp = str;
	reverse(temp.begin(), temp.end());

	if (temp != str)
		return false;

	return true;
}
