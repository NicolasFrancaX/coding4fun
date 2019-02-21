#include <bits/stdc++.h>

using namespace std;

int main() {
    string L;

    while (getline(cin, L)) {
        if (L.length() <= 80)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }

    return 0;
}