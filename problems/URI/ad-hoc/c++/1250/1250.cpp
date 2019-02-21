#include <bits/stdc++.h>

#define debug(x) cout << #x " = " << x << endl;

using namespace std;

int main() {
    int N;
    int S;
    string state;

    int aux;

    int hits;

    cin >> N;

    while (N--) {
        cin >> S;

        hits = 0;

        vector<int> v;

        for (int i = 0; i < S; i++) {
            cin >> aux;

            v.push_back(aux);
        }

        cin >> state;

        for (int i = 0; i < S; i++) {
            if (state[i] == 'J' && v[i] > 2) {
                hits++;
            } else if (state[i] == 'S' && v[i] <= 2) {
                hits++;
            }
        }

        cout << hits << endl;
    }

    return 0;
}