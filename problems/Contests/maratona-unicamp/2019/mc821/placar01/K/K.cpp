#include <bits/stdc++.h>

using namespace std;

int main() {
	int N, M;
	int in;
	int Q;
	int L, U;
	int X, W;

	while (cin >> N >> M) {
		vector<vector<int>> V;

		V.resize(N);
		for (int i = 0; i < N; i++) {
			V[i].resize(M);

			for (int j = 0; j < M; j++) {
				cin >> in;

				V[i][j] = in;
			}

		}

		cin >> Q;

		for (int i = 0; i < Q; i++) {
			cin >> L >> U;

			/* FAZER BRUTE FORCE AQUI */
			
		}

		/* DEBUGGER 
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				cout << V[i][j] << " ";
			}

			cout << endl;
		}
		*/

	}	




	return 0;
}
