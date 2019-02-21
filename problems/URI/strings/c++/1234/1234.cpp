#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string text;
    bool on;

    while (getline(cin, text)) {
        on = true;
        for (unsigned int i = 0; i < text.length(); i++) {
            if (isalpha(text[i])) {
                if (on) {
                    cout << (char)toupper(text[i]);
                    on = false;
                } else {
                    cout << (char)tolower(text[i]);
                    on = true;
                }
            } else {
                cout << text[i];
            }
        }

        cout << endl;
    }

    return 0;
}