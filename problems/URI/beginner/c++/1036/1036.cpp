// Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1036

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

bool possivelCalcular(float a, float b, float c); // Mostra se é possível calcular esse problema
float R1(float a, float b, float c); // Primeira raiz
float R2(float a, float b, float c); // Segunda raiz
void calcular(float a, float b, float c); // Calcular os valores
void resultado(float a, float b, float c); // Mostra o resultado

bool possivelCalcular(float a, float b, float c) {
	return a != 0 && ((b*b) - (4*a*c) >= 0);
}

float R1(float a, float b, float c) {
	return ( -b + sqrt( (b*b) - (4*a*c) ) )/(2*a);
}

float R2(float a, float b, float c) {
	return ( -b - sqrt( (b*b) - (4*a*c) ) )/(2*a);
}

void calcular(float a, float b, float c) {
	cout << fixed << setprecision(5) << "R1 = " << R1(a, b, c) << endl;
	cout << fixed << setprecision(5) << "R2 = " << R2(a, b, c) << endl;
}

void resultado(float a, float b, float c) {
	if (possivelCalcular(a, b, c))
		calcular(a, b, c);
	else
		cout << "Impossivel calcular" << endl;
}

int main() {
	float A, B, C;

	while (cin >> A >> B >> C) {
		resultado(A, B, C);
	}

}
