#include <bits/stdc++.h>

#define debug(x) cout << #x " = " << x << endl;

using namespace std;

int main() {
    int N, D;

    while (cin >> N >> D && N+D) {
        int grid[D][N];
        map<int, bool> m;
        int count = N;

        for (int i = 0; i < D; i++) {
            for (int j = 0; j < N; j++) {
                cin >> grid[i][j];

                if (!m[j] && grid[i][j] == 0) {
                    m[j] = true;
                    count--;
                }

            }
        }

        if (count != 0) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }

    return 0;
}