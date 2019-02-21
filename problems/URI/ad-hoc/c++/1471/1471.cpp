#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, R;
    int aux;

    while (cin >> N >> R) {
        vector<int> v;
        vector<int> w;
        vector<int> r(N-R);

        
        for (int i = 0; i < N; i++) {
            v.push_back(i+1);
        }

        for (int i = 0; i < R; i++) {
            cin >> aux;
            w.push_back(aux);
        }

        
        if (N == R) {
            cout << "*" << endl;
        } else {
            sort(w.begin(), w.end());
            set_difference(v.begin(), v.end(), w.begin(), w.end(), r.begin());

            for (auto it = r.begin(); it != r.end(); it++) {
                cout << *it << " ";
            }

            cout << endl;
        }
    }

    return 0;
}