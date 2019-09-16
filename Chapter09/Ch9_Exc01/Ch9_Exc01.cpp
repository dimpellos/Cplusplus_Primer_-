/* - Person comments -
Use on the preprocessor definitios the following, to avoid unnecessary warnings:
_CRT_SECURE_NO_DEPRECATE
_CRT_NONSTDC_NO_DEPRECATE
*/

#include <iostream>
#include "golf.h"

using namespace std;

int main()
{
	golf object1;
	setgolf(object1, "Lonzo", 2);
	showgolf(object1);
	handicap(object1, 10);
	showgolf(object1);
	if (setgolf(object1))
		cout << "Yes, with name.\n";
	else
		cout << "No, without name.\n";

	showgolf(object1);

    std::cout << "Chapter 9 Excercise 1.\n";
}
