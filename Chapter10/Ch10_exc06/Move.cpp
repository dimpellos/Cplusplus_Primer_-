#include "Move.h"
#include <iostream>

Move::Move(double a, double b)
{
	x = a;
	y = b;
}

void Move::showmove() const
{
	std::cout << "x: " << x << " and y: " << y << std::endl;
	return;
}

Move Move::add(const Move& m) const
{
	Move new_object = Move(m.x + x, m.y + y);
	return new_object;
}

void Move::reset(double a, double b)
{
	x = a;
	y = b;
	return;
}