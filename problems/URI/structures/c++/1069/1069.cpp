#include <iostream>
#include <string>
#include <stack>

using namespace std;

int calculation(string s) {
    stack<char> stq;
    int sum = 0;

    for (unsigned int i = 0; i < s.length(); i++) {
        if (s[i] == '<') {
            stq.push(s[i]);
        } else if (s[i] == '>') {
            if (stq.empty()) {
                return false;
            } else {
                stq.pop();
                sum++;
            }
        }
    }

    return sum;
}

int main() {
    int n;
    string expression;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> expression;
        cout << calculation(expression) << endl;
    }
    
    return 0;
}