#include <iostream>
using namespace std;

float f(float x) {
    return x * x * x - 3 * x * x + 2 * x - 6;
   }

int main()
{
    float a = -10, b = 10, eps = 0.00001, s, wartBezwzgl;
    s = (a + b) / 2;

    wartBezwzgl = a - b;
    if (wartBezwzgl < 0) wartBezwzgl = wartBezwzgl * -1;

    while (wartBezwzgl > eps) {

        //1. ustalenia nowego przedziału        
        //f(a)* f(s) < 0:    b = s   else ...

        //2. wyznaczenie nowej warBezwzgl
    }


    cout << "Miejsce zerowe w przedziale (" << a << " " << b<<") wynosi: ";
}
