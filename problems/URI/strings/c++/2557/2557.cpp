#include <bits/stdc++.h>

#define debug(x) cout << #x " = " << x << endl;

using namespace std;

int main() {
    string op;

    string R;
    string L;
    string J;

    string::iterator it;

    long long int R_I;
    long long int L_I;
    long long int J_I;

    while (getline(cin, op)) {
        R = "";
        L = "";
        J = "";

        it = op.begin();

        for (; it != find(op.begin(), op.end(), '+') && it != find(op.begin(), op.end(), 'R')+1; it++) {
            R.append(1u, *it);
        }

        it++;

        for (; it != find(op.begin(), op.end(), '=') && it != find(op.begin(), op.end(), 'L')+1; it++) {
            L.append(1u, *it);
        }

        it++;

        for (; it != op.end() && it != find(op.begin(), op.end(), 'J')+1; it++) {
            J.append(1u, *it);
        }
        
        it++;

        if (R == "R") {
            L_I = stoll(L);
            J_I = stoll(J);
            cout << J_I-L_I << endl;
        } else if (L == "L") {
            R_I = stoll(R);
            J_I = stoll(J);
            cout << J_I-R_I << endl;
        } else {
            R_I = stoll(R);
            J_I = stoll(L);
            cout << R_I + J_I << endl;
        }
    }

    return 0;
}