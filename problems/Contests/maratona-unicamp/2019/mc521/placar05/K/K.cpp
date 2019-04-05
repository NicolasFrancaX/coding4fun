#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

typedef long long ll;

ll Z(ll N) {
	ll count = 0;

	ll k = 5;

	while (N >= k) {
		count += (ll)(N/k);
		k *= 5;
	}

	return count;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int T;
	int N;

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> N;

		cout << Z(N) << endl;
	}

	
	return 0;
}
