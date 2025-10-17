#include <iostream>
#include <fstream>

using namespace std;


bool czyPalindrom(string napis) {

	int n = 12;
	for (int i = 0; i < n / 2; i++) {
		if (napis[i] != napis[n - 1 - i]) {
			return false;
		}
	}

	return true;
}


int main()
{
	string napis;

	ifstream dane("symbole.txt");
	ofstream wynik("wynik2_1.txt");

	while (dane >> napis) {
		if (czyPalindrom(napis))
			wynik << napis << endl;
	}

}
