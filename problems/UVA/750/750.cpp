#include <bits/stdc++.h>

using namespace std;

int grid[8][8];
int rows[8];

int r, c;
int k;

void print_grid() {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cout << " " << grid[i][j];
        }

        cout << endl;
    }
}

bool secure(int row, int column) {
    for (int i = 0; i < 8; i++)
        if (grid[row][i]) return false;

    for (int i = 0; i < 8; i++)
        if (grid[i][column]) return false;

    /* Diagonal principal em baixo */
    for (int i = row, j = column; i < 8 && j < 8; i++, j++)
        if (grid[i][j]) return false;

    /* Diagonal principal em cima */
    for (int i = row, j = column; i >= 0 && j >= 0; i--, j--)
        if (grid[i][j]) return false;

    /* Diagonal secundaria em cima */
    for (int i = row, j = column; i >= 0 && j < 8; i--, j++)
        if (grid[i][j]) return false;

    /* Diagonal secundaria em cima */
    for (int i = row, j = column; i < 8 && j >= 0; i++, j--)
        if (grid[i][j]) return false;

    return true;
}

void run(int column) {
    if (column == 8) {
        if (!grid[r-1][c-1]) return;

        k++;

        cout << setw(2) << k << "     ";
        for (int i = 0; i < 8; i++) {
            cout << " " << rows[i];
        }

        cout << endl;
        return;
    }

    for (int i = 0; i < 8; i++) {
        //print_grid();
        if (secure(i, column)) {
            grid[i][column] = 1;
            rows[column] = i+1;
            run(column+1);
            rows[column] = -1;
            grid[i][column] = 0;
        }
    }
}

int main() {
    int T;

    cin >> T;

    while (T--) {
        memset(grid, 0, sizeof(int)*8*8);
        memset(rows, 0, sizeof(int)*8);

        k = 0;
        cin >> r >> c;

        //grid[row-1][column-1] = 1;
        rows[c-1] = r;

        cout << "SOLN       COLUMN" << endl;
        cout << " #      1 2 3 4 5 6 7 8" << endl;
        cout << endl;

        run(0);

        if (T != 0) cout << endl;
    }

    return 0;
}