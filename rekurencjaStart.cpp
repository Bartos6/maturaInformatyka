#include <iostream>
using namespace std;

int fibo(int n){
    
    if (n == 0) return 0;
    if (n == 1) return 1;

    return fibo(n - 1) + fibo(n - 2);
}

int silnia(int n) {

    if (n == 1) return 1;  

    return silnia(n - 1) * n;
}

int main()
{
    cout << "10 el. ciagu Fibonacciego: " << fibo(10);
    cout << "\nSilnia z 5: " << silnia(5);    
}
