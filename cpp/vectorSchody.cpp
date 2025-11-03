#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n = 10;
	vector<vector<int>> tab;
	tab.resize(n);

	for (int i = 0; i < n; i++) {
		tab[i].resize(i + 1);
		for (int j = 0; j < i + 1; j++) {
			tab[i][j] = i+1;
			cout << tab[i][j];
		}
		cout << endl;
	}


	return 0;
}
