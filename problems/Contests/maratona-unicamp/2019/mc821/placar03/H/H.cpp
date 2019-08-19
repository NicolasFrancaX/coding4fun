#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
	int T;
	int N, M;

	int aux;

	cin >> T;

	while (T--) {
		vector<int> V_N, V_M;
		map<int, int> f;

		cin >> N >> M;	

		for (int i = 0; i < N; i++) {
			cin >> aux;
			V_N.push_back(aux);
		}


		for (int i = 0; i < M; i++) {
			cin >> aux;
			V_M.push_back(aux);
		}

		if (N < M) {
			for (int i = 0; i < M; i++) {
				if (f.find(V_M[i]) == f.end()) {
					f[V_M[i]] = 0;
				} else {
					f[V_M[i]]++;
				}
			}

			for (int i = 0; i < N; i++) {
				if (f.find(V_N[i]) != f.end()) {
					f[V_M[i]] = 0;
				} else {
					f[V_M[i]]++;
				}
			}
			
		} else if (N > M) {

		} else {

		}
	}

	return 0;
}
