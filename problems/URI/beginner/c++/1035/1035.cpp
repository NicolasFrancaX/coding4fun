// Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1035

#include <iostream>

using namespace std;

bool isBigger(int b, int c) {
	return b > c;
}

bool logica(int a, int b, int c, int d) {
	return isBigger(b, c) && isBigger(d, a) && isBigger(c+d, a+b) 
		&& c >= 0 && d >= 0 && a % 2 == 0;
}

void solucao(int a, int b, int c, int d) {
	if (logica(a, b, c, d))
		cout << "Valores aceitos" << endl;
	else
		cout << "Valores nao aceitos" << endl;
}

int main() {
	int A, B, C, D;

	while (cin >> A >> B >> C >> D) {
		solucao(A, B, C, D);
	}
}
