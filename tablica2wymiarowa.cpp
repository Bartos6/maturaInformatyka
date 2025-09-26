#include <iostream>
using namespace std;

void wypelnijTab(int tab[10][10]) {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (j % 2 == 0) tab[i][j] = 0;
			else tab[i][j] = 1;
		}
	}

}

void wypiszTab(int tab[10][10]) {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cout << tab[i][j];
		}
		cout << endl;
	}

}

int main()
{
	int tab[10][10];
	wypelnijTab(tab);
	wypiszTab(tab);


}
