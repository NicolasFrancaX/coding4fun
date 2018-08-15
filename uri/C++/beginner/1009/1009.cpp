// Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1009

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

double beneficioDespesaMensal(double despesaMensal) {
	return (despesaMensal / 100) * 15;
}
int main() {
	string nome;
	double salario, despesaMensal;
	
	while (cin >> nome) {
		cin >> salario;
		cin >> despesaMensal;

		cout << "TOTAL = R$ " << fixed << setprecision(2) << beneficioDespesaMensal(despesaMensal) + salario << endl;
	}

	return 0;
}
