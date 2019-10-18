#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


vector<string> v1{ "Joseph", "Maria", "Magdalena", "Hale", "Janice", "Erwin", "Constantine", "Atul", "Juan", "Julia" };
vector<string> v2{ "James", "Magdalena", "Peter", "Robert", "Boris", "Erwin", "Juan", "Mary" };


int main()
{

	vector<string> v3(v1.size() + v2.size());

	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
	sort(v3.begin(), v3.end());
	auto ip = unique(v3.begin(), v3.end());

	v3.resize(distance(v3.begin(), ip));

	for (auto x : v3)
		cout << x << endl;

	std::cout << "\nChapter16 Exc08.\n";
	return 0;
}

