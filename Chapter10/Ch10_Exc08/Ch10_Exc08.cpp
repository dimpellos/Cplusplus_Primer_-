#include <iostream>
#include "list.h"

void addage(Item& item);

int main()
{
	List l;
	Item i = { "shaolinngjiang", 24 };
	l.additem(i);
	int n;
	n = l.itemcount();
	std::cout << n << " items in list" << std::endl;
	l.visit(addage);

	std::cout << "Chapter 10 Excercise 8.\n";
	return 0;
}

void addage(Item& item)
{
	item.age += 1;
	return;
}
