#include <bits/stdc++.h>

#define debug(x) cout << #x " = " << x << endl;

using namespace std;

int main() {
    string N;
    string n;
    string s;

    string line;

    int iguais;

    int p = 0;

    int i = 1;

    while (cin >> N) {
        map<string, int> m;
        iguais = 0;

        cin.ignore(100, '\n');

        getline(cin, line);

        if (p++ != 0) {
            cout << endl;
        }

        stringstream ss(line);

        while (ss >> n >> s) {
            if (n == N) {
                m[s]++;
                iguais++;
            }
        }

        cout << "Caso " << i++ << ":" << endl;
        cout << "Pares Iguais: " << iguais << endl;
        cout << "F: " << m["F"] << endl;
        cout << "M: " << m["M"] << endl;
    }


    return 0;
}