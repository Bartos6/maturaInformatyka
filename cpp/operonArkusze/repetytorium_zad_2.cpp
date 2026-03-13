#include <iostream>

using namespace std;

bool czyPierwsza(int n){
    if(n==0 || n == 1) return false;

    for(int i = 2; i*i <= n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int sumaCyfr(int n){
    int suma = 0;
    while(n>0){
        suma = suma + n%10;
        n = n/10;
    }
    return suma;
}

int zamianaZ10Na2(int n){
    int liczba2 = 0, x = 1;

    while(n>0){
        liczba2 = liczba2 +  n%2 * x;
        x = x*10;
        n=n/2;
    }
    return liczba2;
}



int main()
{
    for (int i = 1; i<=100;i++){
        if( czyPierwsza(i) &&
           czyPierwsza(sumaCyfr(i)) &&
           czyPierwsza(sumaCyfr(zamianaZ10Na2(i)))  ){
            cout<<i<<" jest superpierwsza\n";
        }
    }
}



