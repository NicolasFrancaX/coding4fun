// Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1019

#include <iostream>

using namespace std;

int main() {
	int N;
	int hrs, min, sec;

	while (cin >> N) {
		hrs = N/3600;
		N %= 3600;

		min = N/60;
		N %= 60;

		sec = N;

		cout << hrs << ":" << min << ":" << sec << endl;
	}
}
