// Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1017

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int hrs, speed;

	while (cin >> hrs >> speed) {
		cout << fixed << setprecision(3) << (double)(hrs * speed)/12 << endl;
	}
}
