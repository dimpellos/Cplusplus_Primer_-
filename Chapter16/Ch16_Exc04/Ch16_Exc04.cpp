#include <iostream>
#include <algorithm>
#include <ctime>
#include <set>

using namespace std;

int main()
{
	srand(time(NULL));// 
	const static int LEN = 10;
	int arr[LEN];
	set<int> s;

	for (int i = 0; i < LEN; i++) {
		arr[i] = rand() % 10;
		s.insert(arr[i]);
	}


	for (int i = 0; i < LEN; i++)
		cout << arr[i] << " ";
	cout << endl;

	sort(arr, arr + LEN);

	unique(arr, arr + LEN);


	for (int i = 0; i < s.size(); i++)
		cout << arr[i] << " ";
	cout << endl;

	cout << "size = " << s.size() << endl;

	std::cout << "Chapter16 Exc04.\n";
	return 0;
}
