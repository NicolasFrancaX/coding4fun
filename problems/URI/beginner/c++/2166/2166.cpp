#include <bits/stdc++.h>

using namespace std;

int main() {
	int N;

	double fractions = 0;

	cin >> N;

	while (N--) fractions = (1+0.0) / (2 + fractions);
	

	/* Result: */
	cout << fixed << setprecision(10) << 1 + fractions << endl;

	return 0;
}
