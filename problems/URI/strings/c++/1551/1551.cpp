#include <iostream>
#include <string>
#include <set>
#include <cctype>

using namespace std;

int main() {
    int N;
    string text;

    cin >> N;
    cin.ignore(100, '\n');

    while (N--) {
        set<char> s;


        getline(cin, text);

        for (auto it = text.begin(); it != text.end(); it++) {
            if (isalpha(*it)) {
                s.insert(tolower(*it));
            }
        }

        if (s.size() == 26) {
            cout << "frase completa" << endl;
        } else if (s.size() >= 13) {
            cout << "frase quase completa" << endl;
        } else {
            cout << "frase mal elaborada" << endl;
        }


    }

    return 0;
}