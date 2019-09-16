#include "golf.h"
#include <cstring>
#include <string>
#include <iostream>

void setgolf(golf& g, const char* name, int hc)
{
	strcpy(g.fullname, name);
	g.handicap = hc;

	return;
}

int setgolf(golf& g)
{
	std::string name;
	int hc;
	std::cout << "Provide name:";
	getline(std::cin, name);
	std::cout << "Provide handicap:";
	std::cin >> hc;
	
	strcpy(g.fullname, name.c_str());
	g.handicap = hc;

	if (name.empty())
		return 0;
	return 1;
}

void handicap(golf& g, int hc)
{
	g.handicap = hc;

	return;
}

void showgolf(const golf& g)
{
	std::cout << "Fullname:" << g.fullname << std::endl;
	std::cout << "Handicap:" << g.handicap << std::endl;

	return;
}