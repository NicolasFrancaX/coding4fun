#include <bits/stdc++.h>

using namespace std;

typedef long long ull;

ull memo[101];
bool ready[101];

ull resolve(int n) {
	if (n == 1) return 1;
	if (ready[n]) return memo[n];

	ull aux = (ull)(pow(n, 2)) + resolve(n-1);
	memo[n] = aux;
	ready[n] = true;

	return aux;
}

int main() {
	int N;

	memo[1] = 1;

	while (cin >> N && N) cout << resolve(N) << endl;

	return 0;
}
