#include <bits/stdc++.h>

using namespace std;

int main() {
    int aux;
    int index;

    for (int i = 0; i < 4; i++) {
        cin >> aux;

        if (aux == 1) index = i+1;
    }

    cout << index << endl;

    return 0;
}