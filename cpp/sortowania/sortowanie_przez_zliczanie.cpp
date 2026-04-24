#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream dane("liczby.txt");
    const int n = 10; // ile liczb (podane w zadaniu)
    int x;
    int tab[n];

    for(int i = 0; i<n; i++){
        dane>>tab[i];
    }

    const int max = 8; // max liczba w zbiorze (podane w zadaniu)
    int zliczanie[max+1]; //tablica do zliczania

    //zerujemy ilość wystąpień elementów
    for(int i = 0; i<max+1; i++){
        zliczanie[i] = 0;
    }

    //zliczamy ilość wystąpień
    for(int i = 0; i<n; i++){
        zliczanie[tab[i]] ++;
    }

    // wypisanie posortowanego ciągu (orginalna tab nie jest posortowana)
     for(int i = 0; i<max+1; i++){
            for(int j = 0; j<zliczanie[i]; j++){
                cout<<i<<" ";
            }
    }



}
