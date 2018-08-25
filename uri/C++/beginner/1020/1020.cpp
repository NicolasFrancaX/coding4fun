// Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1020

#include <iostream>

using namespace std;

int main() {
	int N;

	int anos, meses, dias;

	while(cin >> N) {
		anos = N/365;
		N %= 365;

		meses = N/30;
		N %= 30;

		dias = N;

		cout << anos << " ano(s)" << endl;
		cout << meses << " mes(es)" << endl;
		cout << dias << " dia(s)" << endl;
	}	
}
