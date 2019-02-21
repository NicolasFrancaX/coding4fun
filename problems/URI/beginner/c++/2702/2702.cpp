#include <bits/stdc++.h>

using namespace std;

int result(int Xr, int Xa) {
    if (Xa > Xr) return 0;
    else return (Xr-Xa);
}

int main() {
    int Ca, Ba, Pa;
    int Cr, Br, Pr;

    cin >> Ca >> Ba >> Pa;
    cin >> Cr >> Br >> Pr;

    cout << result(Cr, Ca)+result(Br, Ba)+result(Pr, Pa) << endl;

    return 0;
}