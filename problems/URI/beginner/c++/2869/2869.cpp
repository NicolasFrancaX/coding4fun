#include <bits/stdc++.h>
using namespace std;

typedef long long ull;

ull divisors[200];

bool prime(int n) {
	if (n < 2) return false;
	for (int x = 2; x*x <= n; x++) {
		if (n % x == 0) return false;
	}

	return true;
}

vector<int> factors(int n) {
	vector<int> f;
	for (int x = 2; x*x <= n; x++) {
		while (n % x == 0) {
			f.push_back(x);
			n /= x;
		}
	}

	if (n > 1) f.push_back(n);

	return f;
}

ull n_factors(int n) {
	vector<int> k = factors(n);	
	map<int, bool> v;
	// 2 2 3 => 2 1

	int prod = 1;

	vector<int> p;

	for (auto it = k.begin(); it != k.end(); it++) {
		if (v[*it]) continue;
		v[*it] = true;
		p.push_back(count(k.begin(), k.end(), *it));
	}

	for (auto it = p.begin(); it != p.end(); it++) {
		prod *= (*it+1);
	}

	return prod;
}

int main() {
	map<int, int> aux;


	// Calculating values offline:
	for (int i = 1; i <= 100; i++) {
		if (i == 1) {
			divisors[i] = 1;
			aux[1] = 1;
		} else if (prime(i)) {
			divisors[i] = ((ull)pow(2, i-1)) % 1000000007;
			aux[i] = divisors[i];
		} else {

			vector<int> f = factors(i);
			sort(f.begin(), f.end());

			if ((int)f.size() == 2) {
				int a = f[1];
				int b = f[0];

				divisors[i] = ((ull)pow(2, a-1))*((ull)pow(3, b-1)) % 1000000007;
				aux[i] = divisors[i];
			} else {
				for (int j = 1; j < 10000; j++) {
					if (n_factors(j) == i) {
						divisors[i] = j % 1000000007;
						cout << divisors[i] << " ";
						break;
					}
				}
				aux[i] = divisors[i];
			}
		}
	}

	int C;
	int N;

	cin >> C;

	while (C--) {
		cin >> N;
		cout << divisors[N] << endl;
	}

	return 0;
}
