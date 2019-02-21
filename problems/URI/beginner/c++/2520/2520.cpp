#include <bits/stdc++.h>

using namespace std;

int grid[200][200];
bool visited[200][200];

int mov[][2] = { {1, 0}, {-1, 0}, {0, -1}, {0, 1} };

int main() {
	int N, M;
	int x, y;
	int state_x, state_y, distance;

	while (cin >> N >> M) {
		memset(visited, 0, sizeof(visited));

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				cin >> grid[i][j];

				if (grid[i][j] == 1) {
					x = i; y = j;
				}
			}
		}

		// BFS
		queue<int> q_x, q_y, q_a;
		q_x.push(x); q_y.push(y);
		q_a.push(0);

		while (!q_x.empty()) {
			state_x = q_x.front(); q_x.pop();
			state_y = q_y.front(); q_y.pop();
			distance = q_a.front(); q_a.pop();

			if (visited[state_x][state_y]) continue;
			visited[state_x][state_y] = true;

			if (grid[state_x][state_y] == 2) {
				cout << distance << endl;
				continue;
			}

			for (int i = 0; i < 4; i++) {
				if (state_x+mov[i][0] < 0 || state_x+mov[i][0] >= N
				    || state_y+mov[i][1] < 0 || state_y+mov[i][1] >= M)
					continue;
				q_x.push(state_x+mov[i][0]);
				q_y.push(state_y+mov[i][1]);
				q_a.push(distance+1);
			}

		}
	}

	return 0;
}
