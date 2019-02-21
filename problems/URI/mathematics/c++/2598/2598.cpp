#include <bits/stdc++.h>

using namespace std;

int main() {
    int C;
    long long int N, M;

    /* Aux */
    double aux;

    cin >> C;

    while (C--) {
        cin >> N >> M;


        aux = (N+(0.0))/M;

        if (aux == 0) {
            cout << (long long int)aux << endl;
        } else {
            cout << (long long int)(aux+1) << endl;
        }
    }

    return 0;
}