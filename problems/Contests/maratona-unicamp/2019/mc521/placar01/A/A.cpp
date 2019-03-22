#include <bits/stdc++.h>

using namespace std;

int main() {
	int R, C, Zr, Zc;
	string in;

	while (cin >> R >> C >> Zr >> Zc) {
		vector<string> grid;

		for (int i = 0; i < R; i++) {
			cin >> in;
			grid.push_back(in);
		}

		for (int i = 0; i < R; i++) {
			for (int j = 0; j < Zr; j++) {
				for (auto it = grid[i].begin(); it != grid[i].end(); it++) {
					for (int k = 0; k < Zc; k++) cout << *it;
				}

				cout << endl;
			}
		}
	}

	return 0;
}
