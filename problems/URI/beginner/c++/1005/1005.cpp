// Problem: http://www.ic.unicamp.br/~edson/disciplinas/mc404/2017-2s/abef/IAS-sim/

#include <iostream>
#include <iomanip> // std::setprecision

using namespace std;

double media(double A, double B) {
	return ((A*3.5)+(B*7.5))/11;
}

int main() {
	double A, B;

	while (cin >> A) {
		cin >> B;

		cout << "MEDIA = " << fixed << setprecision(5) << media(A, B) << endl;
	}

	return 0;
}
