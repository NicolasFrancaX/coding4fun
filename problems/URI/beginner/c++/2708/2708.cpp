#include <bits/stdc++.h>

using namespace std;

int resolve(int sum_tourists) {
    if (sum_tourists >= 0) return 0;
    else return -sum_tourists;
}

int main() {
    string op;
    int tourists;

    int sum_tourists = 0;
    int jeeps = 0;

    while (cin >> op && op != "ABEND") {
        // data processing . . .
        cin >> tourists;

        if (op == "SALIDA") {
            jeeps--;
            sum_tourists -= tourists;
        } else if (op == "VUELTA") {
            jeeps++;
            sum_tourists += tourists;
        }
    }

    cout << resolve(sum_tourists) << endl;
    cout << resolve(jeeps) << endl;

    return 0;
}