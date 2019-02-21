#include <bits/stdc++.h>

using namespace std;

int grid[200][200];

int movs[][2] = { {-1, 0}, {1, 0}, {0, -1}, {0, 1} };

int main() {
	int N, M;
	int in;
	int count;

	while (cin >> N >> M) {
		memset(grid, -1, sizeof(grid));


		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				cin >> in;

				if (in == 1) grid[i][j] = 9;

			}
		}


		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (grid[i][j] == -1) {
					count = 0;

					for (int k = 0; k < 4; k++) {
						if (i+movs[k][0] < 0 || i+movs[k][0] >= N || j+movs[k][1] < 0
								|| j+movs[k][1] >= M)
							continue;
						if (grid[i+movs[k][0]][j+movs[k][1]] == 9) count++;
					}

					grid[i][j] = count;
				}
			}
		}


		/* Print */
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++)
				cout << grid[i][j];

			cout << endl;
		}
	}

	return 0;
}
