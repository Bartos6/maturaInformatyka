#include <iostream>
#include <thread> //biblioteka do opóźnienia 
#include <chrono> //biblioteka do opóźnienia 

using namespace std;


int main() {
    srand(time(0));

    const int h = 12;

    while (true) {
        system("cls");   // jednak nie potrzebuje biblioteki;
        // Rysowanie choinki
        for (int i = 0; i < h; i++) {
            // Spacje
            for (int s = 0; s < h - i; s++) {
                cout << " ";
            }

            // Gałęzie + lampki
            for (int j = 0; j < 2 * i + 1; j++) {                
                if (i % 3 == 0) {
                    if (rand() % 2 == 0) cout << "x"; //lampki
                    else cout << "o";
                }
                else cout << "^";  // gałęzie
            }
            cout << endl;
        }

        // Pień
        for (int i = 0; i < 2; i++) {
            for (int s = 0; s < h - 1; s++) cout << " ";
            cout << "|||" << endl;
        }

        // Opóźnienie – efekt mrugania
        this_thread::sleep_for(chrono::milliseconds(500));
    }

    return 0;
}
