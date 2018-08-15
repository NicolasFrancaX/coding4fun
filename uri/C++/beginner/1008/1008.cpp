// Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1008

#include <iostream>
#include <iomanip>

using namespace std;

double salarioEmpregado(int horas, double horaPaga) {
	return horas * horaPaga;
}

int main() {
	int nEmpregado, hora;
	double horaPaga;

	while (cin >> nEmpregado) {
		cin >> hora;
		cin >> horaPaga;

		cout << "NUMBER = " << nEmpregado << endl;
		cout << "SALARY = U$ " << fixed << setprecision(2) << salarioEmpregado(hora, horaPaga) << endl;
	}

	return 0;
}
