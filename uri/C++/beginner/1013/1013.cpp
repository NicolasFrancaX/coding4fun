// Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1013

#include <iostream>

using namespace std;

int abs(int a) {
	return a >= 0 ? a : (-1)*a;
}

int maior(int A, int B) {
	return (A+B+abs(A-B))/2;
}

int main() {
	int A, B, C;
	
	while (cin >> A) {
		cin >> B;
		cin >> C;

		cout << maior(C, maior(A, B)) << " eh o maior" << endl;
	}	

	return 0;
}
