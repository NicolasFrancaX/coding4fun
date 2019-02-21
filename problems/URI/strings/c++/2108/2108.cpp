#include <bits/stdc++.h>

using namespace std;

int main() {
    string line;

    /* Auxs */
    string bigger = "";
    string aux;

    /* Presentation */
    int p;

    while (getline(cin, line)) {
        if (line.length() == 1 && line[0] == '0') break;

        stringstream ss(line);

        p = 0;

        while (ss >> aux) {
            if (p++ == 0) {
                cout << aux.length();
            } else {
                cout << "-" << aux.length();
            }

            if (aux.length() >= bigger.length()) {
                bigger = aux;
            }
        }

        cout << endl;
    }

    cout << endl;

    cout << "The biggest word: " << bigger << endl;
}