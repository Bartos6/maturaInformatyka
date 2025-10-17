#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int napis_size = 12;

bool czyPalindrom(string napis) {
	for (int i = 0; i < napis_size / 2; i++) {
		if (napis[i] != napis[napis_size - 1 - i]) {
			return false;
		}
	}

	return true;
}

void zadanie_2_1() {
	string napis;

	ifstream dane("symbole.txt");
	ofstream wynik("wynik2_1.txt");

	while (dane >> napis) {
		if (czyPalindrom(napis))
			wynik << napis << endl;
	}
}

void zadanie_2_2() {
	
	string n, np, nn;
	char symbol;
	int j = 2, licznik = 0, licznik_tab=0;
	vector <int > tab (2000);

	ifstream dane("symbole.txt");
	ofstream wynik2("wynik2_2.txt");
	dane >> np; 
	dane >> n;
	while (dane >> nn) {
		for (int i = 1; i < napis_size-1; i++) {
			symbol = n[i];

			if (np[i - 1] == symbol && np[i] == symbol && np[i + 1] == symbol && n[i - 1] == symbol && n[i + 1] == symbol && nn[i - 1] == symbol && nn[i] == symbol && nn[i + 1] == symbol) {
				tab[licznik_tab++] = j;
				tab[licznik_tab++] = i+1;
				licznik++;
			}				
		}
		np = n;
		n = nn;

		j++;
	}
	wynik2 << licznik << " ";

	for (int i = 0; i < licznik_tab; i++) {
		wynik2 << tab[i] << " ";
	}
}

long long zmianaSysZ3Na10(long long liczba) {
	
	long long pot = 1, suma = 0;
	while (liczba > 0) {
		suma += liczba % 10 * pot;

		liczba /= 10;
		pot *= 3;
	}
	return suma;
}

void zadanie_2_3() {
	string napis, napisMax;
	long long x = 0, liczba = 0, max = 0;

	ifstream dane("symbole.txt");
	ofstream wynik("wynik2_3.txt");

	while (dane >> napis) {
		liczba = 0;
		for (int i = 0; i < napis_size; i++) {
			if (napis[i] == 'o') x = 0;
			if (napis[i] == '+') x = 1;
			if (napis[i] == '*') x = 2;

			liczba = liczba * 10 + x;		
		}
		if (max < liczba) {
			max = liczba;
			napisMax = napis;
		}
	}
	wynik << zmianaSysZ3Na10(max) << " " << napisMax;

}

string zmianaSysZ10Na3(int liczba) {
	int x, licznik = 0;
	string wynik = "";
	long long odwrWyn = 0;
	while (liczba > 0) {
		x = liczba % 3;

		odwrWyn = odwrWyn * 10 + x;
		liczba /= 3;
	}

	while (odwrWyn > 0) {
		if (odwrWyn % 10 == 0) wynik += 'o';
		if (odwrWyn % 10 == 1) wynik += '+';
		if (odwrWyn % 10 == 2) wynik += '*';

		odwrWyn /= 10;
	}
	return wynik;
}

void zadanie_2_4() {
	string napis;
	long long x = 0, liczba = 0, suma = 0;

	ifstream dane("symbole.txt");
	ofstream wynik("wynik2_4.txt");

	while (dane >> napis) {
		liczba = 0;
		for (int i = 0; i < napis_size; i++) {
			if (napis[i] == 'o') x = 0;
			if (napis[i] == '+') x = 1;
			if (napis[i] == '*') x = 2;

			liczba = liczba * 10 + x;
		}
		suma += zmianaSysZ3Na10(liczba);
	}
	wynik << suma << " " << zmianaSysZ10Na3(suma);

}


int main()
{	
	zadanie_2_1();
	zadanie_2_2();
	zadanie_2_3();
	zadanie_2_4();

}
