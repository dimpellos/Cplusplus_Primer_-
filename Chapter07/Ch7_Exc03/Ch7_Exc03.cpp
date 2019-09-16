#include <iostream>

using namespace std;

struct Box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;

	Box(const char* m, float h, float w, float l, float v)
	{
		strcpy_s(maker, m);
		height = h;
		width = w;
		length = l;
		volume = v;
	}
};

void print_structure(Box b);
void product(Box& b);

int main()
{
	Box A("BoxA", 2, 2, 2, 1);
	print_structure(A);
	product(A);
	print_structure(A);

	std::cout << "Chapter 7 Excercise 3\n";
}

void print_structure(Box b)
{
	cout << "Maker:" << b.maker << endl;
	cout << "Height:" << b.height << endl;
	cout << "Width:" << b.width << endl;
	cout << "Length:" << b.length << endl;
	cout << "Volume:" << b.volume << endl << endl;

	return;
}

void product(Box& b)
{
	b.volume = b.length * b.width * b.height;

	return;
}