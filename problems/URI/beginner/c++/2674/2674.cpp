#include <bits/stdc++.h>

using namespace std;

typedef long long int lli;

lli sieve[1000001];

void calculating_sieve(lli n) {
	memset(sieve, 0, 100001);
	sieve[0] = -1;
	sieve[1] = -1;
	for (int x = 2; x <= n; x++) {
		if (sieve[x]) continue;
		for (int u = 2*x; u <= n; u += x)
			sieve[u] = x;
	}
} 

bool prime(lli n) { return !sieve[n]; }

int main() {
	calculating_sieve(1000000);

	bool p;
	string aux;

	int N;

	while (cin >> N) {
		if (prime(N)) {
			p = true;
			string n = to_string(N);
			for (unsigned int i = 0; i < n.length(); i++) {
				aux = "";
				aux.append(1u, n[i]);
				if (!prime(stoi(aux))) p = false;
			}

			if (p) cout << "Super" << endl;
			else cout << "Primo" << endl;
		} else {
			cout << "Nada" << endl;
		}
	}
}
