// Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1010

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int codigo, quantidade;
	double preco;
	
	int codigo2, quantidade2;
	double preco2;

	while (cin >> codigo) {
		cin >> quantidade;
		cin >> preco;

		cin >> codigo2;
		cin >> quantidade2;
		cin >> preco2;

		double pagamentoTotal = (quantidade * preco) + (quantidade2 * preco2);
		
		cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << pagamentoTotal << endl;
	}


	return 0;
}
