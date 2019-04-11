#include <bits/stdc++.h>

using namespace std;

int z[2001][2001];

int knapsack(int W, int w[], int c[], int n) {
	int i, j;

	for (i = 0; i <= n; i++) {
		for (j = 0; j <= W; j++) {
			if (i == 0 || j == 0) z[i][j] = 0;
			else if (w[i-1] <= j) z[i][j] = max(c[i-1]+z[i-1][j-w[i-1]], z[i-1][j]);
			     else z[i][j] = z[i-1][j];
		}
	}

	return z[n][W];
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int S, N;
	int size, value;

	cin >> S >> N;

	int c[N], w[N];

	int result;

	memset(z, 0, 2001*2001*sizeof(int));


	for (int i = 0; i < N; i++) {
		cin >> size >> value;
		c[i] = value; w[i] = size;
	}

	result = knapsack(S, w, c, N);

	cout << result << endl;


	return 0;
}

