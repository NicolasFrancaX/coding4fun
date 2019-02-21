#include <bits/stdc++.h>

using namespace std;

int main() {
	int M;
	int Ni, Ci;
	int sum_up, sum_down;

	while (cin >> M) {
		vector<int> n;
		vector<int> c;

		for (int i = 0; i < M; i++) {
			cin >> Ni >> Ci;

			n.push_back(Ni); c.push_back(Ci);
		}

		// Calculate sum:
		sum_up = 0; sum_down = 0;

		for (int i = 0; i < M; i++) {
			sum_up += (n[i]*c[i]);
			sum_down += c[i];
		}

		sum_down *= 100;

		cout << fixed << setprecision(4) << (sum_up+0.0)/sum_down << endl;
	}

	
	return 0;
}
