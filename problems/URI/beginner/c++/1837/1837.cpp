#include <iostream>

using namespace std;

int main() {
    int a, b;
    int q, r;

    cin >> a >> b;

    r = a % b;
    q = a / b;

    if (a < 0) {
        q--;
        r += b;
    }

    cout << q << " " << r << endl;

    return 0;
}