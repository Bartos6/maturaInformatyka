#include <stack>
#include <iostream>
using namespace std;
 
int main()
{
	stack<char> stos;

	string wyr;
	cout << "Podaj dzialanie, bez spacji";
	cin >> wyr;

	for (int i = 0; i < wyr.size(); i++) {
		if (wyr[i] >= '0' && wyr[i] <= '9') cout << wyr[i];

		else if (wyr[i] == '+' || wyr[i] == '-') {
			while (!stos.empty()) {
				cout << stos.top();
				stos.pop();
			}
			stos.push(wyr[i]);
			
		}
		else if (wyr[i] == '*' || wyr[i] == '/') {
			while (!stos.empty() && stos.top() != '+' && stos.top() != '-') {
				cout << stos.top();
				stos.pop();
			}
			stos.push(wyr[i]);
		}
		else if (wyr[i] == '^') {
			while (stos.top() == '^') {
				cout << stos.top();
				stos.pop();
			}
			stos.push(wyr[i]);
		}
	}
	 
	while ( !stos.empty() ) {
		cout << stos.top();
		stos.pop();
	}






	return 0;
}
