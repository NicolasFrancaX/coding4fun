// Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1006

#include <iostream>
#include <iomanip>

using namespace std;

double media(double A, double B, double C) {
	return ((A*2)+(B*3)+(C*5))/10;
}

int main() {
	double A, B, C;
	while (cin >> A) {
		cin >> B;
		cin >> C;

		cout << "MEDIA = " << fixed << setprecision(1) << media(A, B, C) << endl;
	}

	return 0;
}
