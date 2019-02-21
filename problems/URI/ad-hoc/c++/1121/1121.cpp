#include <iostream>
#include <string>
#include <utility>

using namespace std;

bool inicio(char a) {
    if (a == 'N' || a == 'S' || a == 'L' || a == 'O') return true;
    return false;
}

int logic(int M, int N, long long int S) {
    char grid[M+1][N+1];
    string instructions;

    for (int i = 0; i < M; i++) {
        cin >> grid[i];
    }

    cin >> instructions;

    pair<int, int> jogo;

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (inicio(grid[i][j])) jogo = make_pair(i, j);
        }
    }

    cout << jogo.first << endl;
    cout << jogo.second << endl;
    
    for (int i = 0; i < M; i++) {
        cout << grid[i] << endl;
    }

    return 1;
}

int main() {
    int M, N;
    long long int S;

    while (cin >> M >> N >> S && N != 0) {
        logic(M, N, S);
    }

    return 0;
}