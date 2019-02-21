#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>

using namespace std;

void show_grid(char** grid, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << grid[i][j];
        }

        cout << endl;
    }
}

void limpar(char **grid, int n) {
    for (int i = 0; i < n; i++) {
        free(grid[i]);
    }

    free(grid);
}

void animation(int n) {
    char** grid = (char**)malloc(n*sizeof(char*));
    for (int i = 0; i < n; i++) {
        grid[i] = (char*)malloc(n*sizeof(char));
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            grid[i][j] = 'O';
        }
    }

    int x_i, x_j;
    x_i = x_j = n/2;

    /* jogando no centro */
    grid[x_i][x_j] = 'X';

    int i = 0;
    int j = 0;

    while (i != n-1 && j != n-1) {
        show_grid(grid, n);

        cout << "@" << endl;

        if (x_j)

    }

    limpar(grid, n); 
}


int main() {
    int N;

    while (cin >> N && N != 0) {
        animation(N);
    }

    return 0;
}