#include <iostream>
#include <string>

using namespace std;

bool verif_0(string s) {
    for (unsigned int i = 0; i < s.length(); i++) {
        if (s[i] != '0') return false;
    }

    return true;
}

int main() {
    char N;
    string t;
    int k;
    bool flag;

    while (cin >> N >> t && (N != '0' || t != "0")) {
        flag = false;
        k = 0;
        char c[200];


        for (unsigned int i = 0; i < t.length(); i++) {
            if (t[i] != N) {
                if (t[i] != '0') {
                    flag = true;
                }

                if (flag) {
                    c[k++] = t[i];
                }
            }
        }

        c[k] = '\0';

        string aux(c);

        if (aux.length() == 0) {
            cout << 0 << endl;
        } else if (verif_0(aux)) {
            cout << 0 << endl;
        } else {
            cout << aux << endl;
        }
    }

    return 0;
}