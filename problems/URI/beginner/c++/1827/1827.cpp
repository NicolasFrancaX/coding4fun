#include <iostream>

using namespace std;

int grid[101][101];

int main() {
    int N;

    while (cin >> N) {
        /* Initializing with 0's */
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                grid[i][j] = 0;
            }
        }

        /* Main Diagonal */
        for (int i = 0; i < N; i++) {
            grid[i][i] = 2;
        }

        /* Secondary Diagonal */
        for (int i = 0; i < N; i++) {
            grid[i][N-1-i] = 3;
        }

        /* 1's */ 
        for (int i = N/3; i < (N - N/3); i++) {
            for (int j = N/3; j < (N - N/3); j++) {
                grid[i][j] = 1;
            }
        }

        /* Center */
        grid[N/2][N/2] = 4;

        /* Print */
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cout << grid[i][j];
            }

            cout << endl;
        }

        cout << endl;
    }

    return 0;
}