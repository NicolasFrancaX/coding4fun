#include <iostream>

using namespace std;

int gcd(int a, int b) {
    if (!b)
        return a;
    else return gcd(b, a % b);
}

int main() {
    int T;
    int a, b;

    cin >> T;

    while (T--) {
        cin >> a >> b;

        cout << gcd(a, b) << endl;
    }

    return 0;
}