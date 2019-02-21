#include <bits/stdc++.h>

#define debug(x) cout << #x " = " << x << endl;

using namespace std;

int main() {
    int N;
    string s1, s2;

    cin >> N;
    cin.ignore(100, '\n');

    while (N--) {
        getline(cin, s1);
        getline(cin, s2);

        string::iterator it1;
        string::iterator it2 = s2.begin();
        
        if (s1.length() == s2.length()) {
            for (it1 = s1.begin(); it1 != s1.end(); it1++) {
                cout << *it1;
                it1++;
                cout << *it1;

                cout << *it2;
                it2++;
                cout << *it2;
                it2++;
            }

            cout << endl;
        } else {
            for (it1 = s1.begin(); it1 != s1.end(); it1++) {
                cout << *it1;
                it1++;
                cout << *it1;

                cout << *it2;
                it2++;

                if (it2 == s2.end()) break;

                cout << *it2;
                it2++;
            }

            cout << endl;
        }
    }

    return 0;
}