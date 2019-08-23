#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll gcd(ll a, ll b) {
	if (b == 0) return a;
	return gcd(b, a%b);
}

// source: https://www.geeksforgeeks.org/count-divisors-n-on13/
ll number_of_factors(ll n) { 
	int cnt = 0;

	for (int i = 1; i <= sqrt(n); i++) {
		if (n % i == 0) {
			// If divisors are equal,
			// count only one
			if (n / i == i)
				cnt++;

			else // Otherwise count both
				cnt = cnt + 2;
		}
	}

	return cnt;
} 

int main() {
	int n;
	ll in;
	ll g;

	cin >> n;

	cin >> g;

	for (int i = 1; i < n; i++) {
		cin >> in;

		g = gcd(g, in);
	}

	cout << number_of_factors(g) << endl;
		

	return 0;
}
