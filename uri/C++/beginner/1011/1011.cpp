// Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1011

#include <iostream>
#include <iomanip>

#define PI 3.14159

using namespace std;

double volumeEsfera(double raio) {
	return (4.0/3)*PI*raio*raio*raio;
}

int main() {
	double raio;

	while (cin >> raio) {
		cout << "VOLUME = " << fixed << setprecision(3) << volumeEsfera(raio) << endl;
	}

	return 0;
}
