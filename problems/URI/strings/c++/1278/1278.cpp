#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <vector>

using namespace std;

int main() {
    int N;
    string text;
    string aux;
    string text_process;
    int pos;
    unsigned int g;
    int p = 0;

    while (cin >> N && N != 0) {
        if (p++ != 0) {
            cout << endl;
        }

        g = 0;
        cin.ignore(100, '\n');
        vector<string> v;

        while (N--) {
            pos = 0;
            getline(cin, text);

            stringstream ss(text);
            text_process = "";

            while (ss >> aux) {
                if (pos++ == 0) {
                    text_process.append(aux);
                } else {
                    text_process.append(1u, ' ');
                    text_process.append(aux);
                }
            }

            if (text_process.length() > g) {
                g = text_process.length();
            }

            v.push_back(text_process);
        }

        for (auto it = v.begin(); it != v.end(); it++) {
            cout << setw(g) << *it << endl;
        }

    }

    return 0;
}