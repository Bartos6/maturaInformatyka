#include <iostream>

using namespace std;


double f(double x){
    return ((x - 3)* x + 2) * x - 6;
}

int main()
{
    float eps = 0.00000001, L = -10, P = 10, S, wartBez;

    wartBez = L - P;
    if (wartBez < 0) wartBez*= -1;

    while(wartBez > eps){

        S = (L + P) / 2;

        if(f(S)==0.0) break;
        if(f(L) * f(S) < 0) P = S;
        else L = S;

        wartBez = L - P;
        if (wartBez < 0) wartBez *= -1;


    }
    cout<< L;


}
