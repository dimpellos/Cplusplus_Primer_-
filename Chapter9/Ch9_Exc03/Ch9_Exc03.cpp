#include <iostream>
#include <cstring>

using namespace std;

const int N = 2;
struct chaff
{
	char dross[20];
	int slag;
};

chaff buffer[N];

void init(chaff&, const char*, int);
void display(const chaff*, int);

int main()
{
	chaff * ptr = new (buffer) chaff[2];
	
	init(ptr[0], "Lonzo", 2);
	init(ptr[1], "Lavare", 54);
	display(ptr, N);

    std::cout << "Chapter 9 Excercise 3.\n";
}

void init(chaff& obj, const char* str, int n)
{
	strcpy(obj.dross, str);
	obj.slag = n;

	return;
}

void display(const chaff * obj, int n)
{
	for (int i = 0;i<n;i++)
		cout << obj[i].dross << ", " << obj[i].slag << endl;
	return;
}

