#include <iostream>
#include <string>
#include <map>
#include <set>
#include <iomanip>

using namespace std;

int main() {
    int T;
    string name;
    string text;

    int a = 0;

    int n;

    cin >> T;

    cin.ignore(100, '\n');
    cin.ignore(100, '\n');

    while (T--) {
        set<string> s;
        map<string, int> m = map<string, int>();
        n = 0;


        if (a++ != 0) {
            cout << endl;
        }


        while (getline(cin, name) && name.length() != 0) {
            s.insert(name);
            m[name]++;
            n++;
        }

        for (auto it = s.begin(); it != s.end(); it++) {
            cout << *it << " " << fixed << setprecision(4) << (double)(100*m[*it])/(double)n << endl;
        }
    }

    return 0;
}