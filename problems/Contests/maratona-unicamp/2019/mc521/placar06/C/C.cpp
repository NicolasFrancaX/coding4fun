#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	ll N, Q;
	ll n;

	cin >> N >> Q;

	map<int, int> M;
	
	for (int i = 0; i < N; i++) {
		cin >> n;

		if (M.find(n) == M.end())
			M[n] = i;
	}

	while (Q--) {
		cin >> n;

		if (M.find(n) != M.end())
			cout << M[n] << endl;
		else 	cout << -1 << endl;
	}

	
	return 0;
}
