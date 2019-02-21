#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;

int main() {
	int N;
	int M, L;
	int Cm, Cl;
	int A;

	int in;

	while (cin >> N) {
		vvi marcos;
		vvi leonardo;

		cin >> M >> L;

		for (int i = 0; i < M; i++) {
			vi card;

			for (int j = 0; j < N; j++) {
				cin >> in;

				card.push_back(in);
			}

			marcos.push_back(card);
		}

		for (int i = 0; i < L; i++) {
			vi card;

			for (int j = 0; j < N; j++) {
				cin >> in;

				card.push_back(in);
			}

			leonardo.push_back(card);
		}

		cin >> Cm >> Cl;
		cin >> A;

		if (marcos[Cm-1][A-1] == leonardo[Cl-1][A-1])
			cout << "Empate" << endl;
		else if (marcos[Cm-1][A-1] > leonardo[Cl-1][A-1])
			cout << "Marcos" << endl;
		else if (marcos[Cm-1][A-1] < leonardo[Cl-1][A-1])
			cout << "Leonardo" << endl;
	}

	return 0;
}
