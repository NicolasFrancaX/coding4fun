#include <iostream>
#include <string>

using namespace std;

int main() {
    int a, b, c;
    string word;

    while (cin >> a >> b >> c) {
        int character = 0;
        int linha = 1;

        while (a--) {
            cin >> word;

            if (character > 0) character++;
            character += (int)word.length();

            if (character == c) {
                character = 0;

                if (a > 0) {
                    linha++;
                }
            }

            if (character > c) {
                character = (int)word.length();
                linha++;
            }
        }

        if (linha % b != 0) {
            cout << linha/b + 1 << endl;
        } else {
            cout << linha/b << endl; 
        }
    }

    return 0;
}
