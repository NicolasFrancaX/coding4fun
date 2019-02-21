#include <bits/stdc++.h>

using namespace std;

typedef long long unsigned int llui;

int main() {
    llui P;

    while (cin >> P && (int)P != -1)
        if (P == 0) cout << "0" << endl;
        else cout << P-1 << endl;

    return 0;
}