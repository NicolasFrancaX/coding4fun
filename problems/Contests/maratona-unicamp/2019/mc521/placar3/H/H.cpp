#include <bits/stdc++.h>

#define REP(i, a, b) for (ull i = ull(a); i <= ull(b); i++)
#define debug(x) cout << #x " = " << x << endl;

using namespace std;

typedef long long ull;
typedef vector<ull> vi;

double n_sub(int a1, int Q) {
	return (-a1+0.5-sqrt(pow(a1-0.5, 2)+(2*Q)));
}

double n_add(int a1, int Q) {
	return (-a1+0.5+sqrt(pow(a1-0.5, 2)+(2*Q)));
}

bool S(int Q) {
	for (int i = 1; i < Q; i++) {
		double n1 = n_sub(i, Q);
		double n2 = n_add(i, Q);

		debug(n1);
		debug(n2);


		double res1 = (0.5*pow(n1, 2)-(n1/2)+(n1*i));
		double res2 = (0.5*pow(n2, 2)-(n2/2)+(n2*i));

		debug(res1);
		debug(res2);


		if (res1 == Q && n1 == (int)n1) {
		       	return true;
		} 

		if (res2 == Q && n2 == (int)n2) {
		       	return true;
		}
	}

	return false;
}

int main() {
	int Q;
	unsigned int X;

	cin >> Q;

	while (Q--) {
		cin >> X;

		if (S(X)) cout << "Yes" << endl;
		else cout << "No" << endl;

	}

	return 0;
}
