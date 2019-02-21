#include <iostream>

#define debug(x) cout << #x " = " << x << endl;

using namespace std;

int main() {
    string text;
    int p;

    while (cin >> text) {
        for (unsigned int i = 0; i < text.length(); i++) {
            for (unsigned int j = 0; j < i; j++) {
                cout << " ";
            }

            p = 0;

            for (unsigned int j = 0; j < text.length() - i; j++) {
                if (p++ == 0) {
                    cout << text[j];
                } else {
                    cout << " " << text[j];
                }
                
                p++;
            }

            cout << endl;
        }

        cout << endl;
    }

    return 0;
}