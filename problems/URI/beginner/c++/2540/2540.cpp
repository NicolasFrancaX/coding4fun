#include <bits/stdc++.h>

#define debug(x) cout << #x " = " << x << endl;

using namespace std;

int main() {
	int N;
	int in;
	int sum;

	while (cin >> N) {
		sum = 0;

		/* 
		 * N - 1
		 * x - 2/3
		 * 
		 * x = (N*2/3)
		 */

		for (int i = 0; i < N; i++) {
			cin >> in;

			if (in) sum++;
		}


		if (sum >=((2*N)+0.0)/3) cout << "impeachment" << endl;
		else cout << "acusacao arquivada" << endl;
	}

	return 0;
}
