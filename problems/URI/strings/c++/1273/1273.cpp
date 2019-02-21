#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

int main() {
    int N;
    unsigned int g;
    string t;
    int pos = 0;

    while (cin >> N && N != 0) {
        vector<string> v;
        g = 0;

        while (N--) {
            cin >> t;

            v.push_back(t);

            if (g < t.length()) {
                g = t.length();
            }
        }

        if (pos++ != 0) {
            cout << endl;
        }

        for (vector<string>::iterator it = v.begin(); it != v.end(); it++) {
            cout << setw(g) << *it << endl;
        }
    }

    return 0;
}