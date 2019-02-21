#include <iostream>
#include <string>

#define debug(x) cout << #x " = " << x << endl;

using namespace std;

void puts(string s, int p) {
    if (p == 0) {
        cout << s;
    } else {
        cout << " " << s;
    }
}

int main() {
    int N;
    string word;
    int p = 0;

    cin >> N;

    while (N--) {
        cin >> word;

        if (word.length() == 3) {
            if (word.substr(0, 2) == "OB") {
                puts("OBI", p);
            } else if (word.substr(0, 2) == "UR") {
                puts("URI", p);
            } else {
                puts(word, p);
            }
        } else {
            puts(word, p);
        }

        p++;
    }

    cout << endl;

    return 0;
}