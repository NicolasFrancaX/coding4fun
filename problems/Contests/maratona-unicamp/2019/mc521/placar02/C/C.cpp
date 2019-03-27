#include <bits/stdc++.h>

using namespace std;

int memo_pot_2[100000];

/* Return index alpha of the element in with 2^{alpha-1} < n < 2^{alpha} */

int main() {
	/* Pre-processing */
	for (int i = 0; i < 100000; i++)
		memo_pot_2[i] = (int)pow(2, i);

	/* ============== */

	int N;
	int Case = 1;

	long long esq, dir;

	int index = -1;

	while (cin >> N && N > 0) {
		for (int i = 1; i < 100000; i++) {
			esq = memo_pot_2[i-1];
			dir = memo_pot_2[i];

			if (N == esq) {
				index = i-1;
				break;
			}

			if (esq < N && N < dir) {
			       	index = i;
				break;
			}

		}

		cout << "Case " << Case++ << ": " << index << endl;
	}

	return 0;
} 
