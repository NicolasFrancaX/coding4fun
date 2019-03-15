#include <bits/stdc++.h>

using namespace std;

int main() {
	double a = 2.555;
	int b = 2;

	if ((int)b == b) {
		cout << "2 é inteiro" << endl;
	}

	if ((int)a == b && a != b) {
		cout << "2.555 não é inteiro" << endl;
	}

	a = 2;
	
	if ((int)a == b && a == b) {
		cout << "2 é inteiro" << endl;
	}

	return 0;
}
