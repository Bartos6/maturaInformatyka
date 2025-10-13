#include <iostream>
#include <fstream>
using namespace std;

int zmianaBinNaDzies(int l) {
	int x, suma = 0, pot2 = 1;
	while (l > 0) {
		x = l % 10;
		suma += x * pot2;
		l = l / 10;
		pot2 *= 2;
	}
	return suma;	
}


void zmianaSystemu(int liczba, int ps) {
	int r, tab[100], i = 0;

	while (liczba != 0) {
		r = liczba % ps;
		liczba = liczba / ps;
		tab[i] = r;
		i++;
	}

	for (int j = i - 1; j >= 0; j--) {
		cout << tab[j];
	}
}

string zmianaSystemuNapis(int liczba, int ps) {
	int r, tab[100], i = 0;
	string wynik = "";
	char znak;
	while (liczba != 0) {
		tab[i++] = liczba % ps;
		liczba /= ps;
	}

	for (int j = i - 1; j >= 0; j--) {
		znak = tab[j] + 48;   //	Można sprawdzić odpowiednik cyfr w ASCII cout << "0: " << int('0') << endl; UWAGA! Nie zadziała dla systemu większego niż 9

		wynik += znak;
	}	

	return wynik;

}

void zmianaSystemuWynikDoPliku(int liczba, int ps) {
	ofstream wynikF("wynikFunkcja.txt");

	int r, tab[100], i = 0;
	string wynik = "";
	char znak;
	while (liczba != 0) {
		tab[i++] = liczba % ps;
		liczba /= ps;
	}

	for (int j = i - 1; j >= 0; j--) {
		wynikF << tab[j];
	}

}


int main()
{
	ifstream plik("dane.txt");
	ofstream wynik("wynik.txt");

	int liczba, podstawaSystemu;
	plik >> liczba >> podstawaSystemu;
	//zapis do pliku
	wynik << zmianaSystemuNapis(liczba, podstawaSystemu);
	zmianaSystemuWynikDoPliku(liczba, podstawaSystemu);
	//wypisaie na ekran
	zmianaSystemu(liczba, podstawaSystemu);
	

	plik.close();
	wynik.close();


	return 0;
}
