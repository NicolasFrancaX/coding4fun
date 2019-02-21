#include <iostream>
#include <iomanip>

using namespace std;

void print_matrix(int matrix[100][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == 0) {
                cout << setw(3) << matrix[i][j];
            } else {
                cout << " " << setw(3) << matrix[i][j];
            }
        }

        cout << endl;
    }
}
int main() {
    int n;
    int matrix[100][100];
    int mid, bot;

    while (cin >> n && n != 0) {
        mid = (n % 2 == 0 ? n/2 : n/2 + 1);

        for (int i = 0; i < mid; i++) {
            bot = (n-1)-i;

            for (int j = i; j <= bot; j++) {
                matrix[i][j] = i+1;
                matrix[bot][j] = i+1;
                matrix[j][i] = i+1;
                matrix[j][bot] = i+1;
            }
        }

        print_matrix(matrix, n);
        cout << endl;
    }

    return 0;
}