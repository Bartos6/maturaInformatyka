#include <iostream>
#include <fstream>

using namespace std;

int sumaASCII(string n){

    int suma = 0;
    for(int i = 0; i < size(n); i++){
        suma += int(n[i]);
    }

    return suma;
}


int main()
{
    string a, b, aMax, bMax;
    int r, max = 0;

    ifstream dane("pary.txt"); //pary_przyklad
    ofstream wynik("wynik.txt"); //pary_przyklad

    for(int i=0;i<500;i++){
        dane >> a >> b;
        r = sumaASCII(a) - sumaASCII(b);
        if(r < 0) r = r * (-1);

        if(max < r){
            max = r;
            aMax = a;
            bMax = b;
        }
    }

    wynik<<"\nZadanie 3.1.\n";
    wynik<<aMax<<" "<<bMax<<" "<<max;

    return 0;
}
