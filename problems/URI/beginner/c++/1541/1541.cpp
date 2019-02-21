#include <bits/stdc++.h>

using namespace std;

int main() {
    int A, B, C;
    int rect;
    double land;

    while (cin >> A >> B >> C && A) {
        rect = A*B;
        land = rect*((100+(0.0))/C);
        cout << (int)sqrt(land) << endl;
    }

    return 0;
}