#include <iostream>
using namespace std;

int main()
{
    //x - l wszytskich sega
    const int n = 11, x = n * (n - 1) / 2;
    int suma, tsi = 0;
    int tab[n] = { 2, -3, 1, -7, 4, -2, -1, 5, -3, 2, -1 };
    int tabSum[x];

    for (int i = 0; i < n; i++) {
        for (int dl = 1; dl < n-i; dl++) {
            suma = 0;
            for (int j = i; j < i + dl; j++) {
                //cout << tab[j] << " ";
                suma += tab[j];
            }
            tabSum[tsi] = suma; 
            tsi++;            
        }
    }
    int max = tabSum[0];
    for (int i = 1; i < x; i++) {
        if (max < tabSum[i]) {
            max = tabSum[i];
        }
    }

    cout << "MAX: " << max;
}
