#include <iostream>
#include <cstring>

using namespace std;

int max(int a, int b) {
    if (a > b) return a;
    return b;
}

int main() {
    int T; // n test case
    int N; 
    int K; // load capacity
    int R; // castle total resistance

    cin >> T;

    while (T--) {
        cin >> N;
        
        int p[N+1];
        int w[N+1];

        p[0] = 0;
        w[0] = 0;

        for (int i = 1; i <= N; i++) {
            cin >> p[i] >> w[i];
        }

        cin >> K;
        cin >> R;

        int k[K+1][N+1];
        memset(k, 0, sizeof(k[0][0])*(N+1)*(K+1));

        k[0][0] = 0;
        for (int i = 1; i <= K; i++) {
            for (int j = 1; j <= N; j++) {
                if (i-w[j] >= 0) {
                    k[i][j] = k[i][j-1];
                    k[i][j] = max(k[i-w[j]][j-1] + p[j], k[i][j]);
                } else {
                    k[i][j] = max(k[i][j], k[i][j-1]);
                }
            }
        }

        if (k[K][N] >= R) {
            cout << "Missao completada com sucesso" << endl;
        } else {
            cout << "Falha na missao" << endl;
        }
    }

    return 0;
}