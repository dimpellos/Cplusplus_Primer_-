#include <iostream>

using namespace std;

static int counter;

void print_string(const char*, int num = 0);

int main()
{
	print_string("Grom HellScream");
	print_string("Grom HellScream");
	print_string("Grom HellScream", 1);
	print_string("Grom HellScream", -1);
	print_string("Grom HellScream");
    std::cout << "Chapter 8 Excercise 1\n";
}

void print_string(const char* str, int num)
{
	counter++;

	if (num)
		for (int i=0;i<counter-1;i++)
			cout << str << endl;
	cout << str << endl;

	return;
}



/*


Write a function that normally takes one argument, the address of a string, and
prints that string once. However, if a second, type int, argument is provided and is
nonzero, the function should print the string a number of times equal to the number
of times that function has been called at that point. (Note that the number of
times the string is printed is not equal to the value of the second argument; it is
equal to the number of times the function has been called.) Yes, this is a silly function,
but it makes you use some of the techniques discussed in this chapter. Use the
function in a simple program that demonstrates how the function works.


*/
