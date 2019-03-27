#include <bits/stdc++.h>

using namespace std;

<<<<<<< HEAD
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

=======
>>>>>>> f80c45500fc35031616cfc90eb7f2f656d9ecb83
int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

<<<<<<< HEAD
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
=======
>>>>>>> f80c45500fc35031616cfc90eb7f2f656d9ecb83

	return 0;
}

