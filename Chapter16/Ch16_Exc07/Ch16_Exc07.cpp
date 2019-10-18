#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>

using namespace std;

vector<int> Lotto(int whole, int picks);

int main()
{
	vector<int> winners;
	winners = Lotto(49, 6);

	for (int i : winners)
		cout << ' ' << i;

	cout << "\nChapter16 Exc07.\n";
	return 0;
}

vector<int> Lotto(int whole, int picks) {

	vector<int> winners, temp;


	for (int i = 0; i < whole; i++)
		winners.push_back(i + 1);
	random_shuffle(winners.begin(), winners.end());

	while (picks--)
		temp.push_back(winners[picks]);
	sort(temp.begin(), temp.end());

	return temp;
}


