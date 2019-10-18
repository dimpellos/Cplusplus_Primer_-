#define SIZE 1000000

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <ctime>

using namespace std;

int main()
{
	srand(time(NULL));
	vector<int> vi0, vi, vcomb(SIZE);
	list<int> li;
	clock_t t_vector, t_vector_end, t_list, t_list_end, t_combined, t_combined_end;

	for (int i = 0; i < SIZE; i++)
		vi0.push_back(rand() % 5000);

	for (int i = 0; i < SIZE; i++)
	{
		vi.push_back(vi0[i]);
		li.push_back(vi0[i]);
	}

	//sort with list.sort()
	t_list = clock();
	li.sort();
	t_list_end = clock();

	//sort with <algorithm> sort()
	t_vector = clock();
	sort(vi.begin(), vi.end());
	t_vector_end = clock();

	li.clear();
	vi.clear();


	for (int i = 0; i < SIZE; i++)
		li.push_back(vi0[i]);

	//sort with the a)copy list-to-vector, b) sort, c) copy back vector-to-list
	t_combined = clock();
	copy(li.begin(), li.end(), vcomb.begin());
	sort(vcomb.begin(), vcomb.end());
	copy(vcomb.begin(), vcomb.end(), li.begin());
	t_combined_end = clock();

	vi0.clear();
	li.clear();
	vcomb.clear();
	cout << "sizeof of empty vector: " << sizeof vcomb << endl;
	cout << "sizeof of empty list: " << sizeof li << endl;

	std::cout << endl << "Time for vector: " << (double)(t_vector_end - t_vector) / CLOCKS_PER_SEC
		<< "\nTime for list  : " << (double)(t_list_end - t_list) / CLOCKS_PER_SEC
		<< "\nTime for combine: " << (double)(t_combined_end - t_combined) / CLOCKS_PER_SEC << endl;

	cout << "\n\n\nChapter16 Excercise 9.\n";
	return 0;
}


