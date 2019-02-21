#include <bits/stdc++.h>

#define INF INT_MIN

using namespace std;

int main() {
    int N;
    int in;

    int g;

    while (cin >> N) {
        /* Initialization */
        g = INF;

        while (N--) {
            cin >> in;

            if (g < in) {
                g = in;
            }
        }

        if (g < 10) {
            cout << 1 << endl;
        } else if (g >= 10 && g < 20) {
            cout << 2 << endl;
        } else {
            cout << 3 << endl;
        }
    }

    return 0;
}