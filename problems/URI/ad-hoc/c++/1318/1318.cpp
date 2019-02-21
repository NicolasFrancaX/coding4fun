#include <bits/stdc++.h>

#define debug(x) cout << #x " = " << x << endl;

using namespace std;

int main() {
    int N, M;
    int aux; 

    unsigned int size_s;

    while (cin >> N >> M && N+M) {
        set<int> s;
        set<int> k;

        size_s = 0;

        for (int i = 0; i < M; i++) {
            cin >> aux;
            s.insert(aux);

            if (size_s == s.size()) {
                k.insert(aux);
            }

            size_s = s.size();
        }

        cout << k.size() << endl;
    }
}