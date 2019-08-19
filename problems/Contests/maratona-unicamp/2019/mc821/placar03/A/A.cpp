#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll potencia2(ll x, ll p, ll m) {
	long aux;
	if (p == 0)
		return 1;
	else if (p % 2 == 0) {
		aux = potencia2(x, p/2, m);
		return ( (aux%m)*(aux%m) ) % m;
	} else {
		aux = potencia2(x, (p-1)/2, m);
		return ( (x%m)* ((aux*aux)%m) ) % m;
	}
}

int main() {
	int T;
	ll b, e, m;

	cin >> T;

	for (int i = 1; i <= T; i++) {
		cin >> b >> e >> m;

		cout << i << ". " << potencia2(b, e, m) << endl;
	}

	return 0;
}
