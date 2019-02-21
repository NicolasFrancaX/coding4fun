#include <bits/stdc++.h>

#define debug(x) cout << #x " = " << x << endl;

using namespace std;

int main() {
    int N, M;
    int c;

    while (cin >> N >> M) {
        c = 0;

        for (int i = N; i <= M; i++) {
            set<char> s;
            string n = to_string(i);

            for (auto it = n.begin(); it != n.end(); it++) {
                s.insert(*it);
            }

            if (n.length() == s.size()) c++;
        }

        cout << c << endl;
    }

    return 0;
}