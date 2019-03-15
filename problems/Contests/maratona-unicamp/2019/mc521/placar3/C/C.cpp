#include <bits/stdc++.h>

using namespace std;

typedef long long int lli;

lli gcd(lli a, lli b) {
	lli t;

	while (b != 0) {
		t = b;
		b = a % b;
		a = t;
	}

	return a;
}

// A Diophantine equation can be solved if c is divisible by gcd(a, b) and otherwise
// the equation cannot be solved.

int main() {
	int Case = 1;
	int a, b, c;

	int T;

	cin >> T;

	while (T--) {
		cin >> a >> b >> c;

		cout << "Case " << Case++ << ": ";
		if (c % gcd(a, b) == 0) cout << "Yes" << endl;
		else cout << "No" << endl;
	}

	return 0;
}
