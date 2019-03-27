#include <bits/stdc++.h>

using namespace std;

typedef long long ull;

ull gcd(ull N, ull X) {
	if (!X) return N;
	return gcd(X, N%X);
}

ull gcdi(vector<int> V) {
	ull bla = gcd(V[0], V[1]);

	for (unsigned int i = 2; i < V.size(); i++) {
		bla = gcd(bla, V[i]);
	}

	return bla;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	ull n, x;
	ull in;

	while (cin >> n >> x) {
		bool answer = true;

		vector<int> V;

		for (int i = 0; i < n; i++) {
			cin >> in; V.push_back(in);
		}

		ull res = gcdi(V);


		if (x % res == 0) cout << "YES\n";
		else cout << "NO\n";
	}

	return 0;
}

