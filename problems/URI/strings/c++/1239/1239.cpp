#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    string line;
    stack<char> s1, s2;

    while (getline(cin, line)) {
        for (unsigned int i = 0; i < line.length(); i++) {
            if (line[i] == '_') {
                if (s1.empty()) {
                    s1.push(line[i]);
                    cout << "<i>";
                } else {
                    s1.pop();
                    cout << "</i>";
                }
            } else if (line[i] == '*') {
                if (s2.empty()) {
                    s2.push(line[i]);
                    cout << "<b>";
                } else {
                    s2.pop();
                    cout << "</b>";
                }
            } else {
                cout << line[i];
            }
        }

        cout << endl;
    }

    return 0;
}