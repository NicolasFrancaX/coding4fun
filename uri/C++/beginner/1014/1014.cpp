// Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1014

#include <iostream>
#include <iomanip>

using namespace std;

double divisao(int km, double litros) {
	return km / litros;
}

int main() {
	int km;
	double litros;

	while (cin >> km) {	
		cin >> litros;

		cout << fixed << setprecision(3) << divisao(km, litros) << " km/l" << endl;
	}

	return 0;
}
