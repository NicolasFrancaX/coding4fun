#include <bits/stdc++.h>

using namespace std;

int F[10000000];
bool B[10000000];

int fib(int n) {
	if (B[n]) return F[n]; // if it already was processed, O(1);

	if (n == 0 || n == 1) {
		F[n] = n; B[n] = true; return F[n];
	} else {
		F[n] = F[n-1]+F[n-2];
		B[n] = true;
		return F[n];
	}
}

int main() {
	memset(B, 0, sizeof(B));

	int f = 0;
	int i = 0;
	long long int sum = 0;

	while (f <= 4000000) {
		f = fib(i++);
		if (f % 2 == 0) sum += f;
	}

	cout << sum << endl;

	return 0;
}
