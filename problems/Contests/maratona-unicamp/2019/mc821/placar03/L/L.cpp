#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int gcd(int a, int b) {
	if (b == 0) return a;
	return gcd(b, a%b);
}

int number_of_factors(int n) {
	int currentFactor = 2;
	int numberFactors = 0;

	while (n > 1) {
		if (n % currentFactor == 0) {
			n /= currentFactor;
			numberFactors++;
		} else {
			currentFactor++;
		}
	}

	return numberFactors;
}

int main() {
	int n;
	int in;
	int g;
	vector<int> V;

	cin >> n;

	cin >> g;

	for (int i = 1; i < n; i++) {
		cin >> in;

		g = gcd(g, in);
	}

	cout << number_of_factors(g) << endl;
		

	return 0;
}
