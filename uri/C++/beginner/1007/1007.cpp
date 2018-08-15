// Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1007

#include <iostream>

using namespace std;

int diferenca(int A, int B, int C, int D) {
	return (A*B)-(C*D);
}

int main() {
	int A, B, C, D;

	while (cin >> A) {
		cin >> B;
		cin >> C;
		cin >> D;

		cout << "DIFERENCA = " << diferenca(A, B, C, D) << endl;
	}

	return 0;
}
