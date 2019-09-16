#include "MyStack.h"

MyStack::MyStack()
{
	top = 0;
}

bool MyStack::isempty() const
{
	return top == 0;
}

bool MyStack::isfull() const
{
	return top == MAX;
}

bool MyStack::push(const Item& item)
{
	if (top < MAX)
	{
		items[top++] = item;
		return true;
	}
	else
		return false;
}

bool MyStack::pop(Item& item)
{
	if (top > 0)
	{
		item = items[--top];
		return true;
	}
	else
		return false;
}