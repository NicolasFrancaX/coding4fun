#include <iostream>
#include <string>
#include <queue>

using namespace std;

bool is_subsequence(string a, string b) {
    if (b.length() > a.length()) return false;

    queue<char> qa;

    for (auto it = b.begin(); it != b.end(); it++) {
        qa.push(*it);
    }

    for (auto it = a.begin(); it != a.end(); it++) {
        if (*it == qa.front()) {
            qa.pop();
        }

        if (qa.empty()) {
            return true;
        }
    }

    return false;
}

int main() {
    int T;
    int Q;

    string S;
    string R;


    cin >> T;

    while (T--) {
        cin >> S;

        cin >> Q;

        while (Q--) {
            cin >> R;

            if (is_subsequence(S, R)) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }

    return 0;
}