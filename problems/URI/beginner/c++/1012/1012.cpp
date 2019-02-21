// Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1012

#include <iostream>
#include <iomanip>

#define PI 3.14159

using namespace std;

double triangulo(double A, double C) {
	return A*C/2;
}

double circulo(double C) {
	return PI*C*C;
}

double trapezio(double A, double B, double C) {
	return C*(A+B)/2;
}

double quadrado(double B) {
	return B*B;
}

double retangulo(double A, double B) {
	return A*B;
}

int main() {
	double A, B, C;

	while (cin >> A) {
		cin >> B;
		cin >> C;

		cout << "TRIANGULO: " << fixed << setprecision(3) << triangulo(A, C) << endl;
		cout << "CIRCULO: " << fixed << setprecision(3) << circulo(C) << endl;
		cout << "TRAPEZIO: " << fixed << setprecision(3) << trapezio(A, B, C) << endl;
		cout << "QUADRADO: " << fixed << setprecision(3) << quadrado(B) << endl;
		cout << "RETANGULO: " << fixed << setprecision(3) << retangulo(A, B) << endl;
	}

	return 0;
}
