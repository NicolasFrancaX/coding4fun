// Problem: https://uva.onlinejudge.org/external/119/p11991.pdf

#include <iostream>
#include <vector>

#define MAX 2000000

using namespace std;

vector<int> a_n[MAX];

int main() {
	int n, m;
	int aux;
	int k, v;
	int n_e_i;

	while (cin >> n >> m) {
		for (int i = 0; i < n; i++) {
			cin >> aux;
			a_n[aux].push_back(i);
		}

		for (int i = 0; i < m; i++) {
			cin >> k >> v;

			if (a_n[v].size() < k)
				cout << 0 << endl;
			else
				cout << a_n[v][k-1] + 1 << endl;
				
		}

	}

	return 0;
}
