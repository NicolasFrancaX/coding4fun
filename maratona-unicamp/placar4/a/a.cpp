// https://www.spoj.com/problems/AP2/

#include <iostream>

using namespace std;

void print(int a1, int r, int n) {
	for (int i = 0; i < n-1; i++)
		cout << a1 + (i*r) << " ";
	cout << a1 + ((n-1)*r) << endl;
}

int main() {
	int t;
	long long int term3 = 0, lastterm3 = 0, sum = 0;
	long long int n = 0, r = 0, a1 = 0;

	while (cin >> t) {
		for (int i = 0; i < t; i++) {
			cin >> term3 >> lastterm3 >> sum;

			n = ((2*sum)/(term3 + lastterm3));
			cout << n << endl;

			r = (int)((lastterm3 - term3)/(n - 5));
			a1 = term3 - (2*r);

			print(a1, r, n);
		}
	}

	return 0;
}

