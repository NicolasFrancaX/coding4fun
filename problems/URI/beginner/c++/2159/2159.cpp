#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;

    double P, M;

    cin >> n;

    P = (n+0.0)/log(n); M = 1.25506*(P);

    cout << fixed << setprecision(1) << P << " " << M << endl; 

    return 0;
}