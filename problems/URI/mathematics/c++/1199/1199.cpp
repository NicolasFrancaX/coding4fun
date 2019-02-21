#include <iostream>
#include <cctype>
#include <string>
#include <sstream>

using namespace std;

string to_upper(string s) {
    string a = "";

    for (auto it = s.begin(); it != s.end(); it++) {
        a.append(1u, (char)toupper(*it));
    }

    return a;
}

int main() {
    string t;
    string aux;

    while (cin >> t && t[0] != '-') {
        if (t[0] == '0') {
            cout << dec << strtol(t.c_str(), nullptr, 16) << endl;
        } else {
            stringstream ss;
            ss << hex << stoll(t);
            ss >> aux;
            cout << "0x" << to_upper(aux) << endl;
        }

    }

    return 0;
}