#include <iostream>
#include <string>
#include <set>
#include <cctype>

using namespace std;

int main() {
    string text;
    char olds;
    char news;

    while (getline(cin, text)) {
        if (text.length() == 0) {
            cout << endl;
            continue;
        }

        set<char> s;

        for (string::iterator it = text.begin(); it != text.end(); it++) {
            if (isalpha(*it)) {
                s.insert(*it);
            }
        }

        set<char>::iterator t = s.end();
        t--;
        set<char>::iterator next;

        int p = 0;
        int k = 0;

        for (set<char>::iterator it = s.begin(); it != s.end(); it++) {
            if (p++ == 0) {
                olds = *it;
                news = *it;
            }

            next = it;
            next++;
            
            if (*next == (*it)+1) {
                news = *next;
            } else {
                if (k++ == 0) {
                    cout << olds << ":" << news;
                } else {
                    cout << ", " << olds << ":" << news;
                }
                olds = *next;
                news = *next;
            }

            if (it == t) {
                news = *it;
            }

            
        }

        cout << endl;
    }

    return 0;
}