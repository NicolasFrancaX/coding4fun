#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool verification(string s) {
    stack<char> stq;

    for (unsigned int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            stq.push(s[i]);
        } else if (s[i] == ')') {
            if (stq.empty()) {
                return false;
            } else {
                stq.pop();
            }
        }
    }

    return stq.empty();
}

int main() {
    string expression;

    while (cin >> expression) {
        if (verification(expression)) {
            cout << "correct" << endl;
        } else {
            cout << "incorrect" << endl;
        }
    }
    
    return 0;
}