#include <bits/stdc++.h>

using namespace std;

long long result(long long k, long long n);

long long result(long long k, long long n) {
	if (k == 1) return n;
	else return result((long long)(k+0.0)/2, n+1);
}

int main() {
	long long N;

	while (cin >> N) 
		cout << result(N, 0) << endl;;

	return 0;
}
