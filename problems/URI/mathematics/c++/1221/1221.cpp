#include <iostream>
#include <map>
#include <cmath>

using namespace std;

map<int, bool> m;

bool is_prime(int n) {
    if (m[n]) {
        return m[n];
    }

    if (n <= 1) return false;


    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            m[n] = false;
            return false;
        }
    }

    m[n] = true;
    return true;
}

int main() {
    int T;
    int n;

    cin >> T;

    while (T--) {
        cin >> n;

        if (is_prime(n)) {
            cout << "Prime" << endl;
        } else {
            cout << "Not Prime" << endl;
        }


    }

    return 0;
}