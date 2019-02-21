#include <bits/stdc++.h>

#define debug(x) cout << #x " = " << x << endl;

using namespace std;

int main() {
    int T;

    int n;
    char d;

    int par;

    while (cin >> T) {
        map<int, char> m;
        vector<int> v;
        par = 0;


        while (T--) {
            cin >> n >> d;

            vector<int>::iterator it;
            
            it = find(v.begin(), v.end(), n);

            if (it == v.end()) {
                v.push_back(n);
                m[n] = d;
            } else {
                if (m[n] != d && m[n] != 'A') {
                    v.erase(it);
                    par++;
                    
                    it = find(v.begin(), v.end(), n);

                    if (it == v.end()) {
                        m[n] = 'A';
                    }
                } else {
                    v.push_back(n);
                }
            }

        }

        cout << par << endl;
    }

    return 0;
}