#include <bits/stdc++.h>

using namespace std;

int bonus(int M, int B) {
    if (M % 2 == 0)
        return B;
    return 0;
}

double value(int A, int D, int M, int B) {
    return (A+D+0.0)/2 + bonus(M, B);
}

int main() {
    int T;
    int B;
    int Ag, Dg, Lg;
    int Ad, Dd, Ld;

    cin >> T;

    while (T--) {
        cin >> B;

        cin >> Ag >> Dg >> Lg;
        cin >> Ad >> Dd >> Ld;

        if (value(Ag, Dg, Lg, B) == value(Ad, Dd, Ld, B))
            cout << "Empate" << endl;
        else if (value(Ag, Dg, Lg, B) > value(Ad, Dd, Ld, B))
            cout << "Dabriel" << endl;
        else
            cout << "Guarte" << endl;
    }

    return 0;
}