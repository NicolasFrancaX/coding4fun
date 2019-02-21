#include <bits/stdc++.h>

using namespace std;

typedef long long ull;

ull diff_sq[102];

int main() {
	// Calculating values before.
	diff_sq[1] = 1;
	for (int i = 2; i <= 100; i++)
		diff_sq[i] = ((int)(pow(i, 2))) + diff_sq[i-1];
	
	int N;

	while (cin >> N && N)
		cout << diff_sq[N] << endl;

	return 0;
}
