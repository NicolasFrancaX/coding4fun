#include <iostream>
#include <cmath>

using namespace std;

int gcd(int a, int b) {
    if (!b)
        return a;
    else return gcd(b, a % b);
}

int count(int n) {
    int c = 0;

    for (int i = 1; i <= n/2; i++) {
        if (gcd(n, i) == 1) {
            c++;
        }
    }

    return c;
}

int main() {
    int N;

    while (cin >> N) {
        cout << count(N) << endl;
    }

    return 0;
}