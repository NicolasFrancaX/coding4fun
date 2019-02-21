#include <bits/stdc++.h>

#define debug(x) cout << #x " = " << x << endl;

using namespace std;

int main() {
    string D, S;
    bool flag;

    while (cin >> D >> S) {
        flag = false;

        for (unsigned int i = 0; i < D.length(); i++) {
            if (D[i] == S[0]) {
                for (unsigned int j = i, k = 0; k < S.length(); j++, k++) {
                    if (D[j] == S[k]) {
                        flag = true;
                    } else {
                        flag = false;
                        break;
                    }
                }
            }

            if (flag) {
                break;
            }
        }

        if (flag) {
            cout << "Resistente" << endl;
        } else {
            cout << "Nao resistente" << endl;
        }
    }

    return 0;
}