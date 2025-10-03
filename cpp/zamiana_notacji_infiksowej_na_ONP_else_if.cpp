#include <iostream>
#include <stack>
using namespace std;

int main()
{
	string w; //dzialanie (bez spacji) na cyfrach
	cin >> w;
	stack <char> stos;
	stos.push('#');

	for (int i = 0; i < w.size(); i++) {
		//sprawdzenie czy liczba
		if (w[i] >= '0' && w[i] <= '9') {
			cout << w[i];
		}

		//sprawdzenie operatora + -
		if (w[i] == '+' || w[i] == '-') {
			while (stos.top() != '#' && stos.top() != '(') {
				cout << stos.top();
				stos.pop();
			}
			stos.push(w[i]);
		}

		//sprawdzenie operatora * /
		else if (w[i] == '*' || w[i] == '/') {
			while (stos.top() != '#' && stos.top() != '(' && stos.top() != '+' && stos.top() != '-') {
				cout << stos.top();
				stos.pop();
			}
			stos.push(w[i]);
		}

		//sprawdzenie operatora ^
		else if (w[i] == '^') {
			while (stos.top() == '^') {
				cout << stos.top();
				stos.pop();
			}
			stos.push(w[i]);
		}

		//nawias otwierajacy 
		else if (w[i] == '(') {
			stos.push(w[i]);
		}

		//nawias zamykajacy
		else if (w[i] == ')') {
			while (stos.top() != '(') {
				cout << stos.top();
				stos.pop();
			}
			stos.pop();
		}
	}

	while (stos.top() != '#') {
		cout << stos.top();
		stos.pop();
	}

}
