//wersja nie pelna
#include <iostream>
#include <vector>

using namespace std;


int main()
{

	vector <int> wsp ={-5, 1, -2, 0, 3}, wynik;
	int st = 4, mZ = -2;

	wynik.resize(st + 1);

	for (int i = st; i >= 0; i--) {
		if (i == st) wynik[i] = wsp[i];
		else wynik[i] = wynik[i + 1] * mZ + wsp[i];
	}
	// wynik = {33,-19,10,-6,3}
	
  //wypisać:
	// (x + 2)(3 * x^3 + -6 * x^2 + 10 * x^1 + -19 * x^0 + ) + 33
  
  // moze byc:
  // + - 6
  // x^0 + )

}
