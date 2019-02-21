#include <bits/stdc++.h>

#define debug(x) cout << #x " = " << x << endl;

using namespace std;

int main() {
    int N;
    int a, b;

    cin >> N;

    while (N--) {
        vector<string> v;

        cin >> a >> b;

        for (int i = a; i <= b; i++) {
            v.push_back(to_string(i));
        }

        for (auto it = v.begin(); it != v.end(); it++) {
            cout << *it;
        }

        for (auto it = v.rbegin(); it != v.rend(); it++) {
            for (auto ut = (*it).rbegin(); ut != (*it).rend(); ut++) {
                cout << *ut;
            }
        }

        cout << endl;

    }

    return 0;
}