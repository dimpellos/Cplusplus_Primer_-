#include "Move.h"
#include <iostream>

int main()
{
	Move m1;
	m1.showmove();
	m1.reset(2, 3);
	m1.showmove();
	Move m2 = Move(3, 1);
	m2.showmove();
	Move m3;
	m3 = m2.add(m1);
	m3.showmove();
    std::cout << "Chapter 10 Excercise 6.\n";
}