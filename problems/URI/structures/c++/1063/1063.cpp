#include <bits/stdc++.h>

#define debug(x) cout << #x " = " << x << endl

using namespace std;

int main() {
    int N;
    char aux;

    while (cin >> N && N) {
        queue<char> a;
        stack<char> s;
        stack<char> b;

        vector<char> v;


        for (int i = 0; i < N; i++) {
            cin >> aux;
            a.push(aux);
        }
            
       for (int i = 0; i < N; i++) {
            cin >> aux;
            v.push_back(aux);
        }


        int i = 0;

        while (true) {
            if (!s.empty() && v[i] == s.top()) {
                b.push(s.top());
                s.pop();
                cout << "R";
                i++;
            } else if (!a.empty()) {
                s.push(a.front());
                a.pop();
                cout << "I";
            }

            if (i == N) {
                break;
            }

            if (a.empty() && v[i] != s.top()) {
                cout << " Impossible";
                break;
            }

        }

        cout << endl;

    }

    return 0;
}