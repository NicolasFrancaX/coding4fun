#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;
    int min_1, min_2;
    int result;

    while (cin >> a >> b >> c >> d) {
        if (a == 0 && b == 0 && c == 0 && d == 0) break;

        min_1 = a*60 + b;
        min_2 = c*60 + d;

        result = (min_2 - min_1) % (24*60);

        if (result < 0) {
            cout << result + 24*60 << endl; 
        } else {
            cout << result << endl;
        }

    }

    return 0;
}