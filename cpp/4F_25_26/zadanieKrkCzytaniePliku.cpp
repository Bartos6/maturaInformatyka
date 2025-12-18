#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream dane("zadanie4fKRK.txt");
    ofstream wynik("wynik.txt");

    string napis;
    
    
    while (getline(dane, napis)) {
        int licznik = 0;

        for (int i = 0; i < napis.size(); i++) {

            if (napis[i] == 'a') {
                licznik++;
            }
        }
        cout << licznik << " ";
    }

}

