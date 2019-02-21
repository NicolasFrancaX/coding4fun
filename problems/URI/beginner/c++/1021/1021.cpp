// Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1021

#include <iostream>

using namespace std;

int main() {
	double dinheiro;
	int manip;
	int n10000, n5000, n2000, n1000, n500, n200, n100, n50, n25, n10, n5, n1;

	while (cin >> dinheiro) {
		// Calculos:
		manip = (int)(dinheiro * 100);

		n10000 = manip/10000;
		manip %= 10000;

		n5000 = manip/5000;
		manip %= 5000;

		n2000 = manip/2000;
		manip %= 2000;

		n1000 = manip/1000;
		manip %= 1000;

		n500 = manip/500;
		manip %= 500;

		n200 = manip/200;
		manip %= 200;

		n100 = manip/100;
		manip %= 100;

		n50 = manip/50;
		manip %= 50;

		n25 = manip/25;
		manip %= 25;

		n10 = manip/10;
		manip %= 10;

		n5 = manip/5;
		manip %= 5;

		n1 = manip;	

		cout << "NOTAS:" << endl;
		cout << n10000 << " nota(s) de R$ 100.00" << endl;
		cout << n5000 << " nota(s) de R$ 50.00" << endl;
		cout << n2000 << " nota(s) de R$ 20.00" << endl;
		cout << n1000 << " nota(s) de R$ 10.00" << endl;
		cout << n500 << " nota(s) de R$ 5.00" << endl;
		cout << n200 << " nota(s) de R$ 2.00" << endl;
		cout << "MOEDAS:" << endl;
		cout << n100 << " moeda(s) de R$ 1.00" << endl;
		cout << n50 << " moeda(s) de R$ 0.50" << endl;
		cout << n25 << " moeda(s) de R$ 0.25" << endl;
		cout << n10 << " moeda(s) de R$ 0.10" << endl;
		cout << n5 << " moeda(s) de R$ 0.05" << endl;
		cout << n1 << " moeda(s) de R$ 0.01" << endl;
	}
}
